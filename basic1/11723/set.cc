#include <iostream>
using namespace std;
    struct set {
        bool sets[21] = {false};
        void add(int x){
            sets[x] = true;
        }
        void remove(int x){
            sets[x] = false;
        }
        int check(int x){
            return sets[x] ? 1 : 0;
        }
        void toggle(int x){
            sets[x] = !sets[x];
        }
        void all(){
            for(int x=1; x<21; x++){
                sets[x] = true;
            }
        }
        void empty(){
            for(int x=1; x<21; x++){
                sets[x] = false;
            }
        }
    };
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    set mySet;
    int n;
    cin >> n;
    string command;
    int x;
    for(int i=0; i<n; i++){
        cin >> command;
        if(command == "add") {
            cin >> x;
            mySet.add(x);
            continue;
        }
        if(command == "remove") {
            cin >> x;
            mySet.remove(x);
            continue;
        }
        if(command == "check") {
            cin >> x;
            cout << mySet.check(x) << '\n';
            continue;
        }
        if(command == "toggle") {
            cin >> x;
            mySet.toggle(x);
            continue;
        }
        if(command == "all") {
            mySet.all();
            continue;
        }
        if(command == "empty") {
            mySet.empty();
            continue;
        }
    }
    return 0;
}