#include<iostream.h>
int main(){
    int n,n1,n2,n3,i;
    cout<<"Enter the range";
    cin>>n;
    n1 = 0;
    n2= 1;
    if(n<=0){
       cout<<"It is an invalid range..";
       }
    else{
       cout<<n1<<endl<<n2<<endl;
       for(i=0;i<n-2;i++){
		n3 = n1 + n2;
		cout<<n3<<endl;
		n1 = n2;
		n2 = n3;
       }
    }
return 0;
}
