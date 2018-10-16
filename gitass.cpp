#include <iostream>
#include <fstream>
using namespace std;

struct student{
	string ID;
	string name;
	int age;
	char gender;
	float score;
	string grade;
	
};

int main()
{
	student details[5];
	
	float averageAge=0, averageScore=0;
	int numberOfMales=0, numberOfFemales=0, ages=0, scores=0;
	
	for(int i=0; i<5; i++)
	{  
		cout <<"Enter your student's ID: ";
		cin >> details[i].ID;
		cout <<"Enter your name: ";
		cin >>details[i].name;
		cout <<"Enter your age: ";
		cin >>details[i].age;
		cout <<"Enter your gender: ";
		cin >>details[i].gender;
		
		//counting the number of males and females
		if(details[i].gender=='M' || details[i].gender=='m')
		numberOfMales++;
		else numberOfFemales++;
		
		cout <<"Enter your score: ";
		cin >> details[i].score;
	
		if( details[i].score >= 80 &&  details[i].score <= 100)
	{
	details[i].grade = "A";
	}
    
	else if( details[i].score >= 75 &&  details[i].score < 80)
	{
	details[i].grade = "B+";
	}
	
	else if(  details[i].score >= 70 &&  details[i].score < 75)
    {
	details[i].grade = "B";
	}
	
	else if(  details[i].score >= 65 &&  details[i].score < 70)
	{
	details[i].grade = "C+";
	}
	
	else if(  details[i].score >= 60 &&  details[i].score < 65 )
	{
	details[i].grade = "C";
	}
	
	else if(  details[i].score >= 55 &&  details[i].score < 60)
	{
	details[i].grade = "D+";
	}
	
	else if(  details[i].score >= 50 &&  details[i].score < 55)
	{
	details[i].grade = "D";
	}
	
	else if(  details[i].score >= 45 &&  details[i].score < 50)
	{
	details[i].grade = "E";
	}
    
	else if( details[i].score >= 0 &&  details[i].score < 45)
	{
	details[i].grade = "F";
	}
	
	else
	{
	cout << "Wrong input...Please make sure the Exam Score you input is between the range of 0 and 100"<<endl;
    }
    
    ages +=  details[i].age;
    scores +=  details[i].score;
}

averageAge = ages/5;
averageScore = scores/5;

ofstream file;
file.open("studentCredentials.txt");
file << "ID\t    Name\t      Age\t      Gender         Score\t           Grade\n";
file << "************************************************************************";

for(int i=0; i<5; i++)
{
	file <<" "<< details[i].ID<< details[i].name <<"\t "<< details[i].age<<"\t "<< details[i].gender<< details[i].score<<"\t "<< details[i].grade<<"\n";	
}
file<<"***************************************************************\n";
file<<"Average age = "<<averageAge;
file<<"\nAverage score = "<<averageScore;
file<<"\nNumber of Males = "<<numberOfMales;
file<<"\nNumber of Females = "<<numberOfFemales;
	return 0;
}

