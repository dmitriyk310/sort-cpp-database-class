#include <iostream>

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void PrintArray(int arr[], int l) {
	int i;
	for (i = 0; i < l; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

void InsertSort(int arr[], int l) {
	int i, key, j;
	for (i = 1; i < l; i++) {
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

void selectionSort(int arr[], int n)
{
	int i, j, min_idx;

	for (i = 0; i < n - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < n; j++)
			if (arr[j] < arr[min_idx])
				min_idx = j;

		swap(&arr[min_idx], &arr[i]);
	}
}

void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)

		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);

}

int main() {
	int arr[] = { 60,40,12,30,24,90,5,16 };
	int n =  sizeof(arr) / sizeof(arr[0]);
	int x;
	bubbleSort(arr, n);
	PrintArray(arr, n);

	std::cin >> x;
	return 0;
}