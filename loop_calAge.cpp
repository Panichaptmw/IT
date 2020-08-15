#include <iostream>
using namespace std;
int calAge(int); // A function that I created myself for calculate 
// value
int yearCount;
int yearIn;
int thisyear = 2563;

int main() {
    cout << "Multiple Age Calculate Program " << endl << endl;
    cout << "Please determine how many year you want to calculate : ";  //year count
    cin >> yearCount;
    cout << "=============================================================" << endl;
    //Year for loop
    for (int i = 1; i <= yearCount; i++)
    {
        cout << "Enter year : " << i << ": ";
        cin >> yearIn;
        cout << "Age : " << i << ": " << calAge(yearIn) << endl; 

    }
    cout << endl << "Thank you." << endl;
    system("pause");
    return 0;
}

// FUNCTION CalAge 
int calAge(int year) {
    thisyear = (2563 - year);
    return (thisyear);
}