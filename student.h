#pragma once
#include "libs.h"
class cstudent
{
public:
    static int i;
    int id;
    string fio;
    int rate;
public:

    cstudent();
    cstudent(string a, int b);
    ~cstudent();
    cstudent& operator=(const cstudent it);
    friend bool operator==(cstudent it1, cstudent it2);
    friend ostream& operator<<(ostream& out, const cstudent it);
};
