package Labwork3.Task17;

public class Circle extends Point{
    private int radius;
    public int getRadius() {
        return radius;
    }
    public void setRadius(int radius) {
        this.radius = radius;
    }
    public Circle() {}
    public Circle (Point myPoint, int radius) {
        this.setX(myPoint.getX());
        this.setY((myPoint.getY()));
        this.radius = radius;
    }
}
