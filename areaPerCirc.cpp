// Copyright (c) 2022 Van Nguyen All rights reserved.
//
// Created by: Van Nguyen
// Date: September 21th, 2022
// This program prints out the area and circumference of a
// circle with a radius of 15mm.


#include <iostream>
#include <cmath>


int main() {
    // Initialize Variables
    double radius = 15;
    double diameter = radius * 2;
    // Calculates the Area and Circumference of the circle
    double area = M_PI * pow(radius, 2);
    double circumference = M_PI * diameter;
    // Outputs the Area and Circumference of the circle
    std::cout << "For a circle with a radius of 15mm:" << std::endl;
    std::cout << "Area: " << area << "mm^2" << std::endl;
    std::cout << "Circumference: " << circumference << "mm" << std::endl;
}
