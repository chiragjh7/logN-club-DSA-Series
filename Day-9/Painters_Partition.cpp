
bool isPossible(vector<int>& boards, int k, int mid){
    int painter_cnt = 1;
    int board_sec = 0;
    for(int i = 0; i < boards.size(); i++){
        if(board_sec + boards[i] <= mid){
            board_sec += boards[i];
        } else{
            painter_cnt++;
            if(painter_cnt > k || boards[i] > mid){
                return false;
            }
            board_sec = boards[i];
            if(painter_cnt > k){
                return false;
            }
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int st = 0;
    int sum = 0;
    for(int i = 0; i < boards.size(); i++){
        sum += boards[i];
    }
    int en = sum;
    int ans = -1;
    int mid = st + (en - st) / 2;
    while(st <= en){
        if(isPossible(boards, k, mid)){
            ans = mid;
            en = mid-1;
        } else{
            st = mid + 1;
        }
        mid = st + (en - st) / 2;
    }
    return ans;
}