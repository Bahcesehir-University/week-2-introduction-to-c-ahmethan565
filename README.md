# C++ Lab 1 – Introduction to C++

## Course
Computer Programming (C++)
---

## Objective
The goal of this lab is to review the basic structure of a C++ program and introduce fundamental programming concepts. By the end of this lab students should be comfortable with:

- Writing and compiling a simple C++ program
- Using `cout` to display output
- Declaring variables
- Using basic data types (`int`, `double`, `string`)
- Receiving user input with `cin`
- Performing simple arithmetic operations

This lab assumes **no prior experience with advanced programming concepts** such as loops, conditionals, or functions.

---

## Required Software
Students should have one of the following installed:

- Visual Studio
- CLion
- VS Code with C++ extensions
- g++ compiler

If using the terminal:

```
g++ main.cpp -o program
./program
```

---

## Files
The lab contains two versions of the program:

```
main.cpp                → Student worksheet with TODO sections
solution_main.cpp       → Instructor solution (not given to students)
```

Students must complete the TODO sections in `main.cpp`.

---

## Lab Structure

### Part 1 – Program Output
Students will practice printing text to the screen using `cout`.

Concepts:
- `#include <iostream>`
- `cout`
- `endl`

Example:

```
cout << "Hello World" << endl;
```

Students will print:
- their name
- their department
- the current year

---

### Part 2 – Variables
Students will create variables using different data types.

Concepts:

| Data Type | Example |
|-----------|--------|
| int | age |
| double | height |
| string | name |

Example:

```
int age = 20;
double height = 1.75;
string name = "Alice";
```

Students will then print these variables using `cout`.

---

### Part 3 – User Input
Students will use `cin` to read information from the user.

Example:

```
string city;
cin >> city;
```

Students will ask the user for their city and print it.

---

### Part 4 – Arithmetic
Students will read two integers and compute their sum.

Concepts:

- variables
- arithmetic operators

Example:

```
int sum = a + b;
```

Students will print the result.

---

### Part 5 – Mini Exercise
Students will create a small program that:

1. asks the user name
2. asks the birth year
3. calculates approximate age
4. prints a message

Formula:

```
age = 2026 - birthYear
```

Example output:

```
Hello John your approximate age is 21
```

---

## Expected Learning Outcomes
After completing this lab students should understand:

- how a C++ program is structured
- how to print text
- how to store data in variables
- how to receive input
- how to perform simple calculations

These skills will be required for the next labs where we will introduce:

- conditional statements
- loops
- functions

---

## Submission
Students should submit:

```
MainProgram.cpp
```

through the course submission system or GitHub Classroom.

---

## Academic Integrity
Students must complete the lab individually unless otherwise instructed. Collaboration in understanding concepts is allowed, but copying code directly from another student is not permitted.

---

## End of Lab

