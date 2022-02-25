/*********************
# Name: Caroline Kim
# Data Structure
# Coding Asg 02 - humans.cpp
# Purpose: Classes and Objects
# Demonstrations of knowledge in classes and objects
# By working with real data structure, this assignment will help to study in how inheritance, pass by values and pass by reference works.
**********************/

#include "humans.h"



Humans::Humans(){
    setWeight(MIN);
    setHeight(MIN);
    setAge(MIN);
}

Humans::Humans(float w, float h, float a){
    setWeight(w);
    setHeight(h);
    setAge(a);
}

Humans::~Humans(){}

// Getters
float Humans::getWeight(){
    return weight;
}

float Humans::getHeight(){
    return height;
}

float Humans::getAge(){
    return age;
}



// Setters
void Humans::setWeight(float w){
    if (w > MIN){
        weight = w;
    } else {
        weight = MIN;
    }
}

void Humans::setHeight(float h){
    if (h > MIN){
        height = h;
    } else {
        height = MIN;
    }
}

void Humans::setAge(float a){
    if (a > MIN) {
        age = a;
    } else {
        age = MIN;
    }
}