#include "student.h"
cstudent::cstudent()
{
    srand(time(0));
    fio = 'a' + i;
    id = i;
    i++;
    rate = 1 + rand() % 180;
}
cstudent::cstudent(string a, int b)
{
    fio = a;
    id = i;
    i++;
    rate = b;
}
cstudent::~cstudent()
{
}
cstudent& cstudent:: operator=(const cstudent it) {
    this->fio = it.fio;
    this->rate = it.rate;
    this->id = it.id;
    return *this;
}
bool operator==(cstudent it1, cstudent it2) {
    if (it1.fio == it2.fio && it1.rate == it2.rate) return true;
    else return false;
}
int cstudent::i = 1;
ostream& operator<<(ostream& out, const cstudent it) {
    out << "FIO: " << it.fio << " Rate:" << it.rate << " ID:" << it.id << endl;
    return out;
}