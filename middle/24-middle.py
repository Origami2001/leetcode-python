# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def swapPairs(self, head: Optional[ListNode]) -> Optional[ListNode]:
        dummy=ListNode(next=head)
        cur=dummy
        while cur.next!=None and cur.next.next!= None :
            tmp=cur.next
            tmp1=cur.next.next.next
            cur.next=cur.next.next
            cur.next.next=tmp
            cur.next.next.next=tmp1
            
            cur=cur.next.next
        return dummy.next