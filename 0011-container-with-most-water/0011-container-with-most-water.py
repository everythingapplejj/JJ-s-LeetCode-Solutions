class Solution:
    def maxArea(self, heights: List[int]) -> int:
        # 1) the edge case was that there is the tall piller in the middle.
        # So I need O(N) operation to make sure this one works,
        if(len(heights) == 0 or len(heights) == 1):
            return 0 
        
        first_ptr = 0
        second_ptr = len(heights) - 1
        best_size = 0
        while(first_ptr < second_ptr):
            width = abs(second_ptr - first_ptr)
            height = min(heights[second_ptr], heights[first_ptr])
            curr_area = width * height
            if(curr_area > best_size):
                best_size = curr_area
            # i need to try all variant but want larger size, so iterate but with greedy
            if(heights[first_ptr] >= heights[second_ptr]):
                # second is smaller so update, 
                second_ptr -= 1
            elif(heights[first_ptr] < heights[second_ptr]):
                # first is smaller so update,
                first_ptr += 1
        
        return best_size
                
# OH this worked!            