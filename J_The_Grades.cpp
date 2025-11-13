#include <iostream>
#include <string>
#include <set>
#include <utility>
#include <vector>
#include <numeric>
#include <cmath>
#include <algorithm>
#define ull unsigned long long
#define ll long long

using namespace std;

void LOGO()
{
    cout << "======================================================================" << endl;
    cout << "======================================================================" << endl;
    cout << "======================================================================" << endl;

    cout << "|||      *****     *********  *     *     *****     *****             |||" << endl;
    cout << "|||     *     *        *      *     *    *     *   *     *            |||" << endl;
    cout << "|||     *******        *      *  *  *    *******   *******            |||" << endl;
    cout << "|||     *     *        *      * * * *    *     *   *     *            |||" << endl;
    cout << "|||     *     *        *       *   *     *     *   *     *            |||" << endl;

    cout << "======================================================================" << endl;
    cout << "======================================================================" << endl;
    cout << "======================================================================" << endl;
}

struct STD
{
    string name;
    int a, m, s, e, total = 0;
};

bool mcd(const STD &a, const STD &b)
{
    if (a.total != b.total)
        return a.total > b.total;
    return a.name < b.name;
}
int main()
{
    int n;
    cin >> n;
    vector<STD> vi(n);
    ;

    for (int i = 0; i < n; i++)
    {
        cin >> vi[i].name >> vi[i].a >> vi[i].m >> vi[i].s >> vi[i].e;
        vi[i].total += (vi[i].a + vi[i].m + vi[i].s + vi[i].e);
    }

    sort(vi.begin(), vi.end(), mcd);

    for (auto &f : vi)
    {
        cout << f.name << " " << f.total << " "
             << f.a << " " << f.m<< " " << f.s << " " << f.e<< "\n";
    }
}
