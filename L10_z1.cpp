#include <iostream>
using namespace std;


bool czy_doskonala(int n){
       int suma = 0; 
      for(int i=0; i<n; i++)
      {
          if (n%i == 0)
          {
            suma += i; 
          }
      }
      if (suma == n)
      {
          return true; 
      }
      else
      {
          return false;
      }
}
int main(){
    int suma = 0 ;
    int liczba = 1 ;
  while(true)
  {
     if(czy_doskonala(liczba) == true)
     {
        cout<<"liczba: "<<liczba<<" Jest doskonala "<<endl;
        suma +=1 ;
     }
     if (suma == 4)
     {
         break;
     }
     liczba++;
  }
 return 0;
}
