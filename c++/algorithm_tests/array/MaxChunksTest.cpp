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
// Created by haibo on 3/28/18.
//

#include "gtest/gtest.h"
#include "../../algorithm/array/MaxChunks.h"

TEST(MaxChunksTest, test1) {
    vector<int> test_data = {4, 3, 2, 1, 0};
    MaxChunks chunks(test_data);
    ASSERT_EQ(chunks.maxChunksToSorted(), 1);
}

TEST(MaxChunksTest, test2) {
    vector<int> test_data = {1, 0, 2, 3, 4};
    MaxChunks chunks(test_data);
    ASSERT_EQ(chunks.maxChunksToSorted(), 4);
}