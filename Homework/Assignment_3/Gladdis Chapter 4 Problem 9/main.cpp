/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Keith Jr
 *
 * Created on January 16, 2017, 5:04 PM
 */

#include <iostream>
#include <cstdlib> //for rand and srand
#include <iomanip> //for setw
#include <ctime> //time function

using namespace std;

/*
 * 
 */
int main() {
    int random1, random2, ans, cans;
    unsigned seed = time(0);
    
    srand(seed);
    
    random1 = 1 + rand() % 500;
    random2 = 1 + rand() % 500;
    
    cout<<"Use this program to practice integer addition."<<endl;
    cout<<setw(6)<<random1<<endl;
    cout<<"+ "<<setw(4)<<random2<<endl;
    cin>>ans;
    
    cans = random1+random2;
    
    if(ans == cans)
        cout<<"Congratulations, that is the correct answer!!!";
    else
        cout<<"Unfortunately the correct answer is: " <<cans;
    
    return 0;
}

