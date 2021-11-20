public class SkipApple{
	public static void main(String[] args) {
		System.out.println(Skip("aforapple"));
	}
	static String Skip(String up){
		if(up.isEmpty())
			return "";
		
		char ch=up.charAt(0);
		if(up.startsWith("apple"))
			return Skip(up.substring(5));
		else
			return ch+Skip(up.substring(1));

	}
}
