#ifndef SAMOCHOD_H
#define SAMOCHOD_H

class Samochod
{
    public:
        Samochod();
        void hamuj();
        void uruchomSilnik();
        void jedz();
        void wyswietl();

        void setMocSilnika(int number);
        void setPojemnoscSilnika(int number);
        void setSilnik(bool number);
        void setJazda(bool number);

        int getMocSilnika();
        int getPojemnoscSilnika();
        bool getSilnik();
        bool getJazda();

    private:
    int mocSilnika;
    int pojemnoscSilnika;
    bool silnik;
    bool jazda;

};



#endif // SAMOCHOD_H_INCLUDED
