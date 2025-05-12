/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long l =1;
        long long h = n;
        long long mid;
        while(l<=h){
            mid = (l+h)/2;
            if(guess(mid)==0){
                return mid;
            }
            else if(guess(mid)==-1){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return mid;
    }
};