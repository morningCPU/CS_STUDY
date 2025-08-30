var personStr = '{"name":"张三","age":10,"dog":{"dname":"小花"},"loveSingers":["张晓明","张小东"],"friends":[{"fname":"小红"},{"fname":"小明"}]}';

function onclickTest() {
    console.log("onclick");
}

function ondblclickTest() {
    console.log("ondblclick");
}

function oncontextmenuTest() {
    console.log("oncontextmenu");
}

function onmousedownTest() {
    console.log("onmousedown");
}

function onmouseupTest() {
    console.log("onmouseup");
}

function onmousemoveTest() {
    console.log("onmousemove");
}

function onmouseenterTest() {
    console.log("onmouseenter");
}

function onmouseleaveTest() {
    console.log("onmouseleave");
}

function onmouseoverTest() {
    console.log("onmouseover");
}

function onmouseoutTest() {
    console.log("onmouseout");
}

function onkeydownTest() {
    console.log("onkeydown");
}

function onkeyupTest() {
    console.log("onkeyup");
}

function onkeypressTest(event) {
    var charCode = event.charCode || event.keyCode;
    var c = String.fromCharCode(charCode);
    console.log(c);
}

function onfocusTest() {
    console.log("onfocus");
}

function onblurTest() {
    console.log("onblur");
}

function onchangeTest() {
    console.log("onchange");
}

function onfocusinTest() {
    console.log("onfocusin");
}

function onsubmitTest(event) {
    var key = confirm("确认提交吗");
    if (!key) {
        event.preventDefault();
    }
}