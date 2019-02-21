#pragma once
// TODO: reference additional headers your program requires here
#include < iostream >
using namespace std;
// functiile afis_bin(unsigned int,int) respectiv  afis_binar(unsigned int,int)
// afiseaza numarul dat de parametrul 1 de tip unsigned int in format binar 
// numarul de biti afisati este dat de parametrul 2 de tip int
static void afis_bin(unsigned int n,int nb)
{
	/*system("COLOR 0B");*/

	int i,k;
	char val_b[32];
	if ((n > 0)&&(n <= 255))
		k=8;
	if ((n > 255)&&(n <= 65535))
		k=16;
	if ((n > 65535)&&(n <= 2147483646))
		k=32;
	if (nb > 0)
		k=nb;
	if (n > 2147483646){
		k=0;
		cout << "\nNumar prea mare";
	}
	for (i=0; i < k; i++){
		if (n%2==0)
			val_b[k-1-i]='0';
		else
			val_b[k-1-i]='1';
		n=n/2;
	}
	// afisare binara
	for (i=0; i < k; i++){
		if (val_b[i]=='0')
			cout << char(176) << " ";
		else
			cout << char(219) <<  " ";
	}
	// prompter pe prima pozitie
	for (i=0;i < (2*k+1); i++){
			cout<<"\b";
	}
}

static void afis_binar(unsigned int n,int nb)
{
	//system("COLOR 0B");
	int i,k;
	char val_b[32];
	if ((n > 0)&&( n <= 255))
		k=8;
	if ((n > 255)&&(n <= 65535))
		k=16;
	if ((n > 65535)&&(n <= 2147483646))
		k=32;
	if (nb>0)
		k=nb;
	if (n > 2147483646){
		k=0;
		cout << "\nNumar prea mare";
	}
	for (i=0; i < k; i++){
		if (n%2==0)
			val_b[k-1-i]='0';
		else
			val_b[k-1-i]='1';
		n=n/2;
	}
	// afisare binara
	for (i=0; i < k; i++){
		cout << val_b[i] << " ";
	}

	// prompter pe prima pozitie
	for (i=0;i < 2*k+1; i++){
			cout << "\b";
	}
}