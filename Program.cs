using MetTours;
using System.Reflection;

using Tax = System.Func<int, int, double> ;

class Program
{
    public static void Main(string[] args)
    {
        int days = int.Parse(args[0]);
        int NoPersons =  int.Parse(args[1]);
        Type c = Type.GetType(args[2]);
        MethodInfo s = c.GetMethod(args[3]);
        object messi = Activator.CreateInstance(c);
        Tax ronaldo = s.CreateDelegate<Tax>(messi);

        double t = ronaldo(days,NoPersons);
        double Expense = t * days * NoPersons;
        Console.WriteLine("The total expense of the tour is {0}",Expense);   
    }
}