import java.util.Scanner;

public class solution {

	public static boolean workingDay(String day) {
		if (day.equalsIgnoreCase("sunday") || day.equalsIgnoreCase("saturday"))
			return false;
		return true;
	}

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		System.out.println(workingDay(in.next()));
	}

}
