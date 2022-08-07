def solve(head):
    # CODE HERE
    forward = head.next
    curr = head
    prev = None
    while forward:
        curr.next = prev
        prev = curr
        curr = forward
        forward = forward.next
    curr.next = prev
    return curr
