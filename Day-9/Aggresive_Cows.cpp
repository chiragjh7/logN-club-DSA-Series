
bool isPossible(vector<int>& stalls, int k, int mid){
    int cow_cnt = 1;
    int last_pos = stalls[0];
    for(int i = 0; i < stalls.size(); i++){
        if(stalls[i] - last_pos >= mid){
            cow_cnt++;
            if(cow_cnt == k){
                return true;
            }
            last_pos = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int st = 0;
    int maxi = -1;
    for(int i = 0; i < stalls.size(); i++){
        maxi = max(maxi, stalls[i]);
    }
    int en = maxi;
    int ans = -1;
    while(st <= en){
       int mid = st + (en - st) / 2;
       if(isPossible(stalls, k, mid)){
           ans = mid;
           st = mid + 1;
       } else{
           en = mid - 1;
       }
    }
    return ans;
}