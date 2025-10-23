package Pratice3;

public class Cow extends Animal{
    public Cow() {}
    public Cow(String name) {
        setName(name);
    }

    public void eat() {
        System.out.println("eating");
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getName() {
        return this.name;
    }
}
