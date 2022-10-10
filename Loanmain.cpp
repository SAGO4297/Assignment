#include<iostream>
#include "loan2.h"

using namespace std;
double compute(Loan *p)
   {
     double Tax,Discount;
     auto CT=dynamic_cast<Taxable*>(p);
     if (CT)
	    Tax=CT->GetTax();

     auto ST=dynamic_cast<Discountable*>(p);
    
     if (ST)
	    Discount=ST->GetDiscount();
/*
double Compute(Loan& L)
{
	return L.GetEMI();
}

double Discount(Discountable& D)
{
	return D.GetDiscount();
}

double Tax(Taxable& T)
{
	return T.GetDiscount();
}
*/

int main(void)
{
	double 	principle;
	float	period;
	int	choice;

	cout 	<<"Enter Principle and period"
		<<endl;
	cin 	>> principle>>period;
	

	cout 	<< "Enter the choice for type of loan \n1.Personal Loan \n2.Home Loan"
	       	<< endl;
	cin	>> choice;


	if(choice==1)
	{
			HomeLoan p(principle,period);
			
		//	cout<<"Principle : "<<Bank::Loan::GetPrinciple()<<endl;

		//	cout<<"Period : "<<Bank::Loan::GetPeriod()<<endl;

			cout	<<"The EMI for home loan for principle Rs"
				<< principle 
				<<" and period of "
				<<period
				<<"years is "
				<<Compute(p) 
				<<endl
				<<"The Discount offered on this case is "
				<<Discount(p)
				<<"This case is exempted from tax"
				<<endl;
	}
	else
	{
			PersonalLoan p(principle,period);
			//p.SetPrinciple(principle);
			//p.SetPeriod(period);
		//	cout<<"Principle : "<<Bank::Loan::GetPrinciple()<<endl;

		//	cout<<"Period : "<<Bank::Loan::GetPeriod()<<endl;

			cout	<<"The EMI for chosen type of loan for principle Rs"
				<< principle 
				<<" and period of "
				<<period
				<<" years is "
				<<Compute(p)
				<<endl
				<<"The tax applicable for this case is "
				<<Tax(p)
				<<"This case is not eligible for Tax"
				<<endl;
	}

-}
