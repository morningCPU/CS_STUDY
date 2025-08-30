var str = "hello world!"
var reg = /o/g;

// 进行校验
console.log(reg.test(str));

// 进行匹配
console.log(str.match(reg));

// 替换
console.log(str.replace(reg, "G"));

onload = function () {
    var email = this.document.getElementById("email");
    email.onblur = function () {
        var reg2 = /^java/;//java开头
        var reg3 = /@qq.com$/;//@qq.com结尾
        var reg4 = /^[a-zA-Z][a-zA-Z0-9_]{5,9}$/
        var str2 = email.value;
        var key = reg4.test(str2);
        console.log(key);
        if (!key) {
            email.style.borderColor = "red";
        } else {
            email.style.borderColor = "black";
        }
    }
}