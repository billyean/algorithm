/*
 * Copyright (c) [2017] [Haibo(Tristan) Yan]
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package com.haibo.yan.algorithm.backtracking;

import org.testng.annotations.DataProvider;
import org.testng.annotations.Test;

import java.util.Arrays;
import java.util.List;

import static org.testng.Assert.assertEquals;

public class TestGenerateParenthesis {
    @DataProvider
    public Object[][] parenthesesObjects() {
        return new Object[][]{
                {3, Arrays.asList("((()))", "(()())", "(())()", "()(())", "()()()")}
        };
    }

    @Test(dataProvider = "parenthesesObjects")
    public void test(int n, List<String> expected) {
        assertEquals(new GenerateParenthesis().generateParenthesis(n), expected);
    }
}
