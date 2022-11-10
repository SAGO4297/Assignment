namespace BankLib;

public PersonalLoan : Loan,ITaxable
{
        public PersonalLoan(double Principal, float Period) : base(Principal, Period)
        {
            
        }

        public override float GetRate()
        {
            return Principal <= 500000 ? 15.0f : 16.0f ;
        }


}