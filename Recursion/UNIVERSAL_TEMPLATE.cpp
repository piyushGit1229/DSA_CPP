// void solve(int idx, vector<int>& arr, vector<int>& temp) {
//     if (idx == arr.size()) {
//         // answer handling
//         return;
//     }

//     // PICK
//     temp.push_back(arr[idx]);
//     solve(idx + 1, arr, temp);
//     temp.pop_back();

//     // NOT PICK
//     solve(idx + 1, arr, temp);
// }
