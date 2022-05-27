#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int dlugosc;
    int temp1=0;
    int temp2 = 0;
    int temp3 = 0;
    int temp4 = 0;

    cout << endl<< "Podaj dlugosc tablicy: ";
    cin >> dlugosc;
    int *tab = new int [dlugosc];
    for (int i = 0; i <= (dlugosc - 1); i++)
    {
        cout << endl << "Podaj liczbe: ";
        cin >> tab[i];
    }
    for (int i = 1; i <= (dlugosc - 1); i++)
    {
        if (tab[i - 1] < tab[i])
        {
            temp1 = 1;
        }
        else
        {
            temp1 = 0;
            break;
        }
    }
    for (int i = 1; i <= (dlugosc - 1); i++)
    {
        if (tab[i - 1] > tab[i])
        {
            temp2 = 1;
        }
        else
        {
            temp2 = 0;
            break;
        }
    }
    for (int i = 0; i <= dlugosc - 2; i++)
    {
        for (int y = i+1; y <= dlugosc - 1; y++)
        {
            if (tab[i] == tab[y])
            {
                temp3 = 1;
                break;
            }
        }

    }
    for (int i = 0; i <= (dlugosc/2) - 1; i++)
    {
        if (tab[i] != tab[(dlugosc-1) - i])
        {
            temp4 = 0;
            break;
        }
        else
        {
            temp4 = 1;
        }
    }



    if (temp1 == 1)
    {
        cout << "Tablica uporzadkowana rosnaco" << endl;
    }
    if(temp2 == 1)
    {
        cout << "tablica uporzadkowana malejsaco" << endl;
    }
    if (temp1 != 1 && temp2 != 1)
    {
        cout << "tablica wogole nie jest uporzadkowana" << endl;
    }
    if (temp3 == 1)
    {
        cout << "Liczy sie powtarzajo" << endl;
    }
    else
    {
        cout << "Liczby sie nie powtarzajo" << endl;
    }
    if (temp4 == 1)
    {
        cout << "Tablica jest symetryczna" << endl;
    }
    else
    {
        cout << "Tablica nie jest symetryczna" << endl;
    }
    return 0;
}
