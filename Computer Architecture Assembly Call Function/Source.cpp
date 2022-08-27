#include <iostream>
using namespace std;

int _stdcall myFunc(int x, int y)
{
	cout << x << " + " << y << " = ";
	cout << x + y << endl;
	return x + y;
}
void main()
{
	int z;
	_asm
	{
		push 8
		push 3
		call myFunc
		//add sp,8
		mov z,eax
	}
	cout << z << endl;
}