/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Keith Jr
 * Purpose: To calculate the amount of calories burned after set time intervals
 * Created on January 20, 2017, 1:45 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    int time;                //amount of time that has passed
    float calories;          //amount of calories that are burned
    
    //Input Values
    
    for(time=10;time<=30;)  //calculates time in 5 min intervals stopping at 30 mins
    {
        time+=5;
        calories+=(5*3.9);  //calculates calories burned per 5 mins and adds to total
        
        //Output Values
        cout<<"You will have burned "<<calories<<" after "<<time<<" minutes.";
        cout<<endl;
    }
    
    return 0;
}

