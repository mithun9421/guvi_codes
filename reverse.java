public class test
{
public static void main(String ap[])
{
  BufferedReader br = new BufferedReader (new InputStreamReader (System.in));
  
  String str = br.readLine();
  
  StringBuffer sbuff = new StringBuffer(str);
  
  System.out.print(str.reverse().toString());
  
}
}
