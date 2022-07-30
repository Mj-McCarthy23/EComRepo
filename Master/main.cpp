//
//  main.cpp
//
//  Created by Michael McCarthy and Anton David Guaman Davila
//

#include <iostream>
#include <string>
#include "Item.h"
#include "DLL.h"

Item* createItem(string name, string cat, string exp, double price) {
    Item* newItem = new Item;
    newItem->setName(name);
    newItem->setCategory(cat);
    newItem->setExpiryDate(exp);
    newItem->setPrice(price);
    return newItem;
}

int main() {
    Item* x = createItem("orange", "fruits", "9 dec", 1.91);
    DLL<NodeDLL<Item>> y;
    y.pushDLL(*x);

    //Item x;
    //x.setName("ORANGE");
    //cout << x.getName() << endl;
    //x.setCategory("Fruits");
    //cout << x.getCategory() << endl;
    //x.setPrice(5.10);
    //cout << x.getPrice() << endl;
    //x.displayInfo();
    //Item y;
    //y.setName("Apple");
    //cout << y.getName() << endl;
    //y.setCategory("Fruits");
    //cout << y.getCategory() << endl;
    //y.setPrice(2.19);
    //cout << y.getPrice() << endl;
    //y.displayInfo();
    //Item z;
    //z.setName("Milk");
    //cout << z.getName() << endl;
    //z.setCategory("Dairy");
    //cout << z.getCategory() << endl;
    //z.setPrice(13.14);
    //cout << z.getPrice() << endl;
    //z.displayInfo();
    //DLL<Item> j;
    //j.pushDLL(x);
    //j.pushDLL(y);
    //j.pushDLL(z);
    //j.printDLL();
    return 0;

}