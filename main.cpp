#include <iostream>

#include "computer.h"

using namespace std;

void displayProduct(Product *product){
cout << product->model << endl;

}

int main()
{
    //computer mycomputer;
    computer* mycomputer = new computer;
    mycomputer->price = 30;
    mycomputer->model = "Top_Model";
    displayProduct(mycomputer);
    mycomputer->turnOnOff();
    cout << "Hello world!" << endl;

    delete mycomputer;
    return 0;

}
