#include <iostream>

using namespace std;

/**********************************************************************
 * The Subroutine "date" Are the costs and are evaluated to 
 * pointer the accounts that are affected by the purchase
 **********************************************************************/
void  date(double *pAccount)
{
    double priceDinner = 32.19; 
	double priceMovie = 14.50;
    double priceIceCream = 6.00;
    cout << "Cost of the date:"<< endl;
    cout << "\tDinner:    " << priceDinner <<endl;
    cout << "\tMovie:     " << priceMovie <<endl;
    cout << "\tIce cream: " << priceIceCream <<endl;
	*pAccount -= (priceDinner+ priceMovie + priceIceCream);
	return;
}

/**********************************************************************
 * In the main function We ask the user for their income and in this 
 * way we evaluate which is the one that has more money and this will 
 * be who pays the bill and is called the subroutine date.
***********************************************************************/
int main()
{
	double accountSam; 
	double accountSue; 
	double * pAccnt;
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
   
    cout << "What is Sam's balance? ";
    cin >> accountSam;
    cout << "What is Sue's balance? ";
    cin >> accountSue;
    if (accountSam > accountSue) 
		pAccnt = &accountSam;  
	else
		pAccnt = &accountSue;  
    date(pAccnt);
    cout << "Sam's balance: $" << accountSam << endl;
    cout << "Sue's balance: $" << accountSue << endl;
  
    return 0;
}
