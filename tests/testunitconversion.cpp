// SPDX-License-Identifier: GPL-2.0
#include "testunitconversion.h"
#include "core/dive.h"
#include "core/subsurface-string.h"

void TestUnitConversion::testUnitConversions()
{
	QCOMPARE(IS_FP_SAME(grams_to_lbs(1000), 2.204586), true);
	QCOMPARE(lbs_to_grams(1), 454);
	QCOMPARE(IS_FP_SAME(ml_to_cuft(1000), 0.0353147), true);
	QCOMPARE(IS_FP_SAME(cuft_to_l(1), 28.316847), true);
	QCOMPARE(IS_FP_SAME(mm_to_feet(1000), 3.280840), true);
	QCOMPARE(feet_to_mm(1), 305L);
	QCOMPARE(to_feet((depth_t){1000}), 3);
	QCOMPARE(IS_FP_SAME(mkelvin_to_C(647000), 373.85), true);
	QCOMPARE(IS_FP_SAME(mkelvin_to_F(647000), 704.93), true);
	QCOMPARE(F_to_mkelvin(704.93), 647000UL);
	QCOMPARE(C_to_mkelvin(373.85), 647000UL);
	QCOMPARE(IS_FP_SAME(psi_to_bar(14.6959488), 1.01325), true);
	QCOMPARE(psi_to_mbar(14.6959488), 1013L);
	QCOMPARE(IS_FP_SAME(to_PSI((pressure_t){1013}), 14.6923228594), true);
	QCOMPARE(IS_FP_SAME(bar_to_atm(1.013), 1.0), true);
	QCOMPARE(IS_FP_SAME(mbar_to_atm(1013), 1.0), true);
	QCOMPARE(IS_FP_SAME(mbar_to_PSI(1013), 14.6923228594), true);
}

QTEST_GUILESS_MAIN(TestUnitConversion)
