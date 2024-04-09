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

    void MB1() { std::cout << "Metodo MB1() chamado" << std::endl; }
    void MB2() { std::cout << "Metodo MB2() chamado" << std::endl; }

    void MB3() { std::cout << "Metodo MB3() chamado" << std::endl; }
};

class C {
private:
    std::string C1;
    int C2;

public:
    C(std::string c1, int c2) : C1(c1), C2(c2) {}

    std::string getC1() const { return C1; }
    void setC1(std::string c1) { C1 = c1; }

    int getC2() const { return C2; }
    void setC2(int c2) { C2 = c2; }

    void MC1() { std::cout << "Metodo MC1() chamado" << std::endl; }
    void MC2() { std::cout << "Metodo MC2() chamado" << std::endl; }

    void MC3() { std::cout << "Metodo MC3() chamado" << std::endl; }
};

class D {
private:
    int D1;
    float D2;

public:
    D(int d1, float d2) : D1(d1), D2(d2) {}

    int getD1() const { return D1; }
    void setD1(int d1) { D1 = d1; }

    float getD2() const { return D2; }
    void setD2(float d2) { D2 = d2; }

    void MD1() { std::cout << "Metodo MD1() chamado" << std::endl; }
    void MD2() { std::cout << "Metodo MD2() chamado" << std::endl; }
};
int main() {
    A objA(10, 3.14);
    B objB(20, 6.28);

    objA.MA1();
    objB.MB2();
      
    C objetoC("Exemplo", 42);

    objetoC.MC1();
    objetoC.MC2();
    objetoC.MC3();

    D objetoD(10, 3.14); 

    objetoD.MD1();
    objetoD.MD2(); 


    return 0;
}
