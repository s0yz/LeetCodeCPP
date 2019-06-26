// In a array A of size 2N, there are N+1 unique elements, and exactly one of these elements is repeated N times.
//
// Return the element repeated N times.
//

#pragma once
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

namespace algorithm {
    int repeatedNTimesV1(vector<int>& A);
    int repeatedNTimesV2(vector<int>& A);
    int repeatedNTimesV3(vector<int>& A);
    int repeatedNTimesV4(vector<int>& A);
}