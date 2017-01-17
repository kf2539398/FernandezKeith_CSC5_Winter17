/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Keith Jr
 *
 * Created on January 16, 2017, 2:09 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    int date, month, year, dath;
    
    cout<<"This program tests whether a calendar date is magic or not."<<endl;
    cout<<"A magic calendar date occurs when"<<endl;
    cout<<"Date * Month = Last Two Digits of the Year."<<endl;
    cout<<"Example: June 10, 1960 = 06/10/60"<<endl;
    cout<<"6 * 10 = 60"<<endl;
    cout<<"Please insert month in numbered form."<<endl;
    cin>> month;
    cout<<"Please insert the desired date in numbered form."<<endl;
    cin>> date;
    cout<<"Please insert last two digits of the desired year in numbered form.";
    cout<<endl;
    cin>> year;
    
    dath = date * month;
    
    if (dath==year)
        cout<<"Congratulations that is a magic day!";
    else 
        cout<<"Im sorry that day is not a magic day.";
    
            
    return 0;
}

