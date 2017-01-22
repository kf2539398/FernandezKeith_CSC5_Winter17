/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Keith Jr
 * Create a menu that presents nine problems from Gladdis Chapter 5 homework
 * Created on January 20, 2017, 9:34 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip> 
#include <ctime>
#include <cmath>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

                //Declare Variables
    char choice;
    
    //Menu Loop
    do{
        //Input Value
        
        cout<<"Choose a problem from the list of problems."<<endl;
        cout<<"To choose Gladdis Chapter 5 Problem 1, Please type 1."<<endl;
        cout<<"To choose Gladdis Chapter 5 Problem 2, Please type 2."<<endl;
        cout<<"To choose Gladdis Chapter 5 Problem 3, Please type 3."<<endl;
        cout<<"To choose Gladdis Chapter 5 Problem 4, Please type 4."<<endl;
        cout<<"To choose Gladdis Chapter 5 Problem 5, Please type 5."<<endl;
        cout<<"To choose Gladdis Chapter 5 Problem 6, Please type 6."<<endl;
        cin>>choice;
        
        switch (choice){
            case '1':                      //Problem 1 program start here
                        //Declare Variables
                int input, sum; 
    
                        //Input Values
    
                cout<<"Please input a positive integer to find the sum of all";
                cout<<" previous integers."<<endl;
                cin>>input;
    
                if (input < 0)
                cout<<"Please input a positive integer!";
                else 
                    {
                        for (int number=0; number<=input; number++)
                            {
                                sum += number;
            
                            }
        
                        //Output Values
        
                cout<<"The total sum of integers is: "<<sum;
                cout<<endl;
                break;
                    }
            case '2':                      //Problem 2 Program Start Here                  
                        //Declare Variables
    
                float rise; //amount ocean level is rising
                float level; // ocean level
                rise = 1.5; //how much the ocean level is raised by
    
                        //Input values
    
                cout<<"This program calculates the amount the ocean will rise ";
                cout<<"(in millimeters) after 25 years."<<endl;
    
    
                for (int year=1;year <= 25;++year) //calculates how much the ocean level rises per year
                    {
                        level+=rise;
        
                        //Output values
                cout<<"The ocean will rise "<<level<<" millimeters after ";
                cout<<year<<" years."<< endl;}
                break;
            case '3':                   //Problem 3 Program Start Here
                            //Declare Variables
                    int time;                //amount of time that has passed
                    float calories;          //amount of calories that are burned
    
                            //Input Values
    
                    for(time=10;time<=30;)  //calculates time in 5 min intervals stopping at 30 mins
                        {
                            time+=5;
                            calories+=(5*3.9);  //calculates calories burned per 5 mins and adds to total
        
                            //Output Values
                    cout<<"You will have burned "<<calories;
                    cout<<" after "<<time<<" minutes.";
                    cout<<endl;
                    break;
                        }
            case '4':                   //Problem 4 Program Start Here
                        //Declare Variables
                    int year;             //The number of years that have passed
                    int rate;            //initial membership rate
                    float memrate;      //membership rate
    
                    rate = 2500;
    
                        //Input Values
                    cout<<"These are the country club membership ";
                    cout<<"rates for the next six years.";
                    cout<<endl;
    
                    for(year=1;year<=6;year++)
                        {
                            rate += rate * .04;
        
                            cout<<"The membership rate after year "<<year;
                            cout<<" is: $"<<rate<<endl;
                            break;
                        }
            case '5':                   //Problem 5 Program Start Here
                    //Declare Variables
    
                float speed, tme;          //Speed of vehicle and time traveled
                float distance;             //Distance traveled 
    
                    //Input Values
    
                cout<<"What is the speed of the vehicle (in miles per hour)? ";
                cin>>speed;
    
                while (speed<=0)
                    {
                        cout<<"Please input a positive speed."<<endl;
                        cin>>speed;
                    }
    
                cout<<"How many hours has it traveled (in miles)? ";
                cin>>tme;
         
                while (tme<=1)
                    {
                        cout<<"Please input a time greater than 1."<<endl;
                        cin>>tme;
                    }
         
                    //Output Values
    
                cout<<setw(10)<<"Hour "<<setw(30);
                cout<<"Distance Traveled (in miles)"<<endl;
    
                for(int x=1;x<=tme;x++)
                    {
        
                        distance = x * speed;
        
                        cout<<setw(7)<<x<<setw(20)<<distance<<endl;
                        break;
                    }
                    
            case '6':                       //Problem 6 Program Start Here
                        //Declare Variables
                    float days;         //Days to be calculated
                    float money;        //Salary to be calculated
    
                        //Input Values
                    cout<<"Insert number of days."<<endl;
                    cin>>days;
                    while (days<=1)
                        {
                            cout<<"Please insert a value greater than";
                            cout<<" 1 for days."<<endl;
                            cin>>days;
                        }
                    cout<<setw(5)<<"Day"<<setw(20)<<"Salary"<<endl;
                    for(int x=1;x<=days;x++)
                        {
                            money = (pow(2,x) / 100);
        
                            cout<<setw(4)<<x;
                            cout<<setw(16)<<"$"<<setprecision(2);
                            cout<<fixed<<money<<endl;
                            break;
                        }
                    break;

            default :
                cout<<"You are now exiting the program.";
                cout<<endl;
                break;
            }
        
        }
        
        
        while (choice>='1'&&choice<='6');
    
    return 0;
}

