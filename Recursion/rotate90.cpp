//it is correct but not space efficient
// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
//         int n = matrix.size();
//         int check = n-1;
//         vector<vector<int>> arr=matrix;
//          for (int i = 0; i <n; i++) {
//             for (int j = 0; j < (n); j++) {
//                 { 
//                     {
//                         arr[j][n - 1 - i] = matrix[i][j];

//                     }
//                 }
//             }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             matrix[i][j]=arr[i][j];
//         }
//     }
//         } 
//     }
// };
//this is   the efficient code for the 
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i != j) {
                    swap(matrix[i][j], matrix[j][i]);
                }
            }
        }
        for (int i = 0; i < n; i++) {
            reverse(matrix[i].begin(), matrix.[i] end());
        }
    }
};