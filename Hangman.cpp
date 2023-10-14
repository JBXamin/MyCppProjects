#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
int main(){
	int live=0;
	bool notFound,isEnd,isFirst=true;
	char word;
	string player1;
	string player2;
	cout<<"Enter the name of the player 1 : ";
	cin>>player1;
	cout<<"Enter the name of the player 2 : ";
	cin>>player2;
	string guess;
	cout<<"Enter the word "<<player1<<" : ";
	cin>>guess;
	int u;
	for(u=0 ; guess[u]!='\0';u++){
		
	}
	char display[u];
	for(int i = 0 ; i<u ; i++){
		display[i] = '_';
	}
	system("cls");
	cout<<"Okay So Now Let's Start The Game :: HANGMAN !!"<<endl;
	x:
		if(isFirst){
			isFirst=false;
		}else{
			system("cls");
		}
		cout<<" ";
	for(int i = 0 ; i<10 ; i++){
		cout<<"_";
	}
	cout<<endl;
	for(int i = 0 ; i<3 ; i++){
		cout<<" ";
		cout<<"| ";
		for(int j = 0 ; j<7 ; j++){
			cout<<" ";
		}
		cout<<"|"<<endl;
	}
	if(live==0){
	for(int i = 0 ; i<5 ; i++){
		cout<<" ";
		for(int j = 0 ; j<9 ; j++){
			cout<<" ";
		}
		cout<<"|"<<endl;
	}
}else if(live == 1){
	cout<<" O";
	for(int j = 0 ; j<8 ; j++){
			cout<<" ";
		}
		cout<<"|"<<endl;
	for(int i = 0 ; i<4 ; i++){
		cout<<" ";
		for(int j = 0 ; j<9 ; j++){
			cout<<" ";
		}
		cout<<"|"<<endl;
	}
}else if(live == 2){
	cout<<" O";
	for(int j = 0 ; j<8 ; j++){
			cout<<" ";
		}
		cout<<"|"<<endl;
		cout<<" |";
	for(int j = 0 ; j<8 ; j++){
			cout<<" ";
		}
		cout<<"|"<<endl;
	for(int i = 0 ; i<3 ; i++){
		cout<<" ";
		for(int j = 0 ; j<9 ; j++){
			cout<<" ";
		}
		cout<<"|"<<endl;
	}
}
else if(live == 3){
	cout<<" O";
	for(int j = 0 ; j<8 ; j++){
			cout<<" ";
		}
		cout<<"|"<<endl;
		cout<<"/|"<<"\\";
	for(int j = 0 ; j<7 ; j++){
			cout<<" ";
		}
		cout<<"|"<<endl;
	for(int i = 0 ; i<3 ; i++){
		cout<<" ";
		for(int j = 0 ; j<9 ; j++){
			cout<<" ";
		}
		cout<<"|"<<endl;
	}
}
else if(live == 4){
	cout<<" O";
	for(int j = 0 ; j<8 ; j++){
			cout<<" ";
		}
		cout<<"|"<<endl;
		cout<<"/|"<<"\\";
	for(int j = 0 ; j<7 ; j++){
			cout<<" ";
		}
		cout<<"|"<<endl;
		cout<<"/ "<<"\\";
	for(int j = 0 ; j<7 ; j++){
			cout<<" ";
		}
		cout<<"|"<<endl;
	for(int i = 0 ; i<2 ; i++){
		cout<<" ";
		for(int j = 0 ; j<9 ; j++){
			cout<<" ";
		}
		cout<<"|"<<endl;
	}
}
if(live==4){
	cout<<"Game Over !! You Just Killed a Person "<<endl;
}else{
	cout<<"WORD : "<<endl;
	for(int i = 0 ; i<u ; i++){
		cout<<display[i];
	}
	cout<<endl;
	cout<<"Enter guess word : ";
	cin>>word;
	for(int i = 0 ; guess[i]!='\0'; i++){
		if(word!=guess[i]){
			notFound = true;
		}else{
			notFound = false;
			break;
		}
	}
	if(notFound){
		cout<<"You guessed it wrong sir !!"<<endl;
		live++;
		goto x;
	}else{
		cout<<"Correct Sir!!"<<endl;
		for(int i = 0 ; i<u ; i++){
			if(guess[i]==word){
				display[i] = word;
			}
		}
		for(int i = 0 ; i<u ; i++){
			if(display[i]!=guess[i]){
				isEnd = false;
				break;
			}else{
				isEnd = true;
			}
		}
		if(!isEnd)
		goto x;
	}
}
}
