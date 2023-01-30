int majorityElement(int a[], int size)
    {
        
        // we will use map to store the occurence of every element
        
        unordered_map<int,int> mp;
        
        for(int i = 0; i<size; i++){
            mp[a[i]]++;
        }
        // now check if any size is greater than size/2
        
        for(auto it: mp){
            if(it.second > size/2)
                return it.first;
        }
        
        return -1;
        
    }