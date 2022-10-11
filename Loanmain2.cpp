#include<iostream>
#include "loan.h"

using namespace std;

double ComputeDisTax(Bank::Loan* p)
{
	//double Tax,Discount;
     	auto CT=dynamic_cast<Bank::Taxable*>(p);
     		if (CT)
		{	
	  	 	 return CT->GetTax();
		}
     	auto ST=dynamic_cast<Bank::Discountable*>(p);
    		if (ST)
	 	{	 
		 	return ST->GetDiscount();
	 	}
}

double ComputeEMI(Bank::Loan& L)
{
	return L.GetEMI();
}
/*
double Discount(Bank::Discountable& D)
{
	return D.GetDiscount();
}

double Tax(Bank::Taxable& T)
{
	return T.GetTax();
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
	

	cout 	<< "Enter the choice for type of loan \n1.Home Loan \n2.Personal Loan"
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
				<<ComputeEMI(p) 
				<<endl
				<<"The Discount offered on this case is Rs"
				<<ComputeDisTax(&p)
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
				<<ComputeEMI(p)
				<<endl
				<<"The tax applicable for this case is Rs"
				<<ComputeDisTax(&p)
				<<endl
				<<"This case is not eligible for Discount"
				<<endl;
	}

}
