#include <iostream>

using namespace std;

int main(){
    int liczba, liczba2;
    int max;
    max=0;
    int suma;
    int para=0;
    suma=0;
    liczba2=0;

    while(true)
    {
        liczba2=liczba;
        cout<<endl<<"podaj liczbe: ";
        cin>>liczba;
          if(liczba==0)
          {
              break;
          }
          if(liczba>max)
          {
              max=liczba;
          }
        suma=liczba+liczba2;
          if(suma<max)
          {
              para+=1;
              cout<<"Poprawna para to jest; "<<liczba<<" | "<<liczba2<<endl;
          }
    }
    cout<<"Odpowiednich par było: "<<para<<endl;
    return 0;
}
