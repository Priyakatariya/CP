#include <iostream>
#include <vector>
#include <queue>    
#include <limits>   

const long long INF = std::numeric_limits<long long>::max(); // Use max long long for infinity

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;

    while (t--) {
        long long a, b, x, y;
        std::cin >> a >> b >> x >> y;

        if (a == b) {
            std::cout << 0 << std::endl;
            continue; 
        }

        
        if (a > b) {
            std::cout << -1 << std::endl;
            continue; 
        }
        std::vector<long long> dist(105, INF); 
        
        
        std::priority_queue<std::pair<long long, int>, 
                            std::vector<std::pair<long long, int>>, 
                            std::greater<std::pair<long long, int>>> pq;

        dist[a] = 0;
        pq.push({0, (int)a}); 

        while (!pq.empty()) {
            long long current_cost = pq.top().first;
            int current_num = pq.top().second;
            pq.pop();

            
            if (current_cost > dist[current_num]) {
                continue;
            }

            // Operation 1: a <- a + 1 (cost x)
            int next_num_plus = current_num + 1;
            long long cost_plus = current_cost + x;
            
            // Check bounds: next_num_plus should not exceed a reasonable upper limit
            // b is max 100, so 101 or 102 is the highest we might need to go
            if (next_num_plus <= 101) { 
                if (cost_plus < dist[next_num_plus]) {
                    dist[next_num_plus] = cost_plus;
                    pq.push({cost_plus, next_num_plus});
                }
            }

            // Operation 2: a <- a XOR 1 (cost y)
            int next_num_xor = current_num ^ 1;
            long long cost_xor = current_cost + y;

            // Check bounds: next_num_xor must be within [1, 101] (or relevant range)
            // It can go to 0 if current_num is 1. We must ensure it's >= 1
            if (next_num_xor >= 1 && next_num_xor <= 101) {
                if (cost_xor < dist[next_num_xor]) {
                    dist[next_num_xor] = cost_xor;
                    pq.push({cost_xor, next_num_xor});
                }
            }
        }
        
        std::cout << dist[b] << std::endl;
    }

    return 0;
}