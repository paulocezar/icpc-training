struct state_t{ /* ... */ };

void truncated_dfs(state_t cur, int depth) {
    /* if 'cur' is what the problem asks, we've found a solution */

    if (depth == 0) return;
    
    /* for each possible 'nxt' state from this one */
    truncated_dfs(nxt, depth-1);
}

void dfid_search() {
    for (int depth = 0; depth <= MAX_DEPTH; ++depth)
        truncated_dfs(/* initial state */, depth);
}