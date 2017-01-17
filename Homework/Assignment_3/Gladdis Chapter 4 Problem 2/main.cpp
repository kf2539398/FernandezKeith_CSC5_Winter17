/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Keith Jr
 *
 * Created on January 16, 2017, 1:27 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    int number;
    cout<<"Enter a number between 1 and 10: ";
    cin >> number;
    
    
        switch (number)
    {
            case 1 : cout<<"I.\n";
                break;
            case 2 : cout<<"II.\n";
                break;
            case 3 : cout<<"III.\n";
                break;
            case 4 : cout<<"IV.\n";
                break;
            case 5 : cout<<"V.\n";
                break;
            case 6 : cout<<"VI.\n";
                break;
            case 7 : cout<<"VII.\n";
                break;
            case 8 : cout<<"VIII.\n";
                break;
            case 9 : cout<<"IX.\n";
                break;
            case 10 : cout<<"X.\n";
                break;    
            default: cout<<"You did not enter a number between 1 and 10!";
    }
    
                    
                      
    return 0;
}

