#include <iostream>

using namespace std;

int wypisz_menu(){
    int wybor, bok, bok1, bok2, promien ; 
    cout<<"----------------------------------"<<endl;
    cout<<"Wybierz"<<endl;
    cout<<"1 - kwadrat "<<endl;
    cout<<"2 - prostokat"<<endl;
    cout<<"3 - kolo"<<endl;
    cout<<"0 - wyjscie"<<endl;
    cout<<endl<<"wybor: ";
    cin>>wybor;
    return wybor;
}
void oblicz_wszystko ( int bok, int &pole , int &obwod)
{
    pole = bok * bok ;
    obwod = bok * 4 ;

}
void oblicz_wszystko ( int bok1, int bok2, int &pole ,int  &obwod)
{
    pole = bok1 * bok2 ;
    obwod = (bok1 * 2)+(bok2 * 2) ;

}
void oblicz_wszystko ( int promien, double &pole , double &obwod)
{
    pole = 3.14*(promien*promien) ;
    obwod = 2*3.14*promien ;

}

int main()
{
    int  pole, obwod;
    int bok, bok1, bok2 ;
    double promien; 

    while (true)
    {
        switch(wypisz_menu())
    {
     case 0: 
     {
         break;
     }
     case 1: {
         cout<<"Podaj bok kwadratu"<<endl;
         cout<<endl<<"bok: ";
         cin>>bok; 
         oblicz_wszystko(bok, pole, obwod);
         cout<< "Pole to: "<<pole<<" a obwod to: "<<obwod<<endl;
         break;
     }
     case 2: {
         cout<<"Podaj boki prostokata"<<endl; 
         cout<<endl<<"Bok1: ";
         cin>>bok1;
         cout<<endl<<"Bok2: ";
         cin>>bok2;
         oblicz_wszystko(bok1, bok2, pole, obwod);
         cout<<"Obwod to: "<<obwod<<" a pole to: "<<pole<<endl;
         break;
     }
     case 3: {
         cout<<"Podaj promien kola"<<endl;
         cout<<endl<<"Promien: ";
         cin>>promien;
         double pole, obwod;
         oblicz_wszystko(promien, pole, obwod);
         cout<<"Obwod to: "<<obwod<<" a pole to: "<<pole<<endl; 
         break;  
     }
    }
    
    }
}
