import java.io.IOException;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) throws IOException {
		
		Scanner s = new Scanner(System.in);
		
		int x = s.nextInt();
		int y = s.nextInt();
		
		int resposta1 = (x*y) + ((x-1)*(y-1));
		int resposta2 = (((x-1)+(y-1))*2);
		
		System.out.println(resposta1);
		System.out.println(resposta2);

	}

}