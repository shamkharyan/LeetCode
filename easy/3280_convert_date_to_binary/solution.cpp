class Solution {
public:
    string convertDecToBin(int n)
    {
        string result = "";
        while (n != 0)
        {
            result = ((n % 2 == 0)? "0" : "1") + result;
            n /= 2;
        }
        return result;
    }
    string convertDateToBinary(string date) {
        string result;
        result += convertDecToBin(stoi(date.substr(0, 4)));
        result += "-";
        result += convertDecToBin(stoi(date.substr(5, 2)));
        result += "-";
        result += convertDecToBin(stoi(date.substr(8, 2)));
        return result;
    }
};