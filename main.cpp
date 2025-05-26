#include "iostream"
#include "memory"
#include "vector"
using namespace std;
class Complex
{
    double Real;
    double imag;
public:
    Complex(double s,double m){
        Real=s;
        imag=m;
    }
    void setA(double s){
        Real=s;
    }
    void setB(double m){
        imag=m;
    }
    double getA(){return Real;}
    double getBI(){
        return imag;
    }
    void operator ==(Complex x){
        if(this->Real == x.Real && this->imag == x.imag)cout << "in do sheye mosavi and.";
    }
    Complex operator +(Complex x){
        Complex temp(Real + x.Real, imag + x.imag);
        return temp;
    }
    friend ostream& operator<<(ostream& out, const Complex& c) {
        out << c.Real << (c.imag >= 0 ? " + " : " - ") << abs(c.imag) << "i";
        return out;
    }

    friend istream& operator>>(istream& in, Complex& c) {
        cout << "Enter real part: ";
        in >> c.Real;
        cout << "Enter imaginary part: ";
        in >> c.imag;
        return in;
    }


};
int main(){
    cout<<"pls enter 4 number for make 2 Complex."<<endl;
    double s1,s2,m1,m2;
    cin>>s1>>s2>>m1>>m2;
    Complex d1(s1,s2),d2(m1,m2);
    cout<<d1+d2;

}