#include<iostream.h>
long factorial (long  n){
 long f;
 if (n==0)
return 1;
f=n*factorial(n-1);
return f;
}
int main(){
	long n;
	cin>>n;
	cout<<factorial(n)<<endl;
	return 0;
}