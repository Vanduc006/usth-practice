package Practice2;

public class VectorTester {
    public static void main(String[] args) {
        Vector vectorA = new Vector(10,20);
        Vector vectorB = new Vector(100,30);

        Vector newVector = new Vector();
        newVector.add(vectorA, vectorB);
        System.out.println(newVector.toString());
        newVector.substract(vectorA, vectorB);
        System.out.println(newVector.toString());

        // System.out.println();
        
    }
}
