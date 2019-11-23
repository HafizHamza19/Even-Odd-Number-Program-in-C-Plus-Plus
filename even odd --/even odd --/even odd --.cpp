#include <iostream>
#include<conio.h>
using namespace std;
void main()
{
	cout <<"--------------------Numbers 50 To 5---------------------\n\n";
	int b=0;
	for(b=50;b>5;b--)
	{
	cout <<" "<<b;
	}
	
	cout <<"\n\n------------------Odd Numbers 50 To 5--------------------\n\n\n";
	int a=0;
	for(a=50;a>5;a--)
	{
		if(a%2==1)
        cout<<" "<<a;
      }


getch();
}
