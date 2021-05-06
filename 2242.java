import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Scanner s = new Scanner(System.in);
		
		String entrada = s.next();
		
		String direto = "";
		String inverso = "";
		
		for(int i=0; i<entrada.length(); i++) {
			if(entrada.charAt(i) == 'a' || entrada.charAt(i) == 'e' || entrada.charAt(i) == 'i' || entrada.charAt(i) == 'o' || entrada.charAt(i) == 'u')
			direto = direto + entrada.charAt(i);
		}
		
		for(int i=entrada.length()-1; i>=0; i--) {
			if(entrada.charAt(i) == 'a' || entrada.charAt(i) == 'e' || entrada.charAt(i) == 'i' || entrada.charAt(i) == 'o' || entrada.charAt(i) == 'u')
				inverso = inverso + entrada.charAt(i);
		}
		
		if(direto.compareTo(inverso) == 0) {
			System.out.println("S");
		}else {
			System.out.println("N");
		}
		
		s.close();

	}

}