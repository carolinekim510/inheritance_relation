/*********************
# Name: Caroline Kim
# Data Structure
# Coding Asg 02 - humans.h
# Purpose: Classes and Objects
# Demonstrations of knowledge in classes and objects
# By working with real data structure, this assignment will help to study in how inheritance, pass by values and pass by reference works.
**********************/

#ifndef CLASSES_HUMANS_H
#define CLASSES_HUMANS_H

#define MIN 0

class Humans{

public:
    Humans();
    Humans(float, float, float);
    ~Humans();

    // Getters
    float getWeight();
    float getHeight();
    float getAge();

    // Setters
    void setWeight(float);
    void setHeight(float);
    void setAge(float);

protected:
    float weight, height, age;

};

#endif //CLASSES_HUMANS_H