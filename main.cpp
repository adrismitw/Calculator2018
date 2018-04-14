/* Assignment 4: Calculator2
* Adrianna Smith
* MAIN.cpp*/

#include "Caclulator.cpp"
#include <stddef.h>
#include <iostream>
#include <stdexcept>

int main{
	//Variables
	char *ans, *exp, alphabet[26];
	Calculator calc;
	int ansExp, var;
	alphabet="abcdefghijklmnopqrstuvwxyz";
	
	//Intro
	cout<<"Hello, I'm a calculator and I calculate things.\n";
	cout<<"Do you want to enter an expression?(y)es or (n)o\n";
	cin>>ans;
	
	//Program
	while(ans=='y' | ans=='Y' | ans=='yes'){
		cout<<"Please enter your expression: \n";
		cin>>exp;
	
		//if the expression contains any type of variable
		if(exp ==alphabet){
			cout<<"Set value of variable please\n";
			cin>>var;
		}else{
			//otherwise calculate the solution
			cout<<"The answer is...";
			ansExp=calc.findSol(exp);
		}
	
		cout<<"%d", ansExp;
		cout<<"Do you want to put in another expression?\n";
		cin>>ans;
	}
	
	//exit program
	cout<<"Thanks for opening up the program. Goodbye!\n";
}
