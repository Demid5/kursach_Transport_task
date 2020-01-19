//
// Created by demid5 on 19.01.2020.
//

#ifndef KYRS_TRANSPORT_TASK_PRODUCTMANAGER_H
#define KYRS_TRANSPORT_TASK_PRODUCTMANAGER_H

#include <string>
#include <vector>
#include <map>
#include "Product.h"
using namespace std;

class ProductManager {
private:
    map<string, pair<ProductComponent*, ProductComponent*> > mapBox;
public:
    ProductManager();
    void move(string name, int count);
};


#endif //KYRS_TRANSPORT_TASK_PRODUCTMANAGER_H
