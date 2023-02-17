#include<iostream>
using namespace std;

int main(){
    cout<<"Enter 1 to insert at zero"<<endl;
    cout<<"Enter 2 to insert at the end"<<endl;
    cout<<"Enter 3 to insert at k"<<endl;
    cout<<"Enter 4 to delete at zero"<<endl;
    cout<<"Enter 5 to delete at the end"<<endl;
    cout<<"Enter 6 to delete at k"<<endl;
    cout<<"Enter 7 for switching of values"<<endl;
    cout<<"Enter 8 to display the values"<<endl;
    cout<<"Enter 9 to exit"<<endl<<endl;
    
    int n;
       cout<<"Enter the size of array: "<<endl;
       cin>>n;
       cout<<"The array is empty:-"<<endl<<endl;
    int size=0;
    int x[n]={};
    int i;
    while(true){
    	
        cout<<endl<<"Enter your option: "<<endl;
        cin>>i;
          if(i==9){
                cout<<"----Exiting loop----"<<endl;
                break;}
 
          else{

    switch(i){
    	
        case 1:{
		    cout<<"Enter a value: "<<endl;
            cin>>x[size];
            size++;
            cout<<"--The value is stored--"<<endl<<endl;
            break;
    }
    
        case 2:{
		    cout<<"Enter a value: "<<endl;
            cin>>x[n-1];
            size++;
            cout<<"--The value is stored--"<<endl<<endl;
            break;
    }
        case 3:{
   	        int y;
     	    cout<<"Enter the position: "<<endl;
    	    cin>>y;
                cout<<"Enter a value: "<<endl;
                cin>>x[y];
                size++;
                cout<<"--The value is stored--"<<endl<<endl;
                break;
   }
   
        case 4:{
        	x[0] = 0;
        	cout<<"--The value is deleted--"<<endl<<endl;
            break;
    }
    
        case 5:{
        	x[n-1] = 0;
        	cout<<"--The value is deleted--"<<endl<<endl;
            break;
    }
    
        case 6:{
        	int z;
        	cout<<"Enter the position: "<<endl;
        	cin>>z;
        	x[z] = 0;
        	cout<<"--The value is deleted--"<<endl<<endl;
            break;
    }
    
        case 7:{
        	for(int t=n; t>0; t--){
        	    x[t] = x[t-1];
			}
			x[0] = 0;
			cout<<"--The values are shifted to right--"<<endl<<endl;
            break;
    }
    
        case 8:{
        	cout<<"The values stored in the array are: "<<endl<<endl;
    	    for(int i=0; i<n; i++){
   	  	        cout<<x[i]<<" ";
		 }
		    cout<<endl<<endl;
	        break;
   }
   
        default:
	     	cout<<"--Invalid option--";
            break;
}
    
    cout<<"Enter 1 to insert at zero"<<endl;
    cout<<"Enter 2 to insert at the end"<<endl;
    cout<<"Enter 3 to insert at k"<<endl;
    cout<<"Enter 4 to delete at zero"<<endl;
    cout<<"Enter 5 to delete at the end"<<endl;
    cout<<"Enter 6 to delete at k"<<endl;
    cout<<"Enter 7 for switching of values"<<endl;
    cout<<"Enter 8 to display the values"<<endl;
    cout<<"Enter 9 to exit"<<endl<<endl;
}
}
}









