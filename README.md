# 3150-lab3

instructions for use:
- in order to run, first make sure any necessary c/c++ extensions are installed
- in the terminal, run the line: **g++ -std=c++17 -Iinclude -o testlinkedlist linkedlist.cpp linkedtest.cpp**
    - this line will compile the tests and put the results in a file called 'testlinkedlist'
- in order to read the file, next run the following line in the terminal: **./testlinkedlist**
- all test results will display, one test must be tested manually by viewing the printed results
(for the function that prints the linked list). the correct printed line should be: [1] [2] [3] [4] [5]

notes on files included:
- doctest.h - for testing
- linkedlist.h - definitions for node and linkedlist as well as its corresponding functions
- linkedlist.cpp - includes the code for each of the functions
- linkedtest.cpp - contains the tests for the functions that were written