#include<iostream>
#include<vector> 

using namespace std;

int main(){
    
int row, col;
    cout << "enter number of rows of 2d vector:";
    cin >> row;
    cout << "enter number of col of 2d vector:";
    cin >> col;
    vector< vector<int> > vec; // intializing the vector of vectors 
    int num=0;
    for(int i=0;i<row;i++){  //inserting elements into vector
    // vector v1 to store column elements
        vector<int> v1;
        for(int j=0;j<col;j++){
            v1.push_back(num);
            num+=10;
        } 
// pushing back above 1d vector to create the 2d vector
vec.push_back(v1);
    }
    // displaying the 2d vector
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();j++){
            cout<<vec[i][j]<<" ";
        }cout<<endl;
    }


return 0;
}