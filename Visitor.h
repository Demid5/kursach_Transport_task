//
// Created by demid5 on 19.01.2020.
//

#ifndef KYRS_TRANSPORT_TASK_VISITOR_H
#define KYRS_TRANSPORT_TASK_VISITOR_H


#include "Product.h"

class Visitor {
public:
    virtual void visitApple(Apple*) = 0;
    virtual void visitPhone(Phone*) = 0;
    virtual void visitTshirt(Tshirt*) = 0;
};

class LoadProductVisitor : public Visitor {
public:
    void visitApple(Apple*);
    void visitPhone(Phone*);
    void visitTshirt(Tshirt*);
};

class UnloadProductVisitor : public Visitor {
public:
    void visitApple(Apple*);
    void visitPhone(Phone*);
    void visitTshirt(Tshirt*);
};

#endif //KYRS_TRANSPORT_TASK_VISITOR_H
