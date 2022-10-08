#include<iostream>
#include"loan.h"

using namespace std;


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
			Bank::HomeLoan p;
			p.SetPrinciple(principle);
			p.SetPeriod(period);
			cout<<"Principle : "<<p.GetPrinciple()<<endl;

			cout<<"Period : "<<p.GetPeriod()<<endl;

			cout	<<"The EMI for choosen type of loan for principle "
				<< principle 
				<<" and period of "
				<<period
				<<"years is "
				<<p.GetEMI(p)
				<<endl;
	}
	else
	{
			Bank::PersonalLoan p;
			p.SetPrinciple(principle);
			p.SetPeriod(period);
			cout<<"Principle : "<<p.GetPrinciple()<<endl;

			cout<<"Period : "<<p.GetPeriod()<<endl;

			cout	<<"The EMI for chosen type of loan for principle Rs"
				<< principle 
				<<" and period of "
				<<period
				<<" years is "
				<<p.GetEMI(p)
				<<endl;
	}

}
