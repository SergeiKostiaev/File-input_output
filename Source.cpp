#include "Header.h"


int main()
{
	setlocale(LC_CTYPE, "rus");

	//Rec file
	char arr[10][20] = { 0 };
	int k = ReadFile("Тест.txt", &arr[0]);
	int len;


	for (int i = 0; i < k; i++)
	{
		len = strlen(arr[i]);
		printf_s("%d   %s\n", len, arr[i]);
	}

	WriteFile("Тест_перезапись.txt", &arr[0], k);

	return 0;
}