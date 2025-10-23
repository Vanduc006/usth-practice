package Labwork4.Task6;

public class Test {
    public static void main(String[] args) throws Exception{
        Point p1 = new Point(Integer.parseInt(args[0]), Integer.parseInt(args[1]));
        Point p2 = new Point(Integer.parseInt(args[2]), Integer.parseInt(args[3]));

        double part1 = Math.pow(p2.getX()-p1.getX(), 2);
        double part2 = Math.pow(p2.getY()-p1.getY(), 2);
        System.out.println(Math.sqrt(part1+part2));
    }
}
