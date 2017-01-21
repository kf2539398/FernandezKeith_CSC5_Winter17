/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Keith Jr
 * Purpose: To calculate distance traveled by a vehicle given the speed and 
 * time traveled.
 * Created on January 20, 2017, 6:59 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //Declare Variables
    
    float speed, time;          //Speed of vehicle and time traveled
    float distance;             //Distance traveled 
    
    //Input Values
    
    cout<<"What is the speed of the vehicle (in miles per hour)? ";
    cin>>speed;
    cout<<"How many hours has it traveled (in miles)? ";
    cin>>time;
    
    //Output Values
    
    cout<<setw(10)<<"Hour "<<setw(30)<<"Distance Traveled (in miles)"<<endl;
    
    for(int x=1;x<=time;x++)
    {
        
        distance = x * speed;
        
        cout<<setw(7)<<x<<setw(20)<<distance<<endl;
    }
    
    
    return 0;
}

