# Sum Big Integer

A simple C++ program for adding big integers.

## Project Structure

```text
.
├── expected
│   └── expected1.txt
├── input
│   └── input1.txt
├── output
├── Makefile
├── README.md
├── sumbigint.cpp
└── .gitignore
````

## Requirements

### Linux

Install `g++` and `make`:

```bash
sudo apt update
sudo apt install build-essential
```

### Windows

There are two recommended ways to run this project on Windows.

#### Option 1: Using WSL

Install Ubuntu WSL, then install build tools:

```bash
sudo apt update
sudo apt install build-essential
```

After that, use the same commands as Linux.

#### Option 2: Using MSYS2 / MinGW

Install MSYS2, then open the MSYS2 terminal and run:

```bash
pacman -S mingw-w64-ucrt-x86_64-gcc mingw-w64-ucrt-x86_64-make
```

On Windows with MSYS2, use:

```bash
mingw32-make
```

instead of:

```bash
make
```

## Build

### Linux / WSL

```bash
make
```

### Windows MSYS2 / MinGW

```bash
mingw32-make
```

## Run

### Linux / WSL

```bash
./sumbigint
```

### Windows MSYS2 / MinGW

```bash
./sumbigint.exe
```

or:

```bash
sumbigint.exe
```

## Input

The program reads two big integers from the keyboard.

Example:

```text
123456789123456789
987654321987654321
```

Expected output:

```text
1111111111111111110
```

## Run with Input File

The program can also read input from a file.

### Linux / WSL

```bash
./sumbigint < input/input1.txt
```

### Windows MSYS2 / MinGW

```bash
./sumbigint.exe < input/input1.txt
```

## Test

This project includes a simple file-based test.

Input file:

```text
input/input1.txt
```

Expected output file:

```text
expected/expected1.txt
```

Generated output file:

```text
output/output1.txt
```

### Linux / WSL

```bash
make test
```

### Windows MSYS2 / MinGW

```bash
mingw32-make test
```

The test command runs the program, saves the result to `output/output1.txt`, and compares it with `expected/expected1.txt` using `diff`.

If `diff` prints nothing, the test passes.

## Clean

### Linux / WSL

```bash
make clean
```

### Windows MSYS2 / MinGW

```bash
mingw32-make clean
```

## Notes

The executable file is generated after building the project.

On Linux, the executable is:

```text
sumbigint
```

On Windows, the executable is usually:

```text
sumbigint.exe
```

These generated files should not be pushed to GitHub.

Recommended `.gitignore`:

```gitignore
*.o
sumbigint
sumbigint.exe
output/*.txt
```

````


