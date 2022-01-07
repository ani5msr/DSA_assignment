
//NOTE: This code is 2 players from same PC/laptop
#include<bits/stdc++.h>
using namespace std;
int main()
{	
	cout<<endl;
	cout<<"				WELCOME TO BINGO"<<endl;
	cout<<endl;
	cout<<"Computer: I believe,A champion is afraid of losing. Everyone else is afraid of  winning."<<endl;
	cout<<endl;
	cout<<"Comeon, you're a champ!"<<endl;
	cout<<endl;
	cout<<"Enough of this,Let's get into the game"<<endl;
	cout<<endl;
	string name1,name2;
	int choice1,checkeda1[5]={0},checkeda2[5]={0},checkeda3=0,checkeda4=0,fla1=1,fla2=1;
	int cnt1=0,flaga1=1,flaga2=1,flaga3=1,flaga4=1,inda1,inda2;
	int choice2,checkedb1[5]={0},checkedb2[5]={0},checkedb3=0,checkedb4=0,flb1=1,flb2=1;
	int cnt2=0,flagb1=1,flagb2=1,flagb3=1,flagb4=1,indb1,indb2;


	cout<<"Computer: Enter the name of player who starts the game"<<endl;
	cin>>name1;
	cout<<"Enter the other person's name"<<endl;
	cin>>name2;

	int a[25]={0},b[25]={0};
	int player1[5][5]={0};
	int player2[5][5]={0};
	cout<<endl;
//player1 numbers generation starts
	cout<<"Ok,"<<name1<<" Enter 1 if you want to generate numbers randomly"<<endl;
	cout<<"Enter 2 if you want to enter numbers manually"<<endl;
	cin>>choice1;
	if(choice1==1)
	{
	int n = 25, r, result;
	int getRandNum[25];
	int arr[25] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};
	srand ( time(NULL) );	
	for (int x = 0; x < 25; ++x)
	{	
	result = r = 0;	
	r = rand() % n;	
	result = arr[r];	
	getRandNum[x] = arr[result];
	arr[r] = arr[n-1];	
	n--;	
	}
	for(int i=0;i<25;i++)
	{
		a[i]=getRandNum[i]+1;
	}
		int p=0;
		for(int i=0;i<5;i++)
		{
			for(int j=0;j<5;j++)
			{
			player1[i][j]=a[p];
			p++;
			}
		}
	}
	else
	{
		cout<<"Enter the numbers";
		for(int i=0;i<5;i++)
		{
			for(int j=0;j<5;j++)
			{
				cin>>player1[i][j];}
		}
	}
		cout<<name1<<", your numbers are:";
		cout<<"\n"<<endl;
		for(int i=0;i<5;i++)
		{
			for(int j=0;j<5;j++)
			{
			cout<<setw(2)<<player1[i][j]<<" ";		
			}
			cout<<endl;
		}

	cout<<"\n";
	//player1 numbers generation ends
	//player2 numbers generation starts
	cout<<"Ok,"<<name2<<" Enter 1 if you want to generate numbers randomly"<<endl;
	cout<<"Enter 2 if you want to enter numbers manually"<<endl;
	cin>>choice2;
	if(choice2==1)
	{
	int n = 25, r, result;
	int getRandNum[25];
	int arr[25] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};
	srand ( time(NULL) );	
	for (int x = 0; x < 25; x++)
	{	
	result = r = 0;	
	r = rand() % n;	
	result = arr[r];	
	getRandNum[x] = arr[result];
	arr[r] = arr[n-1];	
	n--;	
	}
	for(int i=0;i<25;i++)
	{
		b[i]=getRandNum[i]+1;
	}
		int p=0;
		for(int i=0;i<5;i++)
		{
			for(int j=0;j<5;j++)
			{
			player2[i][j]=b[p];
			p++;
			}
		}
	}
	else
	{
		cout<<"Enter the numbers";
		for(int i=0;i<5;i++)
		{
			for(int j=0;j<5;j++)
			{
				cin>>player2[i][j];}
		}
	}
		cout<<name2<<", your numbers are:";
		cout<<"\n"<<endl;
		for(int i=0;i<5;i++)
		{
			for(int j=0;j<5;j++)
			{
			cout<<setw(2)<<player2[i][j]<<" ";		
			}
			cout<<endl;
		}
	//player2 numbers generation ends.
		while(cnt1<5 && cnt2<5)
		{
			flaga1=1,flaga2=1,flaga3=1,flaga4=1;
			flagb1=1,flagb2=1,flagb3=1,flagb4=1;

			int no1;
			int no2;
			cout<<"Enter a number to be striken: ";
			cin>>no1;
			cout<<endl;
			if(no1>25) cout<<"The entered number doesn't exist.."<<endl<<"Enter a number between 1 to 25"<<endl;
	//player1 no1 starts here
			for(int i=0;i<5;i++)
			{
				for(int j=0;j<5;j++)
				{
					if(player1[i][j]==no1)
					{
						player1[i][j]='X';
						inda1… Read more
11:04 am

