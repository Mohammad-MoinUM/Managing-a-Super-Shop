* Name: Mohammad Moin Uddin MOIN
Roll:2107111*/



#include <iostream>
using namespace std;

class Vegetables
{
    int i;
    string veg_name[3] = {"Tomato", "Potato", "Onion"};
    float veg_price[3];

public:
    Vegetables()
    {
        this->veg_price[0] = 20;
        this->veg_price[1] = 30;
        this->veg_price[2] = 40;
    }
    Vegetables(int i, int t)
    {
        this->veg_price[i] = t;
    }

    float getVal(int n)
    {
        return veg_price[n];
    }

    string getName(int n)
    {
        return veg_name[n];
    }
};
class Meat
{
    int i;
    string meat_name[3] = {"Beaf", "Mutton", "Chicken"};
    float meat_price[3];

public:
    Meat()
    {
        this->meat_price[0] = 500;
        this->meat_price[1] = 1000;
        this->meat_price[2] = 200;
    }
    Meat(int i, int t)
    {
        this->meat_price[i] = t;
    }

    float getVal(int n)
    {
        return meat_price[n];
    }

    string getName(int n)
    {
        return meat_name[n];
    }
};
class Liquid
{
    int i;
    string liquid_name[3] = {"Oil", "Cocacola", "Mojo"};
    float liquid_price[3];

public:
    Liquid()
    {
        this->liquid_price[0] = 200; // price[0];
        this->liquid_price[1] = 30; // price[2];
        this->liquid_price[2] = 40;
    }
    Liquid(int i, int t)
    {
        this->liquid_price[i] = t;
    }

    float getVal(int n)
    {
        return liquid_price[n];
    }

    string getName(int n)
    {
        return liquid_name[n];
    }
};

class Manager
{
    string pass = "12345";

public:
    bool matchPass(string *str)
    {
        if (*str == pass)
            return true;
        return false;
    }
    friend Vegetables;
    friend Meat;
    friend Liquid;
};

class Shop
{
public:
    Vegetables veg;
    Meat meat;
    Liquid lq;
    Manager mn;
    Shop() {}
    void setVeg(int index, int n)
    {
        veg = Vegetables(index, n);
    }
    void setMeat(int index, int n)
    {
        meat = Meat(index, n);
    }
    void setLiq(int index, int n)
    {
        lq = Liquid(index, n);
    }
};


int main()
{
    Shop sp;
    loop(sp);
    return 0;
}
