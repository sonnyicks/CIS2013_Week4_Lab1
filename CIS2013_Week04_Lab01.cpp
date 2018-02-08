#include <iostream>
using namespace std;

int large_number = 1000;

void printStuff(int, int);
void printStuff(int);

int num = 0;

int main() {
	char stay = 'c';
	for (int i=0 ; i< 10; i++) {
		large_number = large_number + 1;
		printStuff(i, large_number);
		printStuff(i);
	}

	cin >> stay;
	return 0;
}
void printStuff(int num, int total) {
	cout << "printing x5  " << (num * 5) << " and total " << total << endl;
}

void printStuff(int num) {
	cout << "Printing x 5 " << (num * 5) << " and no total was given" << endl;
}

//Next Homework - CIS2013_Week04_Homework1 add modulus and square root
//Next Homework - CIS2013_Week04_Homework2 update blackjack - pull out into functions - print out 2-10; J, Q, K, A (=1 OR 11)