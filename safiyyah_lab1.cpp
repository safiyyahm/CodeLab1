#include <iostream>
#include <string>
#include <stdio.h>
#include <cstring>
#define N 120

using namespace std;

void bubblesort(int a[], int size) //function takes an int array and size of the array
{
	for(int i = 0; i < size-1 ; i++) // for i =1 to a.length-1
	{
		for(int j = i+1; j < size; j++) // for j= a.length downto i+1
		{
			if(a[i] > a[j]) //if the first value is greater than the 2
			{
				int temp; //temp value to perform switch
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
				cout << a[i] << endl;
			}
		}
	}
	return;	
}

void bubblesort2(char b[][N], int size) //function takes a char array and size of the array
{
	char temp[N]; //temp array to hold value for switch

	for(int i = 0; i < size-1; i++) //for i = 1 to b.length-1
	{
		for(int j = i+1; j < size; j++) //for j = a.length downto i+1
		{
			if(strcmp(b[i], b[j]) > 0) //compare 2 strings, 1st string has a greater value than 2nd
			{
				strcpy(temp, b[i]); //statements to perform switch, strcpy copies value of second string & places in first string
				strcpy(b[i], b[j]);
				strcpy(b[j], temp);
			}
		}
	}
	return;
}

int main()
{
	int num; //num = number of names user wants to enter; array = for user input

	cout << "How many names would you like to sort? "; //user input
	cin >> num;

	char array[num][N]; //char array (array of strings) num = number of strings; N = max size of strings

	for(int k = 0; k < num; k++) //for loop to repeat statement for user input
	{
		cout << "Enter the name: "; //user input
		cin >> array[k];
	}

	cout << "\n **** Printing unsorted array **** " << endl;

	for(int m = 0; m < num; m++) //for loop to print unsorted array
	{
		cout << array[m] << " ";
	}

	cout << "\n";

	bubblesort2(array, num); //sort strings given in user input

	cout << "\n **** Printing sorted array **** " << endl;

	for(int l = 0; l < num; l++) //for loop to print sorted array
	{
		cout << array[l] << " ";
	}

}