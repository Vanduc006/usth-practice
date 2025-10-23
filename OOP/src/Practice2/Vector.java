package Practice2;

public class Vector {
    private double x;
    private double y;

    public Vector() {}
    public Vector(double x, double y) {
        this.x = x;
        this.y = y;
    }

    public void add(Vector vectorA, Vector vectorB) {
        this.x = vectorA.x + vectorB.x;
        this.y = vectorA.y + vectorB.y;
    }

    public void substract(Vector vectorA, Vector vectorB) {
        this.x = vectorA.x - vectorB.x;
        this.y = vectorA.y - vectorB.y;
    }
    @Override
    public String toString() {
        return "Vector [x=" + x + ", y=" + y + "]";
    }


    



}
