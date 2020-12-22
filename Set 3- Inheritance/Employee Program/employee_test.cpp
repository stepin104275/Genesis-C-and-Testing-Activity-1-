#include "employee.h"
#include "manager.h"
#include "trainee.h"
#include "engineer.h"
#include <gtest/gtest.h>


TEST(Manager,Pay)
{
    Manager m1("1","Raj",60000,10,12,25);
    EXPECT_EQ(9000,m1.appraisal());
    EXPECT_EQ(60000,m1.payroll());
}
TEST(Engineer,Pay)
{
    Engineer m1("2","Raja",40000,8,10);
    EXPECT_EQ(4000,m1.appraisal());
    EXPECT_EQ(40000,m1.payroll());
}
TEST(Trainee,Pay)
{
    Trainee m1("3","Rajas",20000,1,"ICP",60);
    EXPECT_EQ(1000,m1.appraisal());
    EXPECT_EQ(20000,m1.payroll());
}
