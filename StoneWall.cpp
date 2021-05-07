int stone_wall(const vector<int>& v) {
    std::stack<int> stack;
    int stones = 0;
    for (auto height : v) {
        while (!stack.empty() && stack.top() > height) {
            stack.pop();
        }
        if (!stack.empty() && stack.top() == height) {
            continue;
        }
        stones++;
        stack.push(height);
    }
    return stones;
}