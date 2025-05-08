# Star Wars

![StarWarsAPI](https://i.imgur.com/gp81GqA.png)

## Description

This project involves writing a Node.js script that prints all characters of a given Star Wars movie using the [Star Wars API (SWAPI)](https://swapi-api.alx-tools.com/). Characters are printed **in the order** they appear in the movie’s `characters` list from the API.

## Requirements

* **Language**: JavaScript (Node.js)
* **Node Version**: 10.14.x
* **OS**: Ubuntu 14.04 LTS
* **Shebang**: All files must start with `#!/usr/bin/node`
* **Style**: Semistandard (Standard + semicolons)

  * Reference: AirBnB style guide
* **No `var`** keyword allowed
* All files must:

  * End with a new line
  * Be executable
  * Be under length constraints (`wc` used to check)
* A `README.md` file is required at the root

## Installation

### Node.js and Request module

```
curl -sL https://deb.nodesource.com/setup_10.x | sudo -E bash -
sudo apt-get install -y nodejs
sudo npm install semistandard --global
sudo npm install request --global
export NODE_PATH=/usr/lib/node_modules
```

## Usage

### Script: `0-starwars_characters.js`

#### Prototype:

```
./0-starwars_characters.js <Movie_ID>
```

* **Movie\_ID** is the ID of the Star Wars movie (e.g., 3 = *Return of the Jedi*)
* Prints character names **one per line** in the order returned by the `/films/` endpoint

#### Example:

```
$ ./0-starwars_characters.js 3
Luke Skywalker
C-3PO
R2-D2
Darth Vader
...
```

## Notes

* You must use the `request` module to make HTTP requests.
* Do not use third-party libraries other than `request`.
* Character order must match the original API response — **no sorting**.

## Files

* `0-starwars_characters.js`: The main script
* `README.md`: Project documentation
