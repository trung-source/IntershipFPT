#include<iostream>

using namespace std;

void swap(int &evenNumber, int &oddNumber)
{
	int temp = evenNumber;
	evenNumber = oddNumber;
	oddNumber = temp;
	}

int main(int argc, char *argv[])
{
	int evenNumber = 2;
	int oddNumber = 3;
	cout << "evenNumber: " << evenNumber << " ,oddNumber : " << oddNumber << endl;
	swap(evenNumber, oddNumber);
	cout << "evenNumber: " << evenNumber << " ,oddNumber : " << oddNumber<< endl;
	return 0;
}
