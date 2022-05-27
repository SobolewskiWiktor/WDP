//Napisać program pobierający od użytkownika promień podstawy i
//wysokość walca (liczby całkowite dodatnie), a następnie wypisujący
//- w zależności od decyzji użytkownika wyrażonej wpisaniem O lub P
//- jego objętość albo pole powierzchni. Podczas pobierania danych program
//powinien wymusić podanie wartości nieujemnych (jeśli podana wartość nie spełnia
//warunku, program prosi o podanie kolejnej).

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int x,y,n,m;
    while(true){
        cout<<"===================================================="<<endl;
        cout<<"Pamiętaj aby podane liczby były dodatnie i całkowite"<<endl;
        cout<<"Podaj promień podstawy"<<endl;
        cin>>x;
        cout<<"Podaj wysokość walca"<<endl;
        cin>>y;
        cout<<"===================================================="<<endl;
        if(x>0 && y>0 )
        {
            break;
        }
    }
    char z;
    cout<<"===================================================="<<endl;
    cout<<"Co wolisz wyliczyć?"<<endl;
    cout<<"Jeżeli wolisz objętość - wpisz O"<<endl;
    cout<<"Jeżeli wolisz pole - wpisz P"<<endl;
    cin>>z;
    cout<<"===================================================="<<endl;
    if(z=='O' || z=='o'){
        n=M_PI * pow(x, 2) * y;
        cout<<"Objętość wynosi: "<< n <<endl;
    }
    else {
        m = M_PI * pow(x, 2);
        cout<<"Pole wynosi: "<< m <<endl;
    }

    return 0;
}
