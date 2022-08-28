
// output matrix N x M :-
template <class T>
void printMatrix(vector<vector<T>> arr){
    for(int i = 0; i < (int)arr.size(); i++){
        for(int j = 0; j < (int)arr[i].size(); j++){
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }
}
