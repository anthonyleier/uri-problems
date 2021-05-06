import java.io.IOException;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) throws IOException {
		
		Scanner s = new Scanner(System.in);
		ArrayList<String> respostas = new ArrayList<String>();
		
		int parada = s.nextInt();
		
		
		for(int i=0; i<parada; i++) {
			String st = s.next();
			StringBuilder sb = new StringBuilder(st);
			sb = sb.reverse();
			String resposta = "";
			
			for(char c: sb.toString().toCharArray()) {
				if(Character.isLowerCase(c)) {
					resposta += c;
				}
			}
			
			respostas.add(resposta);
		}
		for(int i=0; i<respostas.size(); i++)System.out.println(respostas.get(i));
		
	}

}