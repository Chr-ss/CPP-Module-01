
# C++ Module 01

This module introduces foundational concepts of memory allocation, pointers to members, references, and the use of the `switch` statement in C++ programming.

---

## How to Run
1. Clone the repository:
   ```bash
   git clone <repository_url>
   cd <repository_directory>
   cd ex00   # Example for Exercise 00
   make
   ./<executable_name>
   ```

---

## Exercises Overview

### Exercise 00: BraiiiiiiinnnzzzZ
- **Directory**: `ex00/`
- **Files**: `Makefile`, `main.cpp`, `Zombie.{h,hpp}`, `Zombie.cpp`, `newZombie.cpp`, `randomChump.cpp`
- **Description**: 
  - Implement a `Zombie` class with a `name` attribute and an `announce()` method that outputs `<name>: BraiiiiiiinnnzzzZ...`.
  - Create two helper functions:
    - `Zombie* newZombie(std::string name)`: Allocates a zombie on the heap.
    - `void randomChump(std::string name)`: Allocates a zombie on the stack.
  - Properly manage memory and ensure zombies are destroyed with a destructor that prints their name for debugging purposes.

---

### Exercise 01: Moar brainz!
- **Directory**: `ex01/`
- **Files**: `Makefile`, `main.cpp`, `Zombie.{h,hpp}`, `Zombie.cpp`, `zombieHorde.cpp`
- **Description**:
  - Create a `zombieHorde(int N, std::string name)` function that allocates `N` zombies in a single allocation.
  - Each zombie must have the specified name and be able to announce itself.
  - Ensure memory is correctly managed and test for potential leaks.

---

### Exercise 02: HI THIS IS BRAIN
- **Directory**: `ex02/`
- **Files**: `Makefile`, `main.cpp`
- **Description**:
  - Create a program that initializes a string and demonstrates pointers and references:
    - Print the memory addresses of the string, a pointer to it, and a reference to it.
    - Print the values of the string, the value pointed to by the pointer, and the value referenced.
  - This exercise clarifies the behavior of pointers and references in C++.

---

### Exercise 03: Unnecessary violence
- **Directory**: `ex03/`
- **Files**: `Makefile`, `main.cpp`, `Weapon.{h,hpp}`, `Weapon.cpp`, `HumanA.{h,hpp}`, `HumanA.cpp`, `HumanB.{h,hpp}`, `HumanB.cpp`
- **Description**:
  - Implement a `Weapon` class with `type` as a private attribute, and `getType()` and `setType()` methods.
  - Create `HumanA` and `HumanB` classes:
    - `HumanA` has a weapon passed through its constructor.
    - `HumanB` can optionally have a weapon assigned later.
  - Demonstrate how changing the weapon affects both humans' attack behavior.

---

### Exercise 04: Sed is for losers
- **Directory**: `ex04/`
- **Files**: `Makefile`, `main.cpp`, `*.cpp`, `*.{h,hpp}`
- **Description**:
  - Create a program that takes a filename and two strings (`s1` and `s2`) as arguments.
  - Replace all occurrences of `s1` with `s2` in the file and save the result in `<filename>.replace`.
  - Use C++ file I/O functions and avoid using `std::string::replace`.

---

### Exercise 05: Harl 2.0
- **Directory**: `ex05/`
- **Files**: `Makefile`, `main.cpp`, `Harl.{h,hpp}`, `Harl.cpp`
- **Description**:
  - Create a `Harl` class with the following private methods:
    - `debug()`, `info()`, `warning()`, `error()`
  - Implement a public `complain(std::string level)` method that uses pointers to member functions to call the appropriate method based on the level.
  - Avoid using long conditional chains (`if/else`).

---

### Exercise 06: Harl filter
- **Directory**: `ex06/`
- **Files**: `Makefile`, `main.cpp`, `Harl.{h,hpp}`, `Harl.cpp`
- **Description**:
  - Extend the `Harl` class to filter messages based on log levels.
  - Use the `switch` statement to display all messages from the given level and above.
  - Example:
    ```bash
    $ ./harlFilter "WARNING"
    [ WARNING ]
    I think I deserve to have some extra bacon for free.
    I've been coming for years whereas you started working here since last month.
    [ ERROR ]
    This is unacceptable, I want to speak to the manager now.
    ```

---

## Acknowledgments
This repository is part of the 42 Network C++ Module Curriculum, focusing on advanced memory management and object-oriented programming concepts.
