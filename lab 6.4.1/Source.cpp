
#include<iostream>
#include<iomanip>
#include<vector>

using namespace std;
int CreateArray(int* arr, const int size) {

	for (int i = 0; i < size; i++) {
		cout << "[" << i + 1 << "]" << ": ";
		cin >> arr[i];
	}
	return 0;
}

void Print(int* arr, const int size)
{
	for (int i = 0; i < size; i++)
		cout << "[" << setw(2) << arr[i] << " ] " << setw(4);
	cout << endl;

}

int Max(int* arr, int size) {
	int max = arr[size];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max) {
			max = arr[abs(i)];
		}
	}
	return max;
}

int PrintSumBetweenArrayZero(int arr[], int t)
{
	int i = 0;
	vector<int> A;

	int sum = 1;

	for (i = 0; i < t; i++) {
		if (arr[i] > 0) {
			i++;
			break;
		}
	}

	for (; i < t; i++) {

		if (arr[i] > 0) {
			A.push_back(sum);
			sum = 0;
		}

		else {
			sum += arr[abs(i)];
		}
	}

	for (int i = 0; i < A.size(); i++) {
		cout << "Find the sum of the array elements between the first and second positive elements = " << A[i] << ' ';
	}

	if (A.size() == 0)
		cout << "-1";

	return 0;
}

void Sort(int* arr, const int size)
{
	for (int i = 1; i < size; i++)
		for (int j = 0; j < size - i; j++)
			if ((arr[j] % 2) == 0)
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
}


int main() {

	const int size = 10;
	int arr[size];
	CreateArray(arr, size);
	Print(arr, size);
	cout << endl;
	cout << "Max =" << Max(arr, size);
	cout << endl;
	PrintSumBetweenArrayZero(arr, size);
	cout << endl;
	Print(arr, size);
	Sort(arr, size);
	cout << endl;
	Print(arr, size);
}
