// Nekki.SF2.GUI.Common.Hints.HintList$$SetHintGroupAnimationAvailable @ RVA 0x35157F0

void Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupAnimationAvailable
               (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,int32_t AEIKGKKKFMM,bool EOAIBJMEPND,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this_00;
  MethodInfo *method_00;
  
                    /* try { // try from 036157f0 to 037157f7 has its CatchHandler @ 03615934 */
  method_00 = (MethodInfo *)(ulong)EOAIBJMEPND;
                    /* try { // try from 0361580c to 03715813 has its CatchHandler @ 0361587c */
  if ((DAT_04568922 & 1) == 0) {
                    /* try { // try from 03615824 to 0371582f has its CatchHandler @ 03615874 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568922 = 1;
  }
  __this_00 = Nekki_SF2_GUI_Common_Hints_HintList__GetHintGroupByID(__this,AEIKGKKKFMM,method_00);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03615850 to 03715857 has its CatchHandler @ 0361592c */
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (bVar1) {
                    /* try { // try from 0361586c to 0371586f has its CatchHandler @ 03615878 */
                    /* try { // try from 03615870 to 0371589b has its CatchHandler @ 03615614 */
                    /* catch() { ... } // from try @ 03615824 with catch @ 03615874 */
    return;
  }
                    /* catch() { ... } // from try @ 0361586c with catch @ 03615878 */
  if (__this_00 != (Nekki_SF2_GUI_Common_Hints_HintGroup_o *)0x0) {
                    /* catch() { ... } // from try @ 0361580c with catch @ 0361587c */
    Nekki_SF2_GUI_Common_Hints_HintGroup__set_IsAnimationAvailable
              (__this_00,EOAIBJMEPND,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

