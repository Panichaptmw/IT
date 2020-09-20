#include <iostream>
#include <time.h>
using namespace std;
int i = 1;
int RanNum,MyNum;
int Guess(int RanNum);
int main()
{
	srand(time(NULL));
	RanNum = 1 + rand() % 10;
	i = Guess(RanNum);
	cout << "The secret number is " << RanNum << endl;
	cout << "You made " << i << " guesses" << endl;
	return 0;
}

// create function

int Guess(int RanNum){
	bool check = true;
	cout << "###Welcome to guessing number game###\n";
	cout << "Secret number has been chosen" << endl;
		do{
			cout << "Guess the number (1 to 10 ) : "; 
			cin >> MyNum;
			if(RanNum == MyNum){
				cout << "Congratulations!" << endl;
				check = false;
				}
			else if(RanNum < MyNum){
				cout << "The secret number is higher" << endl; 
				i += 1;
				}
			else if(RanNum > MyNum){
				cout << "The secret number is lower" << endl;
				i += 1;
				}
			else if(MyNum > 10){
				cout << "Sorry, This program is limit for 1-10 only.\n";
				cout << "Guess the number (1 to 10) = ";
				i += 1;
				}
     }while(check);
		return i;
	}	