/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Keith Fernandez
 *
 * Created on January 10, 2017, 11:14 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    float item1;
    float item2;
    float item3;
    float item4;
    float item5;
    float subtotal;
    float salestax;
    float totalsales;
    
    item1 = 12.95;
    item2 = 24.95;
    item3 = 6.95;
    item4 = 14.95;
    item5 = 3.95;
    subtotal = item1+item2+item3+item4+item5;
    salestax = subtotal * .06;
    totalsales = salestax + subtotal;
    
    cout << "Item 1: $" <<item1<< endl;
    cout << "Item 2: $" <<item2<< endl;
    cout << "Item 3: $" <<item3<< endl;  
    cout << "Item 4: $" <<item4<< endl;
    cout << "Item 5: $" <<item5<< endl;  
    cout << "Subtotal: $" <<subtotal<< endl;
    cout << "Sales Tax: $" <<salestax<< endl;
    cout << "Total Sale: $" <<totalsales<<endl;
            
    return 0;
}

