#include <iostream>
#include <cmath> // biblioteka do fukncji matematycznych
using namespace std;

int main ()
{
    double x,y,z,w,g,h;
    x= 2+sqrt(3);
    y= sqrt(2)+sqrt(x);
    z=2-sqrt(3);
    w=sqrt(2)-sqrt(z);
    g=(x/y)+(z/w);
    h=pow(g,2);
    
    cout<< "Witaj zaraz dowiesz się ile wynosi T oraz TxT"<<endl;
    cout<<""<<endl;
    cout<<"T wynosi : "<< (x/y)+(z/w) << endl;
    cout<<""<<endl;
    cout<<"Natomiast T do kwadratu to :"<< h <<endl;
    cout<<""<<endl;
    return 0;
}
// pierwiastek to sqrt(x)
// pierwiastek 3st. cbrt(x)
// pow(a,b) - a do potęki b
