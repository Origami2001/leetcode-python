class MyLinkedList {
public:
struct ListNode{
    int val;
    ListNode* next;
    ListNode(int val):val(val), next(nullptr){};
};
    MyLinkedList() {
        dummy=new ListNode(0);
        size=0;
    }
    
    int get(int index) {
        if(index>(size-1) || index<0){
            return -1;
        }
        ListNode* cur=dummy->next;
        while(index--){
            cur=cur->next;
        }
        return cur->val;
    }
    
    void addAtHead(int val) {
        ListNode* newNode=new ListNode(val);
        newNode->next=dummy->next;
        dummy->next=newNode;
        size++;
    }
    
    void addAtTail(int val) {
        ListNode* newNode=new ListNode(val);
        ListNode* cur=dummy;
        while(cur->next!=nullptr){
            cur=cur->next;
        }
        newNode->next=cur->next;
        cur->next=newNode;
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if(index>size)return;
        if(index<0)index=0;
        ListNode* newNode=new ListNode(val);
        ListNode* cur=dummy;
        while(index--){
            cur=cur->next;
        }
        newNode->next=cur->next;
        cur->next=newNode;
        size++;
    }
    
    void deleteAtIndex(int index) {
        if(index>=size||index<0){
            return;
        }
        ListNode* cur=dummy;
        while(index--){
            cur=cur->next;
        }
        ListNode* tmp=cur->next;
        cur->next=cur->next->next;
        delete tmp;
        tmp=nullptr;
        size--;
    }
private:
    int size;
    ListNode* dummy;
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */