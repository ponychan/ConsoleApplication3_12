// ConsoleApplication312.cpp: 定义控制台应用程序的入口点。
//引用传递交换两个整数

#include "stdafx.h"
#include<iostream>
using namespace std;

//交换子函数
void swap(int &a, int &b) {
	int t = a;
	a = b;
	b = t;
}

int main()
{
	int x = 5, y = 10;
	cout << "x=" << x << " y=" << y << endl;
	swap(x, y);
	cout << "x=" << x << " y=" << y << endl;
	return 0;
}

