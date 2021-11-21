#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using std::cout;
using std::cin;
using std::endl;
void swap(int *xp, int *yp)   //swap function
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = 0; j < n - i -1 ; j++)
	{
		if(arr[j] > arr[j+1])
		{
			swap(&arr[j], &arr[j+1]);
		}
		
	}
	}
}

void PrintArray(int arr[], int n)
{
	for(int i=0; i < n; i++)
	{
		cout << arr[i] << endl;
	}
}

int main(int argc, char** argv) 
{
	int arr[] = {3, 5, 1, 2, 7, 8, 20, 21, 1, 1, 4};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	bubbleSort(arr, n);
	PrintArray(arr, n);
	return 0;
}
