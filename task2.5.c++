Задача 12
#include <iostream>
using namespace std;
int main()
{
 int N;
    cout<<"Input number";
    cin>>N;
    int i=1;
    int summ=0;
    int K=0;
    while (summ<=N){
    	summ +=i;//1+2+3+4+... <=N
    	K=i-1;
    	cout<<i++;//2
	}
 cout<<"K="<<K;
}
Задача 17
#include <iostream>
using namespace std;
int main()
{
int n;
	cout<<"Input N:";
	cin>>n;
	while(n>0) {
		cout<<n%10<<endl;
		n/=10;
	}
}
Задача 18
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Input N:";
	cin>>n;	
	int summ=0;
	int num=0;
	while (n>0)	{
		++num;
		summ+=n%10;
		n/=10;
	}
	cout<<"Num:"<<num<<endl<<"Summ:"<<summ<<endl;
 }
Задача 24
#include <iostream>
using namespace std;
int main()
{
int n;
	cout<<"Input N:";
	cin>>n;	
	int f1=1, f2=1,f=0;
	while (f < n) {
		f=f2+f1;
		f2=f1;
		f1=f;
	}									 								                      
	if (f==n)
	cout<<"True";
	else 
	cout<<"false"; }
