//10722217廖宇傑


#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<iomanip>
#include<vector>

#include <cstdio>





#include<stdio.h>
#include<stdlib.h>
#include <string.h>

#define treeEMPTY(ptr)  (!(ptr))


using namespace std;


typedef struct node* bitree_ptr;
typedef struct node{

    int data;


    string sname;
    string dname;
    string type;
    string level;
    int nstud;
    int nprof;
    int ngrade;


    bitree_ptr lptr;
    bitree_ptr rptr;

    bitree_ptr pare;

} node;








void free_tree(bitree_ptr *note)
{
    if(*note){
        free_tree(&(*note)->lptr);
        free_tree(&(*note)->rptr);
        free(*note);
        *note = NULL;
    }
}







int treeheight(bitree_ptr root){

    if(root == NULL){
        return -1;
    }
    else{
        int lefttree = treeheight(root->lptr);
        int righttree = treeheight(root->rptr);

        if(lefttree>righttree){
            return lefttree + 1;
        }
        else
            return righttree + 1;
    }


}





bitree_ptr minNode(bitree_ptr node) {
    bitree_ptr  current = node;

    while (current->lptr != NULL) {
        current = current->lptr;
    }
    return current;
}


bitree_ptr deleted( bitree_ptr root, int data) {
    if (root == NULL) {
        return root;
    }
    if (data < root->ngrade) {
        root->lptr = deleted(root->lptr, data);
    }
    else if (data > root->ngrade) {
        root->rptr = deleted(root->rptr, data);
    }
    else {

        if (root->lptr == NULL) {
            bitree_ptr temp = root->rptr;
            free(root);
            return temp;
        }
        else if (root->rptr == NULL) {
            bitree_ptr temp = root->lptr;
            free(root);
            return temp;
        }
        bitree_ptr temp = minNode(root->rptr);
        root->ngrade = temp->ngrade;
        root->rptr = deleted(root->rptr, temp->ngrade);
    }
    return root;
}










vector<int> inorderfinde(bitree_ptr root,int limitation){

    vector<int> list;

    if(root){
        inorderfinde(root->lptr,limitation);
        if(root->ngrade < limitation){
            list.push_back(root->ngrade);
        }
        inorderfinde(root->rptr,limitation);
    }

    return list;



}





















bitree_ptr findenode(bitree_ptr node , int element){


    bitree_ptr p=NULL;

    while(node){


        p = node ;

        if(element < p->data){
            node = node->lptr;
        }
        else if(element > p->data){
            node = node->rptr;
        }
        else
            node = node->rptr;
    }

    return p;


}






void bi_insertTree( bitree_ptr *node,struct node element ){





    bitree_ptr temp, point;

    point = findenode((*node), element.ngrade);

    if( treeEMPTY(*node) || point){

        temp = (bitree_ptr)malloc(sizeof(node));

        if(!temp){
            fprintf(stderr,"The memory is FULL!!\n");
            exit(1);
        }
        temp->data = element.data;
        temp -> sname = element.sname;
        temp -> dname = element.dname;
        temp -> type = element.type;
        temp -> level = element.level;
        temp -> nstud = element.nstud;
        temp -> nprof = element.nprof;
        temp -> ngrade = element.ngrade;


        temp->lptr = NULL;
        temp->rptr = NULL;
        temp->pare = NULL;


        if(*node){

            if(element.data > point->data){
                temp->pare = point;
                point->rptr=temp;
            }
            else if(element.data < point->data ){
                temp->pare = point;
                point->lptr=temp;
            }
            else
                temp->pare = point;
                point->rptr=temp;
        }

        else *node = temp;



    }




}







int main()
{


    string file_number ="";

    cout<<"Input a file number: ";
    cin >> file_number;

    file_number = "input"+file_number + ".txt";




    std::ifstream ifs; //檔案流

    ifs.open(file_number);                                  //ifs.open ??
    if (!ifs.is_open()) {
        cout << "Failed to open file.\n";
        return 1; // EXIT_FAILURE
    }


    string tp;
    int num;
    int count = 0;
    vector <node> sugardady;
    node temp;
    int column_index = 0;
    int count_ = 0;
    while (ifs >> tp)
    {




        if(count_>=15){


            //cout << tp<<endl;


            if(column_index % 15== 0)
            {
                temp.data = stoi(tp);
            }
            else if(column_index % 15== 1)
            {
                temp.sname = tp;
            }
            else if(column_index %15  == 3)
            {
                temp.dname = tp;
            }
            else if(column_index%15 == 4)
            {
                temp.type = tp;
            }
            else if(column_index%15 == 6)
            {
                temp.level = tp;
            }
             else if(column_index%15 == 8)
            {
                num = std::stoi(tp);
                temp.nstud = num;
            }
            else if(column_index%15 == 9)
            {
                num = std::stoi(tp);
                temp.nprof = num;
            }
             else if(column_index%15 == 10)
            {
                num = std::stoi(tp);
                temp.ngrade = num;
            }

            else if(column_index%15 == 14)
            {
                sugardady.push_back(temp);
                //cout<<"-----------------------------------------------------------------------------\n";
            }
            column_index++;

        }


        count_++;


    }





    bitree_ptr root = NULL;
    for(int i=0;i<sugardady.size();i++){
        printf("Hungry\n");
        bi_insertTree( &root, sugardady[i] );
    }



//    printf("Tree height: %d\n", treeHeight(root));






    for(int i=0;i<sugardady.size();i++)
    {

        cout << "number: " << i << " data" <<endl;

        cout <<"code: "<<sugardady[i].data<<endl;
        cout <<"sname: "<<sugardady[i].sname<<endl;
        cout <<"dname: "<<sugardady[i].dname<<endl;
        cout <<"type: "<<sugardady[i].type<<endl;
        cout <<"level: "<<sugardady[i].level<<endl;

        cout <<"nstud: "<<sugardady[i].nstud<<endl;
        cout <<"nprof: "<<sugardady[i].nprof<<endl;
        cout <<"ngraduate: "<<sugardady[i].ngrade<<endl;
        cout <<"-------------------------------------------"<<endl;
    }


/*


    vector<int> delist;
    int deletenum;
    cout<<"Imput the number of graduate: ";
    cin>> deletenum;
    delist=inorderfinde(root,deletenum);



    printf("Tree height: %d\n", treeHeight(root));



*/


    return 0;
}
