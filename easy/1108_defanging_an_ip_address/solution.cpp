class Solution {
public:
    string defangIPaddr(string address) {
        int n = address.size();
        string defanged;

        for (int i = 0; i < n; ++i)
        {
            if (address[i] != '.')
                defanged += address[i];
            else
                defanged += "[.]";
        }
        return defanged;
    }
};