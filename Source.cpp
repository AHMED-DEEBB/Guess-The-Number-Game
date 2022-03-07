#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;


bool isCorrect(int g, int a) {
	if (g == a)
	return true;

	if (g < a)
		cout << "\nToo Low, try again\n ";
	else
		cout << "\nToo High, try again\n ";
	return false;
}

void guessGame() {
	int answer, guess;
	char ch;
	
	do {
		answer = 1 + rand() % 1000;

		cout << "\n\tI have a number between 1 and 1000 \n can you guess it ?\n";
		cout << "\n Enter your response :  ";
		cin >> guess;

		while (!isCorrect(guess, answer)) {
			cout << "\n\nwrong.. try again ";
			cin >> guess;
		}

		cout << "\n\tExcellent. ";

		cout << "\n\nTo play again type (Y).. or end (N)\n";
		cin >> ch;
	} while (ch != 'n' && ch != 'N');
}



int main() {

	srand(time_t(0));
	guessGame();

	system("pause");
	return 0;
}