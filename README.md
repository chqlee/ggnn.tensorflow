# A Tensorflow Implementation of GGNN for Graph Classification

This is a Tensorflow implementation of the Gated Graph Sequence Neural Networks (GGNN) as described in the paper [Gated Graph Sequence Neural Networks](https://arxiv.org/abs/1511.05493) by Y. Li, D. Tarlow, M. Brockschmidt, and R. Zemel.
For a pytorch version, please refer to: https://github.com/bdqnghi/ggnn_graph_classification

This implementation focuses on the Graph Level output, which hasn't been exploiting from the original code base. In concrete, we focus the Program Classification task, in which each program is represented in a form of a graph.

We took the dataset of 104 programming problems, which comprises of 52000 cpp files from the paper [Convolutional Neural Networks over Tree Structures for Programming Language Processing](https://arxiv.org/abs/1409.5718) and parse the cpp files into the graph representation based on the details of the paper [Learning to Represent Programs with Graphs](https://arxiv.org/abs/1711.00740).

## What is GGNN?
- Solve graph-structured data and problems
- A gated propagation model to compute node representations
- Unroll recurrence for a fixed number of steps and use backpropogation through time
- An output model to make predictions on nodes

## Requirements
- python==3.6
- Tensorflow>=1.8

## Run 
Train and test the GGNN:
```
python3 main_ggnn.py --training --cuda (use GPUs or not)
```

## References
- [Gated Graph Sequence Neural Networks](https://arxiv.org/abs/1511.05493), ICLR 2016
- [yujiali/ggnn](https://github.com/yujiali/ggnn)
- [Learning to Represent Programs with Graphs](https://arxiv.org/abs/1711.00740), ICLR 2018