#include <iostream>
#include <windows.h>
using namespace std;

int factorial(int num1);

int main(){
	int num[1000], num1;
	int n;
	cout<<"este programa mostrara la serie de fibonacci, inserte los numeros a mostrar"<<endl;
	cin>>n;
	if(n<0)
	{
		cout<<"no valido"<<endl;
	}
	else
	{
	num[0]=0;
	num[1]=1;
	cout<<num[0]<<endl<<num[1]<<endl;
	for(int i=2;i<n;i++)
	{
	num[i]=num[i-1]+num[i-2];
	cout<<num[i]<<endl;

	
	}
	}
	cout<<"numero: ";
	cin>>num;
	cout<<factorial(num1);

		system("pause");
			return 0;
}

int factorial(int num1){
	acum=1;
	for(int i=1; i<=num1; i++){
		acum=acum*i;
	}
	return acum;
}
