#include <iostream>

void fib(int n){
	int a = 0, b = 1;
	std::cout << "Hello, World! People, look at your fibbonachi list: \n";
	for (int i = 1; i <= n; i++){
		std::cout << "N(" << i << "): " << a << std::endl;
		int next = a + b;
		a = b;
		b = next;
	}	
}	

int main(){
	int n;
	std::cout << "Hey! Enter N: ";
	std::cin >> n;

	fib(n);

	return 0;
}	
