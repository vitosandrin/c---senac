//Config require 

//#include<package> - import 
#include<iostream> //Input / output stream 

using namespace std; //Use IO (cin / cout)
int age;
float score, score1, score2, score3;

void calculateAverage (float score, float score1, float score2, float score3) {
	float average = (score+score1+score2+score3)/4;
	cout<<"\n\n Your average is: "<<average;
	if(average >= 7){
		cout<<"\n You are approved!";
	} else {
		cout<<"\n You are reproved!";
	};
}

main() //Main function
{
	system("chcp 65001"); //To use accent in strings
	//cout<<"\n\n\n"; jump a lot of lines 
	
	cout<<"\t Hello world"; // \t TAB
	cout<<"\n\n Welcome to dev world"; // \n jump line 
	cout<<"\n\n Write your age: ";
	cin>>age;
	cout<<"\n Your age is: "<<age<<" years old";
	
	if(age >= 18){
		cout<<"\n\n You are of legal age";
	} else {
		cout<<"\n You are underage";
	};
	
	cout<<"\n\n Enter test scores[4]: ";
	cin>>score>>score1>>score2>>score3;
	
	cout<<"\n\n Your scores is: "<<score<<" ,"<<score1<<" ,"<<score2<<" ,"<<score3;
	
	calculateAverage(score, score1, score2, score3);
	
	
}