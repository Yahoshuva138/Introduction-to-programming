Write a C program that prepares a report card for a student. The function report()  takes value marks from the user (integer values ranging from 0 to 100). Based on the marks, the function should assign and print the corresponding grade according to the following grading key:
90 - 100: Grade A
80 - 89: Grade B
70 - 79: Grade C
60 - 69: Grade D
50 - 59: Grade E
0 - 49: Grade F

Your function should also be capable of handling invalid inputs, such as marks outside the range 0-100 by printing the error message, “Invalid marks entered. Please enter a value between 0 and 100.” 
The function returns a character that is assigned to the student (their grade). In case of invalid input, return 'X'. 
(Hint: use switch case to determine grade)


Sample Output Example 1:
Enter your marks
85
Grade: B

Sample Output Example 2:
Enter your marks: 
103
Invalid marks entered. Please enter a value between 0 and 100.


Compilation and Execution Steps:

    1. Open a new terminal by clicking on the menu bar and selecting ->Terminal ->New Terminal

    2. Set the Path in the terminal: Type the below command and click Enter
    cd Week_4/AutogradedLab1/grades

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