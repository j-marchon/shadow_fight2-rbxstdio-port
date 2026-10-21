// Nekki.SF2.GUI.Map.ContentToggle$$PKMGPAANLGD @ RVA 0x33B2F64

void Nekki_SF2_GUI_Map_ContentToggle__PKMGPAANLGD
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
                    /* try { // try from 034b2f68 to 035b2f6f has its CatchHandler @ 034b49cc */
                    /* try { // try from 034b2f78 to 035b2f7f has its CatchHandler @ 034b4974 */
                    /* try { // try from 034b2f80 to 035b2f9b has its CatchHandler @ 034b4a68 */
  if ((DAT_04567d56 & 1) == 0) {
    auVar7 = FUN_01bab630(&KCEKMOECEJK_TypeInfo);
    DAT_04567d56 = 1;
  }
  pKVar6 = (__this->fields).BBODGCMLKFP;
  if (pKVar6 == (KCEKMOECEJK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar7._0_8_,auVar7._8_8_);
  }
  pKVar3 = pKVar6->klass;
  uVar1._0_1_ = (pKVar3->_2).rank;
  uVar1._1_1_ = (pKVar3->_2).minimumAlignment;
                    /* try { // try from 034b2fa8 to 035b2faf has its CatchHandler @ 034b49d8 */
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pKVar3->_1).interfaceOffsets)->offset;
    do {
                    /* try { // try from 034b2fc0 to 035b2fc7 has its CatchHandler @ 034b4970 */
                    /* try { // try from 034b2fc8 to 035b2fe3 has its CatchHandler @ 034b4a70 */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)KCEKMOECEJK_TypeInfo) {
        pVVar2 = pKVar3->vtable + (*piVar5 + 1);
        goto LAB_034b2ff8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KCEKMOECEJK_TypeInfo,1);
LAB_034b2ff8:
                    /* WARNING: Could not recover jumptable at 0x034b3010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(CONCAT44(in_register_00005004,CJNHFNHJHPE),pKVar6,pVVar2->method);
  return;
}

