/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Keith Jr
 *
 * Created on January 12, 2017, 10:04 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main() {
    
    int Test1, Test2, Test3, Test4, Test5;
    float avg;
    
    cout<<"This program calculates an average from five test scores"<<endl;
    
    cout<<"Enter score from test one."<<endl;
    cin>>Test1;
    cout<<endl;
    
    cout<<"Enter score from test two."<<endl;
    cin>>Test2;
    cout<<endl;
    
    cout<<"Enter score from test three"<<endl;
    cin>>Test3;
    cout<<endl;
    
    cout<<"Enter score from test four."<<endl;
    cin>>Test4;
    cout<<endl;
    
    cout<<"Enter score from test five."<<endl;
    cin>>Test5;
    cout<<endl;
    
    avg = (Test1 + Test2 + Test3 + Test4 + Test5) / 5;
    
    cout<<"The average test score is ";
    cout<< setprecision(1) << fixed << avg;
    return 0;
}

