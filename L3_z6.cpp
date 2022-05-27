//Badania wykazały, że pewna ilość słodziku używanego w dietetycznych
//napojach gazowanych powoduje śmierć myszy. Odchudzający się znajomy,
//który bardzo lubi takie napoje, chciałby wiedzieć, ile napoju może wypić bez
//narażania się na los myszy. Napisać program pobierający docelową (tj. po odchudzeniu)
//wagę znajomego i wyświetlający, ile litrów napoju wolno mu wypić. Masę myszy i masę
//słodziku zabijającą mysz zadeklarować jako stałe; przyjąć też, że 1 litr napoju
//waży 1,2 kg i zawiera 0.01% słodziku.


#include <iostream>
#include <iomanip>


using namespace std;
int main() {
    double z,x,c,v,b,n,m,l,j;
    int p;
    z = 0.2; // waga myszy wynosząca 0,2kg
    x = 0.01; // ilosc słodziku będący śmiertelny dla myszy
    c = (x/z)*100; // stężenie śmiertelne podane w %
    b = 1.2; // waga jednego litra napoju
    n = 0.01; // ilość słodziku w napoju


    cout<<"______________________________"<<endl;
    cout<<"Podaj swoją wagę"<<endl;
    cin>> v; //zmienna zapisującą wagę
    cout<<"______________________________"<<endl;
    l = v/c ; // zmienna oboiczająca dawkę śmiertelną
    j = l/n ; // zmienna obliczająca ile kilo napoju potrzebne
    p = j/b ; // zmienna oblicza ile litrów napoju potrzebne
    cout<<"______________________________"<<endl;
    cout<<"Dawka śmiertelna napoju dla twojej masy ciała to: "<< p <<endl;
    cout<<"______________________________"<<endl;


    return 0;
}
