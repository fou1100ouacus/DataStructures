/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package project1;

/**
 *
 * @author h
 */
public class Project1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Clock c1=new Clock(20,45,50);
                Clock c2=new Clock(23,40,45);
        Clock c=c2.Subclock(c1);
        c.show();
        System.out.println(c1.equals(c2));
        // TODO code application logic here
    }
}
