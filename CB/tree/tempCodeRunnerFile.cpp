
        }
    }

}

int main(){
    node *root = NULL;
    int arr[]={10,20,40,-1,-1,50,70,-1,-1,-1,30,-1,60,-1,-1};
    int index = 0;
    root = buildTree(arr,index);
    bfs(root);cout<<endl;
    preOrderprintTree(root);
    return 0;
}