#include <iostream>
#include <cstring>

using namespace std;

/*
 * CLion setup for CS2330 and basic program for testing
 * Wali Morris
 * 09/15/2020
 */
int main() {
    string userName;
    int userAge;
    string userBirthDate;
    
    cout << "Welcome to my story." << endl;
    cout << "please enter your name: ";
    cin >> userName;
    cout << "Nice to meet you " << userName << ", thanks for coming." << endl;
    cout << "Please enter your age: ";
    cin >> userAge;
    cout << "Please enter your birthdate in format mm/dd/year: ";
    cin >> userBirthDate;
    
    while ( userBirthDate.length() > 10 || userBirthDate.length() < 10 ) {
        cout << "Sorry this is the wrong birthday format." << endl;
        cout << "Please enter your birthdate in format mm/dd/year: ";
        cin >> userBirthDate;
    }
    
    cout << "Great thank you!" << endl;
    cout << "You were born " << userBirthDate << " and you are " << userAge << " years old." << endl;
    
    return 0;
}
