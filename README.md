# Welcome

So, Welcome to my C Function Libary, first a little bit about me, I'm a 16 year old HTL-Student, a Otaku and a really weird person :D. 
In the moment, I write that, I learn Programming, so I wanted to make a Libary for the things I learn and then I thinked "Someone could help that maybe" and decided to upload it to github and here it is now.
So here is DiamondFunctions the C Libary (still work in Progress, but maybe it'll help anyway.).


# DiamondFunctions
Eine Funktion Sammlung für C (W.I.P)

Made by Alessandro Schwaiger/aless2003/Diamond
# Fuctions:
`deleteSpace(char[])` wants a String (char Array) and Delete every Space Character in the String.

`Copyright(void)` doesn't need anything, just prints my Profile Picture and my Name :D

`checkFile(FILE *fp)` expect to get a FILE Pointer and checks if the File exists the Pointer is pointing to. returns a bool variable(true = File exist, false = File doesn't exist)

`selectionSort(int Array[], int size)`, `insertionSort(int Array[], int size)` and `bubbleSort(int Array[], int size)` expecting an int Array and the size of the Array. They will sort the Array from low to big (bsp. 1, 8, 19,...). Inform yourself which sort Algorithm is the best for your use.

`stringToUpper(char Letters[])` needs a String of Letters and if there is a small letter (bsp. a, x, t, ...) it will converted to a big letter (bsp. A, X, T, ...).

`printIntArray(int Array[], int size)` wants a int Array and the size of the Array, then it prints the whole Array (it looks like that: 1, 8, 43, 9,...)

`printFloatArray(float Array[], int size)` wants a float Array and the size of the Array, then it prints the whole Array (it looks like that: 1.40547, 8.78941, 43.78613, 9.8794, ...)

`printString(char Array[])` wants a char Array (String) and prints the whole String (looks like that: DiamondCoder)

`getAverageInt(int Array[], int size)` needs a int Array and the size of the Array, after that it calculate the average Value and returns it through a float.

`getAverageFloat(float Array[], int size)`needs a float Array and the size of the Array, after that it calculate the average Value and returns it through a float.

`rounding(float *x)` needs the address of the variable (bsp round(&variable)), this is then rounded up or down

`faculty(int number)` needs an int value and returns the faculty of it as a double (max int value = 170)

`println(char String[])` prints the char Array(String) and makes a new line (\n) after the String, so you don't have to do it.

`consoleWait()` let's wait the Console for an Input from the User (Very useful so that CMD doesn't close after completing whatever the Program do.)