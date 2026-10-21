// Nekki.SF2.GUI.Map.ContentToggle.<>c$$FCFHJBGPAHO @ RVA 0x33B31C0

void Nekki_SF2_GUI_Map_ContentToggle_<>c__FCFHJBGPAHO
               (Nekki_SF2_GUI_Map_ContentToggle___c_o *__this,KCEKMOECEJK_o *i,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  KCEKMOECEJK_c *pKVar3;
  ulong uVar4;
  int32_t *piVar5;
  
                    /* try { // try from 034b31c4 to 035b31df has its CatchHandler @ 034b4a00 */
  if ((DAT_04567d5d & 1) == 0) {
    __this = (Nekki_SF2_GUI_Map_ContentToggle___c_o *)FUN_01bab630(&KCEKMOECEJK_TypeInfo);
    DAT_04567d5d = 1;
  }
                    /* try { // try from 034b31ec to 035b31f3 has its CatchHandler @ 034b46c0 */
  if (i == (KCEKMOECEJK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(__this);
  }
  pKVar3 = i->klass;
  uVar1._0_1_ = (pKVar3->_2).rank;
  uVar1._1_1_ = (pKVar3->_2).minimumAlignment;
                    /* try { // try from 034b31fc to 035b3203 has its CatchHandler @ 034b46d4 */
  uVar4 = (ulong)uVar1;
                    /* try { // try from 034b3204 to 035b321f has its CatchHandler @ 034b4978 */
  if (uVar4 != 0) {
    piVar5 = &((pKVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)KCEKMOECEJK_TypeInfo) {
        pVVar2 = pKVar3->vtable + (*piVar5 + 1);
        goto LAB_034b3248;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(i,KCEKMOECEJK_TypeInfo,1);
LAB_034b3248:
                    /* WARNING: Could not recover jumptable at 0x034b325c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(0,i,pVVar2->method);
  return;
}

