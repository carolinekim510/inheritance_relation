/*********************
# Name: Caroline Kim
# Data Structure
# Coding Asg 02 - female.h
# Purpose: Classes and Objects
# Demonstrations of knowledge in classes and objects
# By working with real data structure, this assignment will help to study in how inheritance, pass by values and pass by reference works.
**********************/

#ifndef CLASSES_FEMALE_H
#define CLASSES_FEMALE_H

#include "humans.h"
#define MIN 0

class Female : public Humans {

public:
    Female();
    Female(float, float, float);
    ~Female();

    // Getters
    float getBMR();
    float getCalories();

    // Setters
    void setBMR(float);

private:
    float bmr, calories;

};

#endif //CLASSES_FEMALE_H
