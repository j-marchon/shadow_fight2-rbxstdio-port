// HEINPCIAMNL$$MAHFCKJGBPP @ RVA 0x311DC8C

void HEINPCIAMNL__MAHFCKJGBPP(HEINPCIAMNL_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  uint uVar1;
  ushort uVar2;
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *__this_00;
  KKEKKPIDGBK_o *pKVar3;
  VirtualInvokeData *pVVar4;
  LCKCDEKNLOA_o *__this_01;
  MethodInfo *method_00;
  KKEKKPIDGBK_c *pKVar5;
  ulong uVar6;
  int32_t *piVar7;
  
  if ((DAT_04566606 & 1) == 0) {
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
                    /* try { // try from 0321dcb4 to 0331dcb7 has its CatchHandler @ 0321dce4 */
                    /* try { // try from 0321dcb8 to 0331dcd7 has its CatchHandler @ 0321db98 */
    FUN_01bab630(&MKFAKELPPAC_TypeInfo);
    DAT_04566606 = 1;
  }
  (*(__this->klass->vtable)._4_PKIFMKGDJJN.methodPtr)
            (__this,(__this->klass->vtable)._4_PKIFMKGDJJN.method);
                    /* try { // try from 0321dcd8 to 0331dcdf has its CatchHandler @ 0321dcec */
                    /* try { // try from 0321dce0 to 0331dcff has its CatchHandler @ 0321db98 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0321dcb4 with catch @ 0321dce4
                        */
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0321dc6c with catch @ 0321dce8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0321dcd8 with catch @ 0321dcec
                        */
  __this_00 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
    Nekki_SF2_GUI_Tutorial_TutorialCanvas__set_BlockOn(__this_00,true,(MethodInfo *)0x0);
                    /* try { // try from 0321dd00 to 0331dd03 has its CatchHandler @ 0321dd28 */
                    /* try { // try from 0321dd04 to 0331dd2f has its CatchHandler @ 0321db98 */
    if (*(int *)&(__this->fields).super.field_0x54 == 0) {
      __this_01 = (__this->fields).PGLINMCHKGC;
      if (__this_01 != (LCKCDEKNLOA_o *)0x0) {
        LCKCDEKNLOA__MAHFCKJGBPP(__this_01,(__this->fields).super.IJOKKFKPBEP,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      HEINPCIAMNL__LFHIBFCAKPH(__this,method_00);
      if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* catch() { ... } // from try @ 0321dd00 with catch @ 0321dd28 */
      pKVar3 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* try { // try from 0321dd30 to 0331dd37 has its CatchHandler @ 0321dd50 */
      if (pKVar3 != (KKEKKPIDGBK_o *)0x0) {
                    /* try { // try from 0321dd38 to 0331dd47 has its CatchHandler @ 0321db98 */
        pKVar5 = pKVar3->klass;
        uVar1 = *(uint *)&(__this->fields).super.field_0x54;
        uVar2._0_1_ = (pKVar5->_2).rank;
        uVar2._1_1_ = (pKVar5->_2).minimumAlignment;
                    /* try { // try from 0321dd48 to 0331dd4f has its CatchHandler @ 0321dd50 */
        uVar6 = (ulong)uVar2;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0321dd30 with catch @ 0321dd50
                       catch(type#2 @ 00000000) { ... } // from try @ 0321dd48 with catch @ 0321dd50
                        */
        if (uVar6 != 0) {
          piVar7 = &((pKVar5->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
                (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
              pVVar4 = pKVar5->vtable + (*piVar7 + 4);
              goto LAB_0321ddb0;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        pVVar4 = (VirtualInvokeData *)FUN_01b81914(pKVar3,KKEKKPIDGBK_TypeInfo,4);
LAB_0321ddb0:
                    /* WARNING: Could not recover jumptable at 0x0321ddcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pVVar4->methodPtr)(pKVar3,(ulong)uVar1,1,1,pVVar4->method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

