public static int isPath(int[][]maze[][]){
		if(helper(maze,0,0))
			return 1;
		return 0;
}
private static boolean helper(int [][]maze, int i, int j){
		if(i<0 || j<0 || i>=maze.length || j>=maze.length || maze[i][j]==0)
			return false;
		if(maze[i][j]==9)
			return true;
		maze[i][j]=0;
		boolean op1,op2,op3,op4;
		op1 = helper(maze,i+1,j);
		op2 = helper(maze,i,j+1);
		op3 = helper(maze,i-1,j);
		op4 = helper(maze,i,j-1);
maze[i][j] = 1;
		return (op1|| op2 || op3 || op4);
}
