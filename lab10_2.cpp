#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt") ;
	dest.open("cheerbook_copy.txt");
	string T;
	dest << "-------------------- BOOM ---------------------\n";
	while (getline(source,T))
	{
		dest << T <<"\n";
	}
	dest << "-------------------- HA!! ---------------------";
    source.close();
    dest.close();
	return 0;
}
