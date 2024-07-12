#include<iostream>
using namespace std;
int main(){
	cout<<"                               CALCULATOR"<<endl;
	cout<<endl;
	cout<<"	                       Choose the options: "<<endl;
	cout<<endl;
	cout<<"                               1) Perform Calculations."<<endl;
	cout<<"                               2) Exit."<<endl;
	cout<<"                               3) Exit main screen (Press enter)."<<endl;
	cout<<endl;
	int num1,num2,choice;
	char op;
	while(choice!=3){
	cout<<"\nEnter you choice : ";
	cin>>choice;
	cout<<endl;
		if(choice==1){
			cout<<"Enter number 1 : ";
			cin>>num1;
			cout<<endl;
			cout<<"Enter number 2 : ";
			cin>>num2;
			cout<<endl;
			cout<<"Enter Operator (+,-,/,*) : ";
			cin>>op;
			cout<<endl;
			switch(op){
				case '+':
					cout<<"The addition of num1 and num2 is :"<<endl;
					cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;	
					break;
				case '-':
					cout<<"The subtraction of num1 and num2 is :"<<endl;
					cout<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
					break;
				case '*':
					cout<<"The multiplication of num1 and num2 is :"<<endl;
					cout<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
					break;
				case '/':
					cout<<"The division of num1 and num2 is :"<<endl;
					cout<<num1<<" / "<<num2<<" = "<<num1/num2<<endl;
					break;
				default:
					cout<<"Invalid Operator"<<endl;
			}
		}
		else{
			cout<<"You exit the calculator."<<endl;
		}
	}
	return 0;
}
