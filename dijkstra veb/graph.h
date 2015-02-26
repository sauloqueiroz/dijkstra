#define INF 65536

typedef struct edge{
    int head_vertex, cost;
    struct edge *next;
} edge;

typedef struct vertex{
    int predecessor;
    int cost;
    edge *adjacent;
} vertex;

void freeGraph(vertex *vertices, int size);

void initGraph(vertex *vertices, int size);

void showVertices(vertex *vertices, int size);

void showEdges(vertex *vertices, int size);

void printGraph(vertex *vertices, int size);

void removeEdge(vertex *vertices, int tail, int head);

void insertEdge(vertex *vertices, int tail, int head, int cost);

int checkEdge(vertex *vertices, int tail, int head);
