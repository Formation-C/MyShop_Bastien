#ifndef BRAND_H
#define BRAND_H

#include <iostream>

class Brand
{
    public:
        int Getid() { return id; }
        void Setid(int val) {
            if (val < 0) val=0;
            else  id = val    ;}
        std::string Getname() { return name; }
        void Setname(std::string val) { name = val; }
        std::string Getlogo() { return logo; }
        void Setlogo(std::string val) { logo = val; }

        Brand();
        virtual ~Brand();

    protected:

    private:
        int id;
        std::string name;
        std::string logo;
};

#endif // BRAND_H
