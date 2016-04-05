import junit.framework.TestCase;
import org.junit.AfterClass;
import org.junit.BeforeClass;
import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.firefox.FirefoxDriver;

/**
 * Created by skillsup on 05.04.16.
 */


public class SeleniumTest extends TestCase{
    private WebDriver driver = new FirefoxDriver();
    private By input = By.id("lst-ib");
    @BeforeClass
    public void setUp() throws Exception {
        this.driver.get("http://google.com");
    }

    public void test() throws Exception {
        WebElement g_search_input = driver.findElement(input);
        g_search_input.sendKeys("skillsup");
        g_search_input.submit();

    }
    @AfterClass
    public  void tearDown() throws Exception {
    //this.driver.quit();
}



}
