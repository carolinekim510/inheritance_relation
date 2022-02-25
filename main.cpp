/*********************
# Name: Caroline Kim
# Data Structure
# Coding Asg 02 - main.cpp
# Purpose: Classes and Objects
# Demonstrations of knowledge in classes and objects
# By working with real data structure, this assignment will help to study in how inheritance, pass by values and pass by reference works.
**********************/

#include "main.h"

int main(int argc, char** argv){

    // Object of human
    Humans human1;
    Humans human2(125.3, 5.7, 24);

    // Object of female
    Female female1;
    Female female2(125.3, 5.7, 24);

    showHuman(&human1);
    showHuman(&human2);

    showFemale(&female1);
    showFemale(&female2);

    return 0;

}
