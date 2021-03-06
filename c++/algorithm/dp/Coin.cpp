//Copyright [2018] [Haibo Yan]
//
//Licensed under the Apache License, Version 2.0 (the "License");
//you may not use this file except in compliance with the License.
//You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
//Unless required by applicable law or agreed to in writing, software
//distributed under the License is distributed on an "AS IS" BASIS,
//WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//See the License for the specific language governing permissions and
//limitations under the License.

//
// Created by haibo on 3/27/18.
//

#include "Coin.h"
#include <climits>
#include <iostream>
#include <algorithm>

/**
 *
 * @param A
 * @return
 */
int Coin::maxcoins(vector<int> &A) {
    int sum[A.size()][A.size()];
    for (int i = 0; i < A.size(); i++) {
        for (int j = 0; j < A.size() - i; j++) {
            sum[i][j] = (i == 0 ? 0 : sum[i - 1][j]) + A[i + j];
        }
    }

    int dp[A.size()][A.size()];

    for (int i = 0; i < A.size(); i++) {
        dp[0][i] = A[i];
    }

    for (int i = 1; i < A.size(); i++) {
        for (int j = 0; j < A.size() - i; j++) {
            dp[i][j] = std::max(A[j] + sum[i-1][j+1] - dp[i-1][j+1], A[i + j] +  sum[i - 1][j] - dp[i - 1][j]);
        }
    }

    return dp[A.size() -1][0];

}

int Coin::fewest(int amount) {
    int dp[amount + 1];

    dp[0] = 0;

    for (int i = 1; i <= amount; i++) {
        int x = INT_MAX;
        for (auto ci = coins_.begin(); ci != coins_.end(); ci++) {
            int c = *ci;

            if (i >= c) {
                x = min(x, dp[i - c] + 1);
            }
        }
        dp[i] = x;
    }

    return dp[amount];
}

int Coin::combinations(int amount) {
    int dp[amount + 1];

    for (int i = 0; i <= amount; i++) {
        dp[i] = 0;
    }

    for (auto ci = coins_.begin(); ci != coins_.end(); ci++) {
        int c = *ci;
        for (int i = 1; i <= amount; i++) {
            if(i == c) {
                dp[i]++;
            } else if (i > c) {
                dp[i] += dp[i - c];
            }
        }
    }

    return dp[amount];
}