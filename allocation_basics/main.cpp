#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) //ilosc argumentow, tablice z parametrami
{
    /*int *n=new int; //alokacja pamieci
    int k;
    cout<<n<<endl<<*n<<endl<<&n<<endl<<&k<<endl;
    // n adres inta | wartosc | adres wskaznika| adres inta |
    delete n;

    int tab[3]={3,2,1};

    int *tabD=new int[5];
    delete[] tabD;

    int **tabDd=new int*[5];//wskaznik do wskaznikow na int

    for(int i=0; i<5; ++i)
    {
        tabDd[i]=new int[5];
    }

    //zwalnianie pamieci
    for(int i=0; i<5; ++i)
    {
        delete[] tabDd[i];
    }

    delete[] tabDd;*/
    /*cout <<endl;
    for(int i=0; i<argc; i++)
        cout<<argv[i]<<endl; //nazwa pliku ktory wywolywalismy*/

    //Zadanie

    int c=stoi(argv[1]);
    cout<<c<<" "<<argv[1]<<endl;
    //if(argv[0]==1)

    return 0;
}