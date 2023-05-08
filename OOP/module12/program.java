import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class program {
    public static void main(String[] args) {
        String inputFile = "input.txt";
        String outputFile = "output.txt";

        String[] stringArray = new String[10];

        try (BufferedReader reader = new BufferedReader(new FileReader(inputFile))) {
            String line;
            int index = 0;
            while ((line = reader.readLine()) != null && index < 10) {
                stringArray[index++] = line;
            }
        } catch (IOException e) {
            System.err.println("Error reading input file: " + e.getMessage());
        }

        try (BufferedWriter writer = new BufferedWriter(new FileWriter(outputFile))) {
            for (String str : stringArray) {
                if (str != null) {
                    int length = str.length();
                    writer.write(Integer.toString(length));
                    writer.newLine();
                }
            }
        } catch (IOException e) {
            System.err.println("Error writing to output file: " + e.getMessage());
        }

        int[] lengthsArray = new int[10];

        try (BufferedReader reader = new BufferedReader(new FileReader(outputFile))) {
            String line;
            int index = 0;
            while ((line = reader.readLine()) != null && index < 10) {
                lengthsArray[index++] = Integer.parseInt(line);
            }
        } catch (IOException e) {
            System.err.println("Error reading output file: " + e.getMessage());
        }

        for (int i = 0; i < stringArray.length; i++) {
            if (stringArray[i] != null) {
                System.out.println(stringArray[i] + " - " + lengthsArray[i]);
            }
        }
    }
}


