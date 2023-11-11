class Graph {
   unordered_map<int, list<pair<int, int>> > graph;
public:
    Graph(int n, vector<vector<int>>& edges) {
        
        for(vector<int> edge : edges) {
            graph[edge[0]].push_back({edge[1],edge[2]});
        }
    }
    
    void addEdge(vector<int> edge) {  
        graph[edge[0]].push_back({edge[1],edge[2]});        
    }
    
    int shortestPath(int startNode, int endNode) {
        
	priority_queue <pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> qq;
	vector <int> distances(102, INT_MAX);

	qq.push({ 0 ,startNode });
    distances[startNode] = 0;
        
	while (!qq.empty())
	{
		int currentCost = qq.top().first;
		int currentNode = qq.top().second;
		qq.pop();

		if (currentCost > distances[currentNode])
			continue;

		if (currentNode == endNode)
			return currentCost;

		for (auto & child : graph[currentNode]) {
			int neighborNode = child.first;
			int neighborCost = child.second;
            
			int newCost = currentCost + neighborCost;

			if (newCost < distances[neighborNode]) {
				distances[neighborNode] = newCost;
				qq.push({ newCost, neighborNode });
			}
		}
	}

	return -1;
    }
};

/**
 * Your Graph object will be instantiated and called as such:
 * Graph* obj = new Graph(n, edges);
 * obj->addEdge(edge);
 * int param_2 = obj->shortestPath(node1,node2);
 */