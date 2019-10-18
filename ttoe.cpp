//Made by Archit Vashist
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<iomanip.h>
int check(char [][9] , int , int , int, char);
void game(char [][9] , int , int);
void output(char a[][9] , int r , int c);
int main()
{
clrscr();
char again='y';
for(int i=1 ; again=='y';i++)
{
clrscr();
char a[5][9]={"1 | 2 | 3","--|---|--","4 | 5 | 6","--|---|--","7 | 8 | 9"};
output(a,5,9);
game(a,5,9);
for(int i=1 ; i<=2 ; i++)
{
gotoxy(1,18);
for(int i=1 ; i<=80 ; i++)
cout<<char(1);
}
for(int k=1 ; k<=2 ; k++)
{
gotoxy(1,20);
for(int j=1 ; j<=80 ; j++)
cout<<char(2);
}
cout<<"Do you want to play(Y/N)";
cin>>again;
}
getch();
}
void output(char a[][9] , int r , int c)
{
int x=10 , y=10;
cout<<setw(45)<<"TIC TAC TOE";
gotoxy(9,7);
cout<<setw(23)<<"PLAYER 1-X"<<setw(23)<<"PLAYER 2-0";
for(int i=0 ; i<r ; i++)
{
gotoxy(35,y++);
for(int j=0; j<c ; j++)
cout<<a[i][j];
cout<<endl;
}
}
void game(char a[][9] , int r , int c)
{
int n,x,fact=1,temp=1;
for(int i=1 ; i<=5 && fact==1 ; i++)
{
textcolor(int('o'));
textbackground(1);
cout<<"PLAYER 1: "<<'\t';
cin>>n;
if(n==1)
{       if(a[0][0]=='X' || a[0][0]=='0')
{
cout<<"ERROR";
fact=10;
}
else
{
clrscr();
a[0][0]='X';
output(a,5,9);
x=check(a,5,9,1,'X');
if(x==1)
{
cout<<"PLAYER 1 wins";
fact=2;
}
}

}
else if(n==2)
{
if(a[0][4]=='X' || a[0][4]=='0')
{
cout<<"ERROR";
fact=10;
}
else
{
clrscr();
a[0][4]='X';
output(a,5,9);
x=check(a,5,9,2,'X');
if(x==1)
{
cout<<"PLAYER 1 wins";
fact=2;
}
}
}
else if(n==3)
{

if(a[0][8]=='X' || a[0][8]=='0')
{
cout<<"ERROR";
fact=10;
}
else
{
clrscr();
a[0][8]='X';
output(a,5,9);
x=check(a,5,9,3,'X');
if(x==1)
{
cout<<"PLAYER 1 wins";
fact=2;
}
}
}
else if(n==4)
{
if(a[2][0]=='X' || a[2][0]=='0')
{
cout<<"ERROR";
fact=10;
}
else
{
clrscr();
a[2][0]='X';
output(a,5,9);
x=check(a,5,9,4,'X');
if(x==1)
{
cout<<"PLAYER 1 wins";
fact=2;
}
}
}
else if(n==5)
{
if(a[2][4]=='X' || a[2][4]=='0')
{
cout<<"ERROR";
fact=10;
}
else
{
clrscr();
a[2][4]='X';
output(a,5,9);
x=check(a,5,9,5,'X');
if(x==1)
{
cout<<"PLAYER 1 wins";
fact=2;
}
}
}
else if(n==6)
{
if(a[2][8]=='X' || a[2][8]=='0')
{
cout<<"ERROR";
fact=10;
}
else
{
clrscr();
a[2][8]='X';
output(a,5,9);
x=check(a,5,9,6,'X');
if(x==1)
{
cout<<"PLAYER 1 wins";
fact=2;
}
}
}
else if(n==7)
{
if(a[4][0]=='X' || a[4][0]=='0')
{
cout<<"ERROR";
fact=10;
}
else
{
clrscr();
a[4][0]='X';
output(a,5,9);
x=check(a,5,9,7,'X');
if(x==1)
{
cout<<"PLAYER 1 wins";
fact=2;
}
}
}
else if(n==8)
{
if(a[4][4]=='X' || a[4][4]=='0')
{
cout<<"ERROR";
fact=10;
}
else
{
clrscr();
a[4][4]='X';
output(a,5,9);
x=check(a,5,9,8,'X');
if(x==1)
{
cout<<"PLAYER 1 wins";
fact=2;
}
}
}
else if(n==9)
{
if(a[4][8]=='X' || a[4][8]=='0')
{
cout<<"ERROR";
fact=10;
}
else
{
clrscr();
a[4][8]='X';
output(a,5,9);
x=check(a,5,9,9,'X');
if(x==1)
{
cout<<"PLAYER 1 wins";
fact=2;
}
}

}
temp++;
if(fact==1 && temp<=5)
{
textbackground(int('p'));
textcolor(int('C'));
cout<<"PLAYER 2: "<<'\t';
cin>>n;
if(n==1)
{
if(a[0][0]=='X' || a[0][0]=='0')
{
cout<<"ERROR";
fact=10;
}
else
{
clrscr();
a[0][0]='0';
output(a,5,9);
x=check(a,5,9,1,'0');
if(x==1)
{
cout<<"PLAYER 2 wins";
fact=2;
}
}

}
else if(n==2)
{
if(a[0][4]=='X' || a[0][4]=='0')
{
cout<<"ERROR";
fact=10;
}
else
{
clrscr();
a[0][4]='0';
output(a,5,9);
x=check(a,5,9,2,'0');
if(x==1)
{
cout<<"PLAYER 2 WINS";
fact=2;
}
}
}
else if(n==3)
{
if(a[0][8]=='X' || a[0][8]=='0')
{
cout<<"ERROR";
fact=10;
}
else
{
clrscr();
a[0][8]='0';
output(a,5,9);
x=check(a,5,9,3,'0');
if(x==1)
{
cout<<"PLAYER 2 WINS";
fact=2;
}
}
}
else if(n==4)
{
if(a[2][0]=='X' || a[2][0]=='0')
{
cout<<"ERROR";
fact=10;
}
else
{
clrscr();
a[2][0]='0';
output(a,5,9);
x=check(a,5,9,4,'0');
if(x==1)
{
cout<<"PLAYER 2 WINS";
fact=2;
}
}
}
else if(n==5)
{
if(a[2][4]=='X' || a[2][4]=='0')
{
cout<<"ERROR";
fact=10;
}
else
{
clrscr();
a[2][4]='0';
output(a,5,9);
x=check(a,5,9,5,'0');
if(x==1)
{
cout<<"PLAYER 2 WINS";
fact=2;
}
}
}
else if(n==6)
{
if(a[2][8]=='X' || a[2][8]=='0')
{
cout<<"ERROR";
fact=10;
}
else
{
clrscr();
a[2][8]='0';
output(a,5,9);
x=check(a,5,9,6,'0');
if(x==1)
{
cout<<"PLAYER 2 WINS";
fact=2;
}
}
}
else if(n==7)
{
if(a[4][0]=='X' || a[4][0]=='0')
{
cout<<"ERROR";
fact=10;
}
else
{
clrscr();
a[4][0]='0';
output(a,5,9);
x=check(a,5,9,7,'0');
if(x==1)
{
cout<<"PLAYER 2 WINS";
fact=2;
}
}
}
else if(n==8)
{
if(a[4][4]=='X' || a[4][4]=='0')
{
cout<<"ERROR";
fact=10;
}
else
{
clrscr();
a[4][4]='0';
output(a,5,9);
x=check(a,5,9,8,'0');
if(x==1)
{
cout<<"PLAYER 2 WINS";
fact=2;
}
}
}
else if(n==9)
{
if(a[4][8]=='X' || a[4][8]=='0')
{
cout<<"ERROR";
fact=10;
}
else
{
clrscr();
a[4][8]='0';
output(a,5,9);
x=check(a,5,9,9,'0');
if(x==1)
{
cout<<"PLAYER 2 WINS";
fact=2;
}
}
}
}
}
if(fact==1)
{
cout<<"DRAW";
}
}
int check(char a[][9] , int r , int c, int n, char x)
{
if(n==1)
{
if((a[0][4]==x && a[0][8]==x)||(a[2][0]==x && a[4][0]==x)||(a[2][4]==x && a[4][8]==x))
return 1;
}
else if(n==3)
{
if((a[0][0]==x && a[0][4]==x)||(a[2][8]==x && a[4][8]==x)||(a[2][4]==x && a[4][0]==x))
return 1;
}
else if(n==7)
{
if((a[0][0]==x && a[2][0]==x)||(a[4][4]==x && a[4][8]==x)||(a[2][4]==x && a[0][8]==x))
return 1;
}
else if(n==9)
{
if((a[0][8]==x && a[2][8]==x)||(a[4][0]==x && a[4][4]==x)||(a[2][4]==x && a[0][0]==x))
return 1;
}
else if(n==2)
{
if((a[0][0]==x && a[0][8]==x)||(a[2][4]==x && a[4][4]==x))
return 1;
}
else if(n==4)
{
if((a[0][0]==x && a[4][0]==x)||(a[2][4]==x && a[2][8]==x))
return 1;
}
else if(n==5)
{
if((a[0][0]==x && a[4][8]==x)||(a[0][4]==x && a[4][4]==x)||(a[0][8]==x && a[4][0]==x)||(a[2][0]==x && a[2][8]==x))
return 1;
}
else if(n==6)
{
if((a[0][8]==x && a[4][8]==x)||(a[2][0]==x && a[2][4]==x))
return 1;
}
else if(n==8)
{
if((a[4][0]==x && a[4][8]==x)||(a[2][4]==x && a[0][4]==x))
return 1;
}
return 0;
}
