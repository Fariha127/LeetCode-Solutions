class Solution {
public:
    bool isValid(string word) {
        int i = 0;
        int c = 0;
        int d = 0;
        int e = 0;

        if (word.length() < 3) {
            return false;
        }

        for (i = 0; i < word.length(); i++) {
            if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' ||
                word[i] == 'o' || word[i] == 'u' || word[i] == 'A' ||
                word[i] == 'E' || word[i] == 'I' || word[i] == 'O' ||
                word[i] == 'U') {
                c++;
            }
            if (word[i] == 'b' || word[i] == 'c' || word[i] == 'd' ||
                word[i] == 'f' || word[i] == 'g' || word[i] == 'h' ||
                word[i] == 'j' || word[i] == 'k' || word[i] == 'l' ||
                word[i] == 'm' || word[i] == 'n' || word[i] == 'p' ||
                word[i] == 'q' || word[i] == 'r' || word[i] == 's' ||
                word[i] == 't' || word[i] == 'v' || word[i] == 'w' ||
                word[i] == 'x' || word[i] == 'y' || word[i] == 'z' ||
                word[i] == 'B' || word[i] == 'C' || word[i] == 'D' ||
                word[i] == 'F' || word[i] == 'G' || word[i] == 'H' ||
                word[i] == 'J' || word[i] == 'K' || word[i] == 'L' ||
                word[i] == 'M' || word[i] == 'N' || word[i] == 'P' ||
                word[i] == 'Q' || word[i] == 'R' || word[i] == 'S' ||
                word[i] == 'T' || word[i] == 'V' || word[i] == 'W' ||
                word[i] == 'X' || word[i] == 'Y' || word[i] == 'Z') {
                d++;
            }
            if (word[i] == '@' || word[i] == '#' || word[i] == '$') {
                return false;
            }
            if (word[i] == '0' || word[i] == '1' || word[i] == '2' || word[i] == '3' || word[i] == '4' || word[i] == '5' ||  word[i] == '6' || word[i] == '7' || word[i] == '8' || word[i] == '9') {
                e++;
            }
        }

        if ((c + d + e) >= 3 && c != 0 && d != 0) {

            return true;
        }
        return false;
    }
};