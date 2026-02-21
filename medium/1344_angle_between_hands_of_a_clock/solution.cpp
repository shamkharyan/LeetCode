class Solution {
public:
    double angleClock(int hour, int minutes) {
        double minAngle = minutes * 6;
        double hourAngle = hour * 30 + minutes / 2.0;
        return min(abs(hourAngle - minAngle), 360 - abs(hourAngle - minAngle));
    }
};
