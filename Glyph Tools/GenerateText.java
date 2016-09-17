import java.awt.image.BufferedImage;
import java.io.File;
import java.io.FileOutputStream;
import java.io.FileReader;
import java.io.PrintWriter;


public class GenerateText {

	public static void main(String[] args) throws Exception 
	{
		FileReader text = new FileReader(new File("N:/ISE/80days.txt"));
		PrintWriter out = new PrintWriter(new File("N:/ISE/RAM-text128x64x16.coe"));
		out.println ("memory_initialization_radix=2;");
		out.println ("memory_initialization_vector=");
		
		StringBuilder bitstream = new StringBuilder();
		
		boolean ignoreWhitespace = true;
		
		for (int row = 0; row < 64; row++)
			for (int col = 0; col < 128; col++)
			{
				if (col < 16 && row < 17 && row >= 1)
					ignoreWhitespace = true;
				int ch = text.read();
				while (ignoreWhitespace && Character.isWhitespace(ch))
					ch = text.read();
				ignoreWhitespace = Character.isWhitespace(ch);
				
				int color = 255;
				if (col < 16 && row < 17 && row >= 1)
					color = col + (row-1)*16;
				
				for (int b = 7; b >= 0; b--)
					bitstream.append ((color >> b) & 1);
				for (int b = 7; b >= 0; b--)
					bitstream.append ((ch >> b) & 1);				
			}
		
		String s = bitstream.toString();
		
		String separator = "";
		for (int i = 0; i < 128 * 64; i++)
		{
			out.println(separator);
			separator = ",";
			out.print(s.substring(i*16, (i+1)*16));
		}
		out.println(";");
		
        out.close();
	}

}
