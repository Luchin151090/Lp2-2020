import pydot
import graphviz
#Creamos el grafo digrafo
G = pydot.Dot(graph_type='digraph')

#creamos los nodos
main =  pydot.Node("main")
meta = pydot.Node("method_a")
metb = pydot.Node("method_b")
metc = pydot.Node("method_c")
met1 = pydot.Node("method_1")
met2 = pydot.Node("method_2")
met3 = pydot.Node("method_3")
met3b = pydot.Node("method_3b",label = "method_3")
metcb = pydot.Node("method_cb",label = "method_c")
metbb = pydot.Node("method_bb",label = "method_b")
met1b = pydot.Node("method_1b",label = "method_1")
#creamos aristas
ar1  = pydot.Edge(main,meta)
ar2 = pydot.Edge(meta,met2)
ar3 = pydot.Edge(meta,metc)
ar4 = pydot.Edge(metb,met1)
ar5 = pydot.Edge(metb,metbb)
ar6 = pydot.Edge(met2,met3)
ar7 = pydot.Edge(met2,met3b)
ar8 = pydot.Edge(met1,metcb)
ar9 = pydot.Edge(metc,metcb)
ar10  = pydot.Edge(metbb,met1b)

#creamos cluster
cluster_foo = pydot.Cluster("foo",label="foo")
cluster_foo.add_node(met1)
cluster_foo.add_node(met2)
cluster_foo.add_node(met3)

cluster_bar = pydot.Cluster("bar",label="bar")
cluster_bar.add_node(meta)
cluster_bar.add_node(metb)
cluster_bar.add_node(metc)

cluster_baz = pydot.Cluster("baz",label="baz")
cluster_baz.add_node(met3b)
cluster_baz.add_node(metcb)
cluster_baz.add_node(met1b)
cluster_baz.add_node(metbb)

#añadimos al grafico
G.add_subgraph(cluster_foo)
G.add_subgraph(cluster_bar)
G.add_subgraph(cluster_baz)

G.add_edge(ar1)
G.add_edge(ar2)
G.add_edge(ar3)
G.add_edge(ar4)
G.add_edge(ar5)
G.add_edge(ar6)
G.add_edge(ar7)
G.add_edge(ar8)
G.add_edge(ar9)
G.add_edge(ar10)

#dibujamos
G.write_png("cluster.png")
