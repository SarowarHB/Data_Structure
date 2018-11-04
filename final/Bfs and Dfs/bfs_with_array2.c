#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int V , Edges;
int G[1000][1000];
int used[1000];
void dfsTraversal(int root){
used[root] =1;
printf("%d ",root);
for(int i=1; i<= V ; i++) {
if(!used[i]) dfsTraversal(i);
}
}
int main(){
scanf("%d %d",&V , &Edges);
int u , v;
for(int i=1; i<= Edges ; i++) {
scanf("%d %d",&v,&u);
G[v][u] = 1;
G[u][v] = 1;
}
memset(used, 0, sizeof(used));
for(int i= 1; i<= V ; i++) {
if(!used[i]) {
dfsTraversal(i);
}
}
return 0;
}
