(function () {
    let chart = echarts.init(document.querySelector("#chart5"));

    // 拿到根字号
    const rootFontSize = parseFloat(getComputedStyle(document.documentElement).fontSize);

    // 把你的 rem 数值转成 px
    const fontSizeRem = 1;
    const fontSizePx = fontSizeRem * rootFontSize;

    let option = {
        tooltip: {
            trigger: 'item'
        },
        legend: {
            // 距离底部为0%
            top: "10%",
            // 小图标的宽度和高度
            itemWidth: fontSizePx * 0.1,
            itemHeight: 10,
            // 修改图例组件的文字为 12px
            textStyle: {
                color: "rgba(255,255,255,.5)",
                fontSize: "12"
            }
        },
        color: [
            "#065aab",
            "#066eab",
            "#0682ab",
            "#0696ab",
            "#06a0ab",
        ],
        series: [
            {
                name: '年龄分布',
                type: 'pie',
                radius: ['40%', '60%'],
                center: ["50%", "60%"],
                avoidLabelOverlap: false,
                label: {
                    show: false,
                    position: 'center'
                },
                emphasis: {
                    label: {
                        show: false,
                        fontSize: fontSizePx * 0.15,
                        fontWeight: 'bold'
                    }
                },
                labelLine: {
                    show: false
                },
                data: [
                    { value: 1, name: "20岁以下" },
                    { value: 4, name: "20-29岁" },
                    { value: 2, name: "30-39岁" },
                    { value: 2, name: "40-49岁" },
                    { value: 1, name: "50岁以上" }
                ],
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