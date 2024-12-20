#include <iostream>
#include <vector>
#include <fstream>
#include <queue>
using namespace std;

int main() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    int n;
    fin >> n;
    queue<int> q1;
    queue<int> q2;
    int u, v,k=0;
    while(fin >> u >> v) {
        q1.push(u);
        q2.push(v);
        k++;
    }
    vector<int> vect(n, 0);
    while(!q1.empty()){
        int a = q1.front(), b = q2.front();
        q1.pop();
        q2.pop();
        vect[b-1] = a;
    }
    for (int i = 0; i < n; i++) {
        cout << vect[i] << " ";
    }

    fin.close();
    fout.close();

    return 0;
}