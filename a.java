/*
Problem Link: https://www.codechef.com/JAN21B/problems/WIPL
#############################################
Author: Siddharth Mishra
GitHub: https://github.com/Hard-Coder05
#############################################
*/
import java.util.*;
import java.lang.*;
import java.io.*;
class Solution{
    public static void main (String[] args) throws java.lang.Exception{
        Scanner scan=new Scanner(System.in);
        int tc=scan.nextInt();
        while(tc-- !=0){
            int n=scan.nextInt();
            int arr[]=new int[n];
            int k=scan.nextInt();
            for(int i=0;i<n;i++){
            arr[i]=scan.nextInt();}
            LinkedHashSet<Integer> h1=new LinkedHashSet<Integer>();
            int suma=0;
            Arrays.sort(arr);
            h1.add(arr[n-1]);
            suma=arr[n-1];
            int z=-1;
            for(int i=n-2;i>=0;i--){
            LinkedHashSet<Integer> h2=new LinkedHashSet<Integer>();
            suma=suma+arr[i];
            Iterator i1=h1.iterator();
            while(i1.hasNext()){
            int curr=(int)(i1.next());
            h2.add(curr);
            h2.add(arr[i]);
            h2.add(curr+arr[i]);
            if(((curr+arr[i])>=k)&&((suma-curr-arr[i])>=k)){
            z=n-i;
            break;
            }
            if(((arr[i])>=k)&&((suma-arr[i])>=k)){
            z=n-i;
            break;
            }
            }
            if(z!=-1){
            break;
            }
            h1=h2;
            }
            System.out.println(z);
        }
        }
        }