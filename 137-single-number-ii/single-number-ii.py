class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        freq = {}
        for item in nums:
            freq[item] = freq.get(item, 0) + 1
        for key, value in freq.items():
            if value == 1:
                return key 