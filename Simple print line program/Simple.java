public class Simple{
    //The above line is called a class header and is comprised of: access specifier, object type, class name

    //There are 4 access specifiers: 'public', 'private', 'protected' & no specifier
        //public - the class and its contents are accessible unless the contents has its own specifer
        //private - the class and its contents are not accessible
        //protected - contents are accessible by super classes (parents of the subclass)
        //no specifier - by default is declared as public

    public static void main(String[] args){
        //The above line is a method declaration

        //public declares that all other methods in this class can access it
        //static???
        //void is the data type that the method must return
        //main is the method name
        //String[] args is the parameters that the main method accepts
        System.out.println("This is a simple print line program!");
    }

    //Questions:
    //If no specifier defaults to public for a class definition, why do we use public for class definitions?

    //What is the static keyword and what does it do?

    //If I were to execute this program in a command line, String[] args would be '$Simple.java <parameter>' 
    //right?

    //Theoretically I should be able to remove 'public' & 'String[] args' and the program should work fine
    //since main would default to public and it does not require parameters to execute. So why doesn't it work?

    //Why is it that any other method needs to be called, but main is called immediately?
}