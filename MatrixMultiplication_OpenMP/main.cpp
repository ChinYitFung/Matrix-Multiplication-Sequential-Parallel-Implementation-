#include <stdio.h>
#include <omp.h>
#include <vector>
#include "ExampleMM.h"
#include <iostream>

int matrixMultiply(const std::vector<std::vector<int>>& arr1, const std::vector<std::vector<int>>& arr2) {
	printf("Hello from matrixMultiply!\n");
	return 0;
}

int main() {

	//std::vector<std::vector<int>> matrixA;
	//std::vector<std::vector<int>> matrixB;

    vector<vector<int>> mat1 = {
    {1, 2, 3},
    {4, 5, 6}
    };

    vector<vector<int>> mat2 = {
        {7, 8},
        {9, 10},
        {11, 12}
    };

    vector<vector<int>> res = multiply(mat1, mat2);

    // Print the resulting matrix
    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res[i].size(); j++) {
            std::cout << res[i][j] << " ";
        }
        std::cout << std::endl;
    }

	return 0;
}

//matrixMultiply(A, B) :
//	Let A have dimensions(m x n)
//	Let B have dimensions(n x p)
//	Initialize C as an(m x p) matrix filled with 0s
//
//	For i = 0 to m - 1 :
//	For j = 0 to p - 1 :
//	For k = 0 to n - 1 :
//	C[i, j] = C[i, j] + (A[i, k] * B[k, j])
//	Return C