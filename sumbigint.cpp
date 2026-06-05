#include <bits/stdc++.h>
#include <vector>
#include <string>    

using namespace std;

class MyBigNumber {
    private:
    vector<string> history;
    string value;
public:
    string sum(string stn1, string stn2) {
    int count = (max(stn1.size(), stn2.size())) + 1;
    string result(count, '0');
    int carry = 0;
    int temp = count;
    int i = stn1.size() - 1, j = stn2.size() - 1;
    for (; i >= 0 || j >= 0 || carry; i--, j--) {
        int sum = carry;
        if (i >= 0) sum += stn1[i] - '0';
        if (j >= 0) sum += stn2[j] - '0';
        result[temp - 1] = (sum % 10) + '0';
        carry = sum / 10;
        temp--;
    }
    if (result[0] == '0') {
        result.erase(result.begin());
    }
    //reverse(result.begin(), result.end());
    history.push_back(result);
    //value = result;
    return this->value=result;
}
void printHistory() {
    cout << "";
    for (const auto& h : history) {
        cout << h ;
    }
    cout << endl;
};
};
int main() {
    MyBigNumber temp;
    string a, b;
    cin >> a >> b;
    temp.sum(a, b);
    temp.printHistory();
    return 0;
}
