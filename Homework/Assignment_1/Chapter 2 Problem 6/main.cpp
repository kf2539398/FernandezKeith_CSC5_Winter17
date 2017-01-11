/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Keith Fernandez
 *
 * Created on January 10, 2017, 10:48 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    int payAmount;
    int payPeriods;
    float annualPay;
    
    payAmount = 1700.00;
    payPeriods = 26;
    annualPay = payAmount * payPeriods;
    
         cout << "Total annual pay = $" << annualPay << endl;  
    
    return 0;
}

