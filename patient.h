class Patient
{
public:
	void GetPatient(int id,char name[],int d,int bed)
	{
		PatientId = id;
		strcpy (PatientName,name);
		Days = d;
		BedType = bed;
	}
	Patient ()
	{

		PatientId = 1001;
		strcpy(PatientName,"Virat");
		Days = 8;
		BedType = 2;
	}
	virtual double GetBill() const
	{
		double rate;
		if (BedType == 1)
			rate = 500;

		if (BedType == 2)
			rate = 350;

		if (BedType == 3)
			rate = 200;

		return Days * rate;
	}


private:
	int 	PatientId;
	char	PatientName[50];
	int	Days;
	int 	BedType;
};

class InHousePatient : public Patient
{
public:
	InHousePatient(float d = 5.0) : Patient()
	{
		discount = d;
	}
	void GetDiscount(int dis)
	{
		discount = dis;
	}
	
	double GetBill() const
	{
		double bill = Patient :: GetBill();
		if (bill > 5000)
			return bill - (bill * discount / 100);
		else
			return bill - (bill * 5 / 100);
	}


private:
	float 	discount;
};
