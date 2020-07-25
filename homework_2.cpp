// HOMEWORK COMPRO_2 //
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string name;
	signed long salary, sale;
	float commiss, commissper, extra_mon, total;
	/* --------------------------------------------------------------------------*/
	// INPUT //
	cout << "Enter Name : ";
	     getline(cin, name);
	cout << "Enter Salary : ";
	     cin >> salary;
	cout << "Enter Sale : ";
	     cin >> sale;
	cout << "Enter Commission Percent : ";
	     cin >> commiss;
	cout << "---------------------------------------------------------------------" << endl;
	/* --------------------------------------------------------------------------*/
	commissper = (commiss / 100);
	extra_mon = (sale * commissper);            // for calculate
	total = salary + extra_mon;
	/* --------------------------------------------------------------------------*/
	// OUTPUT //
	cout << "Your name = " << name << endl;
	cout << "Total Revenue = " << total << " baht " << endl;
	cout << "---------------------------------------------------------------------" << endl;

}