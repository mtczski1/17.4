#include <iostream>
#include <windows.h>
#include <conio.h>
#include "samochod.h"
#include "motor.h"


using namespace std;

int main()
{
    int a;
    bool b = true;
    Motor m1;
    Samochod s1;
    while(b==true)
    {
    system("cls");
    cout<<endl<<"Wybierz akcje"<<endl<<"1-uruchom silnik"<<endl<<"2-hamuj"<<endl<<"3-zacznij jechac"<<endl<<"4-wyswietl informacje o samochodzie"<<endl<<"5-wyswietl informacje o motorze"<<endl;
    cin>>a;

    system("cls");

    switch(a)
    {
    case 1:
        s1.uruchomSilnik();
        break;

    case 2:
        s1.hamuj();
        break;

    case 3:
        s1.jedz();
        break;

    case 4:
        s1.wyswietl();
        break;

    case 5:
        m1.wyswietl();
        break;
    }
    cout<<"Czy chcesz kontynuowac? (1-tak, 0-nie)"<<endl;
    cin>>b;
    }



    return 0;
}
