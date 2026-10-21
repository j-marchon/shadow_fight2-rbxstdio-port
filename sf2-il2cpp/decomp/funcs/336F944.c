// Nekki.SF2.GUI.Shop.PerksPanel$$IsPerkHintShowed @ RVA 0x336F944

bool Nekki_SF2_GUI_Shop_PerksPanel__IsPerkHintShowed
               (Nekki_SF2_GUI_Shop_PerksPanel_o *__this,Nekki_SF2_GUI_Common_PerkUI_o *FLLFOOBLPLJ,
               MethodInfo *method)

{
  ushort uVar1;
  undefined1 uVar2;
  CLMJPODNPKB_o *pCVar3;
  UnityEngine_GameObject_o *pUVar4;
  VirtualInvokeData *pVVar5;
  CLMJPODNPKB_c *pCVar6;
  ulong uVar7;
  int32_t *piVar8;
  
                    /* try { // try from 0346f94c to 0356f96f has its CatchHandler @ 0346f840 */
  if ((DAT_04567b0b & 1) == 0) {
    FUN_01bab630(&CLMJPODNPKB_TypeInfo);
    DAT_04567b0b = 1;
  }
                    /* try { // try from 0346f970 to 0356f973 has its CatchHandler @ 0346f97c */
                    /* try { // try from 0346f974 to 0356f99f has its CatchHandler @ 0346f840 */
  pCVar3 = Nekki_SF2_GUI_Common_HintCanvas__get_Instance((MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0346f920 with catch @ 0346f978
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0346f970 with catch @ 0346f97c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0346f93c with catch @ 0346f980
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0346f924 with catch @ 0346f984
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0346f904 with catch @ 0346f988
                        */
  if ((FLLFOOBLPLJ == (Nekki_SF2_GUI_Common_PerkUI_o *)0x0) ||
     (pUVar4 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)FLLFOOBLPLJ,(MethodInfo *)0x0),
     pCVar3 == (CLMJPODNPKB_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pCVar6 = pCVar3->klass;
  uVar1._0_1_ = (pCVar6->_2).rank;
  uVar1._1_1_ = (pCVar6->_2).minimumAlignment;
                    /* try { // try from 0346f9a0 to 0356f9a3 has its CatchHandler @ 0346f9cc */
  uVar7 = (ulong)uVar1;
                    /* try { // try from 0346f9a4 to 0356f9db has its CatchHandler @ 0346f840 */
  if (uVar7 != 0) {
    piVar8 = &((pCVar6->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
          (Il2CppClass *)CLMJPODNPKB_TypeInfo) {
                    /* try { // try from 0346f9dc to 0356f9e3 has its CatchHandler @ 0346f9f8 */
                    /* try { // try from 0346f9e4 to 0356f9ef has its CatchHandler @ 0346f840 */
        pVVar5 = pCVar6->vtable + (*piVar8 + 1);
        goto LAB_0346f9ec;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
                    /* catch() { ... } // from try @ 0346f9a0 with catch @ 0346f9cc */
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(pCVar3,CLMJPODNPKB_TypeInfo,1);
LAB_0346f9ec:
                    /* try { // try from 0346f9f0 to 0356f9f7 has its CatchHandler @ 0346f9f8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0346f9dc with catch @ 0346f9f8
                       catch(type#2 @ 00000000) { ... } // from try @ 0346f9f0 with catch @ 0346f9f8
                        */
                    /* try { // try from 0346f9fc to 0356fef7 has its CatchHandler @ 0346f9fc
                       catch() { ... } // from try @ 0346f9fc with catch @ 0346f9fc
                       catch() { ... } // from try @ 0346ff40 with catch @ 0346f9fc
                       catch() { ... } // from try @ 0346ffc8 with catch @ 0346f9fc
                       catch() { ... } // from try @ 03470008 with catch @ 0346f9fc
                       catch() { ... } // from try @ 03470038 with catch @ 0346f9fc */
                    /* WARNING: Could not recover jumptable at 0x0346fa00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*pVVar5->methodPtr)(pCVar3,pUVar4,pVVar5->method);
  return (bool)uVar2;
}

