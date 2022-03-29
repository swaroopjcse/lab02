# Lab 02: Familiarising yourself with the cp library

## Objectives

In this lab, you will learn about --

* accessing the cp-library documentation
* using basic `cp::print` operation
* the output log on the docker environment

We assume you have already set your working environments according to the  instructions.

## Understanding the given files

Using the VS Code extension you have configured, download this starter code. (If you are reading this in VSCode, you have already done this step.)

First, look at the contents of the folder:

```sh
├── Data
├── Makefile
├── README.md
├── cp-0.1.0-Linux
├── errors.txt
├── main.cpp
└── output.txt
```

Let's look at each one of these.

1. `Data/` contains the configurations for running your program on the underlying docker instance. **Do not make any changes** to the contents of this folder.
2. `Makefile` is a program that is invoked when you click the **Run** button in VS Code. We will not go into how it compiles and executes your code at this point. Again, make **no changes to the Makefile**.
3. `README.md` is this file. In each lab/assignment, this is where you must start. Make a habit of reading the README file thoroughly.
4. `cp-0.1.0-Linux/` contains our library. **TODO**
5. `errors.txt` is empty, and ideally should remain empty. It's where we record any compile-time errors your code may cause.
6. `main.cpp` is where you will write your code. We will come back to what you are expected to do in this lab soon.
7. `output.txt` is where we capture what you would see on the console if you run this program outside docker. Instead of seeing the output on the terminal, you will see it here. Make a habit of checking this file after you run your program.

## First program

The given starter code in `main.cpp` looks like this:

```cpp
#include <cp/cp.hpp>

int main() {
  cp::print("My first program.");
  cp::print(42);

  return 0;
}
```

You have already seen this code in class. Go ahead and start docker (by turning on the button under "Assignment Fetcher") and click "Run".

Check the output in `output.txt