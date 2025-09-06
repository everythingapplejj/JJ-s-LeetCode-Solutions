#* problem of the day
class Solution:
    def rotateRight(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        #* checking if the head is NULL,
        if (head == None):
            return
        #* first i can make the linked list circular
        placeholder = head
        counter = 1
        last_count = 1
        while(placeholder.next != None):
            placeholder = placeholder.next
            counter += 1
            last_count += 1

        #* that we have a circular linked list, we can decide where to put the head and where to disconnect
        #* counter also has the total number

        get_mod = k % counter # gets the number of shift with mod

        counter = counter - get_mod

        placeholder = head
    
        while(counter != 0):                
            placeholder = placeholder.next
            if(placeholder == None):
                placeholder = head
            counter -= 1



        real_head = placeholder 
        while(last_count - 1 != 0):
            last_count -= 1
            if(placeholder.next == None):
                placeholder.next = head # that is how I connect it

            placeholder = placeholder.next
        
        placeholder.next = None

        return real_head 

        


        