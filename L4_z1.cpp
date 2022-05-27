
//Napisać program rozwiązujący równanie postaci ax+b=0
//o współczynnikach całkowitych (podanych przez użytkownika).

#include <iostream>
#include <cmath>
using namespace std;


int main() {
    float z,x,c,v,a,b;
    start:
    cout<<"_______________________"<<endl;
    cout<<"Witaj podaj swoje A"<<endl;
    cin>> a;
    cout<<"_______________________"<<endl;
    cout<<"Teraz podaj B "<<endl;
    cin>> b;
    cout<<"_______________________"<<endl;


    if (a==0 && b==0) // znak mięczy a i b oznacza  " A i B "
    {
        cout<<"_______________________"<<endl;
        cout << "Nieskonczenie wiele rozwiazan"<<endl;
        cout<<"_______________________"<<endl;
        goto start;
    }
    else if (a==0 || b!=0)
    {
        cout<<"_______________________"<<endl;
        cout << "Brak rozwiazan\n";
        cout<<"_______________________"<<endl;
        goto start;
    }
    x=-b/a;
    cout<<"_______________________"<<endl;
    cout<<"Rozwiązanie twojego rówania to :"<< x <<endl;
    cout<<"_______________________"<<endl;
    goto start;
    return 0;
}
// funkcja goto - nakazuje kompilatorowi wykonać pokazaną część kodu napisaną wcześniej.
