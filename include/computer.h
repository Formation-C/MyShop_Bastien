#ifndef COMPUTER_H
#define COMPUTER_H

#include <Product.h>


class computer : public Product
{
    using Product::Product;

    public:
        int RAM;
        int screensize;
        bool isLaptop;

        virtual ~computer();

        void turnOnOff();

    protected:

    private:
        void update();
};

#endif // COMPUTER_H
