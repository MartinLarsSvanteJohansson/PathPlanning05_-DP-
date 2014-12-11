#include <string>
#include <vector>
#include <set>
#include <cmath>

using namespace std;

typedef long long ll;

ll ans[102][102];

int sx[] = { 1, 0 };
int sy[] = { 0, 1 };


vector< string > tokenize(string a, string b) {
    const char *q = a.c_str();
    while (count(b.begin(), b.end(), *q)) {
        q++;
    }

    vector< string > ssv;
    while (*q) {
        const char *v = q;
        while (*v && !count(b.begin(), b.end(), *v)) {
            v++;
        }
        ssv.push_back(string(q, v));
        q = v;
        while (count(b.begin(), b.end(), *q)) {
            q++;
        }
    }
    return ssv;
}

vector< int > s2i(const vector< string > &a) {
    vector< int > ssv;
    for (int i = 0; i < a.size(); i++) {
        ssv.push_back(atoi(a[i].c_str()));
    }
    return ssv;
}


class findPaths {
public:
    ll numWays(int width, int height, vector <string> blocked) {
        ans[0][0] = 1;
        set< pair< pair< int, int >, pair< int, int > > > pp;
        for (int i = 0; i < blocked.size(); i++) {
            vector< int > st = s2i(tokenize(blocked[i], " "));
            pp.insert(make_pair(make_pair(st[0], st[1]), make_pair(st[2], st[3])));
            pp.insert(make_pair(make_pair(st[2], st[3]), make_pair(st[0], st[1])));
        }
        for (int x = 0; x <= width; x++) {
            for (int y = 0; y <= height; y++) {
                for (int k = 0; k < 2; k++) {
                    int tx = x + sx[k];
                    int ty = y + sy[k];
                    if (!pp.count(make_pair(make_pair(x, y), make_pair(tx, ty)))) {
                        ans[tx][ty] += ans[x][y];
                    }
                }
            }
        }
        return ans[width][height];
    }
};

int main(int argc, char **argv) {

    findPaths p;
    int width, height;
    vector<string> blocked;

    /* Case 3 */
    blocked.push_back("0 2 0 3");
    width = 20; height = 100;
    blocked = { "0 2 0 3", "1 2 1 3", "2 2 2 3", "3 2 3 3", "4 2 4 3", "5 2 5 3", "6 2 6 3", "7 2 7 3", "8 2 8 3", "9 2 9 3" };
    ll result = p.numWays(width, height, blocked);

    return 0;
}