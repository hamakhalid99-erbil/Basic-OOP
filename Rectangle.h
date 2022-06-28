//
// Created by MKJ on 3/25/2022.
//

#ifndef BASICCLASSES1_RECTANGLE_H
#define BASICCLASSES1_RECTANGLE_H


class Rectangle {
    /**
     * The class will represents the integer members for storing rectangle dimensions
     */

    private:

        unsigned short height; /**< (Height) represents the  height of The rectangle*/
        unsigned short width; /**< (width) represents the width of The rectangle*/
        int area;             /**< (Area) represents Area  of The rectangle*/
        bool areaVal= false;


    public:
        Rectangle();

        Rectangle(unsigned short height, unsigned short width);

        unsigned short getHeight() const;

        void setHeight(unsigned short height);

        unsigned short getWidth() const;

        void setWidth(unsigned short width);

        int getArea() const;

        static int areaCalculation(unsigned short height, unsigned short width);
        int calcArea();



    };




#endif //BASICCLASSES1_RECTANGLE_H
