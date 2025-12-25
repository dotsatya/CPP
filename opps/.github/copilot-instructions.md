# Copilot Instructions for This C++ Project

## Project Overview
This project is a simple C++ codebase, currently consisting of a single file: `1_class.cpp`. It appears to be an educational or experimental workspace for learning or demonstrating C++ class syntax and basic program structure.

## Key Files
- `1_class.cpp`: Main (and only) source file. Contains class definitions and the `main` function.

## Coding Patterns & Conventions
- Use standard C++ headers (e.g., `#include <iostream>`) and the `std` namespace.
- Class definitions should use curly braces `{}` (not parentheses `()`).
- Member variables are typically declared as `int`, `char`, etc., and should be placed inside the class body.
- The `main` function is the entry point and should return an integer.

## Example: Class Definition Pattern
```cpp
class Hero {
  int health;
  char level;
};
```

## Build & Run
- No build scripts or makefiles are present. Compile manually using a C++ compiler, e.g.:
  ```sh
  g++ 1_class.cpp -o 1_class.exe
  ./1_class.exe
  ```
- No external dependencies or libraries are required.

## Project-Specific Notes
- This project does not use advanced C++ features, external libraries, or custom build systems.
- No test framework or test files are present.
- No special code generation, formatting, or linting rules are defined.

## Guidance for AI Agents
- Focus on correct C++ syntax, especially for class definitions and member declarations.
- If expanding the project, follow the simple, single-file structure unless otherwise directed.
- Keep code readable and beginner-friendly.

---
If the project structure changes or more files are added, update this file to reflect new conventions and workflows.
