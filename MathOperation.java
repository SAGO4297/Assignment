class MathOperation{
	public static void main(String[] args){
		int num = Integer.parseInt(args[0]);
		System.out.println("Checking for Even or Odd");
		if(isEven())
			System.out.printf("The number %d is even",num);
