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

		double	GetEMI(Loan& p);
		
		
	private:
		double	principle;
		float	period;
	};

	class PersonalLoan : public Loan
	{
	public:
		float GetRate();
	};

       	class HomeLoan : public Loan
	{
	public:
		float GetRate();

       	};

}
