class Twitter {
public:
    /** Initialize your data structure here. */
    std::vector<int> newsFeed[1000];
    std::vector<std::string> users;
    std::set<int> followers[1000];
    int tweetsBelongTo[1000];
    Twitter() {
        
    }
    
    /** Compose a new tweet. */
    void postTweet(int userId, int tweetId) {
         tweets[tweetId]=userId;
         newsFeed[userId].push_back(tweetId);
         for(std::set<int>::iterator it = followers[userId].begin(); it!=followers[userId].end(); ++it){
            std::vector<int>::iterator vi = newsFeed[*it].begin();
            newsFeed[*it].insert(vi,tweetId);
         }
    }
    
    /** Retrieve the 10 most recent tweet ids in the user's news feed. Each item in the news feed must be posted by users who the user followed or by the user herself. Tweets must be ordered from most recent to least recent. */
    std::vector<int> getNewsFeed(int userId) {
        return newsFeed[userId];
    }
    
    /** Follower follows a followee. If the operation is invalid, it should be a no-op. */
    void follow(int followerId, int followeeId) {
        followers[followeeId].insert(followerId);
    }
    
    /** Follower unfollows a followee. If the operation is invalid, it should be a no-op. */
    void unfollow(int followerId, int followeeId) {
        followers[followeeId].erase(followerId);
        std::vector<int>::iterator f = find(newsFeed[follower].begin(),newsFeed[follower].end(),*it)
        
    }
};