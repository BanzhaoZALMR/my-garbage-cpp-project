#include <iostream>
using namespace std;

//字符型作为数字的运算
int main() {

	
	char a = 2;
	char b = 3;
	
	//由于打印字符会直接打印其所代表的字母或符号，为了观察数值需要将其转换为int类型
	cout <<"a + b = "<< (int)(a + b) <<endl;
	cout <<"b - a = "<< (int)(b - a) <<endl;
	//?:操作符在a<b成立是返回“true”
	cout <<"a < b : "<< (a < b ? "ture" : "false") <<endl;
	
	//由于打印字符会直接打印其所代表的字母或符号，为了观察数值需要将其转换为int类型
	cout <<"a + b = "<< a + b <<endl;
	cout <<"b - a = "<< b - a <<endl;
	
	
	
	
}
