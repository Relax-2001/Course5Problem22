#include <iostream>

using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

void ReadArray(int Arr[] , int& ArrayLength)
{
	
	cout << "Enter number of elements you want to fill the array with\n";
	cin >> ArrayLength;

	for (int i = 0 ; i <= ArrayLength -1 ; i++)
	{
		cout << "Enter element number " << i + 1 << "\n";
		cin >> Arr[i];
	}

}

void PrintArray(int Arr[], int ArrayLength)
{
	
	for (int i = 0; i <= ArrayLength - 1; i++)
		cout << Arr[i] << " ";

	cout << "\n";
}

int RepeatTime(int Arr[], int ArrayLength , int Number)
{
	int Counter = 0;

	for (int i = 0; i <= ArrayLength - 1; i++)
	{
		if (Arr[i] == Number)
		{
			Counter++;
		}
	}

	return Counter;
}


int main()
{

	int Arr[100] , ArrayLength = 0 , NumberToCheck =0;

	ReadArray(Arr , ArrayLength);
	
	NumberToCheck = ReadPositiveNumber("What number do you want to check it's repition ?");

	cout << "Original Array : ";
	PrintArray(Arr, ArrayLength);

	cout << "Number " << NumberToCheck; 
	cout << " Had repeated ";
	cout << RepeatTime(Arr, ArrayLength, NumberToCheck) << " Time(s)" << "\n";


}

