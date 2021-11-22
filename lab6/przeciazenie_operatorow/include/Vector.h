//
// Created by weronika on 21.11.2021.
//
//

#ifndef PRZECIAZENIE_OPERATOROW_VECTOR_H
#define PRZECIAZENIE_OPERATOROW_VECTOR_H

using namespace std;
class Vector {
private:
    double x,y;

public:
    Vector();

    Vector(double x, double y);

    double length();

    void print() const;

    Vector operator+(const Vector &rhs) const{
        return {x+rhs.x,y+rhs.y};

    }

    Vector &operator+=(const Vector &rhs) {
        this->x = this->x + rhs.x;
        this->y = this->y + rhs.y;
        return *this;
    }

    void operator~(){
        x=-x;
        y=-y;
    }

    double operator*(const Vector &rhs){
        return {x*rhs.x+y*rhs.y};

    }


    Vector operator^(double scalar){
        return {scalar*x,scalar*y};

    }

    bool operator==(const Vector &v2){
       return (x==v2.x)&&(y==v2.y);

    }

    friend Vector operator^(const double &lhs, const Vector &rhs);
    friend ostream &operator<< (ostream &out, const Vector &lhs);

};

ostream &operator<< (ostream &out, const Vector &lhs);
Vector operator^(const double &lhs, const Vector &rhs);//przeciozenie operatora z friend
#endif //PRZECIAZENIE_OPERATOROW_VECTOR_H
