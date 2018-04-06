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
// Created by Haibo Yan on 4/1/18.
//

#include "gtest/gtest.h"
#include "../../algorithm/dp/SubsetSum.h"

TEST(SubsetSumTest, simple1) {
    vector<int> numbers = {1, 3, 4, 8, 10};
    SubsetSum ss(numbers);

    vector<int> subset = {3, 8};

    ASSERT_EQ(subset, ss.subsetToK(11));
}

TEST(SubsetSumTest, simple2) {
    vector<int> numbers = {1, 3, 4, 8, 10};
    SubsetSum ss(numbers);

    vector<int> subset = {1, 3, 10};

    ASSERT_EQ(subset, ss.subsetToK(14));
}

TEST(SubsetSumTest, simple3) {
    vector<int> numbers = {1, 3, 4, 8, 10};
    SubsetSum ss(numbers);

    vector<int> subset = {1, 3, 4, 8};

    ASSERT_EQ(subset, ss.subsetToK(16));
}

TEST(SubsetSumTest, simple4) {
    vector<int> numbers = {1, 3, 4, 8, 10};
    SubsetSum ss(numbers);

    vector<int> subset = {};

    ASSERT_EQ(subset, ss.subsetToK(20));
}
