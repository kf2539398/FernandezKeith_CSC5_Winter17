/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Keith Jr
 *
 * Created on January 16, 2017, 2:42 PM
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main() {
    float weight, height;
    float bmi, overweight, underweight;
    
    cout<<"This program calculates a person's BMI and identifies";
    cout<<"whether a person is"<<endl;
    cout<<"at an optimal weight, underweight,or overweight."<<endl;
    cout<<"First we have to calculate the BMI."<<endl;
    cout<<"Please enter the persons weight in pounds: ";
    cin>> weight;
    cout<<"Please enter the persons height in inches: ";
    cin>>height;
    cout<<endl;
    bmi = (weight * 703) / pow(height, 2);
    
    cout<<"The persons BMI is " << setprecision(4)<< bmi;
    cout<<endl;
    
    overweight = 25.0;
    underweight = 18.5;
           
    
    if (bmi > overweight)
        cout<<"According to the BMI index this person is overweight.";
    else if (bmi >= underweight)
        cout<<"According to the BMI index this person is at an optimal weight.";
    else if(bmi < underweight)
        cout<<"According to the BMI index this person is underweight.";
    
    return 0;
}

