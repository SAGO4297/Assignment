namespace BankLib;

public HomeLoan : Loan,IDiscountable
{
        private static double Limit;

        public double Limit { get; set; }


        public HomeLoan(double Principal, float Period,double Limit) : base(Principal, Period)
        {
            this.Limit = Limit;
        }

        public override float GetRate()
        {
            return Principal <= 2000000 ? 10.0f : 11.0f ;
        }

        
}