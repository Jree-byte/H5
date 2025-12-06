#include <iostream>
#include "ClassA1.h"
#include "ClassA2.h"
#include "ClassB.h"

using namespace std;

int main()
{
    // Osoitin
    int a = 5;

    cout << "a:n arvo on: " << a << " ja osoite on: " << &a << endl;

    int *pointerA = &a;
    cout << "Pointterin osoittama osoite on: " << pointerA << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *pointerA << endl;

    // Referenssi
    int &refA = a;

    cout << "refA osoittaa osoitteeseen: " << &refA << endl;
    cout << "refA:n osoittaman muistipaikan arvo on: " << refA << endl;

    // Testataan osoitteen vaihtamista
    int b = 6;

    // refA = b;  // Tämä EI muuta refA:ta osoittamaan b:hen, se vain kopioi arvon.
    pointerA = &b;  // Tämä toimii

    cout << "\npointerA osoittaa nyt: " << pointerA << " ja arvo on: " << *pointerA << endl;
    cout << "refA osoittaa edelleen osoitteeseen: " << &refA << " ja arvo on: " << refA << endl;

    // --- ClassB, ClassA1, ClassA2 testit ---

    cout << "\n=== Olioargumentti (kopio) ===" << endl;

    ClassB objB;
    objB.setInfo("Olion B asettama info");

    ClassA1 objA1(objB);
    objA1.setBinfo("Olion objA1 asettama info");

    cout << "objB: " << objB.getInfo() << endl;
    cout << "objA1: " << objA1.getBinfo() << endl;

    cout << "\n=== Referenssi ===" << endl;

    ClassB &refB = objB;
    ClassA2 objA2(refB);
    objA2.setBinfo("Olion Agr asettama info");

    cout << "objB: " << objB.getInfo() << endl;
    cout << "objA2: " << objA2.getBinfo() << endl;

    return 0;
}
