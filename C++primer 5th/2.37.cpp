#include<iostream>
using namespace std;
int main(void){
	int a=3,b=4;
	decltype(a) c=a;
	decltype(a=b) d=a;
	cout<<c<<' '<<d<<endl;

	return 0;
}
