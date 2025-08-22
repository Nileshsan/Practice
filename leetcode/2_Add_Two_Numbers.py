from __future__ import annotations

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class solution:
    def addtwonumbers (self, l1: ListNode, l2: ListNode) -> ListNode:
        dummy = ListNode(0)
        current = dummy
        carry = 0


