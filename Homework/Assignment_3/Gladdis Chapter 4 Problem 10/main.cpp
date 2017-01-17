/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Keith Jr
 *
 * Created on January 16, 2017, 5:36 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    int quantity, q, q20, q30, q40, q50;
    float base, disc20, disc30, disc40, disc50;
    
    cout<<"This program calculates the total cost a program given ";
    cout<<"the quantity of programs bought."<<endl;
    
    cout<<"Please enter the quantity of programs that you wish to buy."<<endl;
    cin>>quantity;
    
    q = 0;
    q20 = 10;
    q30 = 20;
    q40 = 50;
    q50 = 100;
    
    base = quantity * 99;
    disc20 = quantity * 99 * .8;
    disc30 = quantity * 99 * .7;
    disc40 = quantity * 99 * .6;
    disc50 = quantity * 99 * .5;
    
    if (quantity > q50)
        {cout<<"Congratulations, your order quantity has qualified you for ";
         cout<<"a 50% discount off of your order, this brings your order ";
         cout<<"total to $"<<disc50<<" Thank you for your purchase.";}
    else if (quantity > q40)
        {cout<<"Congratulations, your order quantity has qualified you for ";
         cout<<"a 40% discount off of your order, this brings your order ";
         cout<<"total to $"<<disc40<<" Thank you for your purchase.";}
    else if (quantity > q30)
        {cout<<"Congratulations, your order quantity has qualified you for ";
         cout<<"a 30% discount off of your order, this brings your order ";
         cout<<"total to $"<<disc30<<" Thank you for your purchase.";}
    else if (quantity > q20)
        {cout<<"Congratulations, your order quantity has qualified you for ";
         cout<<"a 20% discount off of your order, this brings your order ";
         cout<<"total to $"<<disc20<<" Thank you for your purchase.";}
    else if (quantity > q)
        cout<<"Thank you for your purchase! Your total comes out to $"<<base;
    else if (quantity < q)
        cout<<"Invalid input, please input a positive value.";
                
    
    return 0;
}

