#ifndef MOTOR_H
#define MOTOR_H

class Motor
{
public:
    Motor();
    void wyswietl();
    void setMocSilnika(int number);
    void setPojemnoscSilnika(int number);
    int getMocSilnika();
    int getPojemnoscSilnika();


private:
    int mocSilnika;
    int pojemnoscSilnika;
};


#endif // MOTOR_H_INCLUDED
