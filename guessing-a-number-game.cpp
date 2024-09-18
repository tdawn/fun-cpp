//Objective	: to create a "guess the number" game
//Rules		: - System will generate random number
//		  - User should make a guess, if the the guess is smaller or higher, the code will give feedback
//Input		: a guess
//Output	: feedback and number of attempts

#include <iostream>
#include <cstdlib>
#include <ctime>
 
using namespace std;

int main(){
	srand((int) time(0));
	
	int random_number, n, lb = 0, ub = 100, attempt = 1;
	
	random_number = rand() % 101;
	
	cout << "Welcome to GUESS THE NUMBER game!\n"
		<< "Choose any number within 0-100 to guess the number.\n\n";
	
	do{
		cout << "Enter your guess: ";
		cin >> n;
		
		if (n < lb || n > ub){
			cout << "Choose number within " << lb << " to " << ub << ".\n\n";
			continue;
		}
		
		if (n > random_number){
			ub = n;
			attempt++;
			cout << "Your guess is too high! Guess between "  << lb << " to " << ub << ".\n\n";
		} else if (n < random_number){
			lb = n;
			attempt++;
			cout << "Your guess is too low! Guess between " << lb << " to " << ub << ".\n\n";
		} else{
			cout << "Congratulations! The number is " << n << ".\n";
			cout << "You have tried " << attempt << " times.";
			break;
		}
	} while (1);
}
