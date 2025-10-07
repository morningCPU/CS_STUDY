## 1. 示例
+ servletA
```java
public class servletA extends HttpServlet {
    @Override
    protected void service(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        String username = req.getParameter("userName");
        resp.getWriter().write(username);
    }
}
```
+ web.xml
```xml
<servlet>
    <servlet-name>servletA</servlet-name>
    <servlet-class>com.morning.servlets.servletA</servlet-class>
</servlet>

<servlet-mapping>
    <servlet-name>servletA</servlet-name>
    <url-pattern>/servletA</url-pattern>
</servlet-mapping>
```
## 2. 设置响应头
+ resp.setHeader()
+ resp.setContentType()
## 3. 请求转发
使用 RequestDispatcher
```java
@WebServlet("/servletA")
public class servletA extends HttpServlet {
    @Override
    protected void service(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        System.out.println("servletA");
        resp.getWriter().write("this is servletA");
        RequestDispatcher requestDispatcher = req.getRequestDispatcher("/servletB");
        requestDispatcher.forward(req,resp);
    }
}
```
## 4. 响应重定向
使用 sendRedirect
```java
@WebServlet("/servletA")
public class servletA extends HttpServlet {
    @Override
    protected void service(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        System.out.println("servletA");
        resp.sendRedirect("/servletB?name=morning");
    }
}
```