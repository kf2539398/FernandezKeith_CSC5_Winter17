/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Keith Fernandez
 *
 * Created on January 10, 2017, 10:10 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    int price;
    float tax;
    float tip;
    
    price = 44.50;
    tax = price * .0675;
    tip = price * .15;
    
    cout << "Meal Price $" << price << endl;
    cout << "Tax Amount $" << tax << endl;
    cout << "Tip Amount $" << tip << endl;
    
    return 0;
}

