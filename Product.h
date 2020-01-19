//
// Created by demid5 on 19.01.2020.
//

#ifndef KYRS_TRANSPORT_TASK_PRODUCT_H
#define KYRS_TRANSPORT_TASK_PRODUCT_H

#include <string>
#include <vector>

class Visitor;

class ProductComponent {
private:
    std::string _name;
protected:
    ProductComponent(const std::string name);
public:
    std::string getName() { return _name; }
    virtual void add(ProductComponent*) {};
    virtual void remove() {};
    virtual std::vector<ProductComponent*> getChild() {return std::vector<ProductComponent*>();};
    // часть execute()
    virtual void accept(Visitor *) = 0;
};


class Box : public ProductComponent {
private:
    std::vector<ProductComponent*> products;
public:
    Box(const std::string _name) : ProductComponent(_name){};
    virtual void add(ProductComponent*);
    virtual void remove();
    virtual std::vector<ProductComponent*> getChild();
    // execute()
    void accept(Visitor *);
};

class Apple : public ProductComponent {
private:
    int weight;
    int price;
    int strength;
public:
    Apple(const std::string name): ProductComponent(name){};
    void accept(Visitor*);
};


class Phone : public ProductComponent {
private:
    int weight;
    int price;
    int strength;
public:
    Phone(const std::string name): ProductComponent(name){};
    void accept(Visitor*);
};


class Tshirt : public ProductComponent {
private:
    int weight;
    int price;
    int strength;
public:
    Tshirt(const std::string name): ProductComponent(name){};
    void accept(Visitor*);
};


#endif //KYRS_TRANSPORT_TASK_PRODUCT_H
