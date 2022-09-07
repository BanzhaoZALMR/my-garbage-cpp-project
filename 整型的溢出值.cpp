#include <iostream>
using namespace std;
int main()   {

	short shortMin = -32769;
	short shortMax = 32768;
	unsigned short ushortMin = -1;
	unsigned short ushortMax = 65536;
	int intMin = -2147483647 - 2;
	int intMax = 2147483648;
    unsigned int uintMin = -1;
	unsigned int uintMax = 4294967296;
	long int longMin = -2147483647 - 2;
	long int longMax = 2147483648;
	unsigned long int ulongMin = -1;
    unsigned long int ulongMax = 4294967296;
	cout <<"short下溢值："<<shortMin<<",上溢值："<<shortMax<<endl;
	cout <<"unsigned short下溢值："<<ushortMin<<"，上溢值："<<ushortMax<<endl;
    cout <<"int下溢值："<<intMin<<"，上溢值："<<intMax<<endl;
	cout <<"unsigned int下溢值："<<uintMin<<",上溢值："<<uintMax<<endl;
	cout <<"long int下溢值："<<longMin<<",上溢值："<<longMax<<endl;
	cout <<"unsigned long int下溢值："<<ulongMin<<"，上溢值："<<ulongMax<<endl;
	
    
	
	
	
	
	
	
	
}
