#include "pch.h"
#include "ReapeatedNTimes.h"

namespace algorithm {
    // Map & Set
    // Runtime: 64 ms, faster than 19.33%
    // Memory Usage: 17.8 MB, less than 5.17%
    int repeatedNTimesV1(vector<int>& A) {
        int n = A.size() >> 1;
        unordered_map<int, int> counts(A.size());
        unordered_set<int> maybe(A.size());
        for (size_t i(0); i < A.size(); i++) {
            if (counts.find(A[i]) == counts.cend()) {
                counts.emplace(A[i], 1);
            }
            else {
                counts[A[i]]++;
                if (counts[A[i]] == n)
                    maybe.emplace(A[i]);
                else if (counts[A[i]] > n)
                    maybe.erase(counts[A[i]]);
            }
        }
        return *maybe.cbegin();
    }

    // 2 iterations
    // Runtime: 60 ms, faster than 21.70%
    // Memory Usage: 16.4 MB, less than 17.77%
    int repeatedNTimesV2(vector<int>& A) {
        int n = A.size() >> 1;
        unordered_map<int, int> counts(A.size());
        for (size_t i(0); i < A.size(); i++) {
            if (counts.find(A[i]) == counts.cend())
                counts.emplace(A[i], 1);
            else counts[A[i]]++;
        }
        for (unordered_map<int, int>::const_iterator i = counts.cbegin(); i != counts.cend(); i++) {
            if (i->second == n)
                return i->first;
        }
        return 0;
    }

    // Uniques
    // Runtime: 44 ms, faster than 64.29%
    // Memory Usage: 12.5 MB, less than 19.95%
    int repeatedNTimesV3(vector<int>& A) {
        unordered_set<int> uniques(A.size());
        for (size_t i(0); i < A.size(); ++i) {
            if (uniques.find(A[i]) == uniques.cend()) {
                uniques.emplace(A[i]);
            }
            else {
                return A[i];
            }
        }
        return 0;
    }

    // Uniques 2
    // Runtime: 40 ms, faster than 91.20%
    // Memory Usage: 15.9 MB, less than 18.05%
    int repeatedNTimesV4(vector<int>& A) {
        vector<int> uniques(10000);
        for (size_t i(0); i < A.size(); ++i) {
            if (uniques[A[i]]) {
                return A[i];
            }
            else {
                uniques[A[i]] = 1;
            }
        }
        return 0;
    }
}