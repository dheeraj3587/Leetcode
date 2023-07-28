class Solution {
public:
void merger(vector<int>&nums,int s,int e){
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int *first=new int[len1];
    int *second=new int[len2];
    int k=s;
    for(size_t i=0;i<len1;i++){
        first[i]=nums[k++];
    }
    k=mid+1;
    for(size_t i=0;i<len2;i++){
        second[i]=nums[k++];
    }
    int index1=0;
    int index2=0;
    k=s;
    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            nums[k++]=first[index1++];
        }
        else{
             nums[k++]=second[index2++];
            
        }
    }
    while(index1<len1){
        nums[k++]=first[index1++];

    }
    while(index2<len2){
        nums[k++]=second[index2++];
    }
    delete[] first;
    delete[] second;

}
void mergesort(vector<int>&nums,int s,int e){
    if(s>=e) return;
    int mid=s+(e-s)/2;
    mergesort(nums,s,mid);
    mergesort(nums,mid+1,e);
    merger(nums,s,e);


}
    vector<int> sortArray(vector<int>& nums) {
        int size=nums.size()-1;
        mergesort(nums,0,size);
        return nums;

        
    }
};
