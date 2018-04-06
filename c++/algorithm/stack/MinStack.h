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
// Created by haibo on 3/13/18.
//

#ifndef ALGORITHM_MINSTACK_H
#define ALGORITHM_MINSTACK_H

#include <iostream>
#include <algorithm>

using namespace std;

class Element {
    friend class MinStack;
public:
    Element(int v, Element *n): _val(v), _m(min(v, n == NULL ? v : n->_m)), _n(n) {}
private:
    int _val;

    int _m;

    Element *_n;
};

class MinStack {
public:
    void push(int);

    int pop();

    int top();

    int get_min();
private:
    Element *_top = NULL;
};


#endif //ALGORITHM_MINSTACK_H
