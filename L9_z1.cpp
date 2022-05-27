#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    
    int d;
    cout<<"podaj wielkosci tablicy: "<<endl;
    cin>>d;

  int** tab = new int* [d];
  for(int i=0; i < d; i++ )
  {
      tab[i] = new int[d];
  }
  //tab[d][i]
  int h = 0; 
  int wartosc = 1;
  for(int i=0; i<d; i++){
    for(int h=0; h < d; h++)
    {
        cout<<endl<<"podaj wartosc: ";
        cin>>wartosc;
        tab[i][h] = wartosc;
    }
  }
 for(int i=0; i<d; i++)
 {
     for(int h=0; h<d; h++)
     {
         cout<<tab[i][h]<<" ";
     }
     cout<<endl; 
 }
cout<<"**************************************************"<<endl;
for(int i=0; i<d; i++)
 {
     for(int h=0; h<d; h++)
     {
         cout<<tab[h][i]<<" ";
     }
     cout<<endl; 
 }


}
