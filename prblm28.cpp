// #include<iostream>
// #include<vector>
// using namespace std;

// int NumberOfEligibleVoters(vector<int> v, int x){
//     int count = 0;
//     int n = v.size();
//     for(int i = 0; i < n; i++){
//         if(v[i] >= x) { // Use x correctly
//             count++;
//         }
//     } 
//     return count;
// }

// int main() {
//     int n;
//     cin >> n;
    
//     vector<vector<int>> vec;
//     for (int i = 0; i < n; i++) {
//         int a;
//         cin >> a;
//         int s;
//         cin >> s;
//         vector<int> innerVec;
//         for (int j = 0; j < s; j++) {
//             int x;
//             cin >> x;
//             innerVec.push_back(x); // Initialize with some values
//         }
//         vec.push_back(innerVec);
//         cout << NumberOfEligibleVoters(innerVec, a) << endl; // Pass innerVec and a as arguments
//     }
//     return 0;
// }
#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        int s;
        cin >> s;
        vector<int> innerVec;
        for (int j = 0; j < s; j++) {
            int x;
            cin >> x;
            innerVec.push_back(x); // Initialize with some values
        }
        int count = 0;
        for (int k = 0; k < s; k++) {
            if (innerVec[k] >= a) {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}