/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Keith Fernandez
 *
 * Created on January 10, 2017, 11:39 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    float acres;
    int feet;
    
    feet = 389767;
    acres = feet / 43560;
    
    cout << "There are " << acres<< " acres in a " <<feet;
    cout <<" square foot plot of land";
    return 0;
}

