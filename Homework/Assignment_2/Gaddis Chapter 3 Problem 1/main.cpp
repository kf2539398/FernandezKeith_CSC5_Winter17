/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Keith Jr
 *
 * Created on January 12, 2017, 9:35 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    int miles, gas;
    float MPG;
    
    cout<<"This program calculates a cars gas mileage."<<endl;
    cout<<"How far can the car travel one one full tank of gas?"<<endl;
    cin>>miles;
    cout<<endl;
    
    cout<<"How many gallons of gas can the car hold?"<<endl;
    cin>>gas;
    cout<<endl;
    
    MPG = miles / gas;
    cout<<MPG;
    return 0;
}

