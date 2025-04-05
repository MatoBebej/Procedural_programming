# Collection of small procedural programs in C from 2023 winter semester

## Task 1.1
Write a program that prints the following string to the screen:
Hello
world!

## Task 1.2
Write a program that reads a character from the keyboard and prints it on the next line.

## Task 1.3
Write a program that reads two arbitrary numbers and prints their sum and product.
Try to write the program without using the assignment statement. The input consists of two integers separated by a space, followed by a newline. The output consists of two lines, each followed by a newline. The first line contains the string:
"Sucet nacitanych cisiel je:" followed by the sum of the numbers.
The second line contains: "Sucin nacitanych cisiel je:" followed by their product.
Ensure the program behaves correctly by stepping through it.

Example Input:
10 8

Example Output:
Sucet nacitanych cisiel je: 18  
Sucin nacitanych cisiel je: 180  

## Task 1.4
Write a program that reads an arbitrary integer and prints its square.
Ensure the program behaves correctly by stepping through it.

Example Input:

8  

Example Output:

Druha mocnina cisla 8 je: 64  

## Task 1.5
Write a program that reads the radius of a circle from the keyboard and prints its circumference.
You may assume that pi = 3.14.

Example Input:

6  

Example Output:

Obvod kruhu s polomerom 6 je: 37.68  

## Task 1.6
Write a program that prints the following string:
"*/Toto je "backslash": ''*/"  
A tab character should precede the first character, and a newline should follow the last character.

## Task 1.7
Write a program that reads an arbitrary number and prints the same number with a 20% tax applied.
Try to write the program without using the assignment statement. The input consists of an integer followed by a newline. The output consists of two lines, each followed by a newline.

The first line contains: "Cena bez dane:" followed by the read number.
The second line contains: "Predajna cena s danou 20%:" followed by the price including VAT, rounded to one decimal place. The tax-free price should be displayed with the correct number of decimal places.

Example Input:

10  

Example Output:

Cena bez dane: 10  
Predajna cena s danou 20%: 12.0  

## Task 1.8
Write a program that calculates the volume of a cuboid with an accuracy of two decimal places.
The input is a single line containing three real numbers separated by spaces, ending with a newline.
The output is a single line containing the message: "Objem:" followed by a space, the computed value rounded to three decimal places, and a newline.

Example Input:

22.21 33.31 44.41  

Example Output:

Objem: 32855.189  

## Task 1.9
Compile the program from Task 1.1 and go through all the compilation steps of a C program.
Find out what the -o and -v flags do (check the gcc manual).
Finally, try stepping through the program.


## Task 3.1
Write a program that reads an integer N followed by a newline character. Then, it reads N real numbers, each followed by a newline character. The program's output should consist of two lines: the first will contain the text "Minimum:", followed by a space and the minimum of the N read numbers, printed with two decimal places. The second line will contain the text "Maximum:", followed by a space and the maximum of the read numbers, printed with two decimal places, ending with a newline character.

Sample input:
4  
5.5  
2.78  
15.451  
6  

Sample output for the example input:  
Minimum: 2.78  
Maximum: 15.45  

## Task 3.2
Write a program that reads 11 integers, each followed by a newline character, and stores them in a one-dimensional array. The program then determines whether the sequence of numbers in the array is valid. The sequence is valid if:

The first number is in the range <0, 10>
For each i-th number (i > 1), it is not greater than twice the previous (i-1)-th number, nor smaller than half of the previous (i-1)-th number. If the sequence is valid, the program will print "Postupnost je spravna" (The sequence is valid), followed by a newline. Otherwise, it will print "Postupnost nie je spravna" (The sequence is not valid), followed by a newline.
Sample input (modified for 3 integers):
3  
5  
7  
9  

Sample output for the example input: Postupnost je spravna

## Task 3.3
Write a program that reads an integer N on the first line. Then, it reads N lines, each containing one integer. The program's output is a single line containing the number of read integers that belong to the interval (0, 100>. The output is ended with a newline character.

Sample input: 
3    
5  
1000  
20  

Sample output for the example input: 
2  

Note: Consider what would happen if the number of input numbers (N) was not predefined and you had to process all numbers. The answer: You should pay attention to the return value of the scanf function.

## Task 3.4
Write a program that reads only a positive integer N greater than 0 (continue reading until all conditions are met). The program's output is the factorial of the number N.

Sample input: 5

Sample output for the example input: 120

## Task 3.5
Write a program that reads two integers f and g separated by a space. The input is terminated by a newline character. The program's output will be a line containing all integers divisible by three and belonging to the interval <f, g>. The numbers in the output should be ordered from smallest to largest, separated by a single space. The output is ended by a newline character.

Sample input: 5 20

Sample output for the example input: 6 9 12 15 18

## Task 3.6
Write a program that reads a number N. If N < 1 or N > 15, the program will print an error message "Cislo nie je z daneho intervalu" (The number is not from the given interval), and the program will end. Otherwise, the program will print N lines, where each line contains the line number, a colon, a space, and the numbers separated by a space. In the first line, the numbers from N to 1 will be printed after the colon. In each subsequent line, there will be one less number. All numbers should be printed with two decimal places.

Sample input: 4

Sample output for the example input:   
1: 4 3 2 1  
2: 3 2 1  
3: 2 1  
4: 1  

## Task 3.7
Write a program that will print a table of powers of the number x from 1 to n, where the calculation and display will be done by the function void mocnina(double x, int n). The program will read two numbers separated by a space and ended with a newline character. The first number is a real number representing the base of the power (the base), and the second number is an integer representing the maximum exponent (the exponent) n. The output will be n lines, with each line having the format x^i = y, where x is the base, i is the exponent, and y is the result of exponentiation. Both the base and the result should be printed with two decimal places. Each line ends with a newline character.

Sample input: 3.0 4

Sample output for the example input: 
3.00^1 = 3.00  
3.00^2 = 9.00  
3.00^3 = 27.00  
3.00^4 = 81.00  

## Task 3.8
Write a program that will print a table of multiples of the number x from 1 to n, where the calculation and display will be done by the function void nasobok(double x, int n). The calculation will be done only using addition, without using multiplication. The program will read two numbers separated by a space and ended with a newline character. The first number is a real number representing the first factor, and the second number is an integer representing the maximum second factor n. The output will be n lines, each line having the format x * i = y, where x is the first factor, i is the second factor, and y is their product. Both the first factor and the product should be printed with two decimal places. Each line ends with a newline character.

Sample input: 3.0 2

Sample output for the example input: 3.00 * 1 = 3.00  
3.00 * 2 = 6.00  

## Task 3.9
Write the function int parne(int x[], int pocetx, int y[]), which copies all even numbers from the array x to the array y in the same order as they appear in the array x and returns the number of elements in the array y. The argument pocetx specifies the number of elements in the array x. You can assume that the argument y will have enough space for all even elements.

Sample call: x = {4, 7, 1, 3, 2, 5, 6}  
pocetx = 7  
pocety = parne(x, pocetx, y); // function call  
pocety: 3 // print result  
y: {4, 2, 6}  

## Task 4.1
Write a program that reads two integers from standard input and outputs all prime numbers in the given range. Use a function zisti_prvocislo(int cislo) that checks if the number is prime. The program reads two integers, separated by a space, and outputs all prime numbers in the range, each on a new line. If there are no prime numbers in the range, it outputs "Prvocislo neexistuje" ("No prime numbers"). Ensure the boundaries of the range are handled properly.

Example input:
1 4

Example output for the given input:

2
3

## Task 4.2
Write a program that first reads an integer n, representing the number of inputs. Then, for each input, it reads a pair of real numbers: hourly wage and number of hours worked per week. The program should call the function double tyzdenna_mzda(double h_mzda, double hod) that calculates the weekly wage. For each pair of values, it outputs the hourly wage, hours worked, and total weekly wage in a specific format.

Example input:

3  
20 38  
22 48  
24 68  

Example output:

Hod. mzda: 20.00 Euro/hod, hodin: 38.00, spolu: 760.00 Euro  
Hod. mzda: 22.00 Euro/hod, hodin: 48.00, spolu: 1144.00 Euro  
Hod. mzda: 24.00 Euro/hod, hodin: 68.00, spolu: 2064.00 Euro  
Celkova mzda: 3968.00 Euro

## Task 4.3
Write a program that reverses a number. It reads a number x from the input and uses the function long reverzne_cislo(long x) to return the reversed number. The program should continue to process all numbers until the end of the input, checking if each number is a palindrome. If the number is a palindrome, it outputs "Cislo X je palindrom" ("Number X is a palindrome"), otherwise it outputs "Cislo X nie je palindrom" ("Number X is not a palindrome").

Example input:

12345

Example output:

54321
Cislo 12345 nie je palindrom

## Task 4.4
Write a program that calculates the sum of all odd positive integers smaller than N using recursion.

Example input:

10

Example output:

25

## Task 4.5
Write a program that calculates the digit sum of a number N using recursion.

Example input:

56

Example output:

11

## Task 4.6
Write a program that reads a real number x from standard input and writes the first 10 multiples of x to a file nasobky.txt. The file should contain 10 lines, each showing i * x = ix, where i is the line number and x is the input number.

Example input:

2.5

Example output in nasobky.txt:

1 * 2.50 = 2.50  
2 * 2.50 = 5.00  
3 * 2.50 = 7.50  
4 * 2.50 = 10.00  
5 * 2.50 = 12.50  
6 * 2.50 = 15.00  
7 * 2.50 = 17.50  
8 * 2.50 = 20.00  
9 * 2.50 = 22.50  
10 * 2.50 = 25.00  

## Task 4.7
Write a program that reads real numbers from the file cisla.txt, prints them to the screen, and calculates their sum. If the file cannot be opened, print "Neexistuje subor: cisla.txt" ("File does not exist").

Example content of cisla.txt:

1.25  
0.26  
1.36  
4.52  

Example output:

1.25  
0.26  
1.36  
4.52  
Sucet cisel je: 7,39.  

## Task 4.8
Write a program that reads a character from standard input and then reads characters from the file znak.txt. If the input character is s, it writes the characters to a new file novy.txt; otherwise, it prints the characters to the screen.

## Task 4.9
Write a program that reads characters from the file text.txt until it encounters the character *. If it reads 'x' or 'X', it prints "Precital som X" ("I read X"), if it reads 'y' or 'Y', it prints "Precital som Y" ("I read Y"), and for control characters (#, $, or &), it prints "Precital som riadiaci znak" ("I read a control character"). When * is read, the program prints "Koniec" ("End") and finishes reading the file. It also counts and prints the number of spaces read.

## Task 4.10
Write a program that compares the contents of two files prvy.txt and druhy.txt. If the contents are the same, print "Subory su identicke" ("Files are identical"). If they differ, print the number of differing characters and, if the files have different lengths, also print how much longer one file is than the other.

Example comparison between prvy.txt:

ahoj

and druhy.txt:

ahujx

Output:

Pocet roznych znakov: 1
Jeden zo suborov je dlhsi o 3 znaky

## Task 5.1
Write a program to calculate the area and perimeter of a rectangle. Create a function nacitaj to read and return two real numbers as arguments. Then, create a function vypocitaj that takes the lengths of the sides of the rectangle as arguments and returns the area and perimeter of the rectangle. In the main program, call the nacitaj function to read the rectangle's dimensions and the vypocitaj function to calculate the area and perimeter. The program should output the area and perimeter, rounded to three decimal places.

Example input:

3.5 4.75

Example output for the given input:

Area: 16.625
Perimeter: 16.500

## Task 5.2
Write a function maximum that takes the addresses of two integers and returns the address of the larger integer. The program should read two integers from the input, call the maximum function, pass the addresses of the variables storing the input values, and print the larger number.

Example input:

5 8

Example output for the given input:

Number 8 is larger.

## Task 5.3
Write a program that reads real numbers a, b, and c from the input. Using the function kvadraticka_rovnica, determine the roots of the quadratic equation ax^2 + bx + c = 0 (you can find how to solve a quadratic equation on Wikipedia). The function kvadraticka_rovnica will return the number of roots and their values. The program will print the return values to the console. Assume that the coefficient a is non-zero (what happens if it equals 0, and how does that affect the program?). Use the sqrt function from the math library to calculate the square root.

Example input:

1 5 6

Example output for the given input:

Roots: -2.0 -3.0

## Task 5.4
Write a procedure vymen_ukazovatele that takes the addresses of two pointers to integer variables (let's call them a and b with values 10 and 14, respectively) and swaps their values, i.e., swaps the addresses they point to. The program will print the addresses and values of the variables pointed to by the pointers before and after calling the vymen_ukazovatele procedure.

## Task 5.5
Write a function int delitele(int x[], int pocetx, int y[], int k) that copies all divisors of k from array x into array y, preserving the order in which they appear in x. The function will return the number of elements in array y. The argument pocetx indicates the number of elements in array x (which is statically allocated). You can assume that array y has sufficient space for all the divisors of k found in array x.

Example call:

x = {4, 7, 10, 2, 3, 9, 6, 5, 8, 12}  
pocetx = 10  
pocety = delitele(x, pocetx, y, 24); // function call  
pocety: 6 // output result  
y: {4, 2, 3, 6, 8, 12}  

## Task 5.6
Write a program that first reads the dimensions of an array m (a non-negative integer). In the function alokuj_1D_pole(...), dynamically allocate the array, then fill it with numbers entered via the keyboard. Afterward, the program will use the function vypis_1D_pole(...) to print the entire array to the console. The program will then find and print the maximum and minimum values in the array using the functions maximum_poz(...) and minimum_poz(...), which also return the positions where these values are located. Before the program finishes, it should free the allocated memory via the uvolni() function.

Example input:

5  
3  
1  
2  
3  
4  

Example output for the given input:

3,1,2,3,4,

## Task 6.1
Write a program that reads an integer n from the first line of input and allocates a block of memory with n items for characters. Then, it reads n characters from the input and prints them in reverse order. (Use pointer arithmetic.)

Example input:

4
ahojky

Example output for the given input:

joha

## Task 6.2
Write a program that determines the number of occurrences of each letter in every line of a file. The input to the program is a single line containing the filename. The output is a histogram of letter frequencies displayed in a neat table, where the first line contains all the letters of the alphabet, clearly separated. Each subsequent line will contain the line number, and below each letter, the count of occurrences of that letter in the corresponding line of the file (case-insensitive). The counts should be at most two-digit integers, preceded by a space. All lines of output should end with a newline character.

Example input:

subor.txt

Example content of subor.txt:

Toto je ukazkovy subor.
V subore su pismena.

Example output for the given input:

A B C D E F G H I J K L M N O P Q R S T U V W X Y Z  
1 1 1 0 0 1 0 0 0 0 1 2 0 0 0 4 0 0 1 1 2 2 1 0 0 1 1  
2 1 1 0 0 2 0 0 0 1 0 0 0 1 1 1 1 0 1 3 0 2 1 0 0 0 0  

## Task 6.3
The program first reads the dimensions of a 2D array n, m (two non-negative integers). In the function alokuj_2D_pole(), the array is dynamically allocated, and then the entire array is filled with numbers entered from the keyboard. The program will then print the 2D array to the console using the function vypis_2D_pole(). Before the program ends, the memory should be freed using the uvolni() function.

Example input:

2  
3    
1  
2  
3  
4  
5  
6  

Example output for the given input:

1 2 3  
4 5 6  

## Task 7.1
Create a program that checks if a given square is a magic square. A square is magic if the sum of the elements in all rows, columns, and diagonals is the same. The program will create a static array of size N × N (for example, N = 20). It will then read the square's size n from the standard input (where n <= N) and load the elements of the square into the static array. If n < N, the program will not use the entire square, but just a part of it. If n > N, the program will terminate with an error message. The program will then check if the square is magic in the function int magicky(). Finally, the program will print the result on the screen.

Examples of magic squares:

8 1 6  
3 5 7  
4 9 2  

16 3 2 13  
5 10 11 8  
9 6 7 12  
4 15 14 1  

## Task 7.2
Create a program that draws a snake pattern of lowercase English letters (characters: a, b, c, ..., z) in a 2D matrix of size N x N for a non-negative integer N input. The letters are arranged in alphabetical order: from a to z, and after z, it continues from a again. The program will process all numbers entered from the standard input.

Example input:

3  
6  

Example output for the given input:

a b c  
f e d  
g h i  

a b c d e f  
l k j i h g  
m n o p q r  
x w v u t s  
y z a b c d  
j i h g f e  

## Task 7.3
Test the functions for working with strings presented in the lecture. Create your own array of strings, read them from the keyboard, and print it to the screen. Try to allocate only as much space as needed. At the end of the program, properly free the array of strings.

## Task 9.1
The cinema doorman was assigned the task of figuring out who visits the cinema most frequently. Help him by writing a program that does this for him. The input consists of names, each represented as a string without spaces. The output of the program will be a list of the names that visited the cinema most frequently. Assume that at most 100 different people go to the cinema (you can represent this as a static array).

Hint: You can use the strcmp() function from the string.h library for comparing strings.

## Task 9.2
Modify Task 9.1 so that the array used to store the names uses only as much space as necessary (represent it as a dynamic array). Properly free the array at the end of the program.

## Task 9.3
In Task 9.2, add a function hladaj_max() (the array will be passed as an input argument to the function), which will output the name that appeared most frequently in the cinema.

## all three tasks ale in one file -> 9_

## Task 10_
this file contains my final project from PrPr subject.
A C program that manages a grocery store inventory using a linked list. Users can add, delete, and display items.

Data Structures
Pocetnost (enum): Defines quantity type (pocet for pieces, hmotnost for weight).

Mnozstvo (union): Stores quantity as an integer or float.

Sortiment (struct): Represents an item with name, manufacturer, quantity, price, and a pointer to the next item.

Functions
funkcia_Pridaj(Sortiment **zoznam) – Adds a new item in sorted order.

funkciaZmaz(Sortiment **zoznam) – Deletes an item by name.

funkciaVypis(Sortiment *zoznam) – Displays all items.

Main Program
Runs a loop where users can:

'v' – View inventory

'p' – Add item

'z' – Delete item

Handles dynamic memory allocation and linked list management.