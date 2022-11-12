class MedianFinder
{
    public:

       	// MedianFinder() {

       	//     }
       	//     vector<double> array;
       	//     void addNum(int num) {
       	//         array.push_back(num);

       	//     }

       	//     double findMedian() {

       	//          sort(array.begin(),array.end());
       	//         if(array.size()%2 == 0)
       	//         {
       	//             double median = (array[array.size()/2  -1 ]+array[array.size()/2])/2;
       	//             return median;
       	//         }

       	//         else
       	//         {
       	//             double median = array[array.size()/2];
       	//             return median;
       	//         }

       	//     }

    priority_queue<double> maxheap;
    priority_queue<double, vector<double>,greater<double>> minheap;
    
    MedianFinder() {}

    void addNum(int num) {
        maxheap.push(num);
        minheap.push(maxheap.top());
        maxheap.pop();
        
        if(minheap.size()>maxheap.size())
        {
            maxheap.push(minheap.top());
            minheap.pop();
        }
    }

    double findMedian() {
        if(maxheap.size()==minheap.size())
            return (maxheap.top()+minheap.top())/2.0;
        
        else
            return maxheap.top();
    }
};

/**
 *Your MedianFinder object will be instantiated and called as such:
 *MedianFinder* obj = new MedianFinder();
 *obj->addNum(num);
 *double param_2 = obj->findMedian();
 */