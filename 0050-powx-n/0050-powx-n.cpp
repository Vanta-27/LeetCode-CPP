class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) return 1.0;
        if (x == 0.0) return 0.0;
        if (x == 1.0) return 1.0;
        if (x == -1.0) return (n % 2 == 0) ? 1.0 : -1.0;

        long double base = x;
        long long binForm = n;
        if (binForm < 0) {
            base = 1.0L / base;
            binForm = -binForm;
        }

        long double ans = 1.0L;
        while (binForm > 0) {
            if (binForm % 2 == 1) {
                ans *= base;
            }
            base *= base;
            binForm /= 2;
        }
        return static_cast<double>(ans);
    }
};