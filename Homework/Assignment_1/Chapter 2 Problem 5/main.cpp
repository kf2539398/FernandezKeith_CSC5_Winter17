/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Keith Fernandez
 *
 * Created on January 10, 2017, 10:28 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    int a;
    int b;
    int c;
    int d;
    int e;
    float sum;
    float average;
    
    a = 28;
    b = 32;
    c = 37;
    d = 24;
    e = 33;
    
    sum = a+b+c+d+e;
    average = sum / 5;
    
    cout << "average of the five numbers is " << average << endl;
    
    
    return 0;
}

