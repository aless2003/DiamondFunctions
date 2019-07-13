#ifndef COPYRIGHT_LIBRARY_H
#define COPYRIGHT_LIBRARY_H
#include "DiamondFunctions.c"
#include <stdbool.h>

//Copyright by Alessandro Schwaiger/aless2003/Diamond

void Copyright(void);
bool checkFile(FILE *);
void selectionSort(int[], int);
void deleteSpace(char[]);
void bubbleSort(int[], int);
void insertionSort(int[], int);
void stringToUpper(char[]);
void printIntArray(int[], int);
void printFloatArray(float[], int);
void printString(char[]);
float getAverageInt(int[], int);
float getAverageFloat(float[], int);
void round(float*);
double faculty(int);
void println(char[]);
#endif