#include <iostream>
using namespace std;

void get_c(int a, int b, int n){
	for (int i = 2; i <= n; i++){
		int c = a + b;
		a = b;
		b = c;
		cout << c << " ";
	}
}

int main(){
	int a = 0, b = 1, n;
	cout << "Enter number of sequences: ";
	cin >> n;
	cout << "Fibonacci sequence containing " << n << " numbers is\n";
	cout << a << " ";
	cout << b << " ";
	
	get_c(a, b, n);
}
