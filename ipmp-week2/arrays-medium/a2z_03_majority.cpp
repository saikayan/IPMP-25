int findMajorityElement(const std::vector<int>& nums) {
    int maxi = 0;
    int count = 0;

    for (int num : nums) {
        if (count == 0) {
            maxi = num;
        }
        count += (num == maxi) ? 1 : -1;
    }

    count = 0;
    for (int num : nums) {
        if (num == maxi) {
            count++;
        }
    }

    if (count > nums.size() / 2) {
        return maxi;
    }

    return -1;
}