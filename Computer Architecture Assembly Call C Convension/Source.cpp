#include<iostream>
using namespace std;

int f1(int x, int y)
{
	return x - y;
}

void main()
{
	int z;
	_asm {
		push 7
		push 10
		call f1
		add esp,8
		mov z,eax
	}
	cout << z << endl;
}