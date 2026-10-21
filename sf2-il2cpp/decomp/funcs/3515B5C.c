// Nekki.SF2.GUI.Common.Hints.HintList$$IsTutorialBlockActive @ RVA 0x3515B5C

bool Nekki_SF2_GUI_Common_Hints_HintList__IsTutorialBlockActive
               (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,int32_t AEIKGKKKFMM,MethodInfo *method
               )

{
  bool bVar1;
  Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this_00;
  
                    /* try { // try from 03615b64 to 03715bf7 has its CatchHandler @ 03615b64
                       catch() { ... } // from try @ 03615b64 with catch @ 03615b64
                       catch() { ... } // from try @ 03615c1c with catch @ 03615b64
                       catch() { ... } // from try @ 03615c5c with catch @ 03615b64
                       catch() { ... } // from try @ 03615c84 with catch @ 03615b64
                       catch() { ... } // from try @ 03615cbc with catch @ 03615b64 */
  if ((DAT_04568925 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568925 = 1;
  }
  __this_00 = Nekki_SF2_GUI_Common_Hints_HintList__GetHintGroupByID(__this,AEIKGKKKFMM,method);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (bVar1) {
    return false;
  }
  if (__this_00 != (Nekki_SF2_GUI_Common_Hints_HintGroup_o *)0x0) {
                    /* try { // try from 03615bf8 to 03715bff has its CatchHandler @ 03615c68 */
    bVar1 = Nekki_SF2_GUI_Common_Hints_HintGroup__get_IsTutorialBlockActive
                      (__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

