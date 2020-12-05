
#pragma once
#include "libs.h"
class goods {
protected:
    string name;
    int number;
    double price;
    string date;
    size_t len1,len2;
public:
    goods(string name, int number, double price, string date);
    goods();
    ~goods();
    string get_name();
    int get_number();
    double get_price();
    string get_date();
    void set_name(string name);
    void set_number(int number);
    void set_price(double price);
    void set_data(string data);
    friend ostream& operator<<(ostream& out, const goods& item);
    friend istream& operator>>(istream& in, goods& item);
    friend bool operator==(goods item1, goods item2);
};
