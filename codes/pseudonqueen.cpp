void backtrack(int col) {
    if (col == n) { /* do something.. */ return; }
    for (int row = 0; row < n; ++row) {
        if (!under_attack[row][col]) {
            placeQueen(row, col);
            backtrack(col + 1);
            removeQueen(row, col);
        }
    }    
}