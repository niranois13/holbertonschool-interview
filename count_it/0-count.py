#!/usr/bin/python3
"""
Count it!
"""

import re
import requests


def count_words(subreddit, word_list, kw_cont=None, after=None):
    """Recursively count keywords in titles of hot posts"""
    if kw_cont is None:
        kw_cont = {}
        for word in word_list:
            lw = word.lower()
            if lw in kw_cont:
                kw_cont[lw] += 1
            else:
                kw_cont[lw] = 1

        return count_words(subreddit, word_list, {k: 0 for k in kw_cont}, None)

    headers = {'User-Agent': 'custom'}
    url = f'https://www.reddit.com/r/{subreddit}/hot.json'
    if after:
        url += f'?after={after}'

    response = requests.get(url, headers=headers, allow_redirects=False)
    if response.status_code != 200:
        return

    data = response.json().get('data', {})
    posts = data.get('children', [])
    after = data.get('after')

    def process_post(index):
        if index >= len(posts):
            return
        title = posts[index].get('data', {}).get('title', '').lower()
        words = re.findall(r'\b\w+\b', title)

        def count_word(w_idx):
            if w_idx >= len(words):
                return
            word = words[w_idx]
            if word in kw_cont:
                kw_cont[word] += 1
            count_word(w_idx + 1)

        count_word(0)
        process_post(index + 1)

    process_post(0)

    if after:
        return count_words(subreddit, word_list, kw_cont, after)

    def sort_and_print(items, index=0):
        if index >= len(items):
            return
        key, count = items[index]
        if count > 0:
            print(f"{key}: {count}")
        sort_and_print(items, index + 1)

        sorted_abc = sorted(kw_cont.items(), key=lambda x: (-x[1], x[0]))
        sorted_res = sorted(sorted_abc, key=lambda x: (-x[1], x[0]))

        sort_and_print(sorted_res)
