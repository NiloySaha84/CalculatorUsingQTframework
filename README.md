# Calculator Application Using Qt

This is a simple GUI-based calculator application built using the Qt framework and C++. It supports basic arithmetic operations, exponentiation, and nth roots. The user interface allows for easy interaction through buttons, enabling operations such as addition, subtraction, multiplication, division, and more.

## Features

- **Basic Operations**: Add, subtract, multiply, and divide numbers.
- **Advanced Operations**:
  - Exponentiation (`^`): Raise a number to the power of another number.
  - nth Root: Calculate the nth root of a number.
  - Pi (`π`): Quickly append the constant value of Pi.
  - Decimal Point (`.`): Supports floating point numbers.
- **Clear**: Reset the input field to start a new calculation.

## UI Components

- **Number Buttons (0-9)**: Appends the selected digit to the current input.
- **Operators**: Handles the following operations:
  - `+` (Addition)
  - `-` (Subtraction)
  - `*` (Multiplication)
  - `/` (Division)
  - `^` (Exponentiation)
  - `root` (Nth Root)
- **Pi Button**: Inserts the value of Pi (3.14159) into the input field.
- **Clear Button**: Clears the input field to allow new calculations.
- **Equals Button (`=`)**: Performs the selected operation and displays the result.

## Dependencies

- **Qt Framework**: This project uses Qt for building the graphical user interface. Make sure you have Qt installed on your machine.
  
  - Install Qt via [Qt Official Website](https://www.qt.io/download) or using a package manager like `brew` (macOS) or `apt-get` (Linux).
  
- **C++ Compiler**: A C++ compiler (e.g., `g++`) is required to compile the code.

## How to Build and Run

### Prerequisites

- Ensure that you have Qt and a C++ compiler installed on your system.
  
### Building the Application

1. **Clone the repository**:
   ```bash
   git clone https://github.com/your-username/calculator-qt.git
