# Pixel Pals 🐾

This project demonstrates the implementation of a software system designed using Object-Oriented Programming (OOP) principles in C++. The system is focused on modeling and interacting with a domain-specific set of objects while adhering to OOP best practices.

---

## Introduction

This software system was developed to showcase the application of key OOP principles, including:

- **Encapsulation**
- **Inheritance**
- **Polymorphism**
- **Abstraction**
- **Exception Handling**
- **File I/O**

The program is modular, user-friendly, and efficient, with a simple Command-Line Interface (CLI) for interaction.

---

## Project Overview

### **Objective**
To design and implement an object-oriented system that models and manages virtual pets, allowing users to interact with pets and manage their data effectively.

### **Core OOP Concepts**
- **Classes and Objects**: All functionalities are encapsulated within well-defined classes.
- **Constructors and Destructors**: Used to initialize and clean up resources for objects.
- **Encapsulation**: Attributes are private, accessed via public getter and setter methods.
- **Inheritance**: Base class `Pet` and derived classes `Dog`, `Cat`, `Fish`.
- **Polymorphism**: Virtual functions like `play()` demonstrate method overriding.
- **Abstraction**: Abstract class `Pet` with pure virtual functions ensures structured design.
- **Exception Handling**: Errors such as invalid input or file issues are handled gracefully.
- **File I/O**: Saves and retrieves data using files.

### **Project Type**
Virtual Pet Management System implemented in C++.

---

##  Functional Requirements

### Class Definitions
- **Pet** (Base Class): Attributes such as `name`, `hungerLevel`. Contains virtual methods for `play()` and `feed()`.
- **Dog**, **Cat**, **Fish** (Derived Classes): Specific behaviors like fetching, playing with yarn, or swimming.

### Key Features
- **Encapsulation**: Private attributes with public methods.
- **Inheritance**: Shared behavior in `Pet` with extensions in derived classes.
- **Polymorphism**: Virtual functions for customizable behaviors.
- **File I/O**: Save pet data to `pets_data.txt` and load it during runtime.
- **Exception Handling**: Handles errors in file operations and invalid inputs.
- **User Interaction**: A menu-driven CLI to add pets, interact with them, and save/load data.

---

## Non-Functional Requirements

- **Efficiency**: Minimal execution time for core operations.
- **Usability**: Simple and intuitive CLI for interaction.
- **Modularity**: Code split into multiple `.h` and `.cpp` files for maintainability.
- **Code Quality**: Follows best practices with meaningful comments and consistent naming conventions.


### Demo video
[https://www.loom.com/share/50b4721e39f44bfead1da7459c4614d1?sid=ecf77d8a-3e7e-43ce-9c64-52d254005bb8]
## Installation and Usage

### Prerequisites
- A C++ compiler gcc.
- Git to clone the repository.

### Steps to Compile and Run

1. Clone the repository:
   ```bash
   git clone [repository-link]
   cd pixel-pals
