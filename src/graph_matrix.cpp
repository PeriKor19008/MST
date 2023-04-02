//
// Created by peri on 2/4/2023.
//

#include "graph_matrix.h"
#include <vector>
#include <iostream>

using namespace std;

graph_matrix::graph_matrix(int n) {
   graph.resize(n,vector<int>(n,0));
}

void graph_matrix::print() {
    for (int i=0; i<graph.size();i++){
        cout << "\n";
        for(int j=0;j<graph.size();j++){
            cout<<graph.at(i).at(j);
        }
    }
}

