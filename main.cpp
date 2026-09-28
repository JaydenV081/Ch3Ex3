/*
Developer: Jayden Veloz
File Name: Ch3Ex3.cpp
Date: 9 / 28 / 26

Requirements:
Write a program that asks the user to enter their monthly costs for each of the following
housing-related expenses:
• rent or mortgage payment
• phones
• Internet service
• utilities
• cable
The program should then display the total monthly cost of these expenses and the total
annual cost of these expenses.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double rent, phones, internet, utilities, cable;

    cout << "Please state how much you pay monthly for the following expenses" << endl;

    cout << "Rent / Mortgage: $";
    cin >> rent;

    cout << "Phones: $";
    cin >> phones;

    cout << "Internet service: $";
    cin >> internet;

    cout << "Utilities: $";
    cin >> utilities;

    cout << "Cable: $";
    cin >> cable;

    double totalCost = rent + phones + internet + utilities + cable;
    double annualCost = totalCost * 12;

    cout << "\nThe total monthly cost of these expenses is $" << totalCost << endl;
    cout << "The total annual cost of these expenses is $" << annualCost << endl;

    return 0;
}