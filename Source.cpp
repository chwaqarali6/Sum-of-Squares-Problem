#include <iostream>
#include <conio.h>
using namespace std;

void main()
{
	//Initializing Variables
	int LowerLimit = 0, SumOfSquares = 0, Count = 0;

	//Taking Inputs
	cout << "Please Enter The Lower Limit:- ";
	cin >> LowerLimit;

	//Count Sum Of Squares 4 Times
	while (Count<4)
	{
		SumOfSquares = SumOfSquares + (LowerLimit*LowerLimit);
		LowerLimit++;
		Count++;
	}

	//Condition To Keep Taking Square And Adding Until The Sum Is Greater Than 100
	if (SumOfSquares <= 100)
	{
		while (SumOfSquares<100)
		{
			SumOfSquares = SumOfSquares + (LowerLimit*LowerLimit);
			LowerLimit++;
			Count++;
		}

	}

	//Giving Output
	cout << "\nTimes The Squares Added " << Count << endl;
	cout << "The Sum Of Squares Is " << SumOfSquares;

	_getch();
}