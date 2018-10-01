import java.util.*;
class spellcheck
{
    public static void main(String args[])
    {
        Scanner ob=new Scanner(System.in);
        String s=ob.nextLine();
        String t=ob.nextLine();
        int len1=s.length();
        int len2=t.length();
        int i=0,d;
        if(len1<=len2)
        d=len1;
        else
        d=len2;
        while(i<d)
        {
            if(s.charAt(i)!=t.charAt(i))
            break;
            i++;
        }
        int k=(len1-i)+(len2-i);
        System.out.println(k);
    }
}