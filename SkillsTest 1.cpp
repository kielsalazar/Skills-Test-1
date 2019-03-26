#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main(){
    double payrate;
    double income;
    double netincome;
    double supply;
    double bonds;
    double clothes;
    double hours;
    double parentsbond;
    
    const double taxrate = 0.14;
    const double clothesrate = 0.10;
    const double schoolrate = 0.01;
    const double savingsbondrate = 0.25;
    const double parentscontribution = 0.50;
    
    cout << fixed << showpoint << setprecision(2);
    cout << "Hours of Work: ";
    cin >> hours;
    
    cout << "Hourly Rate: $";
    cin >> payrate;
    
    income = hours * payrate;
    netincome = income *= taxrate;
    clothes = netincome * clothesrate;
    supply = netincome * schoolrate;
    netincome -= (clothes + supply);
    bonds = netincome * savingsbondrate;
    parentsbond = bonds * parentscontribution;
    
    
    cout << "Income: $" << income << endl;
    cout << "Net Income: $" << netincome << endl;
    cout << "Clothes & Accessories: $" << clothes << endl;
    cout << "School Supplies: $" << supply << endl;
    cout << "Savings Bonds: $" << bonds << endl;
    cout << "Parents Bonds Contribution: $" <<parentsbond << endl;
    
    getch();
    return 0;
}

