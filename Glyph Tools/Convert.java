import java.awt.image.BufferedImage;
import java.io.File;
import java.io.FileOutputStream;
import java.io.PrintWriter;


public class Convert {

	public static void main(String[] args) throws Exception 
	{
		BufferedImage image = javax.imageio.ImageIO.read(new File("N:/ISE/font 8x8.png"));
		PrintWriter out = new PrintWriter(new File("N:/ISE/RAM-glyph256x4x16.coe"));
		out.println ("memory_initialization_radix=2;");
		out.println ("memory_initialization_vector=");
		
		StringBuilder bitstream = new StringBuilder();
		
		System.out.println (image.getWidth() + " " + image.getHeight());
		for (int i = 0; i < 32; i++)
		{
			for (int b = 0; b < 1; b++)
				if (((i >> b) & 1) == 0)
					bitstream.append("1100100"+(b&1));
				else
					bitstream.append("1101110"+(b&1));
			
			for (int b = 1; b < 7; b++)
				if (((i >> b) & 1) == 0)
					bitstream.append("0000100"+(b&1));
				else
					bitstream.append("0001110"+(b&1));
			
			for (int b = 7; b < 8; b++)
				if (((i >> b) & 1) == 0)
					bitstream.append("0100100"+(b&1));
				else
					bitstream.append("0101110"+(b&1));
		}
			
        for (int i = 32; i < 128; i++)
        {
        	int x = ((i-32) % 16) * 8;
        	int y = ((i-32) / 16) * 8;
        	
        	for (int py = 0; py < 8; py++)
        	{
        		for (int px = 7; px >= 0; px--)
        		{
        			int c = image.getRGB(x + px,  y + py);
        			if ((c & 0xff) < 20)
        				bitstream.append ("1");
        			else
        				bitstream.append ("0");
        		}
        		
        	}
    		
        		
        }
		for (int i = 128; i < 256; i++)
		{
			for (int b = 0; b < 1; b++)
				if (((i >> b) & 1) == 0)
					bitstream.append("1100100"+(b&1));
				else
					bitstream.append("1101110"+(b&1));
			
			for (int b = 1; b < 7; b++)
				if (((i >> b) & 1) == 0)
					bitstream.append("0000100"+(b&1));
				else
					bitstream.append("0001110"+(b&1));
			
			for (int b = 7; b < 8; b++)
				if (((i >> b) & 1) == 0)
					bitstream.append("0100100"+(b&1));
				else
					bitstream.append("0101110"+(b&1));
			
		}

		String s = bitstream.toString();
		
		String separator = "";
		for (int i = 0; i < 256 * 4; i++)
		{
			out.println(separator);
			separator = ",";
			out.print(s.substring(i*16, (i+1)*16));
		}
		out.println(";");
		
        out.close();
	}

}
