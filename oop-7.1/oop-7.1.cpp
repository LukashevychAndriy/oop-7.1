#include <iostream>
#include <array>
#include <ctime>

using namespace std;

void create(array <int, 100>& arr, int n)
{
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 100;
	}
}

void print(array <int, 100> arr, int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void printMaxAndMinIdxs(array <int, 100>& arr, int n)
{
	int maxIdx = 0;
	int maxNum = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] > arr[maxIdx]) {
			maxIdx = i;
			maxNum = arr[maxIdx];
		}
	}

	int minIdx = 0;
	int minNum = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] < arr[minIdx]) {
			minIdx = i;
			minNum = arr[minIdx];
		}
	}

	cout << "Max num idx: " << maxIdx << endl << "Min num idx: " << minIdx << endl;
}


int main()
{
	srand((unsigned int)time(NULL));

	int n;
	cout << "n = "; cin >> n;

	array <int, 100> arr = { 0 };
	create(arr, n);
	print(arr, n);
	printMaxAndMinIdxs(arr, n);

	return 0;
}