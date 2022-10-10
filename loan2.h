#include<iostream>
#include"loan.h"
class Loan
{
public:
	double GetPrinciple()
	{
		return principle;
	}

	void SetPrinciple(double p)
	{
		principle = p;
	}

	float GetPeriod()
	{
		return period;
	}

	virtual float GetRate() = 0;

	void SetPeriod(float n)
	{
		period = n;
	}

	double GetEMI()
	{
		double EMI;
		float r = GetRate();

		EMI = principle * (1 + r * period/100)/(12 * period);

		return EMI;
	}
private:
	double 	principle;
	float 	period;

};

class PersonalLoan : public Loan
{
public:
	PersonalLoan(double pri,float per)
	{
		Loan::SetPrinciple(pri);
		Loan::SetPeriod(per);
	}

	float GetRate()
	{
	        float rate;
		if(Loan::GetPrinciple()<=500000)
			return rate = 15;
		else
			return rate = 16;
	}
};

class HomeLoan : public Loan
{
public:
	HomeLoan(double pri,float per)
	{	
		Loan::SetPrinciple(pri);
		Loan::SetPeriod(per);
	}

	float GetRate()
	{
	        float rate;
		if(Loan::GetPrinciple()<=2000000)
			return rate = 10;
		else
			return rate = 11;
	}
};
	

