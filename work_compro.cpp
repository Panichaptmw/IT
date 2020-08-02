// HOMEWORK 3 BY PANICHA PATTAMAWARAWONG - SEC A
#include <iostream>
using namespace std;
int main()
{
	short mid, final;
	float fst, sec, thr, total, average_quizz;
	//INPUT//
	cout << "========================QUIZZES========================" << "\n";
	cout << "Enter first quizz (10) : ";
	cin >> fst;
	cout << "Enter second quizz(10) : ";
	cin >> sec;
	cout << "Enter third quizz (10) : ";
	cin >> thr;
	cout << "========================MID-TERM========================" << "\n";
	cout << "Enter mid term (40) : ";
	cin >> mid;
	cout << "========================FINAL===========================" << "\n";
	cout << "Enter final (50) : ";
	cin >> final;
	//for calculate//
	average_quizz = (fst + sec + thr) / 3;
	total = (average_quizz + mid + final);
	//OUTPUT//
	cout << "Quizz Total : " << average_quizz << endl;
	cout << "Mid term  : " << mid << endl;
	cout << "Final : " << final << endl;
	cout << "Total : " << total << endl;
	cout << "Your score is : " << ( total >= 60 ? "PASS " : "FAIL " ) << endl;
	system("pause");
	return 0;
}