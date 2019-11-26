#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>

class Product
{
    public:
        int id;
        float price;
        int product_size;
        std::string model;

        Product();
        virtual ~Product();

        virtual void turnOnOff() = 0;

    protected:

    private:
};

#endif // PRODUCT_H
