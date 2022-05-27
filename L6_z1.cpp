//Napisać program pobierający od użytkownika nieujemną liczbę całkowitą,
//a następnie obliczający sumę cyfr tej liczby, średnią arytmetyczną jej
//cyfr parzystych i średnią arytmetyczną jej cyfr nieparzystych.




#include <iostream>

using namespace std;
int main() {
    int x;
    int y;
    cout<<"Podaj liczbę całkowią i nie ujemną"<<endl;
    cin>>y;
    int suma = 0;
    while( y > 0 )
    {
        suma += y % 10; //liczysz ostatnią cyfrę
        y /= 10; //pozbywasz się ostatniej cyfry
    }
    cout << suma << endl;
    }

    return 0;
}
