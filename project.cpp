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
