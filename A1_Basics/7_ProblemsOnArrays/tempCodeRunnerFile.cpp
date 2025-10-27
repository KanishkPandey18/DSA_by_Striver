vector<int> majElement(vector<int>arr,int size){
//     vector<int>ans;
//     int el1,el2;
//     int count1=0,count2=0;
//     for(int i=0;i<size;i++){
//         if(count1==0 && arr[i]!=el2){
//             el1=arr[i];
//             count1=1;
//         }
//         else if(count2==0 && arr[i]!=el1){
//             el2=arr[i];
//             count2=1;
//         }
//         else if(arr[i]==el1){
//             count1++;
//         }
//         else if(arr[i]==el2){
//             count2++;
//         }
//         else{
//             count1--;
//             count2--;
//         }
//     }
//     int cnt1=0,cnt2=0;
//     for(int i=0;i<size;i++){
//         if(arr[i]==el1){
//             cnt1+=1;
//         }
//         if(arr[i]==el2){
//             cnt2+=1;
//         }
//     }
//     if(cnt1>size/3){
//         ans.push_back(el1);
//     }
//     if(cnt2>size/3){
//         ans.push_back(el2);
//     }
//     return ans;
// }