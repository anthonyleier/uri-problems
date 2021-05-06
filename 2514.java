import java.io.IOException;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) throws IOException {
		try {
			Scanner s = new Scanner(System.in);
			while(true) {
				
				
				
				int m = s.nextInt(); //Tempo desde o ultimo alinhamento
				int l1 = s.nextInt(); //demora das luas para completar uma volta
				int l2 = s.nextInt();
				int l3 = s.nextInt();
				
				int voltas1 = 0;
				int voltas2 = 0;
				int voltas3 = 0;
				
				int cont1 = 0;
				int cont2 = 0;
				int cont3 = 0;
				
				boolean girou1 = false;
				boolean girou2 = false;
				boolean girou3 = false;
				
				
				
				for(int tempo=-(m); tempo<1000000000; tempo++) {
					
					if(cont1 == l1) {
						voltas1++;
						
						cont1 = 0;
						girou1 = true;
						
					}
					if(cont2 == l2) {
						voltas2++;
						
						cont2 = 0;
						girou2 = true;
						
					}
					if(cont3 == l3) {
						voltas3++;
						
						cont3=0;
						girou3 = true;
					}
					
					if(girou1 && girou2 && girou3) {
						System.out.println(tempo);
						break;
					}
					
					cont1++;
					cont2++;
					cont3++;
					girou1 = false;
					girou2 = false;
					girou3 = false;
					
				}
			}
		}catch(Exception e) {
			
		}
	}

}