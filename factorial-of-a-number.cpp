//Objective	: to calculate factorial of a number
//Input		: a number
//Output	: factorial result of the input number

#include <iostream>
using namespace std;

int main(){
	int n, fact = 1;
	
	cout << "Enter a number\t: ";
	cin >> n;
	
	for (int i = 1; i <= n; i++){
		fact *= i;
	}
	
	cout << "fact(" << n << ")\t\t: " << fact;
}
