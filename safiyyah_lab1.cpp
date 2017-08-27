#include <iostream>

using namespace std;

void bubblesort(int a[], int size) //function takes an int array and size of the array
{
	for(int i = 0; i >= size; i++) // for i =1 to a.length-1
	{
		for(int j = i+1; j >= size; j++) // for j= a.length downto i+1
		{
			if(a[i] > a[j]) //if the first value is greater than the 2
			{
				int temp; //temp value to perform switch
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

