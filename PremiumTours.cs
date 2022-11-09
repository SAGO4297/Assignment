namespace MetTours;

public class PremiumTours
{
        public static double GetDaysRentForCommon(int days, int NoPersons)
        {
            if(NoPersons<=4 || days<=6)
                return 1500;
            return 1400;
        }

        public static double GetDaysRentForSeniors(int days, int NoPersons) => GetDaysRentForCommon(days,NoPersons) - 100;
        

        public static double GetDaysRentForWoman(int days, int NoPersons) => GetDaysRentForCommon(days,NoPersons) - 200;
        

}