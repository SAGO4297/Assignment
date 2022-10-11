class MathUtil{
	private int num;

	boolean isEven(){
		if(num % 2 == 0)
			return true;
	}

	boolean isOdd(){
		if(num % 2 != 0)
			return true;
	}

	boolean isPrime(){
		if (num <= 1)
			return false;
		if (num == 2)
			return true;
		if (num == 3)
			return true;
		if (isEven())
			return false;
		if (isOdd())
			for(int i = 3; i<num ;i+=2)
			{
				if(num % i == 0)
					return false;
				else 
					return true;
			}
	}

	int countPrimes(int count){
		for(count=0;count<=num;count++)
		{
			int i;
			i = isPrime();
			int sum = sum + i;
		}
	}

	int reverse(){
	
	}
	int digitsCount(){
	
	}



	public void reverseNumber()
		{
			int temp = number;
			int sum  = 0;
			int count= 0;
		do{
			sum  =  sum *10 + temp % 10;
			temp =  temp / 10;
			count +=1;
		  }
		while(temp>0);
		         System.out.ptintf("The reverse of number %d is: %d%n", number,sum);
		         System.out.printf("Total digit Number is: );
	        }	 



