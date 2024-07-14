#include <iostream>
#include <unordered_map>
#include <vector>
#include <stack>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        if (list1 == NULL)
        {
            return list2;
        }

        if (list2 == NULL)
        {
            return list1;
        }

        ListNode* cur1 = list1;
        ListNode* cur2 = list2;
        ListNode *final = new ListNode();
        ListNode *curfinal = final;

        if (cur1->val <= cur2->val)
        {
            curfinal->val = cur1->val;
            cur1 = cur1->next;
        }else{
            curfinal->val = cur2->val;
            cur2 = cur2->next;
        }

        while (cur1 != NULL || cur2 != NULL)
        {
            if(cur1 == NULL){
                curfinal->next = cur2;
                cur2 = cur2->next;
                return final;
            }

            if(cur2 == NULL) {
                curfinal->next = cur1;
                cur1 = cur1->next;
                return final;
            }

            if (cur1->val <= cur2->val)
            {
                curfinal->next = cur1;
                curfinal = curfinal->next;
                cur1 = cur1->next;
            }else{
                curfinal->next = cur2;
                curfinal = curfinal->next;
                cur2 = cur2->next;
            }
        }
        return final;
    }
};

int main()
{

    Solution s;

    ListNode n3 = ListNode(4);
    ListNode n2 = ListNode(2, &n3);
    ListNode n1 = ListNode(1, &n2);


    ListNode m3 = ListNode(4);
    ListNode m2 = ListNode(3, &m3);
    ListNode m1 = ListNode(1, &m2);

    cout << s.mergeTwoLists(&n1, &m1)->val << endl;

    return 0;
}