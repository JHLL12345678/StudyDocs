//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//#define MAX 100050//10^5+50
//
///*-----2026/10/31-----使用的题:程序设计竞赛---->校园寻路-------------------------------------*/
//
//
//
//struct mode 
//{
//	//int w;//w表示第i条边的权值(有权图用)
//	int to,nxt;//to表示由这个点是第i条边的终点; nxt表示下一条边的位置
//}edge[4*MAX];//边数组
//int head[2*MAX];//用来存储第i个点对应的边
//int point;//全局指针表示已经存了多少跳边；
//int dist[2*MAX];//每个点的值;
////int  de[2 * MAX];//已经走过的点
//int q[2*MAX];
//void add(int u,int v) 
//{
//	edge[++point].to = v;//记录这条边的终点
//	edge[point].nxt = head[u];//将上一条边的位置放给nxt，由nxt存储;
//	head[u] = point;//存储当前边的位置
//}
//int main()
//{
//	memset(dist, -1, sizeof(dist));
//	memset(head, 0, sizeof(head));
//	int n,m;
//	scanf("%d %d",&n,&m);
//	point = 0;
//	for (int i = 0; i < m; i++)
//	{
//		int u, v;
//		scanf("%d %d",&u,&v);
//		add(u,v);
//		add(v,u);
//	}
//	int s, t;
//	scanf("%d %d",&s,&t);
//
//	int h = 0, tl = 1;//h->头指针  tl->尾指针
//	q[1] = s;
//	dist[s] =0 ;
//	while (h < tl) 
//	{
//		h++;
//		for (int e = head[q[h]]; e !=0 ; e=edge[e].nxt)
//		{
//			if (dist[edge[e].to] != -1)continue;
//				q[++tl] = edge[e].to;
//				dist[edge[e].to] = dist[q[h]]+1;
//		}
//	}
//	printf("%d",dist[t]);
//
//	return 0;
//}