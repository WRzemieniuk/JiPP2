
#ifndef ALLOCATION_BASICS_PROSTOPADLOSCIAN_H
#define ALLOCATION_BASICS_PROSTOPADLOSCIAN_H


class Prostopadloscian {

    private:
        unsigned int a;
        unsigned int b;
        unsigned int c;

    public:
        Prostopadloscian();//(unsigned int a,unsigned int b,unsigned int c);//konstruktor
        void setValue(unsigned int a, unsigned int b, unsigned int c);
        unsigned int getValueA();
        unsigned int getValueB();
        unsigned int getValueC();
        unsigned int polePowierzchni();
        void printProstopadloscian(unsigned int polePowierzchni);

};


#endif //ALLOCATION_BASICS_PROSTOPADLOSCIAN_H
