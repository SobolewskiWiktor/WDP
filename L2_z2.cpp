#include <iostream>
#include <cmath> // biblioteka do fukncji matematycznych
using namespace std;

int main ()
{
    double x,y,z,g;
    int f;
    f=1;
    x=pow(10,12);
    y= 1/x;
    z=(1+y);
    g=pow(z,x);
    
    cout<<"przyblizenie liczby E wynosi:"<< g <<endl;
    return 0;
}
