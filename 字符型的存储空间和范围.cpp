#include<iostream>
using namespace std;
int main()  {
	
	cout <<"char的存储空间为"<< sizeof(char) <<"字节。"<<endl;
	cout <<"wchar_t的存储空间为"<< sizeof(wchar_t) <<"字节。"<<endl;
	
	char charMin = -128;
	char charMax = 127;
	wchar_t wcharMin = 0;
    wchar_t wcharMax =  65535;
	//由于打印字符会直接打印其所代表的字母或符号，为了观察数值范围需要将其转换为int类型
	cout <<"char的范围为"<< (int)charMin <<"到"<< (int)charMax << endl;
	cout <<"wchar_t的范围为"<< wcharMin <<"到"<<wcharMax<<endl;
	
	
	cout <<"char的范围为（反 面 教 材 不 加 i n t）"<< charMin <<"到"<< charMax << endl;	
	return 0;
	
	
	
	
	
	
	
}
