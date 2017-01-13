/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Keith Jr
 *
 * Created on January 13, 2017, 10:27 AM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main() {
    float fedbud, milbud, nasa;
    float milper, nasaper;
    
    milbud = 5.8e11;
    nasa = 1.85e10;
    fedbud = 3.54e12;
    
    milper = milbud / fedbud;
    nasaper = nasa / fedbud;
    
    cout<<"This is the US military spending percentage."<<endl;
    cout<<setprecision(3)<<fixed<<milper<<"%";
    cout<<endl;
    
    cout<<"This is the NASA spending percentage."<<endl;
    cout<<setprecision(5)<< fixed<<nasaper<<"%";
    
    float pop8, pop16, debt8, debt16, avgdebt8, avgdebt16;
    
    pop8 = 3.04e8;
    pop16 = 3.22e8;
    debt8 = 9.7e12;
    debt16 = 2e13;
    
    avgdebt8 = debt8 / pop8;
    avgdebt16 = debt16 / pop16;
     
    cout<<"The average debt per person in the US during 2008 is."<<endl;
    cout<<"$"<< setprecision(2)<< fixed<< avgdebt8<<endl;
    
    cout<<"The average debt per person in the US during 2016 is."<<endl;
    cout<<"$"<< setprecision(2)<< fixed<< avgdebt16;
    return 0;
}

