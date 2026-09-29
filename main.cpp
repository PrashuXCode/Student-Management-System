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
      student[i].name=name;
      cout<<"Roll no. of the student : ";
      cin>>roll;
      for (int i = 0; i < 100; i++)
      {
         if (student[i].occupied==true)
         {
            if (student[i].rollno==roll)
            {
               break;
               student[i].rollno=roll;
            } 
         }  
      }
      cout<<"Marks in Maths : ";
      cin>>Maths;
      student[i].Mathmarks=Maths;
      cout<<"Marks in Physics : ";
      cin>>Phy;
      student[i].Phymarks=Phy;
      cout<<"Marks in Chemistry : ";
      cin>>Che;
      student[i].Chemarks=Che;
      Total=Maths+Che+Phy;
      percent=Total/3;
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
void Delete()
{
   int rollno;
   cout<<"Enter the roll no. of student : ";
   cin>>rollno;
   for (int i = 0; i < 100; i++)
   {
      if (student[i].occupied==true)
      {
         if (student[i].rollno==rollno)
         {
            student[i]=Student{};
            cout<<"\nData Deleted Successfully!\n";
         }
         
      }
   }
}
void Modify()
{
   int rollno,choice,name,roll,Maths,Phy,Che;
   cout<<"Enter the roll no. of student : ";
   cin>>rollno;
   for (int i = 0; i < 100; i++)
   {
      if (student[i].occupied==true)
      {
         if (student[i].rollno==rollno)
         {
            cout<<"Select the data you want to change\n";
            cout<<"1------>  Name\n";
            cout<<"2------>  Roll no.\n";
            cout<<"3------>  Math's marks\n";
            cout<<"4------>  Physics's marks\n";
            cout<<"5------>  Chemistry's marks\n";
            cout<<"Enter your choice : ";
            cin>>choice;
            switch (choice)
            {
            case 1 :
               cout<<"Name of the student : ";
               cin>>name;
               break;
            case 2:
               cout<<"Roll no. of the student : ";
               cin>>roll;
               break;
            case 3:
               cout<<"Marks in Maths : ";
               cin>>Maths;
               break;
            case 4:
               cout<<"Marks in Physics : ";
               cin>>Phy;
               break;
            case 5:
               cout<<"Marks in Chemistry : ";
               cin>>Che;
               break;
            default:
               cout<<"Invalid input!";
               break;
            }
         }   
      }
   }
}
void Topper()
{
   int count;
   int top=0;
   for (int i = 0; i < 100; i++)
   {
      if (student[i].occupied==true)
      {
         if (student[i].percentage>top)
         {
            top=student[i].percentage;
            count=i;
         } 
      } 
   }
   cout<<"\nHighest scorer of the class";
   cout<<"\n\nName : "<<student[count].name<<endl;
   cout<<"Roll no. : "<<student[count].rollno<<endl;
   cout<<"Math Marks : "<<student[count].Mathmarks<<endl;
   cout<<"Physics Marks : "<<student[count].Phymarks<<endl;
   cout<<"Chemistry Marks : "<<student[count].Chemarks<<endl;
   cout<<"Total Marks : "<<student[count].Totalmarks<<endl;
   cout<<"Percentage : "<<student[count].percentage<<endl; 


}
void Loser()
{
   int count;
   int top=100;
   for (int i = 0; i < 100; i++)
   {
      if (student[i].occupied==true)
      {
         if (student[i].percentage<top)
         {
            top=student[i].percentage;
            count=i;
         } 
      } 
   }
   cout<<"\nLowest scorer of the class";
   cout<<"\n\nName : "<<student[count].name<<endl;
   cout<<"Roll no. : "<<student[count].rollno<<endl;
   cout<<"Math Marks : "<<student[count].Mathmarks<<endl;
   cout<<"Physics Marks : "<<student[count].Phymarks<<endl;
   cout<<"Chemistry Marks : "<<student[count].Chemarks<<endl;
   cout<<"Total Marks : "<<student[count].Totalmarks<<endl;
   cout<<"Percentage : "<<student[count].percentage<<endl; 

}
int Menu()
{
   int choice;
   cout<<"\n--------------------------------------------";
   cout<<"\n        STUDENT MANAGEMENT SYSTEM           ";
   cout<<"\n--------------------------------------------";
   cout<<"\n1---------> Add Student";
   cout<<"\n2---------> Search Student";
   cout<<"\n3---------> Class Average Percentage";
   cout<<"\n4---------> Display All Student";
   cout<<"\n5---------> Delete Student";
   cout<<"\n6---------> Modify Student";
   cout<<"\n7---------> Highest Scorer";
   cout<<"\n8---------> Lowest Scorer";
   cout<<"\nEnter Your Choice : ";
   cin>>choice;
   return choice;
}

int main()
{

   int choice;
   int use = 1;
   while (use == 1)
   {
      choice=Menu();
      switch (choice)
      {
      case 1:
         Addstudent();
         break;
      case 2:
         Search();
         break;
      case 3:
         Cpercentage();
         break;
      case 4:
         Display();
         break;
      case 5:
         Delete();
         break;
      case 6:
         Modify();
         break;
      case 7:
         Topper();
         break;
      case 8:
         Loser();
         break;
      default:
         cout<<"Invalid Input!!";
         break;
      }
      cout<<"Want to use again ?\n";
      cout<<"1--------> Yes\n";
      cout<<"2--------> No\n";
      cout<<"\nEnter your choice : ";
      cin>>use;
   }
   return 0;
}
