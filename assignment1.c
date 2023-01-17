int main()
{
    int product1_qty = 3;
    int product2_qty = 5;
    
    int product1_rate = 15;
    int product2_rate = 10;
    
    float product1_discount = 0.05;
    float product2_discount = 0.25;
    
    int gst = 12;
    
    
    int totalPay1 = product1_qty * product1_rate;
    int totalPay2 = product2_qty * product2_rate;
    
    float totalPay1_afterDis = totalPay1 - totalPay1 * product1_discount;
    float totalPay2_afterDis = totalPay2 - totalPay2 * product2_discount;
    
    float totalPay1_afterGst = totalPay1_afterDis - totalPay1_afterDis * gst/100;
    float totalPay2_afterGst = totalPay2_afterDis - totalPay2_afterDis * gst/100;
    
    printf("%d\n", totalPay1);
    printf("%d\n", totalPay2);
    printf("%f\n", totalPay1_afterDis);
    printf("%f\n", totalPay2_afterDis);
    printf("%f\n", totalPay1_afterGst);
    printf("%f\n", totalPay2_afterGst);
    getch();
    
    return 0;
}
