
package problem4;

import java.util.ArrayList;


public class Professor extends Person{
    private ArrayList<Student> StudentsList=new ArrayList<Student>();
    private int nStudents;
  

    public Professor() {
    }

    public Professor(String name, int id) {
        super(name, id);
       
    }
 
    public void registerStudent(Student st){
         StudentsList.add(st);
         nStudents++;
        }
    public int total(){
        int total=0;
        for (int i = 0; i <StudentsList.size() ; i++) {
            total+=StudentsList.get(i).Papers();
        }
        return total;
    }
    
    public void disblayStudents(){
        for (int i = 0; i <StudentsList.size(); i++) {
           StudentsList.get(i).displayStudent();
        }
    }
}
