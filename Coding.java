package practice;

import java.util.ArrayList;
//pankaj dukare
import java.util.Scanner;

public class Coding {

	public static void main(String[] args) 
	{
		try(Scanner sc = new Scanner(System.in))
		{
			//create grid for output
			int matrix[][] = 
				{
		            {0, 2, 3, 1},
		            {3, 1, 0, 2},
		            {1, 3, 2, 0},
		            {2, 0, 1, 3}
		        };
			
			//get input as sum and range from user
			 System.out.println("Enter the sum:"); 
			 int sum=sc.nextInt(); 
			 System.out.println("Enter last number of range:"); 
			 int range=sc.nextInt();
			 
			 //call a finedList function to fined  four number combination whose sum is same as user input
			 //and this store in arraylist
			ArrayList<Integer> il = finedList(sum,range);
			
			//if you do not get any combination so sum is not posible
			if(il==null)
			{
				System.out.println("this sum is not posible");
			}
			else
			{
				//using this for loop store the number in grid
				int k=0;
				for(int i=0;i<4;i++)
				{
					for(int j=0;j<4;j++)
					{
						k=matrix[i][j];
						matrix[i][j]=il.get(k);
					}
				}
				
				//display the grid whose row column and diagonal sum is same as user input
				System.out.println("\n the final Grid is:");
				for (int i = 0; i < matrix.length; i++) {
		
					for (int j = 0; j < matrix[i].length; j++) {
						System.out.print(matrix[i][j] + "\t");
		
					}
					System.out.println("\n");
				}
			}
		}
	}

	//finedlist function taking input as sum and range
	private static ArrayList<Integer> finedList(int sum, int range) 
	{
		//this arraylist for genarate range from 1 to user input
		ArrayList<Integer> rangeal = new ArrayList<>();
		for (int i = 1; i <= range; i++) {
			rangeal.add(i);
		}
		
		//this arraylist for storing the subsequence that sum is user input and non repeating number
		ArrayList<Integer> ile = new ArrayList<>();
		for (int i = 0; i < rangeal.size(); i++) 
		{
			for (int j = i+1; j < rangeal.size(); j++)
			{
				for (int k = j+1; k < rangeal.size(); k++)
				{
					for (int l =k+1; l < rangeal.size(); l++) 
					{

						if (rangeal.get(i) + rangeal.get(j) + rangeal.get(k) + rangeal.get(l) == sum) {
							ile.add(rangeal.get(i));
							ile.add(rangeal.get(j));
							ile.add(rangeal.get(k));
							ile.add(rangeal.get(l));
							//if fined any subsquence fined return thats number list
							return ile;

						}
					}
				}
			}
		}
		//if not any subsequence fined return null
		return null;
	}
}
/*
	Enter the sum:
	32
	Enter last number of range:
	16

 	the final Grid is:
	1	13	16	2	

	16	2	1	13	

	2	16	13	1	

	13	1	2	16	
	
	Enter the sum:
	15
	Enter last number of range:
	4
	this sum is not posible

*/