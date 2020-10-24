#include<iostream>
using namespace std;

int main() {
    string name;
    int no_of_sweatshirts, value_of_sweatshirts;
    //housekeeping module
    cout << "Enter the name of the salesperson: ";
    getline(cin, name);
    // details module
    cout << "Enter the number of sweatshirts sold in last month by " << name << ": ";
    cin >> no_of_sweatshirts;
    value_of_sweatshirts = no_of_sweatshirts * 30;
    cout << "\nName of the salesperson: " << name << "\n";
    cout << "Number of sweatshirts sold in last month: " << no_of_sweatshirts << "\n";
    cout << "Total value of sold sweatshirts: " << value_of_sweatshirts;
    if (value_of_sweatshirts > 7000) {
        cout << "\n" << name << " is HIGH PERFORMER.";
    }
    //end-of-the-job module
    cout << "\n\nThanks for using this program!!\n";
    return(0);
}