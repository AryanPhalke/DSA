#include<iostream>
using namespace std;

float getQuotient(float divisor, float dividend) {
    float s = 0.0;
    float e = dividend;
    float epsilon = 0.00001; // A small value for precision
    float ans = -1.0;

    while (e - s > epsilon) {
        float mid = s + (e - s) / 2;
        if (mid * divisor == dividend) {
            return mid;
        } else if (mid * divisor < dividend) {
            ans = mid;
            s = mid;
        } else {
            e = mid;
        }
    }

    return ans;
}

int main() {
    float divisor = 7.0;
    float dividend = 41.0;

    float ans = getQuotient((divisor), (dividend));

    if ((divisor > 0 && dividend < 0) || (divisor < 0 && dividend > 0)) {
        ans = -ans; // Change the sign if the original divisor and dividend had different signs
    }

    cout << "Ans is " << ans << endl;
    return 0;
}
