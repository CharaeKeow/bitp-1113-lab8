/* A simple program that accepts user input, either H for head or T for tail.
   Then simulate a coin toss to obtain either head (1) or tail (0).
   Then see if the user guess is right or not. 
*/

#include <iostream>
using namespace std;

int main() {
	char coin;
	cout << "Please choose either H (head) or T (tail):" << endl;
	cin >> coin;
	//Generate number between 1 and 10. Then divide by 10 to obtain either 1 or 0
	int random = rand() % 1 + 1;
	if ((coin == 'H' || coin == 'h') && random == 1) {
		cout << "You win!" << endl;
	}
	else if ((coin == 'T' || coin == 't') && random == 0) {
		cout << "You win" << endl;
	}
	else {
		cout << "You lose :P" << endl;
	}
	//cout << random;
  
	return 0;
}
