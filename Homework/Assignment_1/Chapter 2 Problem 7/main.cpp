/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Keith Fernandez
 *
 * Created on January 10, 2017, 11:00 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    int year5;
    int year7;
    int year10;
    
    year5 = 1.5 * 5;
    year7 = 1.5 * 7;
    year10 = 1.5 * 10;
    
    cout << "Ocean level will rise " << year5 << " inches in five years"; 
    cout << endl;
    cout << "Ocean level will rise " << year7 << " inches in seven years";
    cout << endl;
    cout << "Ocean level will rise " << year10 << " inches in ten years";
            
    return 0;
}

