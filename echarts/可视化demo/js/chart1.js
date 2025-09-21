(function () {
    let chart = echarts.init(document.querySelector("#chart1"));

    option = {
        color: ["#2f89cf"],
        tooltip: {
            trigger: 'axis',
            axisPointer: {
                type: 'shadow'
            }
        },
        grid: {
            left: '0%',
            top: '10px',
            right: '0%',
            bottom: '4%',
            containLabel: true
        },
        xAxis: [
            {
                type: 'category',
                data: ["旅游行业", "教育培训", "游戏行业", "医疗行业", "电商行业", "社交行业", "金融行业"],
                axisTick: {
                    alignWithLabel: true
                },
                axisLabel: {
                    fontsize: "12",
                    color: "rgba(255,255,255,0.6)"
                },
                axisLine: {
                    show: false
                }
            }
        ],
        yAxis: [
            {
                type: 'value',
                axisLabel: {
                    color: "rgba(255,255,255,0.6)",
                    fontsize: "12"
                },
                axisLine: {
                    lineStyle: {
                        color: "rgba(255,255,255,.1)"
                    }
                },
                splitLine: {
                    lineStyle: {
                        color: "rgba(255,255,255,0.1)"
                    }
                }
            }
        ],
        series: [
            {
                name: '就业人数',
                type: 'bar',
                barWidth: '35%',
                data: [200, 300, 300, 900, 1500, 1200, 600],
                itemStyle: {
                    barBorderRadius: 5
                }
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
