 # include <bits/stdc++.h>
using namespace std;
int main() {
    /*
    n friends
    k bottles
    cap-l ml
    total_limes= c*d-> d parts and c lemons
    p salt 
    1 2 3 4 5 6 7....n
    drinks  nl  nl  nl nl ...(1 toast) n*(nl)
    lime= 1 1 1 1 1 .....(cd)
    salt np np np ....
    
    drinks -> n*(nl)*x=k*l
    lime->n*x=cd
    salt->n*(np)*x= p
    */
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int drinks = (k * l) / (n*nl); // Total number of drinks that can be made
    int limes =(c * d)/n; // Total number of lime slices
    int salt = p / (n*np); // Total number of salt portions
    int toasts = min(drinks, min(limes, salt)) ;
    cout << toasts << endl;
    return 0;
}