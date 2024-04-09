#include <iostream>

class A {
private:
    int A1;
    float A2;

public:

    A(int a1, float a2) : A1(a1), A2(a2) {}

    int getA1() const { return A1; }
    void setA1(int a1) { A1 = a1; }

    float getA2() const { return A2; }
    void setA2(float a2) { A2 = a2; }

    void MA1() { std::cout << "Metodo MA1() chamado" << std::endl; }
    void MA2() { std::cout << "Metodo MA2() chamado" << std::endl; }
    int getSoma(int a, float b) { return a + b; }
};

// Classe B
class B {
private:
    int B1;
    float B2;

public:
    B(int b1, float b2) : B1(b1), B2(b2) {}
    int getB1() const { return B1; }
    void setB1(int b1) { B1 = b1; }

    float getB2() const { return B2; }
    void setB2(float b2) { B2 = b2; }

    void MB1() { std::cout << "Método MB1() chamado" << std::endl; }
    void MB2() { std::cout << "Método MB2() chamado" << std::endl; }
};

int main() {
    A objA(10, 3.14);
    B objB(20, 6.28);

    objA.getSoma (); 
    objA.MA1();
    objB.MB2();

    return 0;
}
