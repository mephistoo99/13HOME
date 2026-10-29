*This project has been created as part of the 42 curriculum by [mchaarou].*

# Libft

## Description
Libft is a foundational C library developed as part of the 42 curriculum. The goal of this project is to reimplement a selection of standard C library functions (such as string manipulation, memory management, and character checks) alongside custom utility functions.

Developing `libft` provides a deep understanding of low-level memory mechanics, pointer arithmetic, and algorithmic logic in C, serving as a core dependency for future 42 C projects.

## Instructions

### Compilation
The library is compiled using `gcc` with the flags `-Wall -Wextra -Werror`. Compilation and build tasks are automated using a `Makefile`.

To compile the library and generate `libft.a`:
```bash
make
```

### Makefile Rules
* `make` or `make all`: Compiles all `.c` source files into `.o` object files and generates the static library `libft.a`.
* `make clean`: Removes all generated `.o` object files.
* `make fclean`: Removes all generated `.o` object files as well as `libft.a`.
* `make re`: Rebuilds the entire library from scratch (`fclean` followed by `all`).

### Usage
To use `libft` in your own C projects:

1. Compile the library:
   ```bash
   make
   ```
2. Include the header in your C source files:
   ```c
   #include "libft.h"
   ```
3. Compile your project while linking `libft.a`:
   ```bash
   gcc main.c -L. -lft
   ```

## Resources

### References
* **Books & Manuals:**
  * *The Linux Programming Interface* by Michael Kerrisk
  * Linux Programmer's Manual (`man 3` pages for standard C library functions like `strlen`, `memcpy`, `atoi`, `strdup`)
  * [cppreference.com](https://en.cppreference.com/w/c) – C Reference Documentation
* **Online Platforms & Developer Communities:**
  * [GeeksforGeeks](https://www.geeksforgeeks.org/) – Tutorials and articles on C programming concepts, memory management, and data structures.
  * [Stack Overflow](https://stackoverflow.com/) – Community Q&A for troubleshooting specific syntax errors, edge cases, and memory leaks.
  * [Reddit](https://www.reddit.com/r/C_Programming/) (r/C_Programming) – Community discussions and insights on low-level programming best practices.
* **Video Tutorials:**
  * [C Programming: Makefiles](https://www.youtube.com/watch?v=GExnnTaBELk) by Barry Brown – Guide covering compilation stages, object files, linking, and Makefile structure.
  * [The Memory Layout of a C Program | Data Structures in Embedded Systems](https://www.youtube.com/watch?v=FlkNgJXEyrc) by inpyjama – Breakdown of C program memory structure (Stack, Heap, BSS, Data, and Text segments).

### AI Usage
AI tools (Gemini) were used during this project strictly for:
* **Concept Clarification:** Explaining complex low-level C concepts, memory management mechanics, and pointer behavior that were difficult to understand.
