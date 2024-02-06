# ft_fprintf 
This is a recreaction of the function `fprintf` in C

## Table of Contents
1. [Overview](#overview)
2. [Project Structure](#project-structure)
3. [Dependencies](#dependencies)
4. [How to Use](#how-to-use)
5. [Code Examples](#code-examples)
6. [Contributing](#contributing)

## Overview
ft_fprintf is a function that prints the format to a specific file descriptor.

The function is formatted as follow:
```c
int ft_fprintf(int fd, const char *format, ...)
```
The only difference between `ft_fprintf` and `ft_printf` is the ability to choose the file descriptor in which i want to print.

(More about [ft_printf](https://github.com/rmsa42/ft_printf))

(More about [file descriptors](https://github.com/rmsa42/get_next_line?tab=readme-ov-file#about-file-descriptors))

## Project Structure
- `ft_fprintf/`: Main directory containing the, `src` and `include` directories, and Makefile.
- `src/`: Contains all the source code
- `include/`: Contains the header file

## Dependencies
- None

## How to Use
1. Clone the repository.
2. Navigate to the `ft_fprintf` directory: `cd ft_fprintf`.
3. Compile the library: `make`.
4. Include the header in your source files: `#include "ft_fprintf.h"`.
5. Link the library to your program: `gcc example.c -I include -L[path_to_ft_fprintf_dir] -lftfprintf`.

## Code Examples
```c
/* Example: Using ft_fprintf print an Error message in the STDERR file descriptor*/
#include "ft_fprintf.h"

int main(void)
{
	ft_fprintf(STDERR_FILENO, "Error\n");
	return (0);
}
```

## Contributing
I welcome contributions. If you have any bug fix or improvement, feel free to submit a pull request on the repository.
