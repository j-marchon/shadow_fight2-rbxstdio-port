// Nekki.SF2.GUI.Menu.ProgressBarDojoBattlePass$$PBNBBJPDHGK @ RVA 0x357381C

void Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass__PBNBBJPDHGK
               (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_IEnumerator_o **ppSVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
                    /* try { // try from 03673830 to 03773833 has its CatchHandler @ 03673864 */
  if ((DAT_04568c73 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04568c73 = 1;
  }
                    /* try { // try from 03673850 to 03773863 has its CatchHandler @ 0367397c */
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  ppSVar7 = &(__this->fields).JJNJMJMBOLN;
  pSVar8 = *ppSVar7;
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* catch() { ... } // from try @ 03673830 with catch @ 03673864
                       try { // try from 03673864 to 037738e7 has its CatchHandler @ 0366c1b0 */
  pPVar4 = pPVar2->klass;
  uVar1._0_1_ = (pPVar4->_2).rank;
  uVar1._1_1_ = (pPVar4->_2).minimumAlignment;
                    /* catch() { ... } // from try @ 0366d528 with catch @ 0367386c */
                    /* catch() { ... } // from try @ 0367261c with catch @ 03673870 */
  uVar5 = (ulong)uVar1;
                    /* catch() { ... } // from try @ 03672614 with catch @ 03673874 */
                    /* catch() { ... } // from try @ 0366d54c with catch @ 03673878 */
  if (uVar5 != 0) {
                    /* catch() { ... } // from try @ 0366d4f0 with catch @ 0367387c */
                    /* catch() { ... } // from try @ 0366d4d8 with catch @ 03673880 */
    piVar6 = &((pPVar4->_1).interfaceOffsets)->offset;
    do {
                    /* catch() { ... } // from try @ 0366d554 with catch @ 03673884 */
                    /* catch() { ... } // from try @ 0366d53c with catch @ 03673888 */
                    /* catch() { ... } // from try @ 0366d510 with catch @ 0367388c */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                    /* catch() { ... } // from try @ 0366d438 with catch @ 036738ac */
                    /* catch() { ... } // from try @ 0366d4b8 with catch @ 036738b0 */
                    /* catch() { ... } // from try @ 03672600 with catch @ 036738b4 */
                    /* catch() { ... } // from try @ 0366d4a4 with catch @ 036738b8 */
        pVVar3 = pPVar4->vtable + (*piVar6 + 1);
        goto LAB_036738bc;
      }
                    /* catch() { ... } // from try @ 0366d48c with catch @ 03673890 */
      uVar5 = uVar5 - 1;
                    /* catch() { ... } // from try @ 0366d4d0 with catch @ 03673894 */
      piVar6 = piVar6 + 4;
                    /* catch() { ... } // from try @ 0367260c with catch @ 03673898 */
    } while (uVar5 != 0);
  }
                    /* catch() { ... } // from try @ 0366d45c with catch @ 0367389c */
                    /* catch() { ... } // from try @ 0366d444 with catch @ 036738a0 */
                    /* catch() { ... } // from try @ 03672608 with catch @ 036738a4 */
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
                    /* catch() { ... } // from try @ 03672604 with catch @ 036738a8 */
LAB_036738bc:
                    /* catch() { ... } // from try @ 0366d450 with catch @ 036738bc */
                    /* catch() { ... } // from try @ 0366d408 with catch @ 036738c0 */
                    /* catch() { ... } // from try @ 0366d3fc with catch @ 036738c4 */
                    /* catch() { ... } // from try @ 036725fc with catch @ 036738c8 */
  (*pVVar3->methodPtr)(pPVar2,pSVar8,pVVar3->method);
                    /* catch() { ... } // from try @ 036725f8 with catch @ 036738cc */
  __this_00 = (__this->fields)._hintContent;
  if ((__this_00 != (UnityEngine_RectTransform_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 036738e8 to 037738eb has its CatchHandler @ 036738f8 */
    UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
  }
  *ppSVar7 = (System_Collections_IEnumerator_o *)0x0;
                    /* catch() { ... } // from try @ 036738e8 with catch @ 036738f8 */
  thunk_FUN_01c20e04(ppSVar7,0);
  return;
}

