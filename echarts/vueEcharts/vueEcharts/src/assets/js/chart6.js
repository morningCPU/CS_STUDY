
(function () {
    let chart = echarts.init(document.querySelector("#chart6"));

    let option =
    {
        color: ['#006cff', '#60cda0', '#ed8884', '#ff9f7f', '#0096ff', '#9fe6b8', '#32c5e9', '#1d9dff'],
        tooltip: {
            trigger: 'item',
            formatter: '{a} <br/>{b} : {c} ({d}%)'
        },
        series: [
            {
                name: '半径模式',
                type: 'pie',
                radius: ['10%', '70%'],
                center: ['50%', '50%'],
                roseType: 'radius',
                itemStyle: {
                    borderRadius: 0
                },
                label: {
                    fontSize: 10
                },
                labelLine: {
                    length: 6,
                    length2: 8
                },
                data: [
                    { value: 20, name: '云南' },
                    { value: 26, name: '北京' },
                    { value: 24, name: '山东' },
                    { value: 25, name: '河北' },
                    { value: 20, name: '江苏' },
                    { value: 25, name: '浙江' },
                    { value: 30, name: '四川' },
                    { value: 42, name: '湖北' }
                ]
            }
        ]
    };

    chart.setOption(option);

    let count = 0;

    // 点击切换效果
    $("#div_pie").on("click", "#area_pie", function () {
        let obj = document.querySelector("#area_pie");
        if (count == 0) {
            option.series[0].name = "面积模式";
            option.series[0].roseType = "area";
            obj.innerText = "面积模式";
            count = 1;
        } else {
            option.series[0].name = "半径模式";
            option.series[0].roseType = "redius";
            obj.innerText = "半径模式";
            count = 0;
        }
        // 需要重新渲染
        chart.setOption(option);
    });

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