import java.util.Scanner;

public class solution {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		String s;
		s = in.next();
		reverse(s);
	}

	private static void reverse(String s) {
		// TODO Auto-generated method stub
		char temp;
		char[] s1 = s.toCharArray();
		for (int i = 0, j = s1.length - 1; i < s1.length / 2; i++, j--) {
			temp = s1[i];
			s1[i] = s1[j];
			s1[j] = temp;
		}
		System.out.println(s1);
		reverseVowels(s1);
	}

	private static void reverseVowels(char[] s1) {
		// TODO Auto-generated method stub
		for (char s : s1) {
			if (s != 'a' && s != 'e' && s != 'i' && s != 'o' && s != 'u' && s != 'A' && s != 'E' && s != 'I' && s != 'O' && s != 'U' ) {
				System.out.print(s);
			}
		}
	}
}
