 Write a C program to input a number and a specific digit (0-9) from the user, and print how many times the digit appears in the provided number. The counting must be done by a function frequency() in main.c which takes the inputs from the user and returns the frequency to the user.

Sample Output Example 1:
122353
3
Frequency of 3 in 122353 is: 2

Sample Output Example 2:
4491
5
Frequency of 5 in 4491 is: 0



Compilation and Execution Steps:

    1. Open a new terminal by clicking on the menu bar and selecting ->Terminal ->New Terminal

    2. Set the Path in the terminal: Type the below command and click Enter
    cd Week_4/AutogradedLab1/frequency

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