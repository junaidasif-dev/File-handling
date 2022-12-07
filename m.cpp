#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	string line;
	char a[10],c;
	int l=0,w=0,ch=0;
	ifstream myfile;
	myfile.open("C:\\Users\\student\\Desktop\\new folder\\open1.txt",ios_base::in);
		while(getline (myfile,line))
		{
			cout<<line<<"\n";
			l++;
		}
		myfile.close();
		myfile.open("C:\\Users\\student\\Desktop\\new folder\\open1.txt",ios_base::in);
		while(myfile>>a)
		{
			cout<<a<<"\n";
			w++;
		}
		myfile.close();
		myfile.open("C:\\Users\\student\\Desktop\\new folder\\open1.txt",ios_base::in);
		while(myfile.get(c))
		{
			cout<<c<<"\n";	
			ch++;
		}
	myfile.close();
	cout<<"\nNumber of lines are "<<l;
	cout<<"\nNumber of words are "<<w;
	cout<<"\nNumberof characters are "<<ch;
}
	
