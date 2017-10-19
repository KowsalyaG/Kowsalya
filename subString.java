public class SubString 
{
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        
        String str1,str2;
        
        System.out.println("Enter the String1: ");
        str1 = in.nextLine();
        
        System.out.println("Enter the String2: ");
        str2 = in.nextLine();
        int signal = 1;
        
        for(int i=0; i<=(str1.length()-str2.length()); i++)
        {
            int flag = 1;
            
            for(int j=0; i<str1.length() && j<str2.length(); j++,i++)
            {
                if(str2.charAt(j) != str1.charAt(i))
                {
                    flag = 0;
                    break;
                }
            }
            if(flag == 1)
            {
                signal = 0;
                System.out.println(i-str2.length());
            }
            
        }
        if(signal == 1)
            System.out.println("-1");
    }
}
