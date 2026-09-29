#include <iostream>
#include <string>
using namespace std;

struct Student
{
   string name;
   int rollno;
   int Mathmarks;
   int Phymarks;
   int Chemarks;
   int Totalmarks;
   int percentage;
   bool occupied=false;
};
Student student[100];
//Assuming a total of 100 students

void Addstudent()
{
   string name;
   int roll,Che,Phy,Maths,Total,percent,choice;
   
   for (int i = 0; i < 100; i++)
   {
      if (student[i].occupied==true)
      {
         continue;
      }
      cout<<"Name of the student : ";
      cin>>name;
      cout<<"Roll no. of the student : ";
      cin>>roll;
      cout<<"Marks in Maths : ";
      cin>>Maths;
      cout<<"Marks in Physics : ";
      cin>>Phy;
      cout<<"Marks in Chemistry : ";
      cin>>Che;
      Total=Maths+Che+Phy;
      percent=Total/3;
      student[i].name=name;
      student[i].rollno=roll;
      student[i].Mathmarks=Maths;
      student[i].Phymarks=Phy;
      student[i].Chemarks=Che;
      student[i].Totalmarks=Total;
      student[i].percentage=percent;
      student[i].occupied=true;

      cout<<"\n\nStudent Data Added Successfully!!\n\n";
      
      cout<<"Want to add another sudent ? ";
      cout<<"1------> Yes";
      cout<<"2------> No";
      cout<<"Enter your choice : ";
      cin>>choice;
      if (choice != 1)
      {
         break;
      }
   }
}

void Search()
{
   int rollno;
   cout<<"Enter the roll no. of the student : ";
   cin>>rollno;
   for (int i = 0; i < 100; i++)
   {
      if (student[i].occupied==true)
      {
         if (student[i].rollno==rollno)
         {
            cout<<"\n----------------------------";
            cout<<"\n      Student Details       ";
            cout<<"\n----------------------------\n\n";
            cout<<"Name : "<<student[i].name<<endl;
            cout<<"Roll no. : "<<student[i].rollno<<endl;
            cout<<"Math Marks : "<<student[i].Mathmarks<<endl;
            cout<<"Physics Marks : "<<student[i].Phymarks<<endl;
            cout<<"Chemistry Marks : "<<student[i].Chemarks<<endl;
            cout<<"Total Marks : "<<student[i].Totalmarks<<endl;
            cout<<"Percentage : "<<student[i].percentage<<endl;
         }
      }
   }
   
}

void Display()
{
   cout<<"-----------------------------\n";
   cout<<"       STUDENT DETAILS       \n";
   cout<<"-----------------------------\n\n";      
   for (int i = 0; i < 100; i++)
   {
      if (student[i].occupied==true)
      {
         cout<<"\n\nName : "<<student[i].name<<endl;
         cout<<"Roll no. : "<<student[i].rollno<<endl;
         cout<<"Math Marks : "<<student[i].Mathmarks<<endl;
         cout<<"Physics Marks : "<<student[i].Phymarks<<endl;
         cout<<"Chemistry Marks : "<<student[i].Chemarks<<endl;
         cout<<"Total Marks : "<<student[i].Totalmarks<<endl;
         cout<<"Percentage : "<<student[i].percentage<<endl;      
      } 
   }
   
}
void Cpercentage()
{
   int final;
   int Percentage = 0;
   int count=0;
    for (int i = 0; i < 100; i++)
    {
      if (student[i].occupied==true)
      {
         Percentage=Percentage+student[i].percentage;
         count=count+1;
      }
      
    }
    final=Percentage/count;
    cout<<"Average percentage of the class is : "<<final;
}

int main()
{
   
   return 0;
}
