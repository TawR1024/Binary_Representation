#pragma once
#include <iostream>
#include <cstdlib>

#define INT sizeof(int)
#define L_INT sizeof(long int)
#define LL_INT sizeof(long long int)
#define CHR sizeof(char)
#define DBL sizeof(double)
#define FLT sizeof(float)
#define SHRT sizeof(short int)



void PrintNum(void *num, short int TypeSize);
void BinaryShift(void *num, short int TypeSize, bool bitState, unsigned short int startBit, unsigned short int stopBit);
void about();