#include <iostream>
#include <iomanip>
using namespace std;

struct samochod{
    string marka;
    string model;
    int rokProdukcji;
    string kolor;
    string tankowanie;

};

int sameBrand(samochod tablicaSamochodow[], int liczbaElementow ){
    int countSameBrand=0;
    for (int i = 0; i < liczbaElementow-1; ++i) {
        for (int j = 1; j < liczbaElementow; ++j) {
            if(countSameBrand==liczbaElementow)
                break;
            if(i==j)
                continue;
            if(tablicaSamochodow[i].marka==tablicaSamochodow[j].marka){
                countSameBrand++;
            }

        }

    }
    return countSameBrand;
}

int productionYear(samochod tablicaSamochodow[], int liczbaElementow ){
    int min=tablicaSamochodow[0].rokProdukcji;
    for (int i = 0; i < liczbaElementow; ++i) {

        for (int j = 1; j < liczbaElementow; ++j) {
            if(i==j)
                continue;
            if(tablicaSamochodow[i].rokProdukcji>tablicaSamochodow[j].rokProdukcji){
                min=tablicaSamochodow[j].rokProdukcji;
            }
        }

    }
    return min;
}

int main(){
    //zad1

    samochod sam[]={{"Renault", "Megane", 2012, "czarny", "gaz"},
                    {"BMW", "e46", 2015, "srebrny", "benzyna"},
                    {"BMW", "Corsa", 2005, "niebieski", "benzyna"},
                    {"BMW", "A4", 2013, "czarny", "diesel"}};

    cout <<right<<setw(3)<< "Marka\tModel\tKolor \tRok produkcji \tTankowanie" << endl;
    //cout<<right<<setw(3)<<matrix[i][j]<<"  ";
    cout << "----------------------------------" << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << right<<setw(3)<<sam[i].marka <<right<<setw(3)<< "\t" << sam[i].model<< right<<setw(3)<<"\t" << sam[i].kolor << right<<setw(3)<<" \t" << sam[i].rokProdukcji<< "\t" << sam[i].tankowanie <<    	  "\t" << endl;
    }

//zad3

    cout<< "Liczba samochodów tej samej marki: "<<sameBrand(sam,4)<<endl;

//zad4
    cout<<"Najniższy rok produkcji: "<<productionYear(sam,4)<<endl;
    return 0;
}