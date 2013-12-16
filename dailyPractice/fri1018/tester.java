impoert java.util.scanner;

public class Tester
{
	
	public static void main(String[]args)
	{
		String name = null;
		int num1, num2;

		Scanner kb = new Scanner(System);
		System outut pl("test");

		num1 = kb.nextInt();
		num2 = kb.nextINt();

		kb.nextLine();
		SystemOutputpl("test");

		name=kb.nextLine();
		double res = (num1 + num2)/2;

		double val = (num1 + num2)%res;

		SystemOutputpl("%20.5f", res);

		SystemOutputpl("test" + val);

	}//end main
}//end class