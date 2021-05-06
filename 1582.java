import java.io.IOException;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) throws IOException {
		try {
			Scanner s = new Scanner(System.in);
			
			while(true) {
				double x = s.nextDouble();
				double y = s.nextDouble();
				double z = s.nextDouble();
				
				boolean naoDivisivel = true;
				
				for(int i=2; i<10000; i++) {
					if(x%i == 0 && y%i == 0 && z%i == 0) naoDivisivel = false;
				}
				
				if((x*x) == (y*y)+(z*z) || (y*y) == (x*x)+(z*z) || (z*z) == (x*x)+(y*y)) {
					
					if(naoDivisivel) {
						System.out.println("tripla pitagorica primitiva");
					}else {
						System.out.println("tripla pitagorica");
					}
				}else {
					System.out.println("tripla");
				}
			}
		}catch (Exception e) {
			
		}
	}
}