/*********************
# Name: Caroline Kim
# Data Structure
# Coding Asg 02 - female.cpp
# Purpose: Classes and Objects
# Demonstrations of knowledge in classes and objects
# By working with real data structure, this assignment will help to study in how inheritance, pass by values and pass by reference works.
**********************/

#include "female.h"

Female::Female(){
    setWeight(MIN);
    setHeight(MIN);
    setAge(MIN);
}

Female::Female(float w, float h, float a){
    setWeight(w);
    setHeight(h);
    setAge(a);
}

Female::~Female(){}

// Getter
float Female::getBMR() {
    if (weight > MIN && height > MIN && age > MIN){
        bmr = 655 + (weight * 4.3) + (height * 4.7) - (age * 4.7);
    } else {
        bmr = MIN;
    }
    return bmr;
}

float Female::getCalories(){
    calories = bmr * 1.2;
    return calories;
}

// Setter
void Female::setBMR(float b){
    if (b > MIN) {
        bmr = b;
    } else {
        bmr = MIN;
    }
}


