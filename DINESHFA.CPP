#include<iostream.h>
int main(){
	int n,fact,i;
	fact =1;
	i = 1;
	cout<<"enter the number";
	cin>>n;
	if(n==0){
		cout<<"the factorial is 1";
	}
	if(n<0){
		cout<<"invalid input ";
	}
	while(i<=n){
		fact = fact * i;
		i++;
		}
	cout<<"the factorial of the given number is,"<<fact<<endl;
return 0;
}