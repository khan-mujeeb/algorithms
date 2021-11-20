public class SkipA2{
	public static void main(String[] args) {
		System.out.println(Skip("accha"));
	}
	static String Skip(String up){
		if(up.isEmpty())
			return "";
		
		char ch=up.charAt(0);
		if(ch=='a')
			return Skip(up.substring(1));
		else
			return ch+Skip(up.substring(1));

	}
}
