#include <iostream>
#include "Rectangle.h"

int main() {
    Rectangle rec1 = Rectangle();

    rec1.setWidth(10);
    rec1.setHeight(2);

    std::cout<<"width= "<<rec1.getWidth()<<std::endl;
    std::cout<<"height= "<<rec1.getHeight()<<std::endl;

    rec1.calcArea();
    std::cout<<"Area= "<<rec1.getArea()<<std::endl;

    rec1.setWidth(11);
    rec1.calcArea();
    std::cout<<"Area= "<<rec1.getArea()<<std::endl;
    std::cout<<"Area= "<<Rectangle::areaCalculation(10,2)<<std::endl;
    return 0;
}
