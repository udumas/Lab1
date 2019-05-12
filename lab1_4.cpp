//***************************************************
// Program:
// Author: Joel Salisbury
// Date:
// Lab: #1
// Description: program prompts the user to enter 
// integer values value.
// value is stored in variable numberEntered Value
// IF numberEntered < 0 print sum of prior iterations 
// If numberEntered >= 0 Count equals count + 1
// If value % 2 = 0 Set the isOdd Boolean to TRUE
// Count equals count + 1
// print numberEntered
// If isOdd is TRUE print ODD
//***************************************************
#include <iostream>
using namespace std;


int main(){
	bool isOdd=false;
	int numberEntered=0;
	int count=0;
	cout << "Enter Numbers to be have odd values counted\n";
	cin >> numberEntered;

	while (numberEntered>=0)
	{
		if(numberEntered%2==0){
			isOdd=false;

		}else{
			isOdd=true;
			count++;
			cout << numberEntered << " odd\n";
		}
		cout << "Enter Numbers to be have odd values counted\n";
		cin >> numberEntered;

	}
	cout << "You have Entered " << count << " odd numbers\n";
	return 0;
}