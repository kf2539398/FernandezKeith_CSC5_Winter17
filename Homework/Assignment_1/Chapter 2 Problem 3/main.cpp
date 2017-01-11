/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Keith Fernandez
 *
 * Created on January 10, 2017, 9:03 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    float sale;
    float Stax;
    float Ctax;
    float total;
    
    sale = 52;
    Stax = sale * .04;
    Ctax = sale * .02;
    total = Stax + Ctax;
    
    cout << "total sales tax is $" << total << endl;
    return 0;
}

