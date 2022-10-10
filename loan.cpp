#include<iostream>
#include"loan.h"
namespace Bank
{
	double Loan :: GetPrinciple()
	{
		return principle;
	}
	void Loan :: SetPrinciple(double p)
	{
		principle = p;
	}
	float Loan :: GetPeriod()
	{
		return period;
	}
	void Loan :: SetPeriod(float n)
	{
		period = n;
	}

	double Loan :: GetEMI()
	{
		double EMI;
		float r = GetRate();

		EMI = principle * (1 + r * period/100)/(12 * period);

		return EMI;
	}

	PersonalLoan ::PersonalLoan(double pri,float per)
	{
		Loan::SetPrinciple(pri);
		Loan::SetPeriod(per);
	}

	float PersonalLoan :: GetRate()
	{
	        float rate;
		if(Loan::GetPrinciple()<=500000)
			return rate = 15;
		else
			return rate = 16;
	}

	double PersonalLoan :: GetTax()
	{
		if(Loan::GetPrinciple()<=500000)
			return Loan::GetPrinciple * 12/100;
		else
			return Loan::GetPrinciple * 18/100;

	}

	HomeLoan :: HomeLoan(double pri,float per)
	{
		Loan::SetPrinciple(pri);
		Loan::SetPeriod(per);
	}

	float HomeLoan :: GetRate()
	{
	        float rate;
		if(Loan::GetPrinciple()<=2000000)
			return rate = 10;
		else
			return rate = 11;
	}
	
	double HomeLoan :: GetDiscount()
	{
		if(Loan::GetPrinciple()<=2000000)
			return Loan::GetEMI;
		else
			return Loan::GetEMI * 5/100;
	}
}
