#include<iostream>
using namespace std;
void main()
{
	short x, y = 1;
	cout << "Please enter your number : " << endl;
	cin >> x;
	_asm
	{
		cmp x,0
		je L2
		mov ax,y
		mov bx, x
		L1:
		mul bx
		dec bx
		cmp bx,0
		jne L1
	    mov y,ax
		L2:
		mov y,1
	}
	cout << "The result is : " << y << endl;
}