// Write a program to receive Cartesian co-ordinates (x, y) of a point and convert them into polar co-ordinates (r,phi).
// Hint: r = sqrt ( x2+ y2) and tan-1( y / x )

#include<stdio.h>
#include<math.h>

int main(){
    
    int x,y,degree;
    float r, phi,pi;

    printf("Enter the cordinates of x-axis =");
    scanf("%d", &x);
    printf("Enter the cordinates of y-axis =");
    scanf("%d", &y);
    
    r=sqrt(x*x + y*y);
    phi= atan(y/x);

    printf("The polar co-ordinates of (%d , %d) is = (%f , %f)\n", x,y,r,phi);

    // polar co-ordinates in degree.

    pi = 3.141592;

    // Radian to dergee conversion.

    degree=phi*(180/pi);

    printf("The polar co-ordinates of (%d , %d) (In degree) is = (%f , %d)\n", x,y,r,degree);

    

    return 0;
}
