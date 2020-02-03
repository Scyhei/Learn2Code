/*NOTICE: return at later date */

public class Strings{
    public static void main(String[] args){
        //define first_name
        char[] first_name = {'J', 'o' , 'h' ,'n'};
        //define last_name
        char[] last_name = {'D', 'o', 'e'};

        String name;

        last_name[0] = 'B';
        //create name reference separate from first_name & last_name
        name = new String(first_name)+
               " "+
               new String(last_name);
        if(name.compareTo("John Boe")==0){
            System.out.println("Done!");
        }

        name = "";
        name += new String(first_name);
        name += new String(last_name);
        System.out.println(name);
    }
}