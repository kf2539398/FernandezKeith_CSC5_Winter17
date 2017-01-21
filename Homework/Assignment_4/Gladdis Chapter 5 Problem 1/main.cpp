/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Keith Jr
 * Purpose: Write a program that asks the user for a positive integer value. 
 * The program should use a loop to get the sum of all the integers from 1 up to
 * the number entered. For example, if the user enters 50, the loop will find 
 * the sum of 1, 2, 3, 4, ... 50. 
 * Input Validation: Do not accept a negative starting number. 
 * Created on January 18, 2017, 7:28 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    int x=0, input, sum; 
    
    
    
    
    
    cout<<"Please input a positive integer to find the sum of all";
    cout<<" previous integers."<<endl;
    cin>>input;
    
    if (input < x)
        cout<<"Please input a positive integer!";
    else 
    {
    
        for (int number=0; number<=input; number++)
        {
            sum += number;
            
        }
    cout<<"The total sum of integers is: "<<sum;
    }
      
    
    
    return 0;
}

