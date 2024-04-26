#include <bits/stdc++.h>
using namespace std;

void printSubset(int index, vector<int> &arr, vector<int> &subset,vector<vector<int>>&result)
{

    if (index == arr.size())
    {    
        if(subset.size()==0)
           result.push_back({});
            
        result.push_back(subset);
        return;
    }
    
     // At each index the array the elements are included
    //first recursive call that include a ele at the index
     subset.push_back(arr[index]);
    printSubset(index + 1, arr, subset,result);

   // At each index the array the elements are excluded
    //second recursive call that exclude a ele at the index
     subset.pop_back();
    printSubset(index + 1, arr, subset,result);
}

int main()
{
    vector<int> arr = {1, 2, 3};
    vector<int> subset;
    sort(arr.begin(),arr.end());
    vector<vector<int>>result;
    printSubset(0, arr, subset,result);
    sort(result.begin(),result.end());
    for(auto i:result){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}


void generateSubsets(vector<int> &S, int index, vector<int> &current, vector<vector<int> > &result) {
    if (index == S.size()) {
        result.push_back(current);
        return;
    }
   
    // Include the current index.
    current.push_back(S[index]);
    generateSubsets(S, index + 1, current, result);

     // Ignore the current index.
    current.pop_back();
    generateSubsets(S, index + 1, current, result);
}

vector<vector<int> > Solution::subsets(vector<int> &S) {  
    vector<vector<int> > result; 
    vector<int> current;
    sort(S.begin(), S.end());
    generateSubsets(S, 0, current, result);
    sort(result.begin(), result.end());
    return result;
} 