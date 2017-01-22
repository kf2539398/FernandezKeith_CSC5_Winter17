/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Keith Jr
 * Purpose: To sum up the doubling of pennies per day and convert 
   to dollar amounts
 * Created on January 21, 2017, 1:50 PM
 */

#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
        //Declare Variables
    float days;         //Days to be calculated
    float money;        //Salary to be calculated
    
                //Input Values
    cout<<"Insert number of days."<<endl;
    cin>>days;
    while (days<=1)
    {
        cout<<"Please insert a value greater than 1 for days."<<endl;
        cin>>days;
        
    }
    cout<<setw(5)<<"Day"<<setw(20)<<"Salary"<<endl;
    for(int x=1;x<=days;x++) {
        
        money = (pow(2,x) / 100);
        
        cout<<setw(4)<<x;
        cout<<setw(16)<<"$"<<setprecision(2)<<fixed<<money<<endl;
    }

    
    return 0;
}

