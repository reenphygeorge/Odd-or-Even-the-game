#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
int check2(int x)
{
	int f=1;
	if(x<0||x>6)
	{
		f=0;
		clrscr();
		cout<<"\n\t\t\tENTERED NUMBER SHOULD NOT EXCEED 6\n\t\t\t\t   TRY AGAIN"
		    <<"\n\t\t\t       < PRESS ANY KEY >";
		getch();
	}
	return f;
}
int bat(int t)
{
	int x,a,s=0,flag;
	do
	{
		do
		{
			clrscr();
			cout<<"\n\t\t\tENTER YOUR NUMBER: ";
			cin>>x;
			flag=check2(x);
		}while(flag==0);
		randomize();
		a=random(7);
		cout<<"\n\t\t\tSYSTEM: "<<a;
		getch();
		if(x==a)
		break;
		s=s+x;
		if(s>t)
		break;
		cout<<"\n\n\t\t\tSCORE: "<<s;
		getch();
	}while(x!=a);
	clrscr();
	cout<<"\n\t\t\tGAME OVER"
	    <<"\n\t\t\tTOTAL SCORE: "<<s
	    <<"\n\t\t\tPRESS ANY KEY TO CONTINUE";
	getch();
	clrscr();
	return(s);
}
int bowl(int t)
{
	int x,a,s=0,flag;
	do
	{
		do
		{
			clrscr();
			cout<<"\n\t\t\tENTER YOUR NUMBER: ";
			cin>>x;
			flag=check2(x);
		}while(flag==0);
		randomize();
		a=random(7);
		cout<<"\n\t\t\tSYSTEM: "<<a;
		getch();
		if(x==a)
		break;
		s=s+a;
		if(s>t)
		break;
		cout<<"\n\n\t\t\tSCORE: "<<s;
		getch();
	}while(x!=a);
	clrscr();
	cout<<"\n\t\t\tGAME OVER"
	    <<"\n\t\t\tTOTAL SCORE: "<<s
	    <<"\n\t\t\tPRESS ANY KEY TO CONTINUE";
	getch();
	return(s);
}
int bowl2()
{
	int x,a,s=0,flag;
	do
	{
		do
		{
			clrscr();
			cout<<"\n\t\t\tENTER YOUR NUMBER: ";
			cin>>x;
			flag=check2(x);
		}while(flag==0);
		randomize();
		a=random(7);               \
		cout<<"\n\t\t\tSYSTEM: "<<a;
		getch();
		if(x==a)
		break;
		s=s+a;
		cout<<"\n\n\t\t\tSCORE: "<<s;
		getch();
	}while(x!=a);
	clrscr();
	cout<<"\n\t\t\tGAME OVER"
	    <<"\n\t\t\tTOTAL SCORE: "<<s
	    <<"\n\t\t\tPRESS ANY KEY TO CONTINUE";
	getch();
	return(s);
}
int bat2()
{
	int x,a,s=0,flag;
	do
	{
		do
		{
			clrscr();
			cout<<"\n\t\t\tENTER YOUR NUMBER: ";
			cin>>x;
			flag=check2(x);
		}while(flag==0);
		randomize();
		a=random(7);
		cout<<"\n\t\t\tSYSTEM: "<<a;
		getch();
		if(x==a)
		break;
		s=s+x;
		cout<<"\n\n\t\t\tSCORE: "<<s;
		getch();
	}while(x!=a);
	clrscr();
	cout<<"\n\t\t\tGAME OVER"
	    <<"\n\t\t\tTOTAL SCORE: "<<s
	    <<"\n\t\t\tPRESS ANY KEY TO CONTINUE";
	getch();
	clrscr();
	return(s);
}
int check(int x)
{
	int f=0;
	if(x<1||x>2)
	{
		f=1;
		clrscr();
		cout<<"\n\t\t\tWRONG CHOICE    TRY AGAIN"
		    <<"\n\t\t\t    < PRESS ANY KEY >";
		getch();
	}
	return f;
}
int toss()
{
	int x,r,flag,flag2;
	do
	{
		clrscr();
		cout<<"\n\t\t\tENTER YOUR NUMBER: ";
		cin>>x;
		flag=check2(x);
	}while(flag==0);
	randomize();
	r=random(7);
	cout<<"\n\t\t\tSYSTEM: "<<r;
	getch();
	if((x+r)%2==0)
		flag2=2;
	else
		flag2=1;
	return flag2;
}
void game()
{
	int flag1,ch1,x,r,flag2,ch2,i1,i2,ch3,flag3,ch4,flag4;
	clrscr();
	cout<<"\n\t\t\t\t  HAND CRICKET\n\t\t\t   < PRESS ANY KEY TO START >";
	getch();
	clrscr();
	do
	{
		do
		{
			clrscr();
			cout<<"\n\t\t\tENTER YOUR CHOICE: "
			    <<"\n\t\t\t<1>  ODD\n\t\t\t<2>  EVEN"
			    <<"\n\t\t\tYOUR CHOICE: ";
			cin>>ch1;
			flag1=check(ch1);
		}while(flag1==1);
		flag2=toss();
		if(ch1!=flag2)
		{
			randomize();
			ch2=random(2);
			if(ch2==0)
			{
				clrscr();
				cout<<"\n\t\t\tSYSTEM CHOOSED TO BAT";
				getch();
				i1=bowl2();
				clrscr();
				cout<<"\n\t\t\tYOUR TARGET: "<<i1;
				getch();
				i2=bat(i1);
			}
			else
			{
				clrscr();
				cout<<"\n\t\t\tSYSTEM CHOOSED TO BOWL";
				getch();
				i2=bat2();
				i1=bowl(i2);
			}
		}
		else
		{
			do
			{
				clrscr();
				cout<<"\n\t\t\tENTER YOUR CHOICE: "
				    <<"\n\t\t\t<1>  BAT\n\t\t\t<2>  BOWL"
				    <<"\n\t\t\tYOUR CHOICE: ";
				cin>>ch3;
				flag3=check(ch3);
			}while(flag3==1);
			if(ch3==1)
			{
				clrscr();
				cout<<"\n\t\t\tYOU'VE CHOOSED TO BAT";
				i2=bat2();
				i1=bowl(i2);
			}
			if(ch3==2)
			{
				clrscr();
				cout<<"\n\t\t\tYOU'VE CHOOSED TO BOWL";
				i1=bowl2();
				clrscr();
				cout<<"\n\t\t\tYOUR TARGET: "<<i1;
				getch();
				i2=bat(i1);
			}
		}
		if(i1>i2)
		{
			clrscr();
			cout<<"\n\t\t\tYOU LOST THE MATCH BY "<<i1-i2<<" RUNS"
			    <<"\n\t\t\t     < PRESS ANY KEY >";
			getch();
		}
		else if(i1<i2)
		{
			clrscr();
			cout<<"\n\t\t\tYOU WON THE MATCH BY "<<i2-i1<<" RUNS"
			    <<"\n\t\t\t     < PRESS ANY KEY >";
			getch();
		}
		else
		{
			clrscr();
			cout<<"\n\t\t\t\t   MATCH DRAW"
			    <<"\n\t\t\t\t< PRESS ANY KEY >";
			getch();
		}
		do
		{
			clrscr();
			cout<<"\n\t\t\tDO YOU WANNA PLAY AGAIN: "
			    <<"\n\t\t\t<1>  YES\n\t\t\t<2>  NO"
			    <<"\n\t\t\tYOUR CHOICE: ";
			cin>>ch4;
			flag4=check(ch4);
		}while(flag4==1);
	}while(ch4==1);
	clrscr();
	cout<<"\n\t\t\tTHANKS FOR USING OUR SERVICE\n\t\t\t     < PRESS ANY KEY >";
}
void main()
{
	clrscr();
	game();
	getch();
}