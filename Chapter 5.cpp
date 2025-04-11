// Chapter 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
File Name: chapter 5
Programmer: Olivia Ruiz
Date: 4/10/25
Requiremnts: Write a program that shows population growth of Prairieville
in intervals during past 100 years. 1900, 1920, 1940, 1960, 1980, 200
*/

#include <iostream>
#include <vector>

using namespace std;

void displayPopulationChart() {
  
    vector<int> populations = { 2000, 4000, 5000, 9000, 14000, 18000 };

    
    int years[] = { 1900, 1920, 1940, 1960, 1980, 2000 };

    cout << "PRAIRIEVILLE POPULATION GROWTH" << endl;
    cout << "(Each * represents 1,000 people)" << endl << endl;

    
    for (int i = 0; i < populations.size(); ++i) {
        int pop = populations[i];
        cout << years[i] << ": ";

        
        for (int j = 0; j < pop / 1000; ++j) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
  
    displayPopulationChart();
    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
