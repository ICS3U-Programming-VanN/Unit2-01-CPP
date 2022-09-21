// Copyright (c) 2022 Van Nguyen All rights reserved.
//
// Created by: Van Nguyen
// Date: September 21th, 2022
// This program prints out the area and circumference of a
// circle with a diameter of 13cm.


#include <iostream>
#include <cmath>


int main() {
    // Initialize Variables
    double diameter = 13;
    double radius = diameter / 2;
    // Calculates the Area and Circumference of the circle
    double area = floor(M_PI * pow(radius, 2) * 100) / 100;
    double circumference = floor(M_PI * diameter * 100) / 100;
    // Outputs the Area and Circumference of the circle
    std::cout << "For a circle with a diameter of 13cm:" << std::endl;
    std::cout << "Area: " << area << "cm^2" << std::endl;
    std::cout << "Circumference: " << circumference << "cm" << std::endl;
}
