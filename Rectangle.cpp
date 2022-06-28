//
// Created by MKJ on 3/25/2022.
//


#include "Rectangle.h"
/**
 * A default constructor
 */
Rectangle::Rectangle()  : height(0), width(0){

}
/**
 * It is a constructor which has two parameter, then we can initialize it
 * @param height represents the height of The rectangle
 * @param width  represents the width of The rectangle
 */
Rectangle::Rectangle(unsigned short height, unsigned short width) : height(height), width(width) {}

/**
 *  It is a static function for computing the area of Rectangle
 * @param height represents the height of The rectangle
 * @param width represents the width of The rectangle
 * @return  it returns the area of the Rectangle
 */
int Rectangle::areaCalculation(unsigned short height, unsigned short width) {

    return height *width;

}
/**
 * It is a getter function which is used to retrieve the height value
 * @return it returns the height of Rectangle
 */
unsigned short Rectangle::getHeight() const {
    return height;

}
/**
 * It is a setter function which is used to set the height value
 * @param height represents the height of The rectangle
 */


void Rectangle::setHeight(unsigned short height) {
    Rectangle::height = height;
    areaVal = false;
}

/**
 * It is a getter function which is used to retrieve width value
 * @return it returns the height of Rectangle
 */
unsigned short Rectangle::getWidth() const {
    return width;
}

/**
 * It is a setter function which is used to set the width value
 * @param width represents the width of The rectangle
 */
void Rectangle::setWidth(unsigned short width) {
    Rectangle::width = width;
    areaVal = false;
}
/**
 * It is a getter function which is used to retrieve area value
 * @return it returns the value of Area
 */
int Rectangle::getArea() const {
    return area;
}

/**
 * It is a function which will return the area, it will change whenever the value changed
 * @return it returns the area
 */
int Rectangle::calcArea() {
    if(!areaVal)
    {
        area = Rectangle::areaCalculation(width,height);
        areaVal= true;

        return area;
    }
    return area;

}

