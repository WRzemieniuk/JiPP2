#include <iostream>
using namespace std;

struct samochod{
    string marka;
    string model;
    int rokProdukcji;
    string kolor;
    string tankowanie;

};


int main(){
    //zad1

    samochod sam[]={{"Reanault", "Megane", 2012, "czarny", "gaz"},
                    {"BMW", "e46", 2012, "czarny", "benzyna"},
                    {"Opel", "Corsa", 2012, "czarny", "benzyna"},
                    {"Audi", "A4", 2012, "czarny", "diesel"}};

    cout << "Model\tMarka \tKolor \tRok produkcji \tTankowanie" << endl;
    cout << "----------------------------------" << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << sam[i].marka << "\t" << sam[i].model<< "\t" << sam[i].kolor << " \t" << sam[i].rokProdukcji<< "\t" << sam[i].tankowanie <<    	  "\t" << endl;
    }

//zad2


    return 0;
}