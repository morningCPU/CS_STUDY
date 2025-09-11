import axios from "axios";

const instance = axios.create(
    {
        //请求的基础路径
        baseURL: "https://api.uomg.com",
        timeout: 10000
    }
);

//设置请求拦截器
instance.interceptors.request.use(
    function (config) {
        //设置请求信息
        config.headers.Accept = "";
        return config;
    },
    function (error) {

    }
)

instance.interceptors.response.use(
    function () {
        //响应状态码为200时要执行的方法
    },
    function () {
        //非200
        //要返回一个response
    }
)

export default instance;