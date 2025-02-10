// CSC 134 
// M2T1 - The Apple Orchard Part 2
// Nolan Pait
// 2/9/2024
// We're going to create a receipt for an apple farm

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Apple sales program
    string farm_name = "Pait"; 
    int num_apples = 100;
    double cost_each = 0.25;
    
    string user_name;       
    int apples_to_buy;      

    // Customer Greeting
    cout << "Hello! What's your name? ";
    cin >> user_name;
    cout << "Thanks for coming by, " << user_name << "!" << endl;

    cout << "Welcome to the " << farm_name << " apple farm!" << endl;
    cout << "There are " << num_apples << " apples in stock." << endl;
    cout << "They cost $" << cost_each << " each." << endl;

    cout << setprecision(2) << fixed;

    double total_cost = num_apples * cost_each;
    cout << "The price for all of them is: $" << total_cost << endl;

    cout << "How many apples would you like? "; 
    cin >> apples_to_buy;

    total_cost = apples_to_buy * cost_each;

    cout << "Thank you! " << apples_to_buy << " apples comes to $" << total_cost  << endl;
    cout << "Have a nice day!" << endl;
    cout << endl;
    return 0; 
}