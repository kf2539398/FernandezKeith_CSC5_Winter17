/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Keith Jr
 *
 * Created on January 16, 2017, 2:25 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    float rectaw, rectal, rectbw, rectbl, areaa, areab;
    
    cout<<"This program compares the areas of two rectangles."<<endl;
    cout<<"What is the length of rectangle A?"<<endl;
    cin>> rectal;
    cout<<"What is the width of rectangle A?"<<endl;
    cin>> rectaw;
    
    areaa = rectaw * rectal;
    
    cout<<"The area for rectangle A is: "<<areaa<<" units."<<endl;
    cout<<endl;
    
    cout<<"What is the length of rectangle B?"<<endl;
    cin>> rectbl;
    cout<<"What is the width of rectangle B?"<<endl;
    cin>> rectbw;
    
    areab = rectbw * rectbl;
    
    cout<<"The area for rectangle B is: "<<areab<<" units."<<endl;
    cout<<endl;
    
    if (areaa>areab)
        cout<<"Therefore the area for rectangle A is greater than rectangle B.";
    
    
    else
        cout<<"Therefore the area for rectangle B is greater than rectangle A.";

    return 0;
}

