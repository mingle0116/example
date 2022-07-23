package team.mingchen.atm.javabean;

public class Account {
    private String account;
    private String name;
    private double savings;
    private String keywords;
    private double fSavings;

    public Account() {
    }

    public Account(String account, String name, double savings, String keywords, double fSavings) {
        this.account = account;
        this.name = name;
        this.savings = savings;
        this.keywords = keywords;
        this.fSavings = fSavings;
    }

    public String getAccount() {
        return account;
    }

    public void setAccount(String account) {
        this.account = account;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public double getSavings() {
        return savings;
    }

    public void setSavings(double savings) {
        this.savings = savings;
    }

    public String getKeywords() {
        return keywords;
    }

    public void setKeywords(String keywords) {
        this.keywords = keywords;
    }

    public double getfSavings() {
        return fSavings;
    }

    public void setfSavings(double fSavings) {
        this.fSavings = fSavings;
    }
}
