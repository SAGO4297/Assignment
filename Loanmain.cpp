#include<iostream>
#include "loan.h"

using namespace std;
/*
double compute(Loan *p)
   {
     double Tax,Discount;
     auto CT=dynamic_cast<Taxable*>(p);
     if (CT)
	    Tax=CT->GetTax();

     auto ST=dynamic_cast<Discountable*>(p);
    
     if (ST)
	    Discount=ST->GetDiscount();
*/
double Compute(Bank::Loan& L)
{
	return L.GetEMI();
}

double Discount(Bank::Discountable& D)
{
	return D.GetDiscount();
}

double Tax(Bank::Taxable& T)
{
	return T.GetTax();
}


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
		Bank::HomeLoan p(principle,period);
			
		//	cout<<"Principle : "<<Bank::Loan::GetPrinciple()<<endl;

		//	cout<<"Period : "<<Bank::Loan::GetPeriod()<<endl;

			cout	<<"The EMI for home loan for principle Rs"
				<< principle 
				<<" and period of "
				<<period
				<<"years is "
				<<Compute(p) 
				<<endl
				<<"The Discount offered on this case is Rs"
				<<Discount(p)
				<<endl
				<<"This case is exempted from tax"
				<<endl;
	}
	else
	{
		Bank::PersonalLoan p(principle,period);
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
				<<"The tax applicable for this case is Rs"
				<<Tax(p)
				<<endl
				<<"This case is not eligible for Discount"
				<<endl;
	}

}
