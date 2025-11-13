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
    int salary;
};

bool mcd(const STD &a, const STD &b)
{
    if (a.salary != b.salary)
        return a.salary > b.salary;
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
        cin >> vi[i].name >> vi[i].salary;
    }

    sort(vi.begin(), vi.end(), mcd);

    for (auto &f : vi)
    {
        cout << f.name << " " << f.salary << "\n";
    }
}
