#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int s_len (char a[])
   {
      int l=0;
      while (a[l]!='\0')
	 l++;
      return l;
   }
class String
   {
      public:
      char s1[60];
      char s2[60];
      void read();
      void display();
      void reverse();
      void copy();
      void concatenate();
   };
void String::read()
   {
      clrscr();
      gets(s1);
   }
void String::display()
   {
      cout<<s1;
   }
void String::reverse()
   {
      int x=s_len(s1);
      for (int i=(x-1); i>=0; i--)
	 cout<<s1[i];
   }
void String::copy()
   {
      int x=s_len(s1);
      for (int i=0; i<=x; i++)
	 s2[i]=s1[i];
      cout<<"String 1(Input): "<<s1<<"\nString 2(Copied): "<<s2;
   }
void String::concatenate()
   {
      gets(s2);
      int x=s_len(s1);
      int y=s_len(s2);
      for (int i=0, j=x; i<=y,j<=(x+y); i++,j++)
	 s1[j]=s2[i];
      cout<<"After Concatenation: "<<s1;
   }
void main()
   {
      clrscr();
      String s;
      int n;
      cout<<"1.Display\n2.Reverse\n3.Copy\n4.Concatenate\n";
      cin>>n;
      switch(n)
	 {
	    case 1:s.read();
		   s.display();
		   break;
	    case 2:s.read();
		   s.reverse();
		   break;
	    case 3:s.read();
		   s.copy();
		   break;
	    case 4:s.read();
		   s.concatenate();
		   break;
	 }
      getch();
   }