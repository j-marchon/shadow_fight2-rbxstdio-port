// Nekki.SF2.GUI.Fight.StylePanel$$UpdateStyleLabel @ RVA 0x3293734

void Nekki_SF2_GUI_Fight_StylePanel__UpdateStyleLabel
               (Nekki_SF2_GUI_Fight_StylePanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  NDGHNMIHOMN_o *__this_00;
  KKCEIILPLEC_o *pKVar2;
  System_String_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  
                    /* try { // try from 03393740 to 03493743 has its CatchHandler @ 03393768 */
                    /* try { // try from 03393744 to 0349376f has its CatchHandler @ 033935b4 */
  if ((DAT_04567346 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
                    /* catch() { ... } // from try @ 03393740 with catch @ 03393768 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 03393770 to 03493777 has its CatchHandler @ 0339378c */
    FUN_01bab630(&string_TypeInfo);
                    /* try { // try from 03393778 to 03493783 has its CatchHandler @ 033935b4 */
    DAT_04567346 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03393784 to 0349378b has its CatchHandler @ 0339378c */
  pNVar3 = (__this->fields).LLCBBBFOKMP;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03393770 with catch @ 0339378c
                       catch(type#2 @ 00000000) { ... } // from try @ 03393784 with catch @ 0339378c
                        */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03393790 to 034938b7 has its CatchHandler @ 03393790
                       catch() { ... } // from try @ 03393790 with catch @ 03393790
                       catch() { ... } // from try @ 03393a18 with catch @ 03393790
                       catch() { ... } // from try @ 03393a4c with catch @ 03393790
                       catch() { ... } // from try @ 03393a8c with catch @ 03393790
                       catch() { ... } // from try @ 03393abc with catch @ 03393790 */
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = MGNPHCAAEIO_TypeInfo->static_fields->EMBDCDBPFFE;
  if (__this_00 != (NDGHNMIHOMN_o *)0x0) {
    pKVar2 = NDGHNMIHOMN__PBOALOOBNEK(__this_00,(__this->fields).OOADLOIGCHI,(MethodInfo *)0x0);
    if (pKVar2 == (KKCEIILPLEC_o *)0x0) {
      return;
    }
    __this_01 = (pKVar2->fields).AABGOBCHPJC;
    if (__this_01 != (System_String_o *)0x0) {
      bVar1 = System_String__Equals
                        (__this_01,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
      if (bVar1) {
        return;
      }
      pNVar3 = (__this->fields).LLCBBBFOKMP;
      if ((pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
         (__this_02 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         __this_02 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(__this_02,true,(MethodInfo *)0x0);
        pNVar3 = (__this->fields).LLCBBBFOKMP;
        if (pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
          Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                    (pNVar3,(pKVar2->fields).AABGOBCHPJC,(MethodInfo *)0x0);
          pNVar3 = (__this->fields).LLCBBBFOKMP;
          if (pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03393868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(pNVar3->klass->vtable)._45_SetNativeSize.methodPtr)
                      (pNVar3,(pNVar3->klass->vtable)._45_SetNativeSize.method);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

