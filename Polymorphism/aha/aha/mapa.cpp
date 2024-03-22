#include <iostream>
#include <C:\Program Files\Graphviz\include\graphviz\gvc.h>

int main()
{
    GVC_t* gvc;
    Agraph_t* g;
    Agnode_t* n1, * n2, * n3, * n4, * n5;
    Agedge_t* e1, * e2, * e3, * e4;

    // Inicjalizacja biblioteki Graphviz
    gvc = gvContext();

    // Tworzenie grafu
    g = agopen("Polymorphism", Agdirected, NULL);

    // Dodawanie wierzcho³ków
    n1 = agnode(g, "Polymorphism", true);
    n2 = agnode(g, "Static Polymorphism", true);
    n3 = agnode(g, "Dynamic Polymorphism", true);
    n4 = agnode(g, "Function Overloading", true);
    n5 = agnode(g, "Virtual Functions", true);

    // Dodawanie krawêdzi
    e1 = agedge(g, n1, n2, NULL, true);
    e2 = agedge(g, n1, n3, NULL, true);
    e3 = agedge(g, n2, n4, NULL, true);
    e4 = agedge(g, n3, n5, NULL, true);

    // Wyœwietlanie grafu
    gvLayout(gvc, g, "dot");
    gvRenderFilename(gvc, g, "png", "polymorphism.png");
    gvFreeLayout(gvc, g);
    agclose(g);
    gvFreeContext(gvc);

    return 0;
}
