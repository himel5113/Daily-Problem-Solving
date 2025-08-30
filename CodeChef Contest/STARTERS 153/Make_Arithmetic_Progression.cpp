const int Max = 1000 + 5;
int dp[Max][Max];
bool vist[Max][Max];
string s, t;
int n, m;
int lcs(int i, int j)
{
    if (i >= n or j >= m)
    {
        return 0;
    }
    int &ret = dp[i][j];
    bool &vis = vist[i][j];
    if (vis)
    {
        return ret;
    }
    vis = 1;
    int res = 0;
    if (s[i] == t[j])
    {
        res = 1 + lcs(i + 1, j + 1);
    }
    else
    {
        res = max(lcs(i + 1, j), lcs(i, j + 1));
    }
    return ret = res;
}
string ans;
void solution(int i, int j)
{
    if (i >= n or j >= m)
    {
        return;
    }
    if (s[i] == t[j])
    {
        ans += s[i];
        solution(i + 1, j + 1);
    }
    else
    {
        if (lcs(i + 1, j) > lcs(i, j + 1))
        {
            solution(i + 1, j);
        }
        else
        {
            solution(i, j + 1);
        }
    }
}
int main()
{
    int T;
    cin >> T;
    for (int tc = 1; tc <= T; tc++)
    {
        cin >> s >> t;
        n = s.size();
        m = t.size();
        memset(vist, 0, sizeof vist);
        int maxlen = lcs(0, 0);
        ans = "";
        solution(0, 0);
        cout << ans << '\n';
    }
}
