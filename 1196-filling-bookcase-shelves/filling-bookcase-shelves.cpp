// class Solution {
//     int mini = INT_MAX;
//     int rec=0;
// public:
//     int minHeightShelves(vector<vector<int>>& books, int shelfWidth) {
//         while(shelfWidth-rec>books[0][0]){

//         int currshelf=0;
//         int currshelfh=0;
//         int heightsum = 0;
//         int cnt=1;
//         for(int i=0;i<books.size();i++){
//             if(cnt==1&&currshelf+books[i][0]<shelfWidth-rec){
//                 cout<<currshelf+books[i][0]<<" ";
//                 currshelf+=books[i][0];
//                 currshelfh = max(books[i][1],currshelfh);
//             }
//             else{
//                 cout<<" ";
//                 cnt++;
//                 heightsum += currshelfh;
//                 currshelf=0;
//                 currshelfh=0;
//                 i--;
//             }
//             if(cnt!=1&&currshelf+books[i][0]<shelfWidth){
//                 cout<<currshelf+books[i][0]<<" ";
//                 currshelf+=books[i][0];
//                 currshelfh = max(books[i][1],currshelfh);
//             }
//             else{
//                 cout<<" ";
//                 cnt++;
//                 heightsum += currshelfh;
//                 currshelf=0;
//                 currshelfh=0;
//                 i--;
//             }
//         }
//         heightsum += currshelfh;
//         mini = min(mini,heightsum);
//         rec--;
// }
//         return mini;
//     }
// };

class Solution {
    int mini = INT_MAX; // Store the minimum height found
public:
    int minHeightShelves(vector<vector<int>>& books, int shelfWidth) {
        // Memoization to store the minimum height for each index
        vector<int> dp(books.size() + 1, INT_MAX);
        dp[0] = 0; // Base case: no books require 0 height

        // Iterate through each book
        for (int i = 1; i <= books.size(); ++i) {
            int width = 0, height = 0;

            // Check each possible end position for the current book
            for (int j = i; j > 0; --j) {
                width += books[j - 1][0]; // Total width of books in the current shelf
                if (width > shelfWidth) break; // If width exceeds shelf width, stop

                height = max(height, books[j - 1][1]); // Max height of the current shelf
                dp[i] = min(dp[i], dp[j - 1] + height); // Update dp with minimum height
            }
        }

        return dp[books.size()];
    }
};