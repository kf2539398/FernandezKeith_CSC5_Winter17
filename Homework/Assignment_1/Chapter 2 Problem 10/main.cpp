/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Keith Fernandez
 *
 * Created on January 10, 2017, 11:29 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    int gallons;
    int miles;
    int MPG;
    
    gallons = 12;
    miles = 350;
    MPG = miles / gallons;
    
    cout << "This car travels " <<MPG<< " miles per gallon";
    return 0;
}

