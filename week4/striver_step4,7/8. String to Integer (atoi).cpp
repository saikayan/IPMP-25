class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.length();
        int flag = 1;
        long long sum = 0;

        while (i < n && s[i] == ' ') {
            i++;
        }

        if (i < n && (s[i] == '+' || s[i] == '-')) {
            flag = (s[i] == '-') ? -1 : 1;
            i++;
        }

        while (i < n && isdigit(s[i])) {
            int digit = s[i] - '0';
            if (sum > (INT_MAX - digit) / 10) {
                return (flag == 1) ? INT_MAX : INT_MIN;
            }
            sum = sum * 10 + digit;
            i++;
        }

        return static_cast<int>(sum * flag);
    }
};
