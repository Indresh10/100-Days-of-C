bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target){
    int r = matrixSize;
    int c = *matrixColSize;
    for (int i=0;i<r;i++){
        if(target<=matrix[i][c-1]){
            for(int j=0;j<c;j++){
                if(matrix[i][j]<target){
                    continue;
                }else if(matrix[i][j]==target){
                    return true;
                }else{
                    return false;
                }        
            }
        }
    }
    return false;
}