struct state_t { /* ... */ };

void search() {
    queue< state_t > q;
    q.push(/* initial state */);
    int level = 0;
    while (!q.empty()) {    
        int candidates_at_lvl = q.size();
        while (candidates_at_lvl--) {
            state_t cur = q.front(); q.pop();
            /* if 'cur' is what the problem asks,
                'level' is the minimum number of needed steps. */
        
            /* for each possible 'nxt' state from this one */
            q.push(nxt);
        }
        level++;
    }
}