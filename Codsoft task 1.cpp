#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	int number,guess,tries=0;
	srand(static_cast<unsigned int>(time(0)));
	number=rand()%100+1;
	cout<<"                  Welcome to the Number Hunt: Captures the essence of searching for the hidden number."<<endl;
	cout<<endl;
	cout<<"                  Enter you Choice: "<<endl;
	cout<<endl;
	cout<<"                                   1) Start the Number hunt!"<<endl;
	cout<<"                                   2) Exit!"<<endl;
	int choice;
	cout<<"Your choice >> ";
	cout<<endl;
	cin>>choice;
	if(choice==1){
		do{
			cout<<"Guess the number between 1-100000"<<endl;
			cout<<endl;
			cout<<"Enter your Guess: ";
			cin>>guess;
			tries++;
		
			if(guess>number){
				cout<<"You guessed too high!"<<endl;
			}else if(guess<number){
				cout<<"You guessed too low!"<<endl;
			}
		}while(guess!=number);
			cout<<"Congratulatios!You guessed the correct number("<<number<<") in "<<tries<<" tries"<<endl;
	}else if (choice==2){
			cout<<"You exit the game!!"<<endl;
	}else{
			cout<<"Invalid"<<endl;
	}
		return 0;
}

