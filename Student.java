
package problem4;

public class Student extends Person {
    private int nPapers;

    public Student(int nPapers) {
        this.nPapers = nPapers;
    }

    public Student( String name, int id,int nPapers) {
        super(name, id);
        this.nPapers = nPapers;
    }

    public int Papers() {
        return nPapers;
    }

    public void displayStudent() {
        System.out.println( "name : " + name + ", id : " + id+", no of papers : "+ nPapers );
    }
    
}
