//
// Created by demid5 on 19.01.2020.
//

#include "Product.h"
#include <vector>
#include <iostream>
#include "Visitor.h"

using namespace std;

ProductComponent::ProductComponent(std::string name) {
    this->_name = name;
}

void Box::accept(Visitor *visitor) {
    for (auto elem: products) {
        elem->accept(visitor);
    }
}


void Box::add(ProductComponent *productComponent) {
    this->products.push_back(productComponent);
}

void Box::remove() {
    products.erase(products.cbegin());
}

std::vector<ProductComponent *>  Box::getChild() {
    return this->products;
}

void Apple::accept(Visitor *visitor) {
    visitor->visitApple(this);
}

void Phone::accept(Visitor *visitor) {
    visitor->visitPhone(this);
}

void Tshirt::accept(Visitor *visitor) {
    visitor->visitTshirt(this);
}
