#include <iostream>
 using namespace std;
int main(){
float n, m;
cout<<" enter the two operands"<<endl;
cin>> n >> m;
char oper;
cout<<" choose the operation among (+ , - , * ,/)"<<endl;
cin>> oper;

switch(oper) {
    case '+':
    cout<< n+m<<endl;
    break;
    
    case '-':
    cout<< n-m<<endl;
    break;

    case '*':
    cout<< n*m<<endl;
    break;

    case '/':
    cout<<n/m<<endl;
    break;

    default:
    cout<< " give the desired operator"<<endl;
}

return 0;

}