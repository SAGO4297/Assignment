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
		float r = Loan::GetRate();

		EMI = principle * (1 + r * period/100)/(12 * period);

		return EMI;
	}

	float PersonalLoan :: GetRate()
	{
	        float rate;
		if(Loan::GetPrinciple()<=500000)
			return rate = 15;
		else
			return rate = 16;
	}

	float HomeLoan :: GetRate()
	{
	        float rate;
		if(Loan::GetPrinciple()<=2000000)
			return rate = 15;
		else
			return rate = 16;
	}
}
