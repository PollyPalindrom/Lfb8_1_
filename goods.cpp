#include "goods.h"
#include "error.h"
goods::goods(string name, int number, double price, string date) {
    this->name = name;
    this->number = number;
    this->price = price;
    this->date = date;
    this->len2=this->date.length();
    this->len1=this->name.length();
}
goods::goods() {
    this->name = "Nothing";
    this->number = 0;
    this->price = 0;
    this->date = "00/00/0000";
}
goods::~goods() {}
string goods::get_name() {
    try {
        if (this->name == "Nothing")
        {
            throw 2;
        }
    }
    catch (int i)
    {
        Exception ex(i);
        ex.Print();
    }
    return this->name;
}
int goods::get_number() {
    try {
        if (this->name == "Nothing")
        {
            throw 2;
        }
    }
    catch (int i)
    {
        Exception ex(i);
        ex.Print();
    }
    return this->number;
}
double goods::get_price() {
    try {
        if (this->name == "Nothing")
        {
            throw 2;
        }
    }
    catch (int i)
    {
        Exception ex(i);
        ex.Print();
    }
    return this->price;
}
string goods::get_date() {
    try {
        if (this->name == "Nothing")
        {
            throw 2;
        }
    }
    catch (int i)
    {
        Exception ex(i);
        ex.Print();
    }
    return this->date;
}
void goods::set_name(string name) {
    this->name = name;
    this->len1=this->name.length();
}
void goods::set_number(int number) {
    this->number = number;
}
void goods::set_price(double price) {
    this->price = price;
}
void goods::set_data(string data) {
    this->date = data;
    this->len2=this->date.length();
}
ostream& operator<<(ostream& out, const goods& item) {
    try {
        if (item.name == "Nothing")
        {
            throw 2;
        }
    }
    catch (int i)
    {
        Exception ex(i);
        ex.Print();
    }
    out << item.name << " " << item.number << " " << item.price << " "
        << item.date << endl;
    return out;
}
istream& operator>>(istream& in, goods& item) {
    cout << "Name:";
    in >> item.name;
    cout << "Number:";
    in >> item.number;
    cout << "Price:";
    in >> item.price;
    cout << "Data:";
    in >> item.date;
    item.len1=item.name.length();
    item.len2=item.date.length();
    return in;
}
bool operator==(goods item1, goods item2) {
    if (item1.name == item2.name && item1.number == item2.number && item1.price == item2.price && item1.date == item2.date) return true;
    else return false;
}