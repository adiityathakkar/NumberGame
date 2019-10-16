#include<iostream>
#include<ctime>
#include<windows.h>
#include<cstdlib>
using namespace std;
void game(int initial,int g,int random,int amount);
void game(int initial,int g,int random,int amount)
{
	
	char ch;
	label:cout<<"****ENTER YOUR INITIAL AMOUNT YOU WANT TO DEPOSIT*****"<<endl;
    cin>>initial;
	if(initial>=1000)
	{
		cout<<"ENTER THE NUMBER YOU WANT TO GUESS IN A RANGE OF 1-10"<<endl;
        cin>>g;
        cout<<"********THE NUMBER WHEEL IS ROLLING**********"<<endl;
        cout<<"***************PLEASE WAIT*******************"<<endl;
        cout<<"LOADING";
        for(int j=0;j<10;j++)
        {
        	cout<<"..";
        	Sleep(500);
		}
		srand(time(0));
		random=(rand()%10)+1;
		if(random==g)
		{
			amount=initial*10;
			cout<<"\nYOUR RANDOM NUMBER-"<<random<<"\n";
			cout<<"~~~~~~~~~~CONGRATULATION YOU WON THE GAME~~~~~~~~~~~~~~~"<<endl;
			cout<<"          YOUR WINNING AMOUNT-"<<amount<<"               "<<endl;
			goto b;
		}
		else{
		
        cout<<"\nYOUR RANDOM NUMBER-"<<random<<"\n";
        
		cout<<"----------SORRY,YOU LOST THE GAME------------"<<endl;
	}
	b:	cout<<"-----DO YOU WISH TO PLAY THE GAME AGAIN------"<<endl;
		cout<<"-----PRESS Y FOR YES  OR PRESS N FOR NO------"<<endl;
		cin>>ch;
	  switch(ch)
		{
			case 'Y':
			goto label;
			break;
			case 'N':
				cout<<"---------------THANK YOU------------------"<<endl;
				exit(0);
				break;
				default:
					cout<<"INVALID CHOICE"<<endl;
					cout<<"ENTER AGAIN"<<endl;
					goto b;
					break;
		}
}
	else
	cout<<"!!!!!!!!!!SORRY INSUFFICIENT AMOUNT!!!!!!!!!!!"<<endl;
	cout<<"YOU NEED 1000 to play the game"<<endl;
	goto b;
}
int main()
{
	int i,g,r,a=0;
	char ch;
	cout<<"-----------------------------------------------------"<<endl;
	cout<<"------------------ADITYA'S NUMBER GAME-------------- "<<endl;
	cout<<"------------------RULES FOR THE GAME-----------------"<<endl;
	cout<<"******************************************************"<<endl;
	cout<<"*      1-MINIMUM AMOUNT TO BE DOPOSITED is 1000      *"<<endl;
	cout<<"*      2-YOU WIN 10x THE AMOUNT YOU DEPOSIT       *"<<endl;
	cout<<"*      ONLY IF YOU CAN GUESS THE NUMBER RIGHT        *"<<endl;
	cout<<"******************************************************"<<endl;
	cout<<" THE NUMBER WHEEL CAN ONLY BE OPERATED BY SUPERIVISORS"<<endl;
	cout<<"---------------PRESS ENTER TO CONTINUE----------------"<<endl;
	cin.get();
    game(i,g,r,a);
}
