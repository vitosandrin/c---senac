//Config require 

//#include<package> - import 
#include<iostream> //Input / output stream 

using namespace std; //Use IO (cin / cout)
int age;

main() //Main function
{
	system("chcp 65001"); //To use accent in strings
	//cout<<"\n\n\n"; jump a lot of lines 
	
	cout<<"\t Hello world"; // \t TAB
	cout<<"\n Welcome to dev world"; // \n jump line 
	cout<<"\n Write your age: ";
	cout<<"\n";
	cin>>age;
	cout<<"\n Your age is: ";
	cout<<age;
}