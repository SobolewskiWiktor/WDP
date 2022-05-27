#include <iostream>
#include <ctime>
#include <cstdlib>


using namespace std;

//aby zmienić globalnie wartosc musimy przed nazwa zmiennej dac &

void pobierz_tab (int tab[], int dlugosc)
{
int element; 
cout<<"Podaj elementy tablicy"<<endl; 
for (int i = 0; i < dlugosc; i++)
{
    cout<<endl<<"Podaj element: ";
    cin>>element; 
    tab[i]=element;
    
}
}

void Wypisz_tab (int tab[], int dlugosc)
{
    cout<<"================================"<<endl;
    cout<<"Tablica to: "<<endl;
    for( int i = 0; i <= dlugosc; i++)
    {
        cout<<tab[i]<<" ";
    }
    cout<<endl;
    cout<<"================================"<<endl;
}

void losowe_wypelnienie(int tab, int dlugosc, int zakresimn, int zakresmax)
{
   srand(time(NULL))
   for(int i = 0; i <dlugosc; i++)
   {
       tab[i] = rand()%(zakresmax+1 - zakresimn) + zakresimn; 
   }
}
//zle
int* tablica()
{
    int tab [3] = {1,2,3};
    return tab; 
}
//dobrze
int* tablica()
{
    int * tab = new int [3];
    tab[0]=1, tab[1]=2, tab[2]=10;
    return tab; 
}




int main(){
    int dlugosc; 
    cout<<"podaj dlugosc tablicy"<<endl;
    cin>>dlugosc;
    int* tab = new int [dlugosc] ; 
    

    return 0; 

}
