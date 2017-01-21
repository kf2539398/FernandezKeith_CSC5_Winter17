/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Keith Jr
 * Purpose: To project country club membership rates for the next 6 years
 * Created on January 20, 2017, 2:25 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //Declare Variables
    int year;             //The number of years that have passed
    int rate;            //initial membership rate
    float memrate;      //membership rate
    
    rate = 2500;
    
    //Input Values
    cout<<"These are the country club membership rates for the next six years.";
    cout<<endl;
    
    for(year=1;year<=6;year++)
    {
        rate += rate * .04;
        
        cout<<"The membership rate after year "<<year<<" is: $"<<rate<<endl;
        
    }
    
    return 0;
}

