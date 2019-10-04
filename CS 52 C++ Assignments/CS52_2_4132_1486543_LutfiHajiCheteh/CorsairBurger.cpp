/*
Lutfi Haji Cheteh
Professor Howard Stahl
CS52 #4132
*/

#include <iostream>
using namespace std;

int main()
{
    int burger, cheeseburger, doubleburger, doucheburger, count, drink, student;
    double fare = 0.0, reduction = 0.0;
    char keep, cont = 'y';
	double const burgcost = 2.00; cheeseburgcost = 2.50; doubleburgcost = 4.00; doucheburgcost = 5.00; drinkcost = 2.00;
    
    while (cont == 'y')
        {

        reduction = 0.0;
        fare = 0.0;
		tax = 0.0;

        cout << "CorsairBurger Calculator\n";
        cout << "Enter the number of burgers you want:";
        cin >> burger;
        fare += (burger*burgcost);
		count += burger;
		cout << "Enter the number of cheeseburgers you want:";
        cin >> cheeseburger;
        fare += (cheeseburger*cheeseburgcost);
		count += cheeseburger;
		cout << "Enter the number of double burgers you want:";
		cin >> doubleburger;
		fare += (doubleburger*doubleburgcost);
		count += doubleburger;
		cout << "Enter the number of double cheeseburgers you want:";
		cin >> doucheburger;
		fare += (doucheburger*doucheburgcost);
		count += doucheburger;
        cout << "SMC Student diner discount with each burger? [1=YES/0=NO]";
        cin >> student;
		if (student == 1)
			reduction = count*.50;
		cout << "How many fries and drinks you want with your order?";
		cin >> drink;
		fare += (drink*drinkcost);
		tax += (fare*0.0825);

        cout << "Meal Cost: $ " << fare << "\n";
        cout << "Reductions: $ " << reduction << "\n";
		cout << "Sales Tax: $ " << tax << "\n";
        cout << "Total Cost: $ " << fare-reduction+tax << "\n";
        cout << "\nContinue(y/n)? ";
        cin >> keep;
        if (keep == 'n')
            cont='n';
        }
    
    return 0;  
}
