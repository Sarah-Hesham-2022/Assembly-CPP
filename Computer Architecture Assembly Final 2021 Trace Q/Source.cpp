#include <iostream>
using namespace std;
void main()
{
	short resultBX = 0;
	_asm
	{
		mov ecx,10
		mov bx,0
		mov ax,1
		L1:
		push ax
	    and ax,8
		or bx,ax
		dec bx
		pop ax
		inc ax
		loop L1

	    mov resultBX,bx 

	}
	cout << resultBX << endl;
}