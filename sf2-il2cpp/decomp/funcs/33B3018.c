// Nekki.SF2.GUI.Map.ContentToggle$$PBMELDDANJH @ RVA 0x33B3018

float Nekki_SF2_GUI_Map_ContentToggle__PBMELDDANJH
                (Nekki_SF2_GUI_Map_ContentToggle_o *__this,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  KCEKMOECEJK_c *pKVar3;
  ulong uVar4;
  int32_t *piVar5;
  KCEKMOECEJK_o *pKVar6;
  float fVar7;
  undefined1 auVar8 [16];
  
  auVar8._8_8_ = method;
  auVar8._0_8_ = __this;
  if ((DAT_04567d57 & 1) == 0) {
                    /* try { // try from 034b3034 to 035b303f has its CatchHandler @ 034b4944 */
    auVar8 = FUN_01bab630(&KCEKMOECEJK_TypeInfo);
    DAT_04567d57 = 1;
  }
  pKVar6 = (__this->fields).BPPDIBOOOLP;
  if (pKVar6 == (KCEKMOECEJK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar8._0_8_,auVar8._8_8_);
  }
                    /* try { // try from 034b3050 to 035b305b has its CatchHandler @ 034b4948 */
  pKVar3 = pKVar6->klass;
  uVar1._0_1_ = (pKVar3->_2).rank;
  uVar1._1_1_ = (pKVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pKVar3->_1).interfaceOffsets)->offset;
    do {
                    /* try { // try from 034b306c to 035b307b has its CatchHandler @ 034b49fc */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)KCEKMOECEJK_TypeInfo) {
                    /* try { // try from 034b3098 to 035b309f has its CatchHandler @ 034b4714 */
        pVVar2 = pKVar3->vtable + *piVar5;
        goto LAB_034b30a0;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
                    /* try { // try from 034b3088 to 035b308f has its CatchHandler @ 034b46b4 */
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KCEKMOECEJK_TypeInfo,0);
LAB_034b30a0:
                    /* try { // try from 034b30a0 to 035b30bf has its CatchHandler @ 034b4958 */
                    /* WARNING: Could not recover jumptable at 0x034b30b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar7 = (float)(*pVVar2->methodPtr)(pKVar6,pVVar2->method);
  return fVar7;
}

