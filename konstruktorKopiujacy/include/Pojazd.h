//
// Created by weronika on 08.11.2021.
//
#include <iostream>
using namespace std;
#ifndef MATRIXLIB_POJAZD_H
#define MATRIXLIB_POJAZD_H


class Pojazd {

    private:
        int numerRejestracyjny;
        string nazwaPojazdu;
        int iloscMiejsc;
        string *imieNazwisko;

        string markaTyp;
    public:
         Pojazd(int numerRejestracyjny,string nazwaPojazdu, int iloscMiejsc, string markaTyp);
         void printInformation();
         void infoPasazer();

};


#endif //MATRIXLIB_POJAZD_H
