#include <iostream>
using namespace std;

void printTitle(int n){
	cout << "You have guessed " << n << " number of times!" << endl;
	cout << "Guess a number between 1 and 1000: ";
}

bool guess(int num, int cnt){
	int guess = 0;
	
	printTitle(cnt);
	cin >> guess;
	
	if(guess != num){
		cout << "You guessed wrong..." << endl;
		return true;
	} 
	else{
		return false;
	}
}



int main(){
	bool failed = true;
	int count = 0;
	int number = 73;
	
	while(failed){
		failed = guess(number, count);
		count++;
	}
	cout << "You guessed right!" << endl;
	cout << "It took you " << count << " times to get it right!" << endl;
	return 0;
}