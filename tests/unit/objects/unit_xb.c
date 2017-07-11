#include "Xenon.h"
#include "test_eq.h"

void xb_test_1_new()
{
    XenBool* xbp = XenBool_new(1);
    TEST_IS_TRUE_S(XenBool_IS_TRUE(xbp), "test 1 new");
    free(xbp);
}

void xb_test_2_and()
{
    XenBool* xbp1 = XenBool_new(1);
    XenBool* xbp2 = XenBool_new(1);
    TEST_IS_TRUE_S(XenBool_AND(xbp1, xbp2), "test 2 and");
}

void xb_test_3_or()
{
    XenBool* xbp1 = XenBool_new(1);
    XenBool* xbp2 = XenBool_new(0);
    TEST_IS_TRUE_S(XenBool_OR(xbp1, xbp2), "test 3 or");
}


int main()
{
    xb_test_1_new();
    xb_test_2_and();
    xb_test_3_or();
    return 0;
}