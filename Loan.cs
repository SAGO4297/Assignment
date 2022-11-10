namespace BankLib;

abstract class Loan
{
      private static double Principle;
      private static float Period;
      
      public double Principle { get; set; }
      public float Period { get; set; }

      public Patient(double Principle, float Period)
      {
            this.Principle = Principle;
            this.Period = Period;
      }

      public abstract GetRate ();

      public double GetEMI()
      {
            double EMI = Principle * ( 1 + GetRate() * Period / 100)/(12 * Period);
            return EMI;
      }
}
