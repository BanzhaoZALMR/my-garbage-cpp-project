#include <iostream>
using namespace std;
int main()   {
	
	//整形的范围
	short shortMin=-32768;
    short shortMax=32767;
	unsigned short ushortMin=0;
	unsigned short ushortMax=65535;
	int intMin = -2147483647 - 1;//VS Studio编译器不能直接用-2147483648
	int intMax = 2147483647;	
	unsigned int uintMin = 0;
    unsigned int uintMax = 4294967295;
	long int longMain = -2147483647 - 1;
	long int longMax = 2147483647;
	unsigned long int ulongMin = 0;
	unsigned long int ulongMax = 4294967295;
	cout << "short的范围为" << shortMin << "到" << shortMax <<endl;
	cout <<"unsigned short的范围为"<<ushortMin<<"到"<<ushortMax<<endl;
	cout <<"int的范围为"<<intMin<<"到"<<intMax<<endl;
    cout <<"usigned int的范围为"<<uintMin<<"到"<<uintMax<<endl;
	cout <<"long int的范围为"<<longMain<<"到"<<longMax<<endl;
	cout <<"unsigned long int 的范围为"<<ulongMin<<"到"<<ulongMax<<endl;
	
}
