#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char name[50];
	ofstream ofile;
	ofile.open("abc.txt");
	cout<<"Writing to the file"<<endl;
	cout<<"Enter your name: "<<endl;
	cin>>name;
	cout<<endl;
	ofile<<name<<endl;
	ofile.close();
	ifstream ifile;
	ifile.open("abc.txt");
	cout<<"Reading from the fie"<<endl;
	ifile>>name;
	cout<<name<<endl;
	ifile.close();
}
