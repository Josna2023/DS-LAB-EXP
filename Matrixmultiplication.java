
import java.util.Scanner;



public class Matxmul 

{

	public static void main(String[] args)

	{

		Scanner sc=new Scanner (System.in);

		System.out.println("enter the row of first matrix");

		int m1=sc.nextInt();

		System.out.println("enter the column of first matrix");

		int n1=sc.nextInt();

		System.out.println("enter the row of second matrix");

		int m2=sc.nextInt();

		System.out.println("enter the column of second matrix");

		int n2=sc.nextInt();

		

		//checking whether matrix multiplication is possible

		

		if(n1!=m2)

		{

			System.out.println("matrix multiplication is not possible....");

			return;

		}

		

		//matrix declaration

		

		int A[][]=new int[m1][n1];

		int B[][]=new int[m2][n2];

		int C[][]=new int[m1][n2];

		

		//matrix A reading 

		

		for(int i=0;i<m1;i++)

		{

			for(int j=0;j<n1;j++)

			{

				System.out.println("A["+i+"]["+j+"]");

				A[i][j]=sc.nextInt();

			}

		}

		

		System.out.println("matrix A printing");		

		//matrix A printing

		

		for(int i=0;i<m1;i++)

		{

			for(int j=0;j<n1;j++)

			{

				System.out.print(A[i][j]+"\t");

			}

			System.out.println();

		}

		

		//matrix B reading

		

		for(int i=0;i<m2;i++)

		{

			for(int j=0;j<n2;j++)

			{

				System.out.println("B["+i+"]["+j+"]");

				B[i][j]=sc.nextInt();

			}

		}

		

		System.out.println("matrix B printing");		

		//matrix B printing

		

		for(int i=0;i<m2;i++)

		{

			for(int j=0;j<n2;j++)

			{

				System.out.print(B[i][j]+"\t");

			}

			System.out.println();

		}

		

		//matrix C creating

		

		for(int i=0;i<m1;i++)

		{

			for(int j=0;j<n2;j++)

			{

				C[i][j]=0;

				for(int k=0;k<n1;k++)

				{

					C[i][j]+=A[i][k]*B[k][j];

				}

			}

		}

		System.out.println("matrix C printing");

		//matrix C printing

		

		for(int i=0;i<m1;i++)

		{

			for(int j=0;j<n2;j++)

			{

				System.out.print(C[i][j]+"\t");

			}

			System.out.println();

		}

			

		

	}



}



