#ifndef COMPUTER_H
#define COMPUTER_H

#include <Product.h>


class computer : public Product
{
    public:
        int RAM;
        int screensize;
        bool isLaptop;

        computer();
        virtual ~computer();

        void turnOnOff();

    protected:

    private:
        void update();
};

#endif // COMPUTER_H
