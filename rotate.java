import java.util.Scanner;

public class solution {

	public static void rotate(int[] a, int k) {
		int[] arr = new int[a.length];
		for (int i = 0, j = a.length - k; i < a.length; i++, j++) {
			arr[i] = a[j];
			if ((j + 1) == a.length)
				j = -1;
		}
		print(arr);
	}

	private static void print(int[] a) {
		// TODO Auto-generated method stub
		for (int i : a) {
			System.out.println(i);
		}
	}

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n, k;
		n = in.nextInt();
		int[] arr = new int[n];
		for (int i = 0; i < n; i++) {
			arr[i] = in.nextInt();
		}
		k = in.nextInt();
		rotate(arr, k);
	}
}
