#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    string name1;
    string name2;
    char num[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int numm,numm1[10],count=0,d;
    int numm2;
    cout<<"How do you want to play : \n1. V/S AI\n2. V/S 2ND PLAYER \n:";
    cin>>d;
    if(d==2){
    cout<<"Enter name of player 1 : ";
    cin>>name1;
    cout<<"Enter name of player 2 : ";
    cin>>name2;
    // a:
    for(int i = 0 ; count!=9 ; i++){
    count++;
    if(count==1){
    cout<<"         |         |         \n";
    cout<<"    "<<num[0][0]<<"     |"<<"    "<<num[0][1]<<"     |"<<"    "<<num[0][2]<<"    \n";
    cout<<"_________|_________|_________\n";
    cout<<"         |         |         \n";
    cout<<"    "<<num[1][0]<<"     |"<<"    "<<num[1][1]<<"     |"<<"    "<<num[1][2]<<"    \n";
    cout<<"_________|_________|_________\n";
    cout<<"         |         |         \n";
    cout<<"    "<<num[2][0]<<"     |"<<"    "<<num[2][1]<<"      |"<<"    "<<num[2][2]<<"    \n";
    cout<<"         |         |         \n";
    }else{
        cout<<"          |          |          \n";
    cout<<"    "<<num[0][0]<<"     |"<<"    "<<num[0][1]<<"     |"<<"    "<<num[0][2]<<"    \n";
    cout<<"__________|__________|__________\n";
    cout<<"          |          |          \n";
    cout<<"    "<<num[1][0]<<"     |"<<"    "<<num[1][1]<<"     |"<<"    "<<num[1][2]<<"    \n";
    cout<<"__________|__________|__________\n";
    cout<<"          |          |          \n";
    cout<<"    "<<num[2][0]<<"     |"<<"    "<<num[2][1]<<"      |"<<"    "<<num[2][2]<<"    \n";
    cout<<"          |          |          \n";
    }
    if(count%2!=0){
    cout<<name1<<" YOUR TURN : ";
    cout<<"Enter the number you want to Replace with X : ";
    cin>>numm;
    for(int i = 0 ; i<3 ; i++){
        for(int j = 0 ; j<3 ; j++){
            if(numm==num[i][j]){
                num[i][j] = 'X';
            }
        }
    }
    }else{
        cout<<name2<<" YOUR TURN : ";
    cout<<"Enter the number you want to Replace with O : ";
    cin>>numm;
    for(int i = 0 ; i<3 ; i++){
        for(int j = 0 ; j<3 ; j++){
            if(numm==num[i][j]){
                num[i][j] = 'O';
            }
        }
    }
    }
    if(num[0][0]==num[0][1] && num[0][0]==num[0][2]){
        if(num[0][0] == 'X'){
            cout<<name1<<" WON\n";
            break;
        }else{
            cout<<name2<<" WON\n";
            break;
        }
    }else if(num[0][0]==num[1][1] && num[0][0]==num[2][2]){
        if(num[0][0] == 'X'){
            cout<<name1<<" WON\n";
            break;
        }else{
            cout<<name2<<" WON\n";
            break;
        }
    }else if(num[1][0]==num[1][1] && num[1][0]==num[1][2]){
        if(num[1][0] == 'X'){
            cout<<name1<<" WON\n";
            break;
        }else{
            cout<<name2<<" WON\n";
            break;
        }
    }else if(num[2][0]==num[2][1] && num[2][0]==num[2][2]){
        if(num[2][0] == 'X'){
            cout<<name1<<" WON\n";
            break;
        }else{
            cout<<name2<<" WON\n";
            break;
        }
    }else if(num[0][1]==num[1][1] && num[0][1]==num[2][1]){
        if(num[0][1] == 'X'){
            cout<<name1<<" WON\n";
            break;
        }else{
            cout<<name2<<" WON\n";
            break;
        }
    }else if(num[0][2]==num[1][2] && num[0][2]==num[2][2]){
        if(num[0][2] == 'X'){
            cout<<name1<<" WON\n";
            break;
        }else{
            cout<<name2<<" WON\n";
            break;
        }
    }else if(num[0][2]==num[1][1] && num[0][2]==num[2][0]){
        if(num[0][2] == 'X'){
            cout<<name1<<" WON\n";
            break;
        }else{
            cout<<name2<<" WON\n";
            break;
        }
    }
    }
    }else{
        cout<<"Enter name of player 1 : ";
    cin>>name1;
    // a:
    for(int p = 0 ; count!=9 ; p++){
    count++;
    if(count==1){
    cout<<"         |         |         \n";
    cout<<"    "<<num[0][0]<<"     |"<<"    "<<num[0][1]<<"     |"<<"    "<<num[0][2]<<"    \n";
    cout<<"_________|_________|_________\n";
    cout<<"         |         |         \n";
    cout<<"    "<<num[1][0]<<"     |"<<"    "<<num[1][1]<<"     |"<<"    "<<num[1][2]<<"    \n";
    cout<<"_________|_________|_________\n";
    cout<<"         |         |         \n";
    cout<<"    "<<num[2][0]<<"     |"<<"    "<<num[2][1]<<"      |"<<"    "<<num[2][2]<<"    \n";
    cout<<"         |         |         \n";
    }else{
        cout<<"          |          |          \n";
    cout<<"    "<<num[0][0]<<"     |"<<"    "<<num[0][1]<<"     |"<<"    "<<num[0][2]<<"    \n";
    cout<<"__________|__________|__________\n";
    cout<<"          |          |          \n";
    cout<<"    "<<num[1][0]<<"     |"<<"    "<<num[1][1]<<"     |"<<"    "<<num[1][2]<<"    \n";
    cout<<"__________|__________|__________\n";
    cout<<"          |          |          \n";
    cout<<"    "<<num[2][0]<<"     |"<<"    "<<num[2][1]<<"      |"<<"    "<<num[2][2]<<"    \n";
    cout<<"          |          |          \n";
    }
    if(count%2!=0){
    cout<<name1<<" YOUR TURN : ";
    cout<<"Enter the number you want to Replace with X : ";
    cin>>numm1[p];
    for(int i = 0 ; i<3 ; i++){
        for(int j = 0 ; j<3 ; j++){
            if(numm1[p]==num[i][j]){
                num[i][j] = 'X';
            }
        }
    }
    }else{
        cout<<"Computer"<<" YOUR TURN : ";
    cout<<"Enter the number you want to Replace with O : ";
    x:
    numm2 = rand()%10;
    if(numm2 == 0){
        goto x;
    }
    for(int k = 0 ; k<=p+1 ; k++){
        if(numm2 == numm1[k]){
        goto x;
    }
    }
    for(int i = 0 ; i<3 ; i++){
        for(int j = 0 ; j<3 ; j++){
            if(numm2==num[i][j]){
                num[i][j] = 'O';
            }
        }
    }
    }
    if(num[0][0]==num[0][1] && num[0][0]==num[0][2]){
        if(num[0][0] == 'X'){
            cout<<name1<<" WON\n";
            break;
        }else{
            cout<<name2<<" WON\n";
            break;
        }
    }else if(num[0][0]==num[1][1] && num[0][0]==num[2][2]){
        if(num[0][0] == 'X'){
            cout<<name1<<" WON\n";
            break;
        }else{
            cout<<name2<<" WON\n";
            break;
        }
    }else if(num[1][0]==num[1][1] && num[1][0]==num[1][2]){
        if(num[1][0] == 'X'){
            cout<<name1<<" WON\n";
            break;
        }else{
            cout<<name2<<" WON\n";
            break;
        }
    }else if(num[2][0]==num[2][1] && num[2][0]==num[2][2]){
        if(num[2][0] == 'X'){
            cout<<name1<<" WON\n";
            break;
        }else{
            cout<<name2<<" WON\n";
            break;
        }
    }else if(num[0][1]==num[1][1] && num[0][1]==num[2][1]){
        if(num[0][1] == 'X'){
            cout<<name1<<" WON\n";
            break;
        }else{
            cout<<name2<<" WON\n";
            break;
        }
    }else if(num[0][2]==num[1][2] && num[0][2]==num[2][2]){
        if(num[0][2] == 'X'){
            cout<<name1<<" WON\n";
            break;
        }else{
            cout<<name2<<" WON\n";
            break;
        }
    }else if(num[0][2]==num[1][1] && num[0][2]==num[2][0]){
        if(num[0][2] == 'X'){
            cout<<name1<<" WON\n";
            break;
        }else{
            cout<<name2<<" WON\n";
            break;
        }
    }
    }
    }
    // if(count!=9){
    //     goto a;
    // }
}