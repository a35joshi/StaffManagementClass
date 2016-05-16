//Exercise 6: Staff Manageming Anurag Joshi 12C

#include <iostream.h>
#include <conio.h>
#include <stdio.h>

class staff {
					int empcode;
               char name[100];
               float bs;

               public:

               void getdata()
               {
               cout<<"Enter employee code :";
               cin>>empcode;
               cout<<"Enter your name :";
               cin>>name;
               cout<<"Enter the Basic pay : ";
               cin>>bs;
               }

               void putdata()
               {
               cout<<"Employee code:"<<empcode;
               cout<<"\nName: "<<name;
               cout<<"\nBasic salary: "<<bs;
               }
			  	};


class clerk : protected staff

				{
            	int grade;

               public:

               void getdata1()
               {
               getdata();
               cout<<"Enter the Grade: ";
               cin>>grade;
               }

               void putdata1()
               {
               putdata();
               cout<<"\nGrade: "<<grade;
               getch();
               }
            };


class officer : protected staff

				{
            	char desti[100];

               public:

               void getdata2()
               {
               getdata();
               cout<<"Enter your designation: ";
               gets(desti);
               }

               void putdata2()
               {
               putdata();
               cout<<"\nDesignation: "<<desti;
               getch();
               }
            };

void main()
{
 int x;
 cout<<"Enter your post here\n\n1. Clerk\n2. Officer\n\n";
 cin>>x;

if (x==1)
{
 clerk C;
 C.getdata1();
 clrscr();
 C.putdata1();
}

else if (x==2)
{
 officer O1;
 O1.getdata2();
 clrscr();
 O1.putdata2();
}

else
{
 cout<<"\nInvalid choice";
 getch();
 clrscr();
}
}
