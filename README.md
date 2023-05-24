# Library System

This repository contains the code for a library system developed as a graduation project for the Instant Software Solution diploma in Software Engineering Track.

## Project Description

The library system is implemented using the C++ programming language, following Object-Oriented Programming (OOP) principles, utilizing data structures, and adhering to SOLID principles. The system serves as a cashier library system for a client who wants to sell and lend books to people.

### Categories

The library system includes three categories of items:

1. Books: Engineering Books, Medical Books, Religious Books
2. Magazines
3. Short Stories

There are 9 books available for each type of book, but a minimum stock of 3 is maintained for books. Magazines and Short Stories can have an unlimited stock.

### Employees

There are two types of employees in the library system:

1. Fixed workers (Lifelong contract): There are ten fixed workers who have the privileges to sell or lend any category of items.
2. Daily reward workers (Daily payment): There are six daily reward workers who can only lend items and are not allowed to sell. 

### System Functionality

The library system provides the following functionality:

- Upon system startup, the employee is asked to select their employment type: fixed or daily.
- If the employee is fixed, they are prompted to enter their name, and the system checks if the employee is allowed to sell or lend any book.
- If the employee is a daily worker, their name is checked, and their privilege is limited to lending books only.
- The books are stored lengthwise, and the system ensures that the stock for a book is not equal to zero before lending.
- The system maintains a record of items sold or lent, along with employee details.

## The Team

The library system project was developed by the following team members:

- Marwa Elsayed Khalil Elsayed
- Ashraf Abdulkhaliq Bassuoni
- Hossam Kamal Elnemr

## Usage

To use the library system, follow these steps:

1. Clone the repository to your local machine or download the `Final_Project_ODC_Instant.cpp` file directly.
2. Compile the C++ code using a C++ compiler of your choice.
3. Run the compiled executable to start the library system.
4. Follow the prompts to select the employee type (fixed or daily) and enter the employee's name.
5. Use the system to sell or lend books based on the employee's privileges and the available stock.

## Conclusion

The library system developed for this graduation project provides a cashier system for a library, allowing employees to sell and lend books to customers. By utilizing C++ programming, OOP principles, data structures, and SOLID principles, the system offers efficient management of book categories, employee privileges, and stock control. The collaboration of the development team ensured the successful implementation of the project, meeting the requirements of the graduation project for the Instant Software Solution diploma in Software Engineering Track.
