#include<iostream>
#include<stdlib.h>
#include<time.h>

 using namespace std;

  int main(){

    int range =100;
    int count =1;
    int num;
    
    srand((unsigned)  time(NULL));
    while(count--){
       num = rand()%range;
      cout<<num<<" "<<endl;
    }
    cout<<" guess the number"<<endl;
    int temp=0;

    while(temp!=num){

    cin>>temp;
    if(temp>num){
        cout<<"guess is too high"<<endl;
    }
    if(temp<num){
        cout<<"guess is too low"<<endl;
    }
    if(temp==num){
        cout<<" guess is correct"<<endl;
        
    }
    }
    return 0;
  }