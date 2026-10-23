Write a C program to check if a number reads the same upside-down, or not. The program should take a number as input from the user in the main() function, then using the is_rotationally_same() function, must check whether the number is still the same when read upside-down. This boolean value (true/false) must be returned to the main() function, which then prints the result to the user. 
Go through the below sample inputs and outputs carefully. 

Sample Output Example 1:
96
Yes, the number can be read upside down.

Sample Output Example 2:
450
No, the number cannot be read upside down.


Compilation and Execution Steps:

    1. Open a new terminal by clicking on the menu bar and selecting ->Terminal ->New Terminal

    2. Set the Path in the terminal: Type the below command and click Enter
    cd Week_4/AutogradedLab1/rotation

    3. Compile the C file using the following command in the terminal:
         gcc <Filename.c> (Example: gcc main.c)

    4. Run the C file using the following command in the terminal: Once the a.out file is created
        ./a.out
        
Every time you make a change in your program or the filename.c file, it is required to compile the program again using
"gcc filename.c" to reflect that change in your a.out. Otherwise, you will be accessing an a.out file of the previous
version of your code and changes you made will not be reflected in the output.

[Note: Do not modify .h files]

For more details on multi file execution refer to the following Lab Preread:

https://www.coursera.org/learn/introduction-to-programming/supplement/RcMyy/lab-preread-multi-file-execution-in-c


Reference Video for Compilation/Execution Steps:

https://www.coursera.org/learn/introduction-to-programming/lecture/QyM2F/executing-a-c-program-using-coursera-labs