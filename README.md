# Cpp_IntegerPointersProgram
Integer Pointers Program
_____________________________________________

Demonstrate an understanding of basic C++ programming concepts by completing the following:

Program: 
Create a C++ program that asks the user to enter three integer values as input.
Store the values into three different variables. 
For each variable, create an integer pointer to dynamic memory.
Display the contents of the variables and pointers. 
In your program, be sure to use the new operator and delete operators to management memory.

Pseudocode:

Prgram Start

FUNCTION getInput

    Prompt user for integer 1
    Store Value

    Prompt user for integer 2
    Store Value
    
    Prompt user for integer 3
    Store Value

END FUNCTION

FUNCTION displayData

    Display variable values

    Display pointer addresses
    
    Display values stored in dynamic memory

END FUNCTION

MAIN

    Declare three integer variables

    Declare three integer pointers

    Call getInput

    TRY

        Allocate memory using new

        Copy variable values into dynamic memory

        Call displayData

        Delete allocated memory
        
        Set pointers to nullptr

    CATCH memory allocation failure

        Display error message

    END TRY

END MAIN

Program end
