//simple approach
// char highestOccurringChar(char input[]) {
//    int maxcount = 0;
//      char result = '\0';

//    int len = strlen(input);

//    for(int i=0;i<len;i++){
//        int count=0;
//        for(int j=0;j<len;j++){
//            if(input[i]==input[j]){
//                count++;
//            }
//        }
//         if(count>maxcount){
//        maxcount=count;
//        result=input[i];
//    }
//    }
  
//    return result;

// }


// //Hash map approach
// #include <iostream>
// #include <map>
// #include <cstring>
// using namespace std;

// char highestOccurringChar(char input[]) {
//     int len = strlen(input);          // Get string length
//     map<char, int> freq;              // Frequency map

//     // Step 1: Count frequency of each character
//     for (int i = 0; i < len; i++) {
//         freq[input[i]]++;
//     }

//     // Step 2: Find character with highest frequency
//     int maxFreq = 0;
//     char result = '\0';

//     for (auto it : freq) {
//         if (it.second > maxFreq) {
//             maxFreq = it.second;
//             result = it.first;
//         }
//     }

//     return result;
// }
