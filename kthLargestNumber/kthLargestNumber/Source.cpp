#include <iostream>
using namespace std;
void customSort(int myArray[], int n);
void customSwap(int* i, int* j);
int main()
{

	int myArray[] = {1, 3, 4, 6, 7, 9, 89};




	system("pause");
	return 0;
}
void customSort(int myArray[], int n)
{
	
}
void customSwap(int* i, int* j)
{
	int temp = *i;
	*i = *j;
	*j = temp;
}