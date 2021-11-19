//
// Created by weronika on 08.11.2021.
//
//shift f6
//
#include "Pojazd.h"

Pojazd::Pojazd(int numerRejestracyjny, string nazwaPojazdu, int iloscMiejsc, string markaTyp) {
    imieNazwisko=new string[iloscMiejsc];
    this->numerRejestracyjny=numerRejestracyjny;
    this->nazwaPojazdu=nazwaPojazdu;
    this->iloscMiejsc=iloscMiejsc;
    this->markaTyp=markaTyp;
}

void Pojazd::printInformation() {

    cout<<"Numer rejestracyjny: "<<numerRejestracyjny <<endl<<"Nazwa: "<<nazwaPojazdu<<endl<<"Ilosc miejsc: "<<iloscMiejsc<<endl<<"Marka i typ: "<<markaTyp<<endl;

}

void Pojazd::infoPasazer(){
    
}