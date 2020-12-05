#include "libs.h"
#include "n_list.h"
#include "file.h"
int main() {
    int line;
    goods item1("telephone", 20, 300.50,"20/10/2019");
    goods item2("book", 100, 15.50, "25/12/2019");
    goods item3("plant", 10, 5, "03/12/2020");
    goods item4("pen", 106, 0.60, "04/12/2020");
    goods item5("pencil", 43, 0.40, "06/06/2020");
    cout << "1txt.txt" << endl;
    File f1("D:\\kpiuap\\1txt.txt", 1);
    f1.open("w");
    f1.set_size(5);
    f1 << item1;
    f1 << item2;
    f1 << item3;
    f1 << item4;
    f1 << item5;
    f1.close();
    f1.open("r");
    cout << f1;
    f1.close();
    cout << "2txt.txt  ios::binary" << endl;
    File f2("D:\\kpiuap\\txt2.txt", 2);
    f2.open("w");
    f2.set_size(5);
    f2 << item1;
    f2 << item2;
    f2 << item3;
    f2 << item4;
    f2 << item5;
    f2.close();
    f2.open("r");
    cout << f2;
    f2.close();
    cout << "\n3.bin  ios::binary" << endl;
    File f3("D:\\kpiuap\\binar.bin", 2);
    f3.open("w");
    f3.set_size(5);
    f3 << item1;
    f3 << item2;
    f3 << item3;
    f3 << item4;
    f3 << item5;
    f3.close();
    f3.open("r");
    cout << f3;
    f3.close();
//    int a = 0;
//    do {
//        cout << "Enter the line that you want to change:" << endl;
//        cin >> line;
//        f1.edit(line);
//        f1.open("r");
//        cout << f1;
//        f1.close();
//        cout << "Do you want to change anything else?\n1 - yes\n0 - no" << endl;
//        cin >> a;
//    } while (a);
    cout << "Sort by name:" << endl;
    f1.sortName();
    f1.open("r");
    cout << f1;
    f1.close();
    cout << "Sort by number:" << endl;
    f1.sortNumber();
    f1.open("r");
    cout << f1;
    f1.close();
    cout << "Sort by price:" << endl;
    f1.sortPrice();
    f1.open("r");
    cout << f1;
    f1.close();
    cout << "Sort by date:" << endl;
    f1.sortDate();
    f1.open("r");
    cout << f1;
    f1.close();
    cout << "The most young team (3 people):" << endl;
    f1.open("r");
    n_list list;
    for (int i = 0; i < f1.get_size(); i++) {
        list.add_front(f1.get_item());
    }
    f1.close();
    list.find2(list);
    f1.edit(2);
    return 0;
}
