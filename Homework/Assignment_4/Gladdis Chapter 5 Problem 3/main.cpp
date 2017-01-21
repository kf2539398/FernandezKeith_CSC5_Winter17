/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Keith Jr
 * Purpose: Calculating the amount that ocean level rises for 25 years
 * Created on January 20, 2017, 12:18 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    
    float rise; //amount ocean level is rising
    float level; // ocean level
    rise = 1.5; //how much the ocean level is raised by
    
    //Input values
    
    cout<<"This program calculates the amount the ocean will rise ";
    cout<<"(in millimeters) after 25 years."<<endl;
    
    
    for (int year=1;year <= 25;++year) //calculates how much the ocean level rises per year
    {
        level+=rise;
        
        //Output values
        cout<<"The ocean will rise "<<level<<" millimeters after ";
        cout<<year<<" years."<< endl;
    }
    
    
    return 0;
}

