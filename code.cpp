#include<iostream>
using namespace std;
int main(){
int num1, num2, result;
char op, ans;
Again:
cout<<"Enter first number: ";
cin>> num1;
cout<<"Enter the operator: ";
cin>>op;
cout<<"Enter second number: ";
cin>> num2;

switch(op){
case'+':
	result=num1+num2;
	cout<<result<<endl;
	break;
case'-':
	result=num1-num2;
	cout<<result<<endl;
	break;	
case'*':
	result=num1*num2;
	cout<<result<<endl;
	break;	
case'/':
	if(num2==0){
		cout<<"Cannot calculate"<<endl;
	}
	else{
	result=num1/num2;
	cout<<result<<endl;}
	break;	}
cout<<"Do you want to perform another calculation?(Y/N) ";
cin>>ans;
if(ans=='Y'){
	goto Again;
}	
	return 0;
}