#include <iostream>
#include <string>
#include <vector>
#include <ostream>

using namespace std;

template <class T>
class Container {

public:
    vector <T> data;
    void add(T element) {
        data.push_back(element);
    }

    void display()
    {
        for (int i = 0; i < 4; i++)
        {
            cout << data[i] << endl;
        }
    }
};



int main() 
{

    Container<int>* container = new Container <int>();


    container->add(5);
    container->add(2);
    container->add(8);
    container->add(1);
    container->display();

}