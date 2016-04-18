import junit.framework.TestCase;
import org.junit.AfterClass;
import org.junit.BeforeClass;
import org.junit.Test;
import org.junit.rules.Timeout;
import org.junit.runner.JUnitCore;
import org.junit.runner.Result;
import org.openqa.selenium.By;
import org.openqa.selenium.NoSuchElementException;
import org.openqa.selenium.NotFoundException;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.ie.InternetExplorerDriver;
import org.openqa.selenium.interactions.Action;
import org.openqa.selenium.interactions.Actions;

import java.sql.Driver;
import java.sql.Timestamp;
import java.util.concurrent.TimeUnit;

/**
 * Created by dsemeniuta on 4/8/2016.
 */
public class IeTest extends BaseTest {
   // startPage = "https://en.wikipedia.org/wiki/Main_Page";
    @Test
     public void test() throws Exception{
        setUp("http://skillsup.ua/");
            WebElement searcher = driver.findElement(By.linkText("Наша команда"));//searchInput
            searcher.click();
            //assertNotNull(driver.findElements(By.className("team-list clearfix")));
            //System.out.println(driver.findElements(By.className("team-list clearfix")).findElement(By.linkText("Анастасия ")));
        WebElement el = driver.findElement(By.linkText("О нас"));
        WebElement element= driver.findElement(By.linkText("Наша команда"));
        //driver.findElement(By.xpath("//div[@class='team-list clearfix']/div[@class='member']/a/span[contains(text(),'Анастасия ')]"));
        Actions dr = new Actions(driver);
        dr.moveToElement(el);
        dr.moveToElement(element);
        dr.click().build().perform();




            //element= driver.findElement(By.xpath("//div[@class='team-list clearfix']/div[@class='member']/a/span[contains(text(),'Артем')]"));
            //System.out.println(element.getText());
            //WebElement fruit=driver.findElement(By.linkText("apple"));
            //fruit.click();


    }


}
//http://www.seleniumeasy.com/selenium-tutorials/how-to-perform-mouseover-action-in-selenium-webdriver
