#include <stdlib.h>
#include <stdio.h> 
#include "treeUtil.h"


TreeNode *newExpNode(ExpKind kind)
{
    TreeNode * t = (TreeNode *) malloc(sizeof(TreeNode));
    int i;
    
    if(t == NULL)
    {
        { printf("ERROR: no memory\n"); }
    }
    else
    {
        for(i = 0; i < MAXCHILDREN; i++)
        { 
            t->child[i] = NULL;
        }
        t->sibling = NULL;
        t->nodekind = ExpK;
        t->kind.exp = kind;
    }

    return t;
}

TreeNode *newStmtNode(StmtKind kind)
{
    TreeNode * t = (TreeNode *) malloc(sizeof(TreeNode));
    int i;
    
    if(t == NULL)
    {
        { printf("ERROR: no memory\n"); }
    }
    else
    {
        for(i = 0; i < MAXCHILDREN; i++)
        { 
            t->child[i] = NULL;
        }
        t->sibling = NULL;
        t->nodekind = StmtK;
        t->kind.stmt = kind;
    }

    return t;
}

TreeNode *newDeclNode(DeclKind kind)
{
    TreeNode * t = (TreeNode *) malloc(sizeof(TreeNode));
    int i;
    
    if(t == NULL)
    {
        { printf("ERROR: no memory\n"); }
    }
    else
    {
        for(i = 0; i < MAXCHILDREN; i++)
        { 
            t->child[i] = NULL;
        }
        t->sibling = NULL;
        t->nodekind = DeclK;
        t->kind.decl = kind;
    }

    return t;
}