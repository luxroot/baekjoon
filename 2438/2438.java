import java.util.*;

public class 2438 {
	public static void main(String args[]) {
		int n=4;
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		int i,j;
		for(i=0;i<n;i++) {
			for(j=0;j<=i;j++) {
				System.out.print('*');
			}
			System.out.println("");
		}
	}
}
