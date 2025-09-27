/**\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
 * @file PA3.cpp
 * @author James Godfrey
 * @brief This uses a systeem that gets to
 * know you, then tells you how much your 
 * dream car would be if you bought it. And 
 * Finally plays a game with you.
 * @date 2025-0
 \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\*/

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    string userName;
    cout << "Hi My Name Is Robbie the Robot!" << endl << endl << "What is your First name?" << endl << endl;
    cin >> userName;  
    cout << endl << endl  << "Hi there, it is nice to meet you " << userName << "!" << endl << endl;

  
    string userFrom;
    cout << "Where are you from? " << endl << endl << endl;
    cin >> userFrom;   
    cout << endl << endl << userFrom <<"! Awesome That Sounds So Cool! Im Just From A Computer Lab."<< endl << endl;


    string userOld;
    cout << "Well then " << userName << ", what year were you born?" << endl << endl << endl;
    cin >> userOld;
    int birthYear = stoi(userOld);
    cout << endl << endl << "Man, you are " <<(2025 - birthYear)<<" Years old!"<< " That is Means you are "<<double(2025 - birthYear)/2 
    << " times older than me! I'm only 2 years old."<< endl << endl;


    string userCar;
    cout << "Ok old guy, What is you're Dream car then? (You can have any specks or info but You Have To Have"
    << " UNDERSCORES.) "<< userCar << endl << endl << endl;
    cin >> userCar;
    cout << endl << endl << "What!!! A " << userCar <<"!"<< endl << endl << "That is like the coolest car ever!"<< endl << endl;


    string userCarPrice;
    cout << "Aside from that how much does a "<< userCar <<" Cost? "<< userCarPrice << endl << endl << endl;
    cin >> userCarPrice;
    cout << endl << endl << "It Costs " << userCarPrice <<"!!!"<< endl << endl << "You have an Exspensive Taste!"<< endl << endl;


    string userCarInt;
    cout << "Now what would be a good intrest rate for a " << userCar <<"? "<< userCarInt << endl << endl << endl;
    cin >> userCarInt;
    cout << endl << endl << "A " << userCarInt <<"% Intrest rate does sound pretty good."<< endl << endl;


    string userPayYears;
    cout << "So then how many years would you take out a loan for a " << userCar << "? "<< userPayYears << endl << endl << endl;
    cin >> userPayYears;
    cout << endl << endl << "A loan for " << userPayYears <<" years is a good amonunt of years."<< endl << endl;


    string userPrice,useringnore;
    cout << "Do you know what you would pay per mounth for a " << userCar << " with a " << userPayYears << "-year loan and a " << userCarInt
    << "% Interest rate?(Type your answer below)" << endl << endl << endl;
    cin >> useringnore; 

    double p = stod(userCarPrice);
    double annual_rate = stod(userCarInt);
    int years = stoi(userPayYears);
    double monthly_rate = (annual_rate / 100.0) / 12.0;
    int num_payments = years * 12;
    double monthly_payment = p * (monthly_rate * pow(1 + monthly_rate, num_payments)) / (pow(1 + monthly_rate, num_payments) - 1);
    
    cout << endl << "If you inputed "<< monthly_payment << " You are Right!!!" << endl << endl << "If you did't guess "
    << monthly_payment << " better luck next time."
    << endl << endl << endl;

    return 0;
}
