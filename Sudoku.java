import java.util.Scanner;
public class Sudoku {
    static boolean solve(int [][]board){
          int n=board.length;
          int row=-1;
          int col=-1;
          boolean emptyLeft=true;
          //finding the leftmost empty cell in the board only for this particular recursive call
          for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==0){
                    row=i;
                    col=j;
                    emptyLeft=false;
                    break;
                }
            }
            if(emptyLeft==false)
              break;
          }
          if(emptyLeft==true){
            return true;//sudoku is solved
          }

          //backtrack
          for(int num=1;num<=9;num++){
            if(isSafe(board, row, col, num)){
                board[row][col]=num;
                if(solve(board)){
                    //found an answer
                    // display(board);
                    // System.out.println();
                    return true;
                }
                else{
                    //now backtrack for next solution
                    board[row][col]=0;
                }
            }
          }
        return false;
    }
    private static void display(int[][] board) {
       for(int nums[]:board){
        for(int num:nums)
           System.out.print(num+" ");
        System.out.println();   
       }
    }
    private static boolean isSafe(int [][]board,int row,int col,int num){
        //check row
        for(int i=0;i<board.length;i++){
            if(board[row][i]==num)
              return false;
        }
        //check column
        for(int nums[]:board){
            if(nums[col]==num)
              return false;
        }
        //check that particular 3 x 3 grid
        int sqrt=(int)Math.sqrt(board.length);
        int rowstart=row-row%sqrt;
        int colstart=col-col%sqrt;
        for(int i=rowstart;i<rowstart+sqrt;i++){
            for(int j=colstart;j<colstart+sqrt;j++){
                if(board[i][j]==num)
                   return false;
            }
        }
        return true;
    }
    public static void main(String[] args) {
       int [][]board=new int [9][9];
       Scanner sc=new Scanner(System.in);
       System.out.println("Enter the board: ");
       for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            board[i][j]=sc.nextInt();
        }
       }

    //    System.out.println(solve(board));
    if(solve(board)){
        display(board);
    }
    else{
        System.out.println("cant be solved");
    }
    }
}
