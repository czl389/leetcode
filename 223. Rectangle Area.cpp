class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        //先计算两个矩形的面积
        int area1=(C-A)*(D-B);
        int area2=(G-E)*(H-F);
        //以第一个矩形为基准，判断第二个矩形的位置
        int area3=0;
        //无交集
        if(E>=C||G<=A||B>=H||D<=F)
            area3=0;
        //相交或包含
        else if(E>=A&&E<=C&&!(H<=B||F>=D)) {
            int width=(C>G?G:C)-E;
            int height=(D>H?H:D)-(B>F?B:F);
            area3=width*height;
        }
        else if(G>=A&&G<=C&&!(H<=B||F>=D)) {
            int width=G-(A>E?A:E);
            int height=(D>H?H:D)-(B>F?B:F);
            area3=width*height;
        }
        else if(A>=E&&C<=G) {
            int width=C-A;
            int height=(D>H?H:D)-(B>F?B:F);
            area3=width*height;
        }
        return area1+area2-area3;
        
    }
};