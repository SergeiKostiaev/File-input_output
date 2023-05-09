#pragma once
#pragma warning(disable: 4996)

#include "stdio.h"
#include "windows.h"
#include <time.h>
#include <math.h>
#include <iostream>
#include "conio.h"
#include <fileapi.h>
#include <stdlib.h>
#include <fstream>
#include <string>

using namespace std;

int ReadFile(const char* name, char arr[][20])
{

	FILE *file;
	file = fopen(name, "r");
	if (file == NULL)
	{
		printf_s("File %s is missing!\n", name);
		cin.get();
		return 0;
	}
	else
	{
		int k = 0;
		while (feof(file) == 0)
		{
			fgets(arr[k], 20, file);
			k++;
		}
		fclose(file);
		return k;
	}

}

void WriteFile(const char* name, char arr[][20], int k)
{
	FILE* file;
	file = fopen(name, "w");

	for (int i = 0; i < k; i++)
	{
		fputs(arr[i], file);
	}
	fclose(file);
	cout << "\n\n File " << name << " written!\n";

}
