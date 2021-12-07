// Copyright (c) 2021 Ketia Gaelle Kaze All rights reserved.
//
// Created by: Ketia Gaelle Kaze
// Created on: Dec. 06, 2021
// This program asks the user for the radius
// and height of a cone. It then calculates
// and displays the area and volume.
#include <iostream>
#include <iomanip>
#include<cmath>
// declare variables
float radius, height, area, volume;

int main() {
  // get input from user
  std::cout << "\033[1;34;38m Today we will calculate the area and\n";
  std::cout << "volume of a cone.\n";
  std::cout << "\033[1;34;38m Enter the radius (cm): ";
  std::cin >> radius;
  std::cout << "\033[1;34;38m Enter the height (cm): ";
  std::cin >> height;

  // calculate area and volume
  area = M_PI * radius*(radius+sqrt(pow(radius, 2)+pow(height, 2)));
  volume = M_PI*pow(radius, 2)*height/3;

  // display the results to the user
  std::cout << std::endl;
  std::cout << "Area = "<< std::setprecision(2) << std::fixed << area << " cm^2.\n";
  std::cout << "Volume = " << std::setprecision(2) << std::fixed << volume << " cm^3.\n";
}
