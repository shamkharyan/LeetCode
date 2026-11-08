class Solution
{
public:
    int dayOfYear(string date)
    {
        constexpr std::array<int, 12> days = {
            31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
        };

        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));

        int number = day;
        bool isLeap = year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);

        for (int i = 0; i < month - 1; ++i)
            number += days[i];
        
        if (isLeap && month > 2)
            ++number;
            
        return number;
    }
};
