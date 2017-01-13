/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Keith Jr
 *
 * Created on January 12, 2017, 9:43 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main() {
    
    int ClassA, ClassB, ClassC;
    float CAS, CBS, CCS, ticksale;
    
    cout<<"This program calculates revenue generated from ticket sales"<<endl;
    cout<<"How many Class A tickets were sold?"<<endl;
    cin>>ClassA;
    cout<<endl;
    
    cout<<"How many Class B tickets were sold?"<<endl;
    cin>>ClassB;
    cout<<endl;
    
    cout<<"How many Class C tickets were sold?"<<endl;
    cin>>ClassC;
    cout<<endl;
    
    CAS = ClassA * 15;
    CBS = ClassB * 12;
    CCS = ClassC * 9;
    
    ticksale = CAS + CBS + CCS;
    
    cout<<"Total revenue from tickets sold is $";
    cout<< setprecision(2) << fixed << ticksale;
    return 0;
}

