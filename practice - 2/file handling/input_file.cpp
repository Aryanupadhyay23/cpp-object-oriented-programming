#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> arr(5);

    cout << "Enter 5 numbers: ";
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }

    // Sort before writing to file
    sort(arr.begin(), arr.end());

    // Write sorted data to file
    ofstream fout("numbers.txt");
    for(int i = 0; i < 5; i++){
        fout << arr[i] << " ";
    }
    fout.close();

    // Read from file
    ifstream fin("numbers.txt");
    if(!fin){
        cout << "File not found\n";
        return 0;
    }

    int num;
    cout << "Numbers in the file: ";
    while(fin >> num){
        cout << num << " ";
    }

    fin.close();
    return 0;
}