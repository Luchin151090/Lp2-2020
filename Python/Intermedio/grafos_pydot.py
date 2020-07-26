import pydot
import graphviz #se debe instalar en windows el graphviz y reiniciar el pycharm

#aqui señalamos que tipo de grafo es digraph o graph
migrafo =  pydot.Dot(graph_type='digraph')

#creacion de nodos
main =  pydot.Node("main")
parse = pydot.Node("parse")
clean = pydot.Node("cleanup")
exe = pydot.Node("execute")
init = pydot.Node("init")
make = pydot.Node("make_string")
comp  =pydot.Node("compare")
pri = pydot.Node("printf")

#creacion de las aristas
arista1 = pydot.Edge(main,parse)
arista2 = pydot.Edge(main,clean)
arista3 = pydot.Edge(main,init)
arista4 = pydot.Edge(main,pri)
arista5 = pydot.Edge(init,make)
arista6 = pydot.Edge(parse,exe)
arista7 = pydot.Edge(exe,make)
arista8 = pydot.Edge(exe,comp)
arista9 = pydot.Edge(exe,pri)

#añadimos las aristas al grafo
migrafo.add_edge(arista1)
migrafo.add_edge(arista2)
migrafo.add_edge(arista3)
migrafo.add_edge(arista4)
migrafo.add_edge(arista5)
migrafo.add_edge(arista6)
migrafo.add_edge(arista7)
migrafo.add_edge(arista8)
migrafo.add_edge(arista9)

migrafo.write_png('a.png')
