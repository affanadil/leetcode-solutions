class Solution:
    def singleNumber(self, nums: List[int]) -> List[int]:
        freq_dict = {}
        lezt = []
        for item in nums:
            freq_dict[item] = freq_dict.get(item, 0) + 1
        for key, value in freq_dict.items():
            if value == 1:
                lezt.append(key)
        return(lezt)