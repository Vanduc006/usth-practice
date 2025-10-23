package StreamFile;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileWriter;
import java.io.IOException;
import java.time.LocalDateTime;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class ReadFile {
    public static void main(String[] args) throws IOException{
        try {
            
            File myFile = new File("/media/ducnv/DU LIEU/usth-practice/OOP/src/StreamFile/data.txt");
            Scanner reader = new Scanner(myFile);
            List<String> line = new ArrayList<>();
            while (reader.hasNextLine()) {
                // System.out.println(reader.nextLine());
                line.add(reader.nextLine());
            }

            System.out.println(line.toString());
            reader.close();

            // Remove first line
            if (!line.isEmpty()) {
                line.remove(0);
            }

            FileWriter writer = new FileWriter("/media/ducnv/DU LIEU/usth-practice/OOP/src/StreamFile/data.txt");
            for (String lines : line) {
                writer.write(lines + "\n");
            }
            writer.write("Line at "+LocalDateTime.now() + "\n");
            writer.close();



        } catch (IOException e) {
            throw e;
            // TODO: handle exception
        }
    }
}
