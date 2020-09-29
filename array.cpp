#include <iostream>
#include <iomanip>
using namespace std;
void display(int salary[], int num);
int cal_bonus(int salary);
int main()
{
	int num;
	cout << "Enter Number of person : ";
	cin >> num;
	int *salary = new int[num];
	for(int i = 0 ; i < num ; i++){
		cout << "Enter the salary " << i+1 << " : ";
		cin >> salary[i];
	}
	display(salary, num);
	return 0;
}
void display(int salary[], int num){
	int *bonus = new int[num];
	cout << setfill('-') << setw(50) << "-" << endl;
	cout << "There are " << num << " person." << endl;
	for(int i = 0 ; i < num ; i++){
		bonus[i] = cal_bonus(salary[i]);
		cout << "The Salary for person " << i+1 << " = " << salary[i] 
		<< " and Bonus = " << bonus[i] << endl;
	}
	cout << setfill('-') << setw(50) << "-" << endl;
}
int cal_bonus(int salary){
	int bonus;
	bonus = salary * 2;
	return bonus;
}