// Nekki.SF2.GUI.Map.ContentToggle$$HINHHFAOHAN @ RVA 0x33B2560

void Nekki_SF2_GUI_Map_ContentToggle__HINHHFAOHAN
               (Nekki_SF2_GUI_Map_ContentToggle_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  KCEKMOECEJK_c *pKVar3;
  ulong uVar4;
  int32_t *piVar5;
  KCEKMOECEJK_o *pKVar6;
  undefined4 in_register_00005004;
  undefined1 auVar7 [16];
  
  auVar7._8_8_ = method;
  auVar7._0_8_ = __this;
                    /* try { // try from 034b257c to 035b2583 has its CatchHandler @ 034b264c */
  if ((DAT_04567d52 & 1) == 0) {
    auVar7 = FUN_01bab630(&KCEKMOECEJK_TypeInfo);
    DAT_04567d52 = 1;
  }
  pKVar6 = (__this->fields).BPPDIBOOOLP;
  if (pKVar6 == (KCEKMOECEJK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar7._0_8_,auVar7._8_8_);
  }
  pKVar3 = pKVar6->klass;
  uVar1._0_1_ = (pKVar3->_2).rank;
  uVar1._1_1_ = (pKVar3->_2).minimumAlignment;
                    /* try { // try from 034b25a8 to 035b25bf has its CatchHandler @ 034b2648 */
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pKVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)KCEKMOECEJK_TypeInfo) {
                    /* try { // try from 034b25e8 to 035b2617 has its CatchHandler @ 034b2184 */
        pVVar2 = pKVar3->vtable + (*piVar5 + 1);
        goto LAB_034b25f4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
                    /* try { // try from 034b25d8 to 035b25e7 has its CatchHandler @ 034b2630 */
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KCEKMOECEJK_TypeInfo,1);
LAB_034b25f4:
                    /* WARNING: Could not recover jumptable at 0x034b260c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(CONCAT44(in_register_00005004,CJNHFNHJHPE),pKVar6,pVVar2->method);
  return;
}

