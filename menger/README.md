# 2D Menger Sponge

![menger](blob:https://imgur.com/876abc27-d25d-4d10-813e-f092ac5714c6)

## Description
The task is to draw a 2D Menger Sponge using a recursive approach. The Menger Sponge is a fractal, and in this task, we focus on a 2D version of it. The principle behind the 2D Menger Sponge is that a level `N` sponge is a 3x3 grid of level `N-1` sponges, with the center of the grid left empty.

- A **level 0** Menger Sponge is simply a `#` character (1x1).
- A **level 1** Menger Sponge is a 3x3 grid where the center is empty.
- A **level 2** Menger Sponge is a 3x3 grid of level 1 sponges, with the center empty.
- And so on...

The size of a level `N` Menger Sponge is `3^N`.

## Prototype
```
void menger(int level);
```

## Requirements
- The program should be able to handle different levels of Menger Sponge, from level 0 up to higher levels.
- The program must use recursion to generate the fractal.
- The program must print the pattern in the terminal.

## Usage
1. Compile the program using the following command:
```
gcc -Wall -Wextra -Werror -pedantic -o 0-menger 0-menger.c 0-main.c -lm
```

2. Run the program by passing the level of the Menger Sponge:
```
./0-menger [level]
```

