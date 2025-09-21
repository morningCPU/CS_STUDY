(function () {
    let chart = echarts.init(document.querySelector("#chart2"));
    let myColor = ["#1089E7", "#F57474", "#56D0E3", "#F8B448", "#8B78F6"];

    let option = {
        grid: {
            left: '22%',
            top: '10%',
            bottom: '10%',
            containLabel: false
        },
        xAxis: {
            show: false
        },
        yAxis: [
            {
                type: "category",
                data: ["HTML5", "CSS3", "javascript", "VUE", "NODE"],
                // 不显示y轴的线
                axisLine: {
                    show: false
                },
                // 不显示刻度
                axisTick: {
                    show: false
                },
                // 把刻度标签里面的文字颜色设置为白色
                axisLabel: {
                    color: "#fff"
                },
                inverse: true
            },
            {
                show: true,
                data: [702, 350, 610, 793, 664],
                // 不显示y轴的线
                axisLine: {
                    show: false
                },
                // 不显示刻度
                axisTick: {
                    show: false
                },
                axisLabel: {
                    textStyle: {
                        fontSize: 12,
                        color: "#fff"
                    }
                },
                inverse: true
            }
        ],
        series: [
            {
                name: '条',
                type: "bar",
                barCategoryGap: 50,
                data: [70, 34, 60, 78, 69],
                barWidth: 10,
                itemStyle: {
                    barBorderRadius: 20,
                    color: function (params) {
                        return myColor[params.dataIndex];
                    }
                },
                // 图形上的文本标签
                label: {
                    show: true,
                    // 图形内显示
                    position: "inside",
                    // 文字的显示格式
                    formatter: "{c}%"
                },
                yAxisIndex: 0,

            },
            {
                name: '框',
                type: 'bar',
                barCategoryGap: 50,
                barWidth: 15,
                barWidth: 15,
                itemStyle: {
                    color: "none",
                    borderColor: "#00c1de",
                    borderWidth: 3,
                    barBorderRadius: 15
                },
                data: [100, 100, 100, 100, 100],
                yAxisIndex: 1
            }
        ]
    };

    chart.setOption(option);

    function throttle(fn, delay = 32) {   // 32 ms ≈ 30 帧/秒
        let t = null;
        return function () {
            if (t) return;
            t = setTimeout(() => {
                fn();
                t = null;
            }, delay);
        };
    }
    window.addEventListener('resize', throttle(() => chart.resize()));
})();