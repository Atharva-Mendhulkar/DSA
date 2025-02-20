#include <bits/stdc++.h>
using namespace std;

void makepair(){
    pair<int,int>pr1 = {2,8};
    pair<int,char>pr2 = {1,'a'};
    pair<pair<int,int>,int> pr3 = {{1,2},3};
    cout<<pr1.first<<" "<<pr1.second<<endl<<pr2.second<<endl<<pr3.first.second<<endl;
}

void explainvector(){
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.emplace_back(0); //same as push_back

    cout<<vec.size()<<endl;

    //[1,2,3,0]
    for(size_t i=0;i<vec.size();i++){
        cout<<vec[i]<<endl;
    }

    //iterator
    for(auto i : vec)
    cout<<i<<endl;

    //reverse iterator
    auto reversebegin = vec.rbegin();
    auto reverseend = vec.rend();

    for( auto i = reversebegin; i<reverseend;i++){
        cout<<*i<<endl;
    }

    //duplicate vector
    vector<int> dupvec(vec.begin()+1,vec.end());
    for(auto i : dupvec){
        cout<<i<<" ";
    }cout<<endl;

    //front and back
    cout<<vec.front()<<" "<<vec.back()<<" ";

    //pop_back()
    vec.pop_back();
    cout<<vec.back()<<endl;

    //erase
    vec.erase(vec.begin()+1);
    for(auto i : vec){
        cout<<i<<" ";
    }cout<<endl;

    //clear vec.clear() sab clear kardega

    //swap

    vector<int> vec1 = {1,2,3};
    vector<int> vec2 = {4,5,6};

    swap(vec1,vec2);

    for(auto i : vec1){
        cout<<i<<" ";
    }cout<<endl;

    //insert 

    vector<int> vec3 = {1,2,3,4,5};
    vec3.insert(vec3.begin(),0); //before which position matlab yaha pe begin ke pehle 

    for(auto i : vec3){
        cout<<i<<" ";
    }
}

void explainlist(){ //same hai vector jaise bas yaha push_front kar sakte hai

    //push_front

    list<int> ls = {1,2,3};
    ls.push_front(0);

    for(auto i : ls){
        cout<<i<<" ";
    }
}

void explainstack(){

    //LIFO
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);

    cout<<st.size()<<endl;

    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;

    while(st.empty()==false){
        cout<<st.top()<<" ";
        st.pop();
    }
}

void explainqueue(){
    //FIFO
    queue<int> q;
    q.push(2);
    q.push(22);
    q.push(23);
    q.push(24);

    while(q.empty()==false){
        cout<<q.front()<<" ";
        q.pop();
    }
}

void explainPQ(){
    //stores highest element at the top
    //max heap
    priority_queue<int> pq;
    pq.push(5);
    pq.push(55);
    pq.push(555);
    pq.push(5555);

    while(pq.empty()==false){
        cout<<pq.top()<<" ";
        pq.pop();
    }cout<<endl;

    //to store minimum element at the top
    //min heap

    priority_queue<int,vector<int>,greater<int>> pq1;
    pq1.push(5);
    pq1.push(55);
    pq1.push(555);
    pq1.push(5555);

    while(pq1.empty()==false){
        cout<<pq1.top()<<" ";
        pq1.pop();
    }
}

void explainset(){ //stores unique values in ascending order
    set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.insert(5);
    st.insert(4);

    for( auto i : st){
        cout<<i<<" ";
    }cout<<endl;

    //find()

    auto i = st.find(3);
    if (i != st.end()){
        cout<<*i;
    }cout<<endl;

    //count()

    cout<<st.count(3)<<endl;

    //erase

    auto it1 =st.begin();
    it1++;
    auto it2 = st.end();
    it2--;
    st.erase(it1,it2);

    for( auto i : st){
        cout<<i<<" ";
    }cout<<endl;

    //lower_bound and upper_bound

    //returns an iterator that points to an element
    //that is >= number given

    auto it = st.lower_bound(2);
    cout<<*it<<endl;

    auto it12 = st.upper_bound(4);
    cout<<*it12<<endl;
}   

void explainMultiSet(){ //all elements even dupes in ascending order
    multiset<int> ms;
    ms.insert(1);
    ms.insert(12);
    ms.insert(12);
    ms.insert(13);
    ms.insert(14);
    ms.insert(15);

    for(auto i : ms){
        cout<<i<<" ";
    }

    //erase mein sab dupes erase hojayenge
}

void explainUnorderedSet(){ //unique 
    unordered_set<int> un;
    un.insert(1);
    un.insert(2);
    un.insert(3);
    un.insert(5);
    un.insert(4);
    un.insert(1);

    for(auto i : un){
        cout<<i<<" ";
    }
}

void explainMap(){
    map<int,string> mpp;
    mpp[1]="abc";
    mpp[2]="bcd";
    mpp[3]="cat";
    mpp.insert({4,"Raj"});

    for(auto i : mpp){
        cout<<i.first<<"->"<<i.second<<endl;
    }

    auto it = mpp.find(4);
    cout<<(*it).first<<"->"<<(*it).second;
}

void explainUnOrderedMap(){ //bas unordered way mein store karta hai
    unordered_map<int,string> mpp;
    mpp[1]="abc";
    mpp[2]="bcd";
    mpp[3]="cat";
    mpp.insert({4,"Raj"});

    for(auto i : mpp){
        cout<<i.first<<"->"<<i.second<<endl;
    }

    auto it = mpp.find(4);
    cout<<(*it).first<<"->"<<(*it).second;
}

void explainMultiMap(){ //key ke hisab se sorting karta hai
    multimap<int,char> mpp;
    mpp.insert({3,'a'});
    mpp.insert({2,'c'});
    mpp.insert({1,'b'});
    mpp.insert({2,'a'});
    mpp.insert({1,'b'});
    mpp.insert({3,'c'});

    for(auto i : mpp){
        cout<<i.first<<"->"<<i.second<<endl;
    }

    auto it = mpp.equal_range(2);
    for(auto i = it.first ; i!=it.second; i++){
        cout<<(*i).first<<"->"<<(*i).second<<endl;
    }
}

void explainSort(){

    //array
    int arr[5]={1,2,3,4,5};
    sort(arr,arr+5);

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    //vector

    vector<int> vec = {1,2,3,4,5};

    sort(vec.begin(),vec.end());

    for(auto i : vec){
        cout<<i<<" ";
    }cout<<endl;
}

void explainAccumulate(){
    int arr[5] = {1,2,3,4,5};
    cout<<accumulate(arr,arr+5,0); //0 matlab starting sum ka value matlab sum =0 toh 1+2+3+4+5=15
}

void explainCount(){
    int arr[5]={1,2,3,4,5};
    int num=1;
    cout<<count(arr,arr+5,num);
}

void explainFind(){
    int arr[5]={1,2,3,4,5};
    auto i = find(arr,arr+5,8);

    if(i == (arr+5)){
        cout<<"Not found"; 
    }
}

void explainNextPermutation(){
    string str = "abc";
    do{
        cout<<str<<endl;
    }while(next_permutation(str.begin(),str.end()));
}

void explainPrevPermutation(){
    string str = "bac";

    do{
        cout<<str<<endl;
    }while(prev_permutation(str.begin(),str.begin()+3));
}

void explainMaxElement(){
    int arr[5]= {7,6,5,4,3};
    auto i = max_element(arr,arr+5);
    cout<<*i<<endl;

    auto it = min_element(arr,arr+5);
    cout<<*it<<endl;
}

void explainReverse(){
    int arr[5]= {7,6,5,4,3};
    reverse(arr,arr+5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

bool InternalComparator(pair<int,int>el1,pair<int,int> el2){
    if(el1.second>el2.second) return true;
    if(el1.second<el2.second) return false;
    if(el1.first<el2.first) return true;
    return false;
}

void explainComparator(){
    pair<int,int> arr[] = {{1,6},{2,6},{1,5},{3,9},{2,9}};
    sort(arr,arr+5,InternalComparator);
    for(int i=0;i<5;i++){
        cout<<"{"<<arr[i].first<<","<<arr[i].second<<"}"<<" ";
    }

}
int main(){
    explainComparator();
    return 0;
}
