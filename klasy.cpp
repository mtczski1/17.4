#include "motor.h"
#include "samochod.h"
#include <iostream>

using namespace std;

///Motor

Motor::Motor()
{
    Motor::mocSilnika=20;
    Motor::pojemnoscSilnika=700;
}

void Motor::wyswietl()
{
    cout<<"Moc: "<<getMocSilnika()<<endl<<"Pojemnosc: "<<getPojemnoscSilnika()<<endl;
}

int Motor::getMocSilnika()
{
    return mocSilnika;
}

int Motor::getPojemnoscSilnika()
{
    return pojemnoscSilnika;
}

void Motor::setMocSilnika(int number)
{
    mocSilnika=number;
}

void Motor::setPojemnoscSilnika(int number)
{
    pojemnoscSilnika=number;
}



///Samochod


Samochod::Samochod()
{
    Samochod::mocSilnika=125;
    Samochod::pojemnoscSilnika=1500;
    Samochod::silnik=false;
    Samochod::jazda=false;
}

void Samochod::hamuj()
{
    if (getSilnik()==1)
    {
         setSilnik(false);
         setJazda(false);
         cout<<endl<<"Hamuje"<<endl;
    }
    else cout<<"Nie mozna zahamowac - samochod nie jedzie"<<endl;

}


void Samochod::uruchomSilnik()
{
    if (getSilnik()==0)
    {
         setSilnik(true);
         cout<<"Uruchamiam silnik"<<endl;
    }
    else cout<<"Silnik juz uruchomiony"<<endl;
}

void Samochod::jedz()
{
    if (getSilnik()==1)
    {
        setJazda(true);
        cout<<"jade"<<endl;
    }
    else cout<<"Nie mozna rozpoczac jazdy - silnik wylaczony"<<endl;
}

void Samochod::wyswietl()
{
    cout<<"Moc: "<<getMocSilnika()<<endl;
    cout<<"Pojemnosc: "<<getPojemnoscSilnika()<<endl;
}


bool Samochod::getSilnik()
{
    return silnik;
}



bool Samochod::getJazda()
{
    return jazda;
}

int Samochod::getMocSilnika()
{
    return mocSilnika;
}


int Samochod::getPojemnoscSilnika()
{
    return pojemnoscSilnika;
}

void Samochod::setJazda(bool number)
{
    jazda=number;
}

void Samochod::setSilnik(bool number)
{
    silnik = number;
}

void Samochod::setPojemnoscSilnika(int number)
{
    pojemnoscSilnika=number;
}

void Samochod::setMocSilnika(int number)
{
    mocSilnika=number;
}


























