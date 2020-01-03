#include<iostream>
using namespace std;

int findDisisor(int x){
    int min = x;
    int i = 2;
    while(x>1){
        if(x%i==0){
            return i;
        }
        else{
            i++;
        }
        
    }

}

int main (){
    int x;
    cout<<"Enter your number:"<<"\n";
    cin>>x;
    cout<<"Answer is "<<findDisisor(x);

    return 0;
}

