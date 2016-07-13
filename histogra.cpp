#include <math.h>
#include <limits.h>
#include <iostream>
using namespace std;
#define ll long long

// A utility function to find minimum of three integers
ll max(ll x, ll y, ll z)
{ return max(max(x, y), z); }

// A utility function to get minimum of two numbers in hist[]
ll minVal(ll *hist, ll i, ll j)
{
	if (i == -1) return j;
	if (j == -1) return i;
	return (hist[i] < hist[j])? i : j;
}

// A utility function to get the middle index from corner indexes.
ll getMid(ll s, ll e)
{ return s + (e -s)/2; }

int RMQUtil(ll *hist, ll *st, ll ss, ll se, ll qs, ll qe, ll index)
{

	if (qs <= ss && qe >= se)
		return st[index];


	if (se < qs || ss > qe)
		return -1;


	ll mid = getMid(ss, se);
	return minVal(hist, RMQUtil(hist, st, ss, mid, qs, qe, 2*index+1),
				RMQUtil(hist, st, mid+1, se, qs, qe, 2*index+2));
}


ll RMQ(ll *hist, ll *st, ll n, ll qs, ll qe)
{
	

	return RMQUtil(hist, st, 0, n-1, qs, qe, 0);
}



ll constructSTUtil(ll hist[], ll ss, ll se, ll *st, ll si)
{

	if (ss == se)
	return (st[si] = ss);


	ll mid = getMid(ss, se);
	st[si] = minVal(hist, constructSTUtil(hist, ss, mid, st, si*2+1),
					constructSTUtil(hist, mid+1, se, st, si*2+2));
	return st[si];
}

/* Function to construct segment tree from given array. This function
allocates memory for segment tree and calls constructSTUtil() to
fill the allocated memory */
ll *constructST(ll hist[], ll n)
{
	// Allocate memory for segment tree
	ll x = (int)(ceil(log2(n))); //Height of segment tree
	ll max_size = 2*(int)pow(2, x) - 1; //Maximum size of segment tree
	ll *st = new ll[max_size];

	// Fill the allocated memory st
	constructSTUtil(hist, 0, n-1, st, 0);

	// Return the constructed segment tree
	return st;
}

// A recursive function to find the maximum rectangular area.
// It uses segment tree 'st' to find the minimum value in hist[l..r]
ll getMaxAreaRec(ll *hist, ll *st, ll n, ll l, ll r)
{
	// Base cases
	if (l > r) return INT_MIN;
	if (l == r) return hist[l];

	// Find index of the minimum value in given range
	// This takes O(Logn)time
	ll m = RMQ(hist, st, n, l, r);

	/* Return maximum of following three possible cases
	a) Maximum area in Left of min value (not including the min)
	a) Maximum area in right of min value (not including the min)
	c) Maximum area including min */
	return max(getMaxAreaRec(hist, st, n, l, m-1),
			getMaxAreaRec(hist, st, n, m+1, r),
			(r-l+1)*(hist[m]) );
}

// The main function to find max area
ll getMaxArea(ll hist[], ll n)
{
	// Build segment tree from given array. This takes
	// O(n) time
	ll *st = constructST(hist, n);

	// Use recursive utility function to find the
	// maximum area
	return getMaxAreaRec(hist, st, n, 0, n-1);
}

// Driver program to test above functions
int main()
{
	
	while(1)
	{
		ll n;
		cin>>n;
		if(n==0)
		break;
		ll hist[n+1];
		for(ll i=0;i<n;i++)
		{
			cin>>hist[i];
		}
		cout <<getMaxArea(hist, n)<<endl;
	}
}

