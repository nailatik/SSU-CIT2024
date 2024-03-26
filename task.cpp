#include <iostream>

int fib(int n){
	if(n == 0 || n == 1){
		return n;
	}
	return fib(n-1) + fib(n-2);
}

int main(){
	int n;
	std::cout << "Enter N: ";
	std::cin >> n;
	std::cout << "Hello, World! People, look at your fibbonachi " << "(n = " << n << "):" << '\t' << fib(n) << '\n';

	return 0;
}	

