// GPEHLCDLNDL$$LNENELMPIOG @ RVA 0x3127E48

void GPEHLCDLNDL__LNENELMPIOG(Nekki_SF2_GUI_Tutorial_TutorialNode_o *JHMENEKPIBO,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_TutorialNode__o *__this;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Tutorial_TutorialNode_array *pNVar3;
  
  if ((DAT_0456666c & 1) == 0) {
    FUN_01bab630(&GPEHLCDLNDL_TypeInfo);
                    /* try { // try from 03227e7c to 03327e8b has its CatchHandler @ 03227ea0 */
    FUN_01bab630(&Method_System_Collections_Generic_List<TutorialNode>_Add__);
    DAT_0456666c = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03227e8c to 03327ea7 has its CatchHandler @ 03227f0c */
  if ((GPEHLCDLNDL_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03227d20 with catch @ 03227e94 */
    thunk_FUN_01ba7564(GPEHLCDLNDL_TypeInfo,method);
  }
  lVar2 = Method_System_Collections_Generic_List<TutorialNode>_Add__;
                    /* catch() { ... } // from try @ 03227d5c with catch @ 03227ea0
                       catch() { ... } // from try @ 03227e7c with catch @ 03227ea0 */
  __this = GPEHLCDLNDL_TypeInfo->static_fields->JFNDMOBADAG;
  if (__this != (System_Collections_Generic_List_TutorialNode__o *)0x0) {
                    /* try { // try from 03227ea8 to 03327ecf has its CatchHandler @ 03226e68 */
                    /* catch() { ... } // from try @ 0322709c with catch @ 03227eb0 */
                    /* catch() { ... } // from try @ 0322708c with catch @ 03227eb4 */
    pNVar3 = (__this->fields)._items;
    (__this->fields)._version = (__this->fields)._version + 1;
    if (pNVar3 != (Nekki_SF2_GUI_Tutorial_TutorialNode_array *)0x0) {
      uVar1 = (__this->fields)._size;
                    /* try { // try from 03227ed0 to 03327ed3 has its CatchHandler @ 03227f00 */
      if (uVar1 < (uint)pNVar3->max_length) {
        (__this->fields)._size = uVar1 + 1;
                    /* try { // try from 03227ee4 to 03327eff has its CatchHandler @ 03227f0c */
        pNVar3->m_Items[(int)uVar1] = JHMENEKPIBO;
        thunk_FUN_01c20e04(pNVar3->m_Items + (int)uVar1,JHMENEKPIBO);
        return;
      }
                    /* catch() { ... } // from try @ 03227ed0 with catch @ 03227f00 */
                    /* catch() { ... } // from try @ 03227d3c with catch @ 03227f0c
                       catch() { ... } // from try @ 03227e8c with catch @ 03227f0c
                       catch() { ... } // from try @ 03227ee4 with catch @ 03227f0c */
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)JHMENEKPIBO,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

