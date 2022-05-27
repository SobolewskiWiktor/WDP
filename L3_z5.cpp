//Napisać program pobierający od użytkownika trzy
//liczby całkowite stanowiące współczynniki a, b, c funkcji
//kwadratowej y=ax2+bx+c oraz liczbę rzeczywistą będącą wartością zmiennej
//x, a następnie wypisujący wartość podanej funkcji dla tej zmiennej.
#include <iostream>
#include <iomanip>


using namespace std;
int main() {
    int x,a,b,c,y;
    cout<<".............................."<<endl;
    cout<<"Podaj wartosc - A"<<endl;
    cin>> a;
    cout<<".............................."<<endl;
    cout<<"Podaj wartosc - B"<<endl;
    cin>> b;
    cout<<".............................."<<endl;
    cout<<"Podaj wartosc - C"<<endl;
    cin>> c;
    cout<<".............................."<<endl;
    cout<<"Podaj Liczbę rzeczywistą - X"<<endl;
    cin>> x;
    cout<<".............................."<<endl;
    y=(a*pow(x,2))+(b*x)+c;
    cout<<".............................."<<endl;
    cout<<"Wartosc funkcji dla twoich danych to"<< y <<endl;
    cout<<".............................."<<endl;
    return 0;

}
