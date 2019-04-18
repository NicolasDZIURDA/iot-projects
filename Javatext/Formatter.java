package mypackage;
import java.io.*;

public class Formatter {
	public static void main (String[] args) throws IOException
    {
        File f1 = new File("inputfile.txt");
        File f2 = new File("outputfile.txt");
        File f3 = new File("resultfile.txt");
        BufferedReader in = (new BufferedReader(new FileReader(f1)));
        PrintWriter out = (new PrintWriter(new FileWriter(f2)));
        PrintWriter outresult = (new PrintWriter(new FileWriter(f3)));
        
        String testWord = "name"; //CHANGE THIS IF YOU WANT
        String line;
        String processedLine="";
        String lineWords="";
        boolean check;
        while ((line = in.readLine()) != null) {
        	//remove punct
            processedLine = line.replaceAll("[^a-zA-Z0-9]"," ").toLowerCase().replaceAll("( )+", " ");
            check = processedLine.contains(testWord.toLowerCase());
            
          //search the word to write the result file
            if(check)
            {
            	lineWords += processedLine.replaceAll(" name ", "");
            	System.out.println(lineWords);
            	
            	
            }
            
            //write output file
            out.write(processedLine);
            out.write(System.getProperty("line.separator"));
        }
	// Select specific word to write resultfile
        //lineWords.replaceAll("\\d", "");
        String[] lineWordstab = lineWords.split("\\s+");
        outresult.write(lineWordstab[0]+" "+lineWordstab[1]);
        outresult.write(System.getProperty("line.separator"));
        in.close();
        out.close();
        outresult.close();
    }
	
}
