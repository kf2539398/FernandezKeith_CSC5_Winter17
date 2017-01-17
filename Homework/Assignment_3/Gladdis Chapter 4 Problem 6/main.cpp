/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Keith Jr
 *
 * Created on January 16, 2017, 3:38 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    float mass, weight;
    int max, min;
    
    cout<<"This program is used to calculate the weight in newtons of an";
    cout<<" object using the objects mass as well as determine"<<endl;
    cout<<"if the object is too heavy or too light."<<endl;
    cout<<"What is the mass of the object in kilograms: ";
    cin>> mass;
    
    weight = mass * 9.8;
    
   
    
    max = 1000;
    min = 10;
    
    if (weight > max)
        cout<<"The object is too heavy!";
    else if (weight > min)
        cout<<"The object weighs "<<weight<<" Newtons.";
    else if (weight < min)
        cout<<"The object is too light!";
    
            
    return 0;
}

