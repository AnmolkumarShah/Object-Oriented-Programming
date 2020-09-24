#include<iostream>
using namespace std;

class Complex{
private:
    int real;
    int img;
public:
    Complex(int real = 0, int img = 0){
        this->real = real;
        this->img = img;
    }
    Complex(Complex &c){
        this->real = c.real;
        this->img = c.img;
    }
    Complex add(Complex c){
        Complex temp;
        temp.real = this->real + c.real;
        temp.img = this->img + c.img;
        return temp;
    }
    void display(){
        cout<<real<<" + i"<<img<<endl;
    }

};

int main(){
    Complex c1(3,4),c2(4,6),c3;
    c3 = c1.add(c2);
    c3.display();
return 0;
}
