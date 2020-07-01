#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define ull unsigned long long
#define rep(x,t,n) for(ll x = t; x < n; ++x)
#define repe(x,t,n) for(ll x = t; x <= n; ++x)
#define dec(x,t,n) for(ll x = t; x >= n; --x)
#define iter(it,x) for(auto it : x)
#define nl cout<<'\n';
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mp(x,y) make_pair(x,y)
#define imax INT_MAX
#define imin INT_MIN
#define f first
#define s second
#define vvi vector<vector<int> >
#define vvl vector<vector<ll> >
#define so(x) sizeof(x)
#define mod 1000000007
#define N 100000

using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int data){
            this->data=data;
            this->next=NULL;
        }
};

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<'\n';
}

Node* takeInput(){
    int data;
    cin>>data;
    Node* head=NULL;
    Node* tail=NULL;
    while(data != -1){
        Node* newNode= new Node(data);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
        cin>>data;
    }
    return head;
}

Node* deleteNode(Node *head, int i) {
    if(i==0){
        head=head->next;
        return head;
    }
    else{
        Node* temp=head;
        int j=0;
        while(j<i-1){
            temp=temp->next;
            j++;
        }
        Node* temp2=temp->next;
        if(temp2->next==NULL){
            temp->next=NULL;
            return head;
        }
        else{
            temp->next=temp2->next;
            return head;
        }
    }

}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Node* head = takeInput();
    cout<<"List: ";
    print(head);

    int i;
    cin>>i;
    head = deleteNode(head, i);
    cout<<"List: ";
    print(head);
    return 0;
}
//author: saket_tna
