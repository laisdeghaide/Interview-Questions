class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
       if(head == NULL || m == n)  //se a lista estiver vazia ou o inicio e o fim forem iguais, n faço nada, só retorno a própria lista;
           return head;
        
        ListNode begin(0); //caso a ser tratado quando a sublista iniciar no primeiro item da LinkedList
        begin.next = head;
        
        ListNode* NodeBeforeSublist = &begin; //inicio um ponteiro na primeira posição da lista 
        int count = 1;
        while(count < m) // e enquanto ele não estiver na posoção "m" vou percorrenddo
        {
            NodeBeforeSublist = NodeBeforeSublist->next;
            count ++;
        }
        
        ListNode* WorkingPtr = NodeBeforeSublist->next; 
        while(m < n) //aqui começa o processo de inverter os elementos
        {
            ListNode* NodeToBeExtracted = WorkingPtr->next;
            WorkingPtr->next = NodeToBeExtracted->next;
            
            NodeToBeExtracted->next = NodeBeforeSublist->next;
            NodeBeforeSublist->next = NodeToBeExtracted;
            m++;
        }
        
         return begin.next; //begin.next = head
    }
};