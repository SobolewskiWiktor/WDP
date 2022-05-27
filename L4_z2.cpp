//Napisać program obliczający - w zależności od wyboru użytkownika -
// pole powierzchni lub objętość kuli o promieniu podanym przez użytkownika.
// Promień ma być liczbą całkowitą.


#include <iostream>
#include <cmath>
using namespace std;


int main() {
    int z,x,c,v;
    cout<<"___________________________"<<endl;
    cout<<"Podaj promień swojej kuli"<<endl;
    cin>> z; // zmienna posiadajca promień kuli
    cout<<"___________________________"<<endl;
    cout<<"Wolisz oblicznyć objętość czy pole?"<<endl;
    cout<<"Jeżeli wolisz objętość wpisz - 1"<<endl;
    cout<<"Jeżeli wilisz pole powieszchni wpisz - 2"<<endl;
    cin>> x; // zmienna trzymająca wybór
    cout<<"___________________________"<<endl;
    if(x==1){
        c =(4/3)*3.14*pow(x,3);//zmienna obliczająca objętość
        cout<<"___________________________"<<endl;
        cout<<"Objętość twojej kuli wynosi: "<< c <<endl;
        cout<<"___________________________"<<endl;
    }
    else {
        v =4*3.14*pow(z,2); // zmienna obliczająca pole.
        cout<<"___________________________"<<endl;
        cout<<"Pole twojej kuli wynosi :"<< v <<endl;
        cout<<"___________________________"<<endl;

    }
    return 0;
}
