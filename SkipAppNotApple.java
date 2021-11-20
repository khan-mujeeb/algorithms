public class SkipAppNotApple{
	public static void main(String[] args) {
		System.out.println(Skip("app is not apple "));
	}
	static String Skip(String up){
		if(up.isEmpty())
			return "";
		
		char ch=up.charAt(0);
		if(up.startsWith("app")&&!up.startsWith("apple"))
			return Skip(up.substring(3));
		else
			return ch+Skip(up.substring(1));

	}
}
