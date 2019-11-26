#ifndef FREEZER_H
#define FREEZER_H

#include <Product.h>


class freezer : public Product
{
    public:
        int capacity;
        bool isFrontal;

        freezer();
        virtual ~freezer();

        executeProgram(int programId);

    protected:

    private:
};

#endif // FREEZER_H
