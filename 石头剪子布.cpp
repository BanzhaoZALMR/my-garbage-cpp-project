#include <iostream>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
int main() {
	//初始化唯一一个玩家需要用到的变量（
	int qwq=0;
	//初始化随机变量
	srand(time(0));
	//说明
	cout << "众所周知，石头剪刀布很好玩，所以今天咱们来整一整" << endl;
	cout << "tips:1是剪刀，2是石头，3是布"<<endl;
	//询问要出的是什么叼毛玩意儿
	cin >> qwq;
	//再定义机器人用的变量
    int sb=rand();
	int q = 1;
	int w = 2;
	int z = 3;
	int c = 0;
	int botxz=sb%3;
	//判定
	if(botxz==1){             //如果机器人出的是剪刀
		cout << "机器人出了剪刀！"<<endl;
		if(qwq==2){
			cout <<"你赢了！！！"<<endl;
			return 0;
		}
		else{
			if(qwq==3){
				cout <<"你输了！！！"<<endl;
				return 0;
			}else{
				if(qwq==1){
					cout << "平局！！！"<<endl;
					return 0;
				}else{
					cout << "可你出的什么玩意儿？"<<endl;
					return 0;
				}
			}
		}
	}
	if(botxz==2){                        //如果机器人出的是石头
		cout << "机器人出了石头！"<<endl;
		if(qwq==3){
			cout <<"你赢了！！！"<<endl;
			return 0;
		}
		else{
			if(qwq==1){
				cout <<"你输了！！！"<<endl;
				return 0;
			}else{
				if(qwq==2){
					cout << "平局！！！"<<endl;
					return 0;
				}else{
					cout << "可你出的什么玩意儿？"<<endl;
					return 0;
				}
			}
		}
	}
    if(botxz==3){                            //如果机器人吃的是布
		cout << "机器人出了布！"<<endl;
		if(qwq==1){
			cout <<"你赢了！！！"<<endl;
			return 0;
	}
		else{
		if(qwq==2){
			cout <<"你输了！！！"<<endl;
			return 0;
		}else{
			if(qwq==3){
				cout << "平局！！！"<<endl;
				return 0;
			}else{
				cout << "可你出的什么玩意儿？"<<endl;
				return 0;
			}
		}
		}
	}
	if(botxz==0){
		if(qwq>3){
			cout << "机器人出了"<<qwq<<"！"<<endl;
			cout << "平局！！！"<<endl;
			cout << "等一下，啥？？？？？？" <<endl;
			return 0;
		}else{
			//TODO
		}
		cout << "机器人出了"<<qwq<<"！"<<endl;
		cout << "平局！！！"<<endl;
		return 0;
		
	}
}
