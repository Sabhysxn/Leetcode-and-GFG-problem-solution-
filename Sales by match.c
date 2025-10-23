int sockMerchant(int n, vector<int> ar) {
    map<int,int> freq;
    int pairs = 0;
    for(int sock : ar) {
        freq[sock]++;
    }
    for(auto x : freq) {
        pairs += x.second / 2;
    }
    return pairs;
}