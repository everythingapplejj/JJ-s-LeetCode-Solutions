class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        # reverse dictionary method has edge case where the key can be identical 
        # hmmm so I can try sorting method + dictionary method
        unique_collection = set(nums)
        unique_collection_list = []
        for elements in unique_collection:
            unique_collection_list.append(elements)

        returning_collection = []
        # if(len(unique_collection) == 0 or len(unique_collection) == 1): 
        #     returning_collection.append(nums)
        #     return returning_collection
        
        freq = {}

        for i in range(0, len(nums)):
            if(nums[i] not in freq):
                freq.update({nums[i]: 1})
            else:
                freq[nums[i]] += 1

        # now maybe I can sort the unique_collections based on the freq? 
        print(unique_collection_list[0])
        status = 1
        while(status == 1):
            for i in range(0, len(unique_collection_list) - 1):
                if(freq[unique_collection_list[i]] > freq[unique_collection_list[i + 1]]):
                    temp = unique_collection_list[i]
                    unique_collection_list[i] = unique_collection_list[i + 1]
                    unique_collection_list[i + 1] = temp
                    status = 0

            if(status == 0):
                status = 1
            else:
                break
            
        # checkpoint: 
        reverse = unique_collection_list[::-1]
        for i in range(0, k):
            returning_collection.append(reverse[i])

        return returning_collection

        