//
// Created by demid5 on 19.01.2020.
//

#include "ProductManager.h"

ProductManager::ProductManager() {
    this->mapBox["apple"] = make_pair(new Box("apple"), new Apple("red"));
    this->mapBox["phone"] = make_pair(new Box("phone"), new Phone("nokia"));
    this->mapBox["tshirt"] = make_pair(new Box("tshirt"), new Tshirt("nike"));
}

void ProductManager::move(string name, int count) {
    ProductComponent *productComponent = mapBox[name].second;
    int dif = mapBox[name].first->getChild().size() - count;
    if (dif > 0) {
        for (int i = 0; i < dif; ++i) {
            mapBox[name].first->remove();
        }
    } else {
        for (int i = 0; i < -dif; ++i) {
            mapBox[name].first->add(mapBox[name].second);
        }
    }

    int a = 4;
}