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

The program is modular, user-friendly, and efficient, with a simple Command-Line Interface (CLI) for interaction.

---

## Project Overview

### **Objective**
To design and implement an object-oriented system that models and manages virtual pets, allowing users to interact with pets and manage their data effectively.

### **Core OOP Concepts**
- **Classes and Objects**: All functionalities are encapsulated within well-defined classes.
- **Encapsulation**: Attributes are private, accessed via public getter and setter methods.
- **Inheritance**: Base class `Pet` and derived classes `Dog`, `Cat`, `Fish`.
- **Polymorphism**: Virtual functions like `play()` demonstrate method overriding.
- **Abstraction**: Abstract class `Pet` with pure virtual functions ensures structured design.
- **Exception Handling**: Custom exceptions are used to handle errors gracefully.

---

## Project Updates

- **Modularity**: The project is split into multiple `.h` and `.cpp` files for better maintainability:
  - `Pet`, `Dog`, `Cat`, and `Fish` classes are defined in their own header and implementation files.
  - The `PetManager` class, which handles interactions with pets, is modularized as well.
  - A single `main.cpp` file serves as the entry point.

- **Exception Handling**: Introduced custom exceptions to handle errors like:
  - Invalid pet types during creation.
  - Attempts to interact with non-existent pets.

- **Interface**: An interface is introduced via an abstract base class to enforce consistent behavior across all pet types.

---

## Functional Requirements

### **Class Definitions**
- **Pet** (Base Class): Attributes include `name`, `hunger`, and `happiness`. Contains virtual methods for `play()` and `feed()`.
- **Dog**, **Cat**, **Fish** (Derived Classes): Specific behaviors like fetching, playing with yarn, or swimming.

### **Key Features**
- **Encapsulation**: Private attributes with public methods for access and modification.
- **Inheritance**: Shared behavior in `Pet` with extensions in derived classes.
- **Polymorphism**: Virtual functions allow customizable behaviors.
- **Custom Exception Handling**: Graceful handling of invalid user inputs and operations.

---
##DEMO
-https://www.loom.com/share/50b4721e39f44bfead1da7459c4614d1?sid=ecf77d8a-3e7e-43ce-9c64-52d254005bb8
## Installation and Usage

### **Prerequisites**
- A C++ compiler (e.g., GCC).
- Vim for editing (optional).

### **Steps to Compile and Run**

1. Clone the repository:
   ```bash
   git clone [repository-link]
   cd pixel-pals
