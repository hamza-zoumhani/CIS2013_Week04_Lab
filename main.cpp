#include <iostream>
using namespace std;

void guess(){
	int guess = 0;
	cout << "Guess a number between 1 and 1000: ";
	cin >> guess;
	
	if(guess != number){
		cout << "You guessed wrong... << endl;
		return true;
	} else{
		return false;
	}
}



int main(){
	bool failed = true;
	int number = 73;
	int count = 0;
	int g;
	
	
	while(failed){
		count++;
		failed = guess();
		count++;
	}
	
	cout << "You guessed " << count << " times!" << endl;
	return 0;
}