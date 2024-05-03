#include<iostream>
#include<queue>
using namespace std;

void solve() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);

    cout<<q.size()<<endl;
    while(!q.empty()) {
        cout<<q.front()<<" "<<q.back()<<endl;
        q.pop();
    }

}

int main() {
    solve();
    return 0;
}