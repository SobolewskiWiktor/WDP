#include <iostream>

using namespace std;
bool czy_pierwsza(int n)
{
  if(n<2)
    return false; //gdy liczba jest mniejsza niż 2 to nie jest pierwszą
 
  for(int i=2;i*i<=n;i++)
    if(n%i==0)
      return false; //gdy znajdziemy dzielnik, to dana liczba nie jest pierwsza
  return true;
}; 
int main()
{
    int a; 

   cout<<"Podaj liczbe pierwza"<<endl;
   cin>>a;
   if (czy_pierwsza(a)==1)
   {
       cout<<"Brawo podales liczbe pierwza"<<endl;

   }
   else
   {
       cout<<"Niestety podana liczna nie jest pierwsza"<<endl;
       
   }
}
