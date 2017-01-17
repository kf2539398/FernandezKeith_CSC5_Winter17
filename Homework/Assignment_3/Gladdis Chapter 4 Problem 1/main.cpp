/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Keith Jr
 *Creating a program that can differentiate the larger of two numbers
 * Created on January 16, 2017, 1:15 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    float one, two;
    
    cout<<"This program can tell which is larger between two numbers. "<<endl;
    cout<<"Input the first number."<<endl;
    cin>>one;
    cout<<"Input the second number."<<endl;
    cin>>two;
    cout<<endl;
    if(one>two)
        cout<< one <<" is larger than "<<two;
    else 
        cout<< two <<" is larger than "<<one;
    cout<<endl;
    
    return 0;
}

