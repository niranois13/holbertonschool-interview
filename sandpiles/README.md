# Sandpiles in Programming

![sandpiles](https://i.imgur.com/wI55CCy.png)

## Introduction

__Sandpiles__ are a _mathematical model_ used to study self-organized criticality. They are represented as a __grid of integer__ values where each cell can contain a _certain number of grains_. When a cell exceeds a threshold (typically 3 grains), it "__topples__", distributing grains to its neighboring cells. This process can _cascade_, leading to complex behavior.

## How Sandpiles Work

1. A grid is initialized with some values representing grains of sand.
2. If a cell has more grains than the threshold, it topples, distributing grains to adjacent cells.
3. Toppling may cause neighboring cells to exceed the threshold, leading to further toppling.
4. The process continues until no cell exceeds the threshold.

### Simple Sandpile Example

Here’s a basic representation of a sandpile grid:
```
2 3 2 
3 4 3   <-- The center cell has 4 grains, ready to topple
2 3 2 
```

After toppling:
```
3 0 3
0 0 0
3 0 3
```

## Applications of Sandpiles

- Modeling natural phenomena (avalanches, earthquakes, ...)
- Studying self-organized criticality
- Generating fractal-like structures
