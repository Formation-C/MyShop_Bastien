#ifndef FREEZER_H
#define FREEZER_H

#include <Product.h>


class freezer : public Product
{
    using Product::Product;

    public:
        int capacity;
        bool isFrontal;

        virtual ~freezer();

        executeProgram(int programId);

    protected:

    private:
};

#endif // FREEZER_H
