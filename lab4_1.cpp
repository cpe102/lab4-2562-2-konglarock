#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int x; //ค่าxที่ผู้ใช้ใส่เข้ามา

    cout<<"Enter x =";  //ใส่เลขลงไป
    cin>>x; //รับค่าเข้ามาแทนเป็นx
    
    cout<<"Result y =";
    cout<<3*pow(x,3)+2*2.71828+pow(2,2*x+1)+sqrt(pow(x,2)+1);

    return 0;
}


