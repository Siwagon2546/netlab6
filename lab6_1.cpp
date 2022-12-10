#include<iostream>
using namespace std;

int main(){

    int x;
    int sum_Odd = 0;
    int sum_Even = 0;
    
    while(true){
        cout << "Enter an integer: ";
        cin>>x;
        if(x != 0 ){
            if(x%2 == 1){
                sum_Odd +=1;
            }
           else{    
                sum_Even +=1;
            }
        }
        else{
            cout << "#Even numbers = "<< sum_Even <<"\n";
            cout << "#Odd numbers = "<< sum_Odd <<"\n";
            return false;
        }
    }
    

    
    return 0;
}
