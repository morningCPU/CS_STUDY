(function () {
    let chart = echarts.init(document.querySelector("#chart3"));

    var yearData = [
        {
            year: '2020',  // 年份
            data: [  // 两个数组是因为有两条线
                [24, 40, 101, 134, 90, 230, 210, 230, 120, 230, 210, 120],
                [40, 64, 191, 324, 290, 330, 310, 213, 180, 200, 180, 79]
            ]
        },
        {
            year: '2021',  // 年份
            data: [  // 两个数组是因为有两条线
                [123, 175, 112, 197, 121, 67, 98, 21, 43, 64, 76, 38],
                [143, 131, 165, 123, 178, 21, 82, 64, 43, 60, 19, 34]
            ]
        }
    ];

    let option = {
        tooltip: {
            trigger: 'axis'
        },
        legend: {
            textStyle: {
                color: '#4c9bfd' // 图例文字颜色
            },
            right: '10%', // 距离右边10%
        },
        grid: {
            left: '3%',
            top: "20%",
            right: '4%',
            bottom: '3%',
            show: true,
            borderColor: "#012f4a",
            containLabel: true
        },
        xAxis: {
            type: 'category',
            boundaryGap: false,
            data: ['1月', '2月', '3月', '4月', '5月', '6月', '7月', '8月', '9月', '10月', '11月', '12月'],
            axisTick: {
                show: false
            },
            axisLabel: {
                color: "#4c9bfd"
            },
            axisLine: {
                show: false // 去除轴线
            }
        },
        yAxis: {
            type: 'value',
            axisTick: {
                show: false  // 去除刻度
            },
            axisLabel: {
                color: '#4c9bfd' // 文字颜色
            },
            splitLine: {
                lineStyle: {
                    color: '#012f4a' // 分割线颜色
                }
            }
        },
        color: ['#00f2f1', '#ed3f35'],
        series: [{
            name: '新增粉丝',
            data: [24, 40, 101, 134, 90, 230, 210, 230, 120, 230, 210, 120],
            type: 'line',
            smooth: true
        }, {
            name: '新增游客',
            data: [40, 64, 191, 324, 290, 330, 310, 213, 180, 200, 180, 79],
            type: 'line',
            smooth: true
        }]
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

    let count = 0;

    // 5.点击切换效果
    $("#div_year").on("click", "a", function () {
        // alert(1);
        // console.log($(this).index());
        // 点击 a 之后 根据当前a的索引号 找到对应的 yearData的相关对象
        // console.log(yearData[$(this).index()]);
        // var obj = yearData[$(this).index()];
        // option.series[0].data = obj.data[0];
        // option.series[1].data = obj.data[1];
        var obj = yearData[count];
        option.series[0].data = obj.data[0];
        option.series[1].data = obj.data[1];
        if (count == 0) {
            count = 1;
        } else {
            count = 0;
        }
        // 需要重新渲染
        chart.setOption(option);
    });
})();