namespace Bank
{
	class Loan
	{
	public:
		double 	GetPrinciple();

		void	SetPrinciple(double p);
		
		float	GetPeriod();
	
		void	SetPeriod(float n);

		virtual	float GetRate() = 0;

		double	GetEMI();
		
		
	private:
		double	principle;
		float	period;
	};

	class Taxable
	{
	public:
		virtual double GetTax() = 0;
	};

	class Discountable
	{
	public:
		virtual double GetDiscount() = 0;
	};


	class PersonalLoan : public Loan, public Taxable
	{
	public:
	   	PersonalLoan(double pri, float per);
		float GetRate();
		double GetTax();
	};

       	class HomeLoan : public Loan , public Discountable
	{
	public:
	   	HomeLoan(double pri, float per);
		float GetRate();
		double GetDiscount();
	private:
		double limit;

       	};

}
