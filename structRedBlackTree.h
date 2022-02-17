bool RED = true;
bool BLACK = false;
struct Node
{
    int val;
    struct Node* left;
    struct Node* right;
    bool color;
    int N;  //该子树中节点总数
};

int size(struct Node* x)
{   
    if(x==NULL) return 0;
    else return x->N;
}

bool isRed(struct Node* x)
{
    if(x == NULL) return false;
    return true;
}

struct Node* rotateLeft(struct Node* h)
{
    struct Node* x = h->right;
    h->left = x->left;
    x->left = h;
    x->color = h->color;
    h->color = RED;
    x->N = h->N;
    h->N = 1+size(h->left)+size(h->right);
    return x;
}

struct Node* reotateRight(struct Node* h)
{
    struct Node* x = h->left;
    h->left=x->right;
    x->right = h;
    x->color = h->color;
    h->color = BLACK;
    x->N = h->N;
    h->N = 1+size(h->left)+size(h->right);
    return x;  
}