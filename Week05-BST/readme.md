for problem 115A - Party
typedef long long party; (long is equivalent to long int)
( typedef has its own function, it is to assign alternative names to existing datatypes)

const int constant1=2005;
(it will create an integer constant, unimaginatively called ‘constant1’, with the value 2005.)
const int INF=1<<30;

int n;
int a[constant1];
int ans=0;

void dfs(int x,int s){
(dfs means depth first search)
    if (x==-1) return;
    (this is the code for the situation when employee does not have an immediate manager)
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
