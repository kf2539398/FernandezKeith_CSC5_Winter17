/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Keith Jr
 *
 * Created on January 16, 2017, 4:45 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    float p, n, d, q, dollar, sum;
    int penny, nickel, dime, quarter;
    
    
    cout<<"This program calculates the sum of change to show whether ";
    cout<<"it adds up to a single dollar."<<endl;
    cout<<"Please enter the number of pennies: ";
    cin>> penny;
    cout<<"Please enter the number of nickels: ";
    cin>> nickel;
    cout<<"Please enter the number of dimes: ";
    cin>> dime;
    cout<<"Please enter the number of quarters: ";
    cin>> quarter;
    cout<<endl;
    
    p = penny * .01; //penny
    n = nickel * .05; //nickel
    d = dime * .10; //dime
    q = quarter * .25; //quarter
    dollar = 1;
    
    sum = p + n + d + q;
    
    if ( sum == dollar)
        cout<<"Congratulations, your change adds up to a dollar!!!";
    else if (sum > dollar)
        cout<<"Sorry, your change adds up to more than a dollar.";
    else if (sum < dollar)
        cout<<"Sorry, your change adds up to less than a dollar.";
    cout<<endl;
    return 0;
}

