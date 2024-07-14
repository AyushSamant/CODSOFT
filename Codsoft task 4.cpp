#include<iostream>
#include<string>
using namespace std;
void additem(string* work,string list[100],int& size);
void viewitem(const string list[100],int size);
void deleteitem(string list[],int& size);
int main(){
	cout<<"                     Welcome to To-Do List of the Day!"<<endl;
	cout<<endl;
	cout<<"\n                              Options : "<<endl;
	cout<<endl;
	cout<<"                                        1) Add items to the list."<<endl;
	cout<<endl;
	cout<<"                                        2) View items of the list."<<endl;
	cout<<endl;
	cout<<"                                        3) Delete items of the list."<<endl;
	cout<<endl;
	int choice;
	cout<<"Enter your choice : ";
	cin>>choice;
	cout<<endl;
	
	string list[100];
	int size=0;
	while(choice!=4){
		switch(choice){
			case 1:{
					cout<<"Enter work to add in the To-Do list :"<<endl;
					string work;
					cin>>work;
					additem(&work,list,size);
					break;
				}
			case 2:
					viewitem(list,size);
					break;
			case 3:
					deleteitem(list,size);
					break;
			default:
					cout<<"Invalid choice."<<endl;
					break;
		}
		cout<<endl;
		cout<<"Enter your choice (or 4 exit) : ";
		cin>>choice;
		cout<<endl;
	}
	return 0;
}
void additem(string* work,string list[100],int& size){
	if(size<100){
		list[size]=*new string(*work);
		size++;
		cout<<"Item added successfully."<<endl;
	}else{
		cout<<"List is full."<<endl;
	}
}
void viewitem(const string list[100],int size){
	if(size==0){
		cout<<"The list is empty."<<endl;
	}else{
		cout<<"Your To-Do list : "<<endl;
		for(int i=0;i<size;i++){
			cout<<i+1<<"."<<list[i]<<endl;
		}
	}
}
void deleteitem(string list[],int &size){
	if(size==0){
		cout<<"The list is empty."<<endl;
		return;
	}
	int index;
	cout<<"Enter the index of the item to remove : "<<endl;
	cin>>index;
	if(index<1 || index>size){
		cout<<"Invalid index."<<endl;
		return;
	}
	for(int i=index-1;i<size-1;i++){
		list[i]=list[i+1];
	}
	size--;
	cout<<"Item deleted successfully."<<endl;
}
