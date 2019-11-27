#include <iostream>

#include "computer.h"

using namespace std;

void displayProduct(Product *product){
cout << product->model << endl;
cout << product->brand->Getname() << endl;

}

int main()
{
    //define Brand
    Brand smallSoft;
    smallSoft.Setname("SmallSoft__top");

    //Initialize computer
    computer* mycomputer = new computer(&smallSoft);
    // update computer values
    mycomputer->price = 30;
    mycomputer->model = "Top_Model";

    //Display some computers arguments
    displayProduct(mycomputer);
    mycomputer->turnOnOff();

    // initial main appli code generated automatically
    cout << "Hello world!" << endl;

    delete mycomputer;
    return 0;

}
