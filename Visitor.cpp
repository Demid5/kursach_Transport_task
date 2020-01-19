//
// Created by demid5 on 19.01.2020.
//

#include "Visitor.h"

void LoadProductVisitor::visitApple(Apple *apple) {}

void LoadProductVisitor::visitPhone(Phone *phone) {}

void LoadProductVisitor::visitTshirt(Tshirt *tshirt) {}


void UnloadProductVisitor::visitApple(Apple *apple) {}

void UnloadProductVisitor::visitPhone(Phone *phone) {}

void UnloadProductVisitor::visitTshirt(Tshirt *tshirt) {}
