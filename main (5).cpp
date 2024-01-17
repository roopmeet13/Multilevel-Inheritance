// example of multilevel inheritance
#include <iostream>

using namespace std;

class parent{
    public:
    parent(){
        cout<<"Constructor of parent class is called"<<endl;
    }
};

class child: public parent{
    public:
    child(){
        cout<<"Constructor of child class is called"<<endl;
    }
};

class grandchild: public child{
    public:
    grandchild(){
        cout<<"const. of grandchild class"<<endl;
    }
};

int main()
{
    grandchild c;

    return 0;
}