#!/usr/bin/python3
"""Function compiled in Python3"""


def canUnlockAll(boxes):
    """
    Function that detemines if ll lockboxes can be unlocked.
    :params boxes: (list[list[int]]) - A list (list) of boxes (list)
                                    containing keys (int) to open other boxes.

    Returns: True if all lockboxes can be unlocked, False otherwise."""
    n = len(boxes)
    opened_boxes = set()
    keys = [0]

    while keys:
        current_box = keys.pop()
        if current_box not in opened_boxes:
            opened_boxes.add(current_box)
            for key in boxes[current_box]:
                if key < n and key not in opened_boxes:
                    keys.append(key)

    if len(opened_boxes) != n:
        return False
    else:
        return True


if __name__ == "__main__":
    canUnlockAll()
