// Adunare matrici.cpp : main project file.

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int i;//Numara coloanele
	int j;//Numara randurile
	int n;//Numarul maxim de coloane
	int m;//Numarul maxim de randuri
	int nr;
	int m1[10][10], m2[10][10];//declaram cele 2 matrici
	cout<<"Introduceti numarul de coloane:";
	cin>>n;
	cout<<"Introduceti numarul de randuri:";
	cin>>m;

	//Generare matrice m1
	for(j=0;j<m;j++)
	{
		for(i=0;i<n;i++)
		{
			nr=rand();
			m1[i][j]=1000*nr/RAND_MAX; // pentru a genera numere intre 0-1000
		}
	}

	//Generare matrice m2
	for (j=0; j < n; j++) 
	{
		for (i=0;i < n;i++)
		{
			m2[i][j]= 1000*rand()/RAND_MAX ; // pentru a genera numere intre 0-1000
		}
	}

	//Afisarea celor doua matrici
	cout<<"Prima matrice este:";
	for(j=0;j<m;j++)
	{
		cout<<"\n\n";
		for(i=0;i<n;i++)
		{
			cout<<m1[i][j]<<"\t";
		}
	}

	cout<<"\n\nA doua matrice este:";
	for(j=0;j<m;j++)
	{
		cout<<"\n\n";
		for(i=0;i<n;i++)
		{
			cout<<m2[i][j]<<"\t";
		}
	}

	//Adunarea celor doua matrici
	cout<<"\n\nSuma celor doua matrici:";
	for(j=0;j<m;j++)
	{
		cout<<"\n\n";
		for(i=0;i<n;i++)
		{
			cout<<m1[i][j]+m2[i][j]<<"\t";
		}
	}

	cin.ignore();
	cin.get();


    return 0;
}
