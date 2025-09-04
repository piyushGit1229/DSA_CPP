// #include <bits/stdc++.h>
// using namespace std;
// vector<int> buildLPS(string &pattern)
// {
//     int m = pattern.size();
//     vector<int> lps(m, 0);
//     int i = 1;
//     int len = 0;
//     while (i < m)
//     {
//         if (pattern[i] == pattern[len])
//         {
//             len++;
//             lps[i] = len;
//             i++;
//         }
//         else
//         {
//             if (len != 0)
//             {
//                 len = lps[len - 1];
//             }
//             else
//             {
//                 lps[i] = 0;
//                 i++;
//             }
//         }
//     }
//     return lps;
// }

// vector<int> search(string &text, string &pattern)
// {
//     int i = 0;
//     int j = 0;
//     vector<int> result;
//     vector<int> lps = buildLPS(pattern);
//     int n = text.size();
//     int m = pattern.size();
//     while (i < n)
//     {
//         if (text[i] == pattern[j])
//         {
//             i++;
//             j++;
//         }
//         if (j == m) // found
//         {
//             result.push_back(i - j);
//             j = lps[j - 1];
//         }
//         else if (i < n && text[i] != pattern[j])
//         {
//             if (j != 0)
//             {
//                 j = lps[j - 1];
//             }
//             else
//             {
//                 i++;
//             }
//         }
//     }
//     return result;
// }

// int main()
// {
//     string text = "abxabcabcaby";
//     string pattern = "abcaby";

//     vector<int> matches = search(text, pattern);

//     cout << "Pattern found at index: ";
//     for (int idx : matches)
//     {
//         cout << idx << " ";
//     }
//     cout << endl;

//     return 0;

//     return 0;
// }


























/*
  KMP (Knuth–Morris–Pratt) String Matching – Fully Documented

  GOAL:
    Find all starting indices where `pattern` occurs in `text`, in O(n + m) time.

  CORE IDEA:
    - When a mismatch happens during matching, we do NOT restart from the next character in `text`.
    - Instead, we "reuse" the already matched prefix information via the LPS array.
    - LPS[i] = length of the longest proper prefix of pattern[0..i] that is also a suffix of pattern[0..i].
      ("Proper" means not equal to the whole substring.)

  WHY LPS HELPS:
    Suppose we matched pattern[0..j-1] with text ending at text[i-1], and we see a mismatch at text[i] vs pattern[j].
    The LPS tells us the next best candidate length of a prefix of the pattern that *could* still match here.
    So we set j = LPS[j-1] instead of j = 0 (no backtrack on text, only on pattern).

  WORKED LPS EXAMPLE (pattern = "abcaby"):
    i:    0 1 2 3 4 5
    pat:  a b c a b y
    lps:  0 0 0 1 2 0

    Explanation:
      - i = 0: "a" -> no proper prefix/suffix match => lps[0] = 0
      - i = 1: "ab" -> prefixes: "a"; suffixes: "b"  => no match => 0
      - i = 2: "abc" -> prefixes: "a","ab"; suffixes: "c","bc" => 0
      - i = 3: "abca" -> prefixes: "a","ab","abc"; suffixes: "a","ca","bca"
           Longest common: "a" => lps[3] = 1
      - i = 4: "abcab" -> prefixes: "a","ab","abc","abca"; suffixes: "b","ab","cab","bcab"
           Longest common: "ab" => lps[4] = 2
      - i = 5: "abcaby" -> prefixes: ... ; suffixes: ... => no common => 0

  COMPLEXITY:
    - Build LPS: O(m)
    - Search:    O(n)
    - Total:     O(n + m)

  EDGE CASES:
    - Empty pattern: By theory, empty string occurs at every position (0..n). But APIs like strStr usually define
      empty pattern => return 0 (or do nothing). Here we choose: return empty result {} to avoid ambiguity.
      You can change this behavior easily if you want.
    - Pattern longer than text: returns {}.
    - Many overlapping matches (e.g., text="aaaaa", pattern="aa"): returns [0,1,2,3].

  TESTS included at bottom (main).
*/

#include <bits/stdc++.h>
using namespace std;

/*
  buildLPS(pattern)
  -----------------
  Constructs the LPS array where:
    lps[i] = length of the longest proper prefix of pattern[0..i] that is also a suffix of pattern[0..i].

  HOW:
    - Maintain `len` = current length of the candidate prefix-suffix match (initially 0).
    - Iterate i from 1..m-1:
        * If pattern[i] == pattern[len], we can extend the match: len++, lps[i] = len, i++.
        * Else (mismatch):
            - If len != 0, "fall back" to len = lps[len-1] (try a shorter valid prefix).
            - If len == 0, no valid prefix-suffix → lps[i] = 0, i++.

  WHY THIS WORKS:
    - It’s essentially doing pattern-pattern matching to find repeated prefix/suffix structures in O(m).
*/
vector<int> buildLPS(const string &pattern) {
    int m = (int)pattern.size();
    vector<int> lps(m, 0);

    int len = 0;   // length of the current longest prefix-suffix
    int i = 1;     // we start from i = 1, since lps[0] is always 0

    while (i < m) {
        if (pattern[i] == pattern[len]) {
            // We extended the current prefix-suffix by this character.
            len++;
            lps[i] = len;
            i++;
        } else {
            // Mismatch case
            if (len != 0) {
                // Try the next best candidate prefix length.
                len = lps[len - 1];
                // Note: we DO NOT increment i here, we attempt to match with this new len.
            } else {
                // No candidate left, this position has lps = 0.
                lps[i] = 0;
                i++;
            }
        }
    }

    return lps;
}

/*
  KMPSearch(text, pattern)
  ------------------------
  Returns all starting indices in `text` where `pattern` occurs.

  APPROACH:
    - Precompute lps[] for `pattern`.
    - Two pointers: i for text, j for pattern.
    - If text[i] == pattern[j], i++, j++.
    - If j == m (full match), push (i - j) into results, and set j = lps[j-1] to continue searching for next match.
    - If mismatch and j > 0, set j = lps[j-1] (don’t move i).
    - If mismatch and j == 0, move i++.

  WHY THIS IS LINEAR:
    - Each character in text is visited a constant number of times (push and pop logic mirrors monotonic behavior).
*/
vector<int> KMPSearch(const string &text, const string &pattern) {
    vector<int> result;

    int n = (int)text.size();
    int m = (int)pattern.size();

    // Handle tricky edge cases up front
    if (m == 0) {
        // Choice: return {} to avoid ambiguity. Alternatives:
        //  - Return all positions 0..n to reflect the "empty substring everywhere" definition.
        //  - Return {0} for strStr-like behavior.
        return result;
    }
    if (m > n) return result;

    vector<int> lps = buildLPS(pattern);

    int i = 0; // index in text
    int j = 0; // index in pattern

    while (i < n) {
        if (text[i] == pattern[j]) {
            // Characters match, advance both
            i++;
            j++;
        }

        if (j == m) {
            // Found full match ending at i-1 -> starting index is (i - j)
            result.push_back(i - j);

            // Continue searching for next possible match
            j = lps[j - 1];
        }
        // Mismatch after some matches
        else if (i < n && text[i] != pattern[j]) {
            if (j != 0) {
                // Try the next best partial match based on LPS
                j = lps[j - 1];
            } else {
                // No partial match to fall back to, advance text
                i++;
            }
        }
    }

    return result;
}

/* --------------------- Utility: Pretty Printer ---------------------- */
void printMatches(const vector<int> &v) {
    cout << "[";
    for (size_t k = 0; k < v.size(); ++k) {
        cout << v[k];
        if (k + 1 < v.size()) cout << ", ";
    }
    cout << "]";
}

/* ---------------------------- TESTS ---------------------------------
   We provide multiple tests to internalize behavior:

   1) Basic example (from explanation):
      text    = "abxabcabcaby"
      pattern = "abcaby"
      Expected: [6]

   2) Multiple overlapping matches:
      text    = "aaaaa"
      pattern = "aa"
      Expected: [0, 1, 2, 3]

   3) No occurrence:
      text    = "abcdef"
      pattern = "gh"
      Expected: []

   4) Exact match entire string:
      text    = "pattern"
      pattern = "pattern"
      Expected: [0]

   5) Pattern longer than text:
      text    = "short"
      pattern = "longerpattern"
      Expected: []

   6) Empty pattern (we chose to return []):
      text    = "abc"
      pattern = ""
      Expected: []

   7) Repeated structure (stress LPS):
      text    = "abcabcabcabc"
      pattern = "abcabc"
      Expected: [0, 3, 6]
--------------------------------------------------------------------- */

int main() {
    {
        string text = "abxabcabcaby";
        string pattern = "abcaby";
        auto matches = KMPSearch(text, pattern);
        cout << "Test 1 (basic): ";
        printMatches(matches); // Expected: [6]
        cout << "\n";
    }

    {
        string text = "aaaaa";
        string pattern = "aa";
        auto matches = KMPSearch(text, pattern);
        cout << "Test 2 (overlaps): ";
        printMatches(matches); // Expected: [0, 1, 2, 3]
        cout << "\n";
    }

    {
        string text = "abcdef";
        string pattern = "gh";
        auto matches = KMPSearch(text, pattern);
        cout << "Test 3 (none): ";
        printMatches(matches); // Expected: []
        cout << "\n";
    }

    {
        string text = "pattern";
        string pattern = "pattern";
        auto matches = KMPSearch(text, pattern);
        cout << "Test 4 (exact full): ";
        printMatches(matches); // Expected: [0]
        cout << "\n";
    }

    {
        string text = "short";
        string pattern = "longerpattern";
        auto matches = KMPSearch(text, pattern);
        cout << "Test 5 (pattern > text): ";
        printMatches(matches); // Expected: []
        cout << "\n";
    }

    {
        string text = "abc";
        string pattern = "";
        auto matches = KMPSearch(text, pattern);
        cout << "Test 6 (empty pattern -> [] by our choice): ";
        printMatches(matches); // Expected: []
        cout << "\n";
    }

    {
        string text = "abcabcabcabc";
        string pattern = "abcabc";
        auto matches = KMPSearch(text, pattern);
        cout << "Test 7 (repeated structure): ";
        printMatches(matches); // Expected: [0, 3, 6]
        cout << "\n";
    }

    return 0;
}
