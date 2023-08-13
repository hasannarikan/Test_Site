class Solution {
    public boolean isValidSudoku(char[][] board) {
        //char[] charArray = {'1', 'a', '2', 'b', '3', 'c'};
        //int sum = 0;
        int[] sum = new int[9];
        int[] sum2 = new int[9];

        for (int i = 0; i < board.length; i++) {
            sum[i] = 0;

            for (int j = 0; j < board[i].length; j++) {
                char c = board[i][j];
                if (Character.isDigit(c)) {
                    int digit = Character.getNumericValue(c);
                    sum[i] += digit;
                    sum2[j] += digit;
                }
                if (sum[i] > 45 || sum2[j] > 45){
                return false;
                }
            }
        }
        return true;
    }
}
//Eger ki 45 in uzerine cikarsa hata veren sudku sistemi
