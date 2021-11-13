// d62_q1c_vector_intersection : Vector Intersection
#include <iostream>
#include <set>
using namespace std;

int main(){
    int n, m,temp;
    set<int> s1;
    set<int> s2;
    cin >> n >> m;
    while (n--){
        cin >> temp;
        s1.insert(temp);
    }
    while (m--){
        cin >> temp;
        if (s1.find(temp) != s1.end()){
            s2.insert(temp);
        }
    }
    for (auto i : s2){
        cout << i << " ";
    }
}