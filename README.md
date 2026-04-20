# push_swap

[![C](https://img.shields.io/badge/language-C-blue)](https://github.com/jusdal/push_swap)
[![42 Network](https://img.shields.io/badge/school-42%20Network-black)](https://42.fr)

A sorting algorithm project from the 42 Network curriculum. Given a stack of integers in any order, output the minimum sequence of operations needed to sort them — using only two stacks and a restricted set of moves.

## The challenge

You have two stacks: **A** (the input) and **B** (empty). You can only move data using these operations:

| Operation | Description |
|---|---|
| `sa` / `sb` | Swap the top two elements of stack A / B |
| `pa` / `pb` | Push the top element of B onto A / A onto B |
| `ra` / `rb` | Rotate stack A / B upward (top goes to bottom) |
| `rra` / `rrb` | Reverse rotate stack A / B (bottom goes to top) |
| `ss` / `rr` / `rrr` | Perform sa+sb / ra+rb / rra+rrb simultaneously |

The goal: sort stack A in ascending order using as few operations as possible.

## Algorithm

The solution uses different strategies depending on input size:

**Small inputs (≤ 5 elements):** Hardcoded decision trees that produce the optimal move sequence for every possible arrangement.

**Large inputs:** A chunk-based algorithm that partitions the input into sorted segments, pushes them onto stack B in strategic order, then reconstructs a sorted stack A with minimal rotations. The implementation calculates the cost of moving each element into its correct position and always executes the cheapest move available.

This approach consistently sorts 100 random integers in under 700 operations and 500 integers in under 5,500 operations — within the 42 project benchmarks for full marks.

## Technical highlights

- **Doubly linked list** used for both stacks — O(1) push/pop at both ends
- **Index normalization** applied to input before sorting — handles duplicates detection and simplifies position math
- **Cost calculation** considers both stack states simultaneously to find the globally cheapest next move
- **Input validation** — detects non-integers, duplicates, and overflow before sorting begins

## Build & usage

```bash
make
./push_swap 3 1 4 1 5 9 2 6
```

Output is a newline-separated list of operations printed to stdout. Pipe into the checker to verify:

```bash
ARG="3 1 4 5 9 2 6"; ./push_swap $ARG | ./checker $ARG
```

## Project context

Built as part of the 42 Network common core. No sorting library functions allowed — all logic implemented from scratch in C with strict norm compliance and zero memory leaks.
