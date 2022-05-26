
class Node:
    def __init__(self, name):
        self.children = []
        self.name = name

    def addChild(self, name):
        self.children.append(Node(name))
        return self

    def breadthFirstSearch(self, array):
        # Write your code here.
      source = self
      visited = []
      queue = []
      if source not in visited:
        visited.append(source)
        queue.append(source)
        array.append(self.name)
      while(len(queue)>0):
        current_node = queue.pop(0)
        for child_node in current_node.children:
          if child_node not in visited:
            visited.append(child_node)
            queue.append(child_node)
            array.append(child_node.name)

      return array
      
a = Node("A")
a.addChild("B")
a.addChild("C")
a.addChild("D")

array_list = []

a.breadthFirstSearch(array_list)