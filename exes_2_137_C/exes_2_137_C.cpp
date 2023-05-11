#include <iostream>
using namespace std;

int ling[33] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32}; //array of integers to hold values
int n = 33;
int elmt_wants;
int lower = 0;
int upper = n - 1;
int mid;

void display () 
{
	if (ling[mid] == elmt_wants)
	{
		cout << "found" << endl;
	}
	else
	{
		cout << "not found" << endl;
	}
	
}

void setbatas (int atas, int bawah) 
{
	mid = (atas + bawah) / 2;
	if (ling[mid] == elmt_wants)
	{
		return;
	}
	if (elmt_wants < ling[mid])
	{
		atas = mid - 1;
	}
	if (elmt_wants > ling[mid])
	{
		bawah = mid + 1;
	}
	if (bawah <= atas)
	{
		setbatas(atas, bawah);
	}
}

int main()
{
	cout << "element = ";
	cin >> elmt_wants;
	setbatas(upper, lower);
	display();
}