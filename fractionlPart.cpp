// Q) Take float input and print the fractional part of the real number.
#include<iostream>
using namespace std;
int main(){
    float x;
    cout<<"enter the value of x  : "<<endl;
    cin>>x; //-1.7
    int y =(int)x; // y = -1
    if(y<0) y = y-1; // -1.7 - (-1)
    float z = (float)y; // z = 0.3
    x = x - z;
    cout<<x;
}
