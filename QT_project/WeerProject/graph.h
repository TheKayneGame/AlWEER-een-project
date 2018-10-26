#ifndef GRAPH_H
#define GRAPH_H

class Graph
{

public:
    Graph();
    virtual ~Graph();
    QLineSeries *series[4];
    QLineSeries *test;
    QChart *chart;
    QChartView *chartView;
    void createChart();

private:
    double values[4][64];
    enum valueType {temperature = 0, humidity, brightness,  windspeed};
};

#endif // GRAPH_H
