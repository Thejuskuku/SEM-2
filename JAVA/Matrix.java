import java.util.Scanner;

public class Matrix {   
    static Scanner sc=new Scanner(System.in);
    int r, c;
    int A[][];

    public void Matrice(int r, int c) 
    { 
        A = new int[r][c];
        for(int i = 0; i < r; i++) 
        {
            for(int j = 0; j < c; j++) 
            {
                A[i][j] = sc.nextInt();
            }
        } 
    }
    public void addMatrix(Matrix m1, Matrix m2,int r,int c)
    {
        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++) 
            {
                int sum=m1.A[i][j]+m2.A[i][j];
                System.out.print(sum+" ");
            }
            System.out.println();
        }
    }
    public void subMatrices(Matrix m1,Matrix m2,int r ,int c)
    {
        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++) 
            {
                int sub=m1.A[i][j]-m2.A[i][j];
                System.out.print(sub+" ");
            }
            System.out.println();
        }
    }
    public void multiplyMatrix(Matrix m1,Matrix m2,int r, int c)
    {
        int multi[][]=new int[r][c];
        for (int i = 0; i < r; i++) 
        { 
            for (int j = 0; j < c; j++) 
            { 
                for (int k = 0; k < r; k++) 
                    multi[i][j] += m1.A[i][k] * m2.A[k][j]; 
                    System.out.print(multi[i][j]+"  ");
            }
            System.out.println(); 
        }
    }
    public void transposeMatrix(Matrix m1,int r, int c)
    {
        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++) 
            {
                System.out.print(m1.A[j][i]+" ");
            }
            System.out.println();
        }
    }
    public void tostring(Matrix m1,int r, int c)
    {
        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++) 
            {
                System.out.print(m1.A[i][j]+" ");
            }
        }
    }

    void displayMatrix(int r, int c)
    {
        for(int i = 0; i < r; i++) 
        {
            for(int j = 0; j < c; j++) 
            {
                System.out.print(A[i][j] + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) 
    {
        System.out.print("Number of rows : ");
        int rows=sc.nextInt();
        System.out.print("Number of columns : ");
        int columns=sc.nextInt();
        Matrix m1 = new Matrix();
        m1.Matrice(rows,columns);
        m1.displayMatrix(rows,columns);
        Matrix m2 = new Matrix();
        m2.Matrice(rows,columns);
        m2.displayMatrix(rows, columns);
        System.out.println("\nAddition of two matrices:");
        Matrix  sum = new Matrix();
        sum.addMatrix(m1,m2,rows,columns);
        System.out.println("\nSubtraction of two matrices:");
        Matrix sub= new Matrix();
        sub.subMatrices(m1,m2,rows,columns);
        System.out.println("\nMultiplication of two matrices:");
        Matrix multi=new Matrix();
        multi.multiplyMatrix(m1,m2,rows,columns);
        System.out.println("\nTranspose  of the matrix is:");
        Matrix trans=new Matrix();
        trans.transposeMatrix(m1,rows,columns);
        System.out.println("\nTo strings:");
        Matrix  tostring=new Matrix();
        tostring.tostring(m1,rows,columns);

    }
}

