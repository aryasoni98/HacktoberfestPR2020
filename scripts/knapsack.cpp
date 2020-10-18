#include "bits/stdc++.h"
using namespace std;

int n, capacity;
vector<int> price;
vector<int> weight;


int knapsack(int pos, int total){
    if(pos == n) return 0;
    if(total > capacity) return 0;
    int not_choose = knapsack(pos + 1, total);
    int choose = 0;
    if(weight[pos] + total <= capacity){
        choose = knapsack(pos + 1, total + weight[pos]) + price[pos]; 
    }
    return max(choose, not_choose);
}

int main(){

    cin >> n >> capacity;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        price.push_back(a);
    }
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        weight.push_back(a);
    }

    cout << knapsack(0, 0) << '\n';
}
