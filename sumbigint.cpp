#include <bits/stdc++.h>
#include <vector>
#include <string>    

using namespace std;

class BigInt {
    private:
    vector<string> history;
public:
    string value;

    void sum(string a, string b) {
        string result;
        int carry = 0;
        int i = a.size() - 1, j = b.size() - 1;
    for (; i >= 0 || j >= 0; i--, j--) {
        int sum = carry;
        if (i >= 0) sum += a[i] - '0';
        if (j >= 0) sum += b[j] - '0';
        result.push_back(sum % 10 + '0');
        carry = sum / 10;
    }
    reverse(result.begin(), result.end());
    history.push_back(result);
    value = result;
    cout << result << endl;
}
void printHistory() {
    cout << "History: ";
    for (const auto& h : history) {
        cout << h << endl;
    }
    cout << endl;
};
};
int main() {
    BigInt temp;
    string a, b;
    cin >> a >> b;
    temp.sum(a, b);
    temp.printHistory();
    return 0;
}