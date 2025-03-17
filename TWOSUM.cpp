class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n= nums.size();//definir n como el tamaño del vector
        for(int i=0;i<n;i++){//primer indice    
            for(int j=i+1;j<n;j++){//segundo indice
                int resp=nums[i]+nums[j];
                vector<int> rta(2);//crear vector respuesta
                if (target==resp){//condicional para comparar si la suma de los dos numeros es igual al target
                    rta[0]=i;
                    rta[1]=j;
                    return rta;//devolver el vector respuesta
                }
            }
        }
        return {};//return en caso de que no haya respuesta
    }   
};