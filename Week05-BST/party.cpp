#include <iostream>
#include <algorithm>
#include <cstring>
#include <queue>
using namespace std;
typedef long long party;

const int constant1=2005;
const int INF=1<<30;

int n;
int a[constant1];
int ans=0;

void dfs(int x,int s){
    if (x==-1) return;
    ans=max(ans,s);
    dfs(a[x],s+1);
}
int main(){

    cin >> n;
    for (int i=1;i<=n;i++){
        cin >> a[i];
    }

    for (int i=1;i<=n;i++){
        dfs(i,1);
    }

    cout << ans << endl;

}
