#include <iostream>
using namespace std;
template<typename T>

void reverse(const T list[], double newList[], double size)
{
	for (int i = 0, j = size - 1; i < size; i++, j--) {
		T currentElemenst = list[i];
		newList[j] = list[i];
	}
}
template<typename T>
void printArray(const T list[], int size)
{
	for (int i = 0; i < size; i++)
		cout << list[i] << " ";
}

int main()
{
	const int size = 6;
	double list[] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6 };
	double newList[size];
	reverse(list, newList, size);
	cout << "The original array: ";
	printArray(list, size);
	cout << endl;
	cout << "The reversed array: ";
	printArray(newList, size);
	cout << endl;

	system("pause");
	return 0;
}