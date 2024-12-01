class Solution {
public:
    int passThePillow(int n, int time) {
        bool isReverse = false;
        int currentPosition = 1;
        while(time--){
            if(isReverse){
                currentPosition--;
            }
            else{
                currentPosition++;
            }

            if(currentPosition == n)
                isReverse = true;
            else if(currentPosition ==1)
                isReverse = false;
        }
return currentPosition;
    }
};