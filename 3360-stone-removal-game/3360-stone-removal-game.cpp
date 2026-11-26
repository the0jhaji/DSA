class Solution {
public:
    bool canAliceWin(int n) {
        int need = 10;
        bool aliceTurn = true;

        while (need > 0) {
            if (n < need)
                return !aliceTurn;

            n -= need;
            need--;
            aliceTurn = !aliceTurn;
        }

        return false;
    }
};