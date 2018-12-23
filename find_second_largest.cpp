#include "iostream"
using namespace std;

class empty
{
};

struct name
{
    char t;
    int hf;
    double hgg;
    char e;
};

class derived : virtual public empty
{
    int c;
};

class d2 : virtual public derived
{
    char d;
};

class d3 : virtual public d2
{
    char hg;
};


int main()
{
    char* hg;
    char* ptr;

    cout<<"name "<<*hg<<"   "<<*ptr<<"   "<< sizeof(name);
}