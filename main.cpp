#include <iostream>

using namespace std;

float metry;

float ile_cali(float metry)                         // nag³ówek funkcji, typ argumentu i argument jaki dostaje z main
{
    float cale = metry*39.37;                       //cia³o funkcji
    return cale;                                    //funkcja musi zawsze zwracaæ cos do maina
}

float ile_jardow(float metry)
{
    float jardy = metry*1.09;
    return jardy;
}

void ile_mil(float metry)                           //void nic nie zwraca, tylko coœ robi
{
    cout << "mile: " << metry*0.00062137 << endl;
}

int main()
{

    cout << "Ile metrow?" << endl;  cin >> metry;
    cout << "cale: " << ile_cali(metry) << endl;        //wywo³anie funkcji
    cout << "jardy: " << ile_jardow(metry) << endl;
    ile_mil(metry);                                     //wywo³anie voida

    return 0;
}


