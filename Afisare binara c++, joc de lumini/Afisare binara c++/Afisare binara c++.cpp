#include <stdafx.h>
#include <windows.h>
#include < iostream >
using namespace std;

int main(void)
{
	int a = 10;
	do
	{
	afis_bin(129,8);
	Sleep(100);
	afis_bin(66,8);
	Sleep(100);
	afis_bin(36,8);
	Sleep(100);
	afis_bin(24,8);
	Sleep(100);
	cin.clear();
	} while( a < 20 );
	cin.ignore();
	cin.get();	
	return 0;
}