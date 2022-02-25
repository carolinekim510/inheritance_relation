/*********************
# Name: Caroline Kim
# Data Structure
# Coding Asg 02 - functions.cpp
# Purpose: Classes and Objects
# Demonstrations of knowledge in classes and objects
# By working with real data structure, this assignment will help to study in how inheritance, pass by values and pass by reference works.
**********************/

#include "functions.h"


void showHuman(Humans *human) {
    std::cout << human -> getWeight() << std::endl;
    std::cout << human -> getHeight() << std::endl;
    std::cout << human -> getAge() << std::endl;
    std::cout << std::endl;
}

void showFemale(Female *female) {
    std::cout << "Female Weight: " << female -> getWeight() << std::endl;
    std::cout << "Female Height: " << female -> getHeight() << std::endl;
    std::cout << "Female Age: " << female -> getAge() << std::endl;
    std::cout << "According to given information, her BMR is: " << female -> getBMR() << std::endl;
    std::cout << "According to given information, her daily appropriate calories: " << female -> getCalories() << std::endl;
    std::cout << std::endl;
}


