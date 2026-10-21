// Nekki.SF2.GUI.Map.ContentToggle$$CJEDDOINFEI @ RVA 0x33B269C

float Nekki_SF2_GUI_Map_ContentToggle__CJEDDOINFEI
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
                    /* try { // try from 034b26a4 to 035b26ab has its CatchHandler @ 034b26ac */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034b2690 with catch @ 034b26ac
                       catch(type#2 @ 00000000) { ... } // from try @ 034b26a4 with catch @ 034b26ac
                        */
                    /* try { // try from 034b26b0 to 035b2b7b has its CatchHandler @ 034b26b0
                       catch() { ... } // from try @ 034b26b0 with catch @ 034b26b0
                       catch() { ... } // from try @ 034b32e8 with catch @ 034b26b0
                       catch() { ... } // from try @ 034b43a4 with catch @ 034b26b0
                       catch() { ... } // from try @ 034b4408 with catch @ 034b26b0
                       catch() { ... } // from try @ 034b4638 with catch @ 034b26b0
                       catch() { ... } // from try @ 034b4670 with catch @ 034b26b0
                       catch() { ... } // from try @ 034b467c with catch @ 034b26b0
                       catch() { ... } // from try @ 034b4b74 with catch @ 034b26b0
                       catch() { ... } // from try @ 034b4c1c with catch @ 034b26b0 */
  if ((DAT_04567d54 & 1) == 0) {
    auVar8 = FUN_01bab630(&KCEKMOECEJK_TypeInfo);
    DAT_04567d54 = 1;
  }
  pKVar6 = (__this->fields).BBODGCMLKFP;
  if (pKVar6 == (KCEKMOECEJK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar8._0_8_,auVar8._8_8_);
  }
  pKVar3 = pKVar6->klass;
  uVar1._0_1_ = (pKVar3->_2).rank;
  uVar1._1_1_ = (pKVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pKVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)KCEKMOECEJK_TypeInfo) {
        pVVar2 = pKVar3->vtable + *piVar5;
        goto LAB_034b2724;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KCEKMOECEJK_TypeInfo,0);
LAB_034b2724:
                    /* WARNING: Could not recover jumptable at 0x034b2734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar7 = (float)(*pVVar2->methodPtr)(pKVar6,pVVar2->method);
  return fVar7;
}

