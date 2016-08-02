class NestedIterator {
public:
    NestedIterator(vector<NestedInteger> &nestedList) {
        flattenList(nestedList);
    }

    int next() {
        return flat[count++];
    }

    bool hasNext() {
        if(count<flat.size())
          return true;
          return false;
    }
    
    void flattenList(vector<NestedInteger> &nestedList){
        for(int i=0;i<nestedList.size();i++){
            if(nestedList[i].isInteger())
               flat.push_back(nestedList[i].getInteger());
            else
               flattenList(nestedList[i].getList());
        }
    }
    private:
        vector<int> flat;
        int count=0;
};