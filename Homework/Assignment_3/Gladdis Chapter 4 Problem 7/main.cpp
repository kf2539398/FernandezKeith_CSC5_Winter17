/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Keith Jr
 *
 * Created on January 16, 2017, 4:22 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    
    float days, hours, minutes, second;
    int day, hour, min, zero;
    
    cout<<"This program calculates how many days, hours, minutes, ";
    cout<<"seconds there are from any number of seconds that ";
    cout<<"are entered."<<endl;
    
    cout<<"Please enter the number of seconds: ";
    cin>> second;
    cout<<endl;
    
    day = 86400;
    hour = 3600;
    min = 60;
    zero = 0;
    
    days = second / day;
    hours = second / hour;
    minutes = second / min;
    
    if (second > day)
        cout<<"There are "<< days << " days in " << second << " seconds.";
    else if (second > hour)
        cout<<"There are "<< hours << " hours in " << second << " seconds.";
    else if (second > min)
        cout<<"There are "<< minutes << " minutes in " << second << " minutes.";
    else if (second > zero)
        cout<< second << "seconds.";
    else if (second < zero)
        cout<<"You cannot have negative seconds!!!";
    
    
    return 0;
}

