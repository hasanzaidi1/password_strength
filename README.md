# Password Strength Meter

This C program serves as a simple password strength meter that reads potential passwords from three different data files and evaluates their strength based on specific criteria.

## Table of Contents

- [Features](#features)
- [How to Use](#how-to-use)
- [Tests](#tests)
- [File Structure](#file-structure)

## Features

- **Password Length Validation**:  
  The program checks if the password meets the minimum and maximum length requirements.

- **Character Variety**:  
  Ensures that the password contains a mix of uppercase, lowercase letters, digits, and special characters.

- **No Character Repetition**:  
  Checks that the password does not contain repeated characters.

- **Ease of Use**:  
  Simple command-line interface for easy usage and understanding.

- **Extensible Testing Framework**:  
  The program provides a structure for adding and modifying tests to suit different password strength policies.

- **Data File Reading**:  
  Reads potential passwords from data files for automated testing and evaluation.

## How to Use

To use this program, follow these steps:

1. **Clone the Repository**:  
   Clone the repository to your local machine using the following command:

   ```bash
   git clone https://github.com/hasanzaidi1/password_strength.git

2. **Compile the Code**:
   Compile the `main.c` file using a C compiler such as `gcc`.

   ```bash
   gcc main.c -o password_strength
3. **Run the Code**:
   Execute the compiled program.
   ```bash
   ./password_strength
The program will read potential passwords from the data files (Proposed passwords #1.txt, Proposed passwords #2.txt, Proposed passwords #3.txt), apply the tests, and display the results.

## Tests
The program includes the following test functions:
1. **Test 1**: Checks if the password length is at least 10 characters.
2. **Test 2**: Checks if the password length is at most 128 characters.
3. **Test 3**: Checks for character repetition in the password.

Feel free to modify and extend these tests according to your specific requirements.

## File Structure
- **main.c**: The main C file containing the implementation of the password strength meter.
- **Proposed passwords #1.txt**: Data file containing potential passwords for testing.
- **Proposed passwords #2.txt**: Data file containing potential passwords for testing.
- **Proposed passwords #3.txt**: Data file containing potential passwords for testing.
   
