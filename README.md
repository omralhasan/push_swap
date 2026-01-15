*This project has been created as part of the 42 curriculum by oalhasan.*

## Description

`push_swap` is a C program that takes a list of integers and outputs a sequence of stack operations that sorts the numbers in ascending order.

The goal is to sort using only:

- Two stacks (A and B)
- A restricted set of operations (swap, push, rotate, reverse rotate)

At runtime, the program:

- Parses numbers passed as separate arguments or as a single quoted string
- Rejects invalid input and duplicates
- Prints the operations to `stdout` (one per line)

## Instructions

### Compilation

```
make
```

Optional cleaning targets:

```
make clean
make fclean
make re
```

### Usage

Multiple arguments:

```
./push_swap 3 2 1
```

Single quoted string:

```
./push_swap "3 2 1"
```

Notes:

- If the input is invalid, the program prints `Error` to `stderr` and exits with status `1`.
- If the input is already sorted (or has fewer than 2 numbers), the program prints nothing.

## Features

- Accepts input as `./push_swap 3 2 1` or `./push_swap "3 2 1"`
- Detects duplicates and invalid numeric tokens
- Uses a small-sort for small inputs and a radix-based approach for larger inputs

## Usage Examples

Count generated operations:

```
./push_swap 3 2 1 | wc -l
```

If you have an external checker program available (not included in this repository), you can validate the output like this:

```
# Placeholder (depends on your checker)
./push_swap 3 2 1 | <checker_program> 3 2 1
```

## Technical Choices

- Sorting strategy (as implemented):
  - small-sort for very small input sizes
  - radix sort using a computed rank (`index`) for larger inputs

## Limitations

- This repository provides `push_swap` only. Any checker tool must be provided separately.

## Resources

### References

- 42 subject: push_swap (project PDF provided by 42)
- Stack (ADT): https://en.wikipedia.org/wiki/Stack_(abstract_data_type)
- Radix sort: https://en.wikipedia.org/wiki/Radix_sort
- Bitwise operators in C: https://en.cppreference.com/w/c/language/operator_arithmetic
- `make` (build automation): https://www.gnu.org/software/make/manual/make.html

### AI Usage

- Used for: (debugging help, explanations)
- Affected parts: (memory management review)
- Not used for: <what_it_did_not_do> (auto-generating the full project)
