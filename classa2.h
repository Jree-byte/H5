#ifndef CLASSA2_H
#define CLASSA2_H

#include "ClassB.h"
#include <string>
using namespace std;

class ClassA2
{
private:
    ClassB &refB;

public:
    ClassA2(ClassB &);    // referenssi
    string getBinfo();
    void setBinfo(string);
};

#endif
