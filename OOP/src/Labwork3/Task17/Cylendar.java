package Labwork3.Task17;

public class Cylendar extends Circle{
    private int height;

    public Cylendar (Circle myCircle, int height) {
        this.setX(myCircle.getX());
        this.setY(myCircle.getY());
        this.setRadius(myCircle.getRadius());
        this.height = height;
    }

    public int getHeight() {
        return height;
    }

    public void setHeight(int height) {
        this.height = height;
    }

}
