/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Keith Jr
 *
 * Created on January 12, 2017, 10:42 PM
 */

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

/*
 * 
 */
int main() {
    
    int rain1, rain2, rain3;
    string month1, month2, month3;
    float avg;
    
    cout<<"This program calculates the average rainfall for three months.";
    cout<<endl;
    cout<<"Enter the name of month 1."<<endl;
    getline(cin, month1);
    cout<<endl;
    
    cout<<"Enter the name of month 2."<<endl;
    getline(cin, month2);
    cout<<endl;
    
    cout<<"Enter the name of month 3."<<endl;
    getline(cin, month3);
    cout<<endl;
    
    cout<<"Enter rainfall for month 1."<<endl;
    cin>> rain1;
    cout<<endl;
    
    cout<<"Enter rainfall for month 2."<<endl;
    cin>> rain2;
    cout<<endl;
    
    cout<<"Enter rainfall of month 3."<<endl;
    cin>> rain3;
    cout<<endl;
    
    avg = (rain1 + rain2 + rain3)/ 3;
    
    cout<<"The average rainfall for " <<month1;
    cout<<" " <<month2;
    cout<<" "<<month3;
    cout<<" is " <<setprecision(1) << fixed <<avg <<" inches";
            
    return 0;
}

