import java.util.Scanner;
import javax.swing.JOptionPane;
public class first {
    public static void main(String[] args){
        Scanner scan = new  Scanner(System.in);
        System.out.println("\"WoW Java!!!\"");
        System.out.println("\\Typing new line in Java :O\\");
        //This is a comment QwQ
        int x = 123;
        boolean z = true;
        String name = "Vikas";
        System.out.println("Number x is: "+x);
        System.out.println("My name is "+name);
        System.out.println("Am I human? : "+z);
        String fname = "Vikas";
        String lname = "Kumar";
        String t;
        t = fname;
        fname = lname;
        lname = t;
        System.out.println("First name is: "+fname);
        System.out.println("Last name is: "+lname);
        System.out.println("What is your age?");
        int i = scan.nextInt();
        System.out.println("Your age is: "+i);
        String nuw = JOptionPane.showInputDialog("Enter your name");
        JOptionPane.showMessageDialog(null, "Your name is "+nuw);

        scan.close();
    }
}
