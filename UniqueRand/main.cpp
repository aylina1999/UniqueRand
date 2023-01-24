#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		bool unique;
		do
		{
			arr[i] = rand() % (80 - 70) + 70;
			unique = true; //Предположим, что сгенерировалось уникальное случайное число, но это нужно проверить
			for (int j = 0; j < i; j++)
			{
				//arr[i] - выбранный элемент
				//arr[j] - перебираемый элемент
				if (arr[i] == arr[j])
				{
					unique = false;
					break;
				}
			}
		} while (!unique);
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}