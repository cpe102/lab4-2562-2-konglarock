#include<iostream>

using namespace std;

//Write function findDistance() here
float findDistance(float u,float a,float t){
  return u*t+0.5*a*t*t;
}


int main(){

  //Calling findDistance() using test cases
  float u , a , t;

  cout<<"Enter your u:"<<"\n";
  cin>>u;
  cout<<"Enter your a:"<<"\n";
  cin>>a;
  cout<<"Enter your t:"<<"\n";
  cin>>t;
  cout<<"s = "<<findDistance(u,a,t);

  return 0;
}
