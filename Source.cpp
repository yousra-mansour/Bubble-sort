#include<iostream>
#include<time.h>
#include<cstdlib>

using namespace std;

void swap(int* xp, int* yp);
void BubbleSort(int arr[], int Size);
void print(int arr[], int Size);
int main()
{
	srand((unsigned)time(0));
	int arre[30];
	for (int i = 0; i < 30; i++)
		arre[i] = rand() % 50;
	print(arre, size(arre));
	BubbleSort(arre, size(arre));
	print(arre, size(arre));
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	print(arr, size(arr));
	BubbleSort(arr, size(arr));
	print(arr, size(arr));


	return 0;
}

void BubbleSort(int arr[], int Size)
{
	bool Swap;
	for (int i = 0; i < Size - 1; i++)
	{
		for (int j = 0; j < Size - 1 - i; j++)
		{
			Swap = false;
			if (arr[j] > arr[j + 1])
			{
				swap(&arr[j], &arr[j + 1]);
				Swap = true;
			}

		}
		if (Swap == false) // An optimized version of Bubble Sort
			break;
	}
}
void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void print(int arr[], int Size)
{
	for (int i = 0; i < Size; i++)
		cout << arr[i] << "  ";
	cout << endl;
}