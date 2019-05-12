//***************************************************
// Program:lab1_3
// Author: Joel Salisbury
// Date: January 28, 2014
// Lab: #1
// Description: accepts two values examScore and labScore average and exam average
// If examScore is greater than or equal to 60 and labScores greater than or equal to 80.
// Then "you passed" 
// If examScore is greater than or equal to 60 and labScore less than 80 
// Then "passing the course depends on final lab exam"
// Else "failed"
//
//***************************************************
#include <iostream>
using namespace std;

int main()
{
	const float passExam=60;
	const float passLab=80;
	float examScore=0; // exam average
	float labScore=0; // lab average

	cout << "Enter lab average and exam average in that order\n";

	cin >> labScore >> examScore;

	if(examScore>=passExam)
		{
		if(labScore>=passLab)
		{
		cout << "Passed\n";
		}else{
			cout << "Passing the course is dependent on lab final\n";
		}
	}else{
		cout << "failed\n";
	}
	return 0;
}

