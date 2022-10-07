#include<cstdio>
#include<cstring>
#include"patient.h"
double GetPatientExp(Patient& p)
{
	float GST = 5.0;
	return p.GetBill() * (1 + GST/100);
}



int main(void)
{
	int	id;
	char	name[50];
	int	bed;
	int	days;
	float	concession;
	int	pattype;

	printf("Enter the Patient ID and no of days of service : ");
	scanf("%d%d", &id, &days);

	printf("Enter the Bed type: \n1.Premium \n2.Normal \n3.Sharing\n");
	scanf("%d", &bed);

	printf("Enter the Patient name : ");
	scanf("%s",name);

	printf("Enter the type of patient \n1.Normal Patient \n2.Inhouse Patient\n");
	scanf("%d", &pattype);
	
	if(pattype == 1)
	{
		Patient p;
		p.GetPatient(id,name,days,bed);
		printf("Patient name : %s \nPatient ID : %d \nNo of days : %d \nBedtype : %d \nBill amount : %.2lf\n",name,id,days,bed,p.GetBill());
		printf("Bill amount with GST : %.2lf\n",GetPatientExp(p));
	}
	else
	{
		InHousePatient p;
		p.GetPatient(id,name,days,bed);
		printf("Enter the discount applicable if bill exceeds Rs 5000 : ");
		scanf("%f",&concession);
		p.GetDiscount(concession);
		printf("Patient name : %s \nPatient ID : %d \nNo of days : %d \nBedtype : %d \nBill amount : %.2lf\n",name,id,days,bed,p.GetBill());
	}
}
