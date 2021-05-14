#include <iostream>

using namespace std;

int main()
{
    string s;

    cin >> s;

    int cnt_a = 0;
    int cnt_a_not_b = 0;

    for(int i = 0;i < s.size();++i) {
        if(s[i] == 'a') {
            cnt_a++;
            if(i+1 >= s.size() || s[i+1] != 'b')
                cnt_a_not_b++;
        }
    }
    cout << cnt_a << ' ' << cnt_a_not_b << '\n';
    return 0;
}