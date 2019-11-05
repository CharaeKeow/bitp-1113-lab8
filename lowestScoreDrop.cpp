/*A program to calculate the average of the four highest test scores.
  It asks the user for five test scores and then find the lowest score. 
  The input is validated to be between 0 and 100.
  The lowest score is then dropped and the average will be calculated for the
  remaining score.
*/

#include <iostream>
using namespace std;

void getScore(int&);
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);

int main() {
	int score1, score2, score3, score4, score5;
	getScore(score1);
	getScore(score2);
	getScore(score3);
	getScore(score4);
	getScore(score5);

	calcAverage(score1, score2, score3, score4, score5);
	return 0;
}

//Pass by ref
void getScore(int& temp) {
	static int count = 1; //Count which test it is
	while(1) {
		cout << "Please enter the test score for test " << count << endl;
		int input;
		cin >> input;
		if (input >= 0 && input <= 100) {
			temp = input;
			count++;
			break;
		}
		else {
			cout << "Invalid input! Try again" << endl;
		}
	}
}

void calcAverage(int score1, int score2, int score3, int score4, int score5) {
	double total = 0;
	int temp1 = score1, temp2 = score2, temp3 = score3, temp4 = score4, temp5 = score5;

	int lowest = findLowest(temp1, temp2, temp3, temp4, temp5);
	if (score1 != lowest) {
		total += score1;
	}
	if (score2 != lowest) {
		total += score2;
	}
	if (score3 != lowest) {
		total += score3;
	}
	if (score4 != lowest) {
		total += score4;
	}
	if (score5 != lowest) {
		total += score5;
	}
	cout << "\nThe average of the four highest score is: " << total / 4 << endl;
}

int findLowest(int score1, int score2, int score3, int score4, int score5) {
	int temp = score1;
	if (temp > score2) {
		temp = score2;
	}
	if (temp > score3) {
		temp = score3;
	}
	if (temp > score4) {
		temp = score4;
	}
	if (temp > score5) {
		temp = score5;
	}
	
	return temp;
}
