// QuickSort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <new>

using namespace std;

void quickSorty(int arr2[], int left, int right) {

	int i = left;
	int j = right;
	int tmp;
	int pivot = arr2[(left + right) / 2];

	// Sorting

	while ( i <= j ){
		while (arr2[i] < pivot)
			i++;
		while (arr2[j] > pivot)
			j--;
		if (i <= j) {
			tmp = arr2[i];
			arr2[i] = arr2[j];
			arr2[j] = tmp;
			i++;
			j--;
		}
	}

	if (left < j)
		quickSorty(arr2, left, j);
	if (i < right)
		quickSorty(arr2, i, right);


} // v0.1

void QuickSort(int sortArray[], int start, int lenght) {

	int i = start;
	int j = lenght;
	int temp; // Temporar storage
	int pivot = sortArray[(start + lenght) / 2];

	//	starts from left < middle value
	while (sortArray[i] < pivot)
		i++;

	while (sortArray[j] > pivot)
		j--;

	if (i <= j) {
		temp = sortArray[i];
		sortArray[i] = sortArray[j];
		sortArray[j] = temp;
		i++;
		j--;
	}

	if (start < j)
		QuickSort(sortArray, start, j);
	if (i < lenght)
		QuickSort(sortArray, i, lenght);

}

int main()
{
	const int lenght = 10;
	int arr[lenght];

	// Initializing the array
	for (int i = 0; i < 14; i++)
	{
		arr[i] = 0;
	}

	// Taking in the array
	for (int i = 0; i < lenght; i++)
	{
		cout << i << ": ";
		cin >> arr[i];
		cout << endl;
	}
	
	// Sorting the array
	QuickSort(arr, 0, lenght);

	// Displaying the array.
	for (int i = 0; i < lenght; i++)
	{
		cout << arr[i] << " ";
	}

	system("PAUSE");
	
    return 0;
}

