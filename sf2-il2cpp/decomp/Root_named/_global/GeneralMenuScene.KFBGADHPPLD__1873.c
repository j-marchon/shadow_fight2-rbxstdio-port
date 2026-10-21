// TypeDefIndex 1873
// Namespace: 
// [CompilerGenerated]
// private sealed class GeneralMenuScene.KFBGADHPPLD
// Fields:
//   public CanvasGroup prevSection; // 0x10
//   public CanvasGroup currentSection; // 0x18

// ===== internal float FJBEHIMBKEE()  [RVA 0x324FE20]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene.KFBGADHPPLD$$FJBEHIMBKEE @ RVA 0x324FE20

float Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KFBGADHPPLD__FJBEHIMBKEE
                (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KFBGADHPPLD_o *__this,MethodInfo *method
                )

{
  UnityEngine_CanvasGroup_o *__this_00;
  float fVar1;
  
                    /* catch() { ... } // from try @ 0334fdf4 with catch @ 0334fe20 */
  __this_00 = (__this->fields).prevSection;
  if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
                    /* try { // try from 0334fe30 to 0344fe43 has its CatchHandler @ 0334fef4 */
    fVar1 = UnityEngine_CanvasGroup__get_alpha(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal void HHHKPFDFBIF(float x)  [RVA 0x324FE3C]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene.KFBGADHPPLD$$HHHKPFDFBIF @ RVA 0x324FE3C

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KFBGADHPPLD__HHHKPFDFBIF
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KFBGADHPPLD_o *__this,float x,
               MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  
  __this_00 = (__this->fields).currentSection;
                    /* catch() { ... } // from try @ 0334f784 with catch @ 0334fe44
                       try { // try from 0334fe44 to 0344fe5b has its CatchHandler @ 0334f534 */
  if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
                    /* catch() { ... } // from try @ 0334fc6c with catch @ 0334fe48 */
                    /* catch() { ... } // from try @ 0334f7e0 with catch @ 0334fe4c */
    UnityEngine_CanvasGroup__set_alpha(__this_00,x,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal void JCCLIDGKNBK(float x)  [RVA 0x324FE58]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene.KFBGADHPPLD$$JCCLIDGKNBK @ RVA 0x324FE58

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KFBGADHPPLD__JCCLIDGKNBK
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KFBGADHPPLD_o *__this,float x,
               MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  
                    /* try { // try from 0334fe5c to 0344fe5f has its CatchHandler @ 0334fe70 */
  __this_00 = (__this->fields).prevSection;
  if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
    UnityEngine_CanvasGroup__set_alpha(__this_00,x,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0334fe5c with catch @ 0334fe70 */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x324F9F8]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene.KFBGADHPPLD$$.ctor @ RVA 0x324F9F8

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KFBGADHPPLD___ctor
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KFBGADHPPLD_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal float EDMBLFFJOFC()  [RVA 0x324FE74]
// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene.KFBGADHPPLD$$EDMBLFFJOFC @ RVA 0x324FE74

float Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KFBGADHPPLD__EDMBLFFJOFC
                (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_KFBGADHPPLD_o *__this,MethodInfo *method
                )

{
  UnityEngine_CanvasGroup_o *__this_00;
  float fVar1;
  
                    /* try { // try from 0334fe78 to 0344fedf has its CatchHandler @ 0334fef4 */
  __this_00 = (__this->fields).currentSection;
  if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
    fVar1 = UnityEngine_CanvasGroup__get_alpha(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

