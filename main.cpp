#include <iostream>
#include<math.h>
#define _USE_MATH_DEFINES

using namespace std;

int main()
{
    double long  x , y;
    cout<< "please enter value of X which you have\nX=";
    cin>> x;
    if(x>0&&x<M_PI){
     y=cos(x);
        cout<< "y="<< y;
    }
    else
     if(x<0)
    {
        y=1;
        cout<< "y="<<y;
    }
      else{
            y=-1;
        cout<< "y="<<y;}
    return 0;
}
