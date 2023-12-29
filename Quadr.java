
package oopsheet;

public class Quadr {
    private Point a;
    private Point b;
    private Point c;
    private Point d;
    
    public Quadr(){}
     public Quadr(Point a, Point b, Point c, Point d) {
        this.a = a;
        this.b = b;
        this.c = c;
        this.d = d;
    }
public void setData(double aX,double aY,double bX,double bY,double cX,double cY,double dX,double dY){
    a.setPoint(aX,aY);
    b.setPoint(bX,bY);
    c.setPoint(cX,cY);
    d.setPoint(dX,dY);
}
public double area(){
    return areaTriangle(a,b,c)+areaTriangle(c,d,a);
}

    public static double areaTriangle(Point a, Point b, Point c){
    double ab,bc,ac,s;
    ab=Point.distance(a,b);
    bc=Point.distance(b,c);
    ac=Point.distance(a,c);
    s=(ab+bc+ac)/2;
    return(Math.sqrt(s*(s-ab)*(s-bc)*(s-ac)));
}
   

    
}
