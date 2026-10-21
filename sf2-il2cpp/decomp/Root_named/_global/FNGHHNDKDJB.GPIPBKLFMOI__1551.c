// TypeDefIndex 1551
// Namespace: 
// private class FNGHHNDKDJB.GPIPBKLFMOI
// Fields:
//   public BaseDialog BHDFAAMNDNC; // 0x10
//   public RaidViewContainer KJMABJIEPKA; // 0x18

// ===== public void .ctor()  [RVA 0x31AAB3C]
// FNGHHNDKDJB.GPIPBKLFMOI$$.ctor @ RVA 0x31AAB3C

void FNGHHNDKDJB_GPIPBKLFMOI___ctor(FNGHHNDKDJB_GPIPBKLFMOI_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void AFBEEALKOPE(bool CJNHFNHJHPE)  [RVA 0x31AA638]
// FNGHHNDKDJB.GPIPBKLFMOI$$AFBEEALKOPE @ RVA 0x31AA638

void FNGHHNDKDJB_GPIPBKLFMOI__AFBEEALKOPE
               (FNGHHNDKDJB_GPIPBKLFMOI_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *CMMIJCJOBBF;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *pNVar2;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar3;
  
                    /* try { // try from 032aa63c to 033aa64f has its CatchHandler @ 032ab030 */
                    /* try { // try from 032aa65c to 033aa66b has its CatchHandler @ 032ab00c */
  if ((DAT_04566b32 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566b32 = 1;
  }
  pNVar2 = (__this->fields).KJMABJIEPKA;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 032aa688 to 033aa68b has its CatchHandler @ 032aaff4 */
                    /* try { // try from 032aa68c to 033aa6b3 has its CatchHandler @ 032aafc4 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).KJMABJIEPKA;
    if (pNVar2 == (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) goto LAB_032aa710;
    Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__SetActive(pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
  }
  pNVar3 = (__this->fields).BHDFAAMNDNC;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 032aa6cc to 033aa6cf has its CatchHandler @ 032ab0a4 */
                    /* try { // try from 032aa6d0 to 033aa6f7 has its CatchHandler @ 032ab06c */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pNVar3 = (__this->fields).BHDFAAMNDNC;
  if (pNVar3 != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
    CMMIJCJOBBF = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
    Util__IHPDCBOFHPA(CMMIJCJOBBF,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
LAB_032aa710:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

