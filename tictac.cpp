#include<iostream>
 using namespace std;

char space[3][3]={{'1', '2', '3'}, { '4' , '5', '6'},{'7',  '8', '9'}};
int row;
int coloumn;
char symbol ='x';
bool tie = false ;
string n1;
    string n2;
 void function1(){

    
    
    cout<<"    |    |"<<endl;
    cout<<" "<<space[0][0]<<"  | "<<space[0][1]<<"  | "<<space[0][2]<<" "<<endl;
    cout<<"____|____|____"<<endl;
    cout<<"    |    |"<<endl;
    cout<<" "<<space[1][0]<<"  | "<<space[1][1]<<"  | "<<space[1][2]<<" "<<endl;
    cout<<"____|____|____"<<endl;
    cout<<"    |    |"<<endl;
    cout<<" "<<space[2][0]<<"  | "<<space[2][1]<<"  | "<<space[2][2]<<" "<<endl;
    cout<<"    |    |"<<endl;

  }

void function2(){

int digit;
if( symbol=='x'){
    cout<<n1<<" please enter"<<endl;
    cin>>digit;
}
if( symbol=='0'){
    cout<<n2<<" please enter"<<endl;
    cin>>digit;
}
if(digit ==1){
    row=0;
    coloumn=0;
}
if(digit ==2){
    row=0;
    coloumn=1;
}
if(digit ==3){
    row=0;
    coloumn=2;
}
if(digit ==4){
    row=1;
    coloumn=0;
}
if(digit ==5){
    row=1;
    coloumn=1;
}
if(digit ==6){
    row=1;
    coloumn=2;
}
if(digit ==7){
    row=2;
    coloumn=0;
}
if(digit ==8){
    row=2;
    coloumn=1;
}
if(digit ==9){
    row=2;
    coloumn=2;
}
  if(digit<1 ||digit>9){
    cout<<" invalid"<<endl;
}
if(symbol=='x' && space[row][coloumn]!='x' && space[row][coloumn]!='0'){
    space[row][coloumn]= 'x';
    symbol ='0';

}
 else if(symbol=='0' && space[row][coloumn]!='x' && space[row][coloumn]!='0'){
    space[row][coloumn]='0';
     symbol ='x';
 }

else{
    cout<<" there is no empty space"<<endl;

    function2();
}



}

bool function3(){
    for( int i=0; i<3;i++){
        
        if( space[i][0]== space[i][1]&& space[i][0]==space[i][2] || space [0][i]==space[1][i]&& space[0][i]==space[2][i]){
            return false;
        }
    

        if(space[0][0]==space[1][1]&& space [1][1]==space [2][2] || space[0][2]==space [1][1]&& space [1][1]==space [2][0]){
            return false;
        }
    }
        for(int i=0; i<3;i++){
            for(int j=0;j<3; j++){
                if(space[i][j]!='x'&& space[i][j]!='0'){
                    return true;
                }
            }
        }
        tie = true;
        return false;

    
}

int main(){

    cout<<"enter the name of the first player"<<endl;
    cin>>n1;
    cout<<"enter the name of second player "<<endl;
    cin>>n2;
    cout<<n1<<" is player 1 so he/she will play first"<<endl;

    cout<<n2<<" is player 2 so he/she will play second"<<endl;
    
    while(function3()){
        function1();
        function2();
        function3();
    }
    if( symbol =='x'&& tie ==false){
        cout<< n2<<" is the winnwer"<<endl;
    
    }
    else if( symbol =='0'&& tie ==false){
        cout<< n1<<" is the winnwer"<<endl;
    
    }
    else{
        cout<<" it is a draw"<<endl;
    }
    
    return 0;
}



    
  
