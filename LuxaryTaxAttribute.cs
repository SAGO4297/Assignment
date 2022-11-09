namespace MetTours;

[AttributeUsage(AttributeTargets.Class)]
public class LuxaryTaxAttribute : Attribute
{
    public int Tax { get; set;}

    public LuxaryTaxAttribute(int value = 8)
    {
        Tax = value;
    }
}