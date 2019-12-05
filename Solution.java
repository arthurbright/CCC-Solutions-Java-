import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

	public static int numSheep;
	static float[] xs;
	static float[] ys;

	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		numSheep = sc.nextInt();
		xs = new float[numSheep];
		ys = new float[numSheep];

		boolean[] eaten = new boolean[numSheep];
		Arrays.fill(eaten, false);
		for(int i = 0; i < numSheep; i ++)
		{
			xs[i] = sc.nextFloat();
			ys[i] = sc.nextFloat();
		}


		float dist;
		int sheepNum = 0;
		for(float entry = 0; entry < 1000; entry += 0.01f)
		{
			float minDist = 10000;

			for(int i = 0; i < numSheep; i ++)
			{
				dist = dist(i, entry);
				if(dist < minDist) 
				{
					minDist = dist;
					sheepNum = i;
				}
			}

			eaten[sheepNum] = true;


		}
		
		for(int i = 0; i < numSheep; i ++)
		{
			if(eaten[i])
			{
				System.out.println("The sheep at (" + String.format("%.2f", xs[i]) + ", " + String.format("%.2f", ys[i]) + ") might be eaten.");
			}
		}


	}

	public static float dist(int sheepNum, float entry)
	{
		return (float) Math.sqrt(Math.pow(xs[sheepNum] - entry, 2) + (ys[sheepNum]) * ys[sheepNum]);
	}




}
