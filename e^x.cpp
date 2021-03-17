/* Calixto, Dequito, Lorzano, Sojuaco */
#include <iostream> 
#include <cmath>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <iomanip>

using namespace std; 


void gotoxy (int x, int y)
{
	COORD pos ={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
main () 
{ 


double x, MAX=100;
double sum=1, fact=2, value=0,  i=1, j=1, val; 
char choice;


do{
system("cls");
gotoxy(23,1);
cout<<"Getting the approximate value for e^x";
cout<<"\n "<<setw(78)<<setfill('*')<<" "; //30
gotoxy(2,3);
cout << "Enter a value of x: "; 
	while(!(cin>>x))
		{
			cin.clear();
			cin.ignore(80, '\n');
			gotoxy(28,6);
			cout<<"Invalid Input!\n Enter again: ";
	} 
 
gotoxy(2,6);
cout<<"Using the sum 1+"<<x<<"+"<<x<<"^2/2! + ... +"<<x<<"^100/100!,";
gotoxy(2,7); cout<<"the estimated value for e^"<<x<<"is: =";
sum=1+pow(x,i);

value=sum+((pow(x,2))/(2));




for(i=3; i<=100; i++)
{
	
	fact=fact*i;
	value=value+((pow(x,i))/(fact));


	
}
	cout<< value<<endl;
	
	gotoxy (1, 20); system("pause");
	balik:
	system("cls");
	gotoxy(7, 6);
	cout<<"Enter another X? [Y/N]: ";
	cin>>choice;
	

} while(toupper(choice)=='Y');

		  if(toupper(choice)=='N')
		return 0;


else if (toupper(choice)!='N' && toupper(choice)!='Y')
	{

		gotoxy(10,16);
		cout<<"Invalid Input!";
		gotoxy(10, 18);
		system("pause");
		goto balik;

	}
}
