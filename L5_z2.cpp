//Napisać program pobierający od
//użytkownika całkowitą dodatnią liczbę G,
//a następnie mówiący ile kolejnych liczb całkowitych
//dodatnich należy dodać, aby otrzymać najmniejszą liczbę nie mniejszą niż G.


#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int z,x,c;
    while(true) {
        cout << "Podaj Dowolną liczbę całkowitą dodatnia."<<endl;
        cin>>z;
        if(z > 1){
            break;
        }
    }
    int suma=0;
    int n=1;
    while(suma < z)
    {
        suma +=n;
        n++;
    }
    c=n-1;
    cout<<"Należy dodać: "<< c <<" kolejnych liczb"<<endl;


    return 0;
}
