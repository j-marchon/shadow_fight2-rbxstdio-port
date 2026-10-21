// TypeDefIndex 2893
// Namespace: 
// [CompilerGenerated]
// private sealed class DownloadingScreen.PMCOLFHGIDP : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public float time; // 0x20
//   public Action action; // 0x28

// ===== public void .ctor(int <>1__state)  [RVA 0x3441F28]
// Nekki.SF2.GUI.Dialogs.DownloadingScreen.PMCOLFHGIDP$$.ctor @ RVA 0x3441F28

void Nekki_SF2_GUI_Dialogs_DownloadingScreen_PMCOLFHGIDP___ctor
               (Nekki_SF2_GUI_Dialogs_DownloadingScreen_PMCOLFHGIDP_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x34421F8]
// Nekki.SF2.GUI.Dialogs.DownloadingScreen.PMCOLFHGIDP$$System.IDisposable.Dispose @ RVA 0x34421F8

void Nekki_SF2_GUI_Dialogs_DownloadingScreen_PMCOLFHGIDP__System_IDisposable_Dispose
               (Nekki_SF2_GUI_Dialogs_DownloadingScreen_PMCOLFHGIDP_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x34421FC]
// Nekki.SF2.GUI.Dialogs.DownloadingScreen.PMCOLFHGIDP$$MoveNext @ RVA 0x34421FC

bool Nekki_SF2_GUI_Dialogs_DownloadingScreen_PMCOLFHGIDP__MoveNext
               (Nekki_SF2_GUI_Dialogs_DownloadingScreen_PMCOLFHGIDP_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_WaitForSeconds_o *__this_00;
  Il2CppObject **ppIVar2;
  MethodInfo *method_00;
  System_Action_o *pSVar3;
  float seconds;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = __this;
                    /* catch() { ... } // from try @ 03542120 with catch @ 03542208 */
  if ((DAT_0456822e & 1) == 0) {
                    /* try { // try from 03542218 to 0364222b has its CatchHandler @ 035422a0 */
    auVar4 = FUN_01bab630(&UnityEngine_WaitForSeconds_TypeInfo);
    DAT_0456822e = 1;
  }
  method_00 = auVar4._0_8_;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035420dc with catch @ 0354222c
                       try { // try from 0354222c to 03642247 has its CatchHandler @ 03541ea8 */
  iVar1 = (__this->fields).__1__state;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035420cc with catch @ 03542230
                        */
  if (iVar1 == 1) {
                    /* try { // try from 03542284 to 0364228b has its CatchHandler @ 035422a0 */
    pSVar3 = (__this->fields).action;
                    /* try { // try from 0354228c to 03642297 has its CatchHandler @ 03541ea8 */
    (__this->fields).__1__state = -1;
    if (pSVar3 != (System_Action_o *)0x0) {
                    /* try { // try from 03542298 to 0364229f has its CatchHandler @ 035422a0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03542218 with catch @ 035422a0
                       catch(type#2 @ 00000000) { ... } // from try @ 03542284 with catch @ 035422a0
                       catch(type#2 @ 00000000) { ... } // from try @ 03542298 with catch @ 035422a0
                        */
      method_00 = (MethodInfo *)
                  (*(code *)(pSVar3->fields).super.super.invoke_impl)
                            ((pSVar3->fields).super.super.method_code,
                             (pSVar3->fields).super.super.method);
    }
    Nekki_SF2_GUI_Dialogs_DownloadingScreen__Destroy(method_00);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
                    /* try { // try from 03542248 to 0364224b has its CatchHandler @ 03542274 */
    seconds = (__this->fields).time;
                    /* try { // try from 0354224c to 03642283 has its CatchHandler @ 03541ea8 */
    __this_00 = (UnityEngine_WaitForSeconds_o *)
                thunk_FUN_01bda818(UnityEngine_WaitForSeconds_TypeInfo,auVar4._8_8_);
    UnityEngine_WaitForSeconds___ctor(__this_00,seconds,(MethodInfo *)0x0);
    ppIVar2 = &(__this->fields).__2__current;
    *ppIVar2 = (Il2CppObject *)__this_00;
                    /* catch() { ... } // from try @ 03542248 with catch @ 03542274 */
    thunk_FUN_01c20e04(ppIVar2,__this_00);
    (__this->fields).__1__state = 1;
    return true;
  }
  return false;
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x34422BC]
// Nekki.SF2.GUI.Dialogs.DownloadingScreen.PMCOLFHGIDP$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x34422BC

Il2CppObject *
Nekki_SF2_GUI_Dialogs_DownloadingScreen_PMCOLFHGIDP__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Nekki_SF2_GUI_Dialogs_DownloadingScreen_PMCOLFHGIDP_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x34422C4]
// Nekki.SF2.GUI.Dialogs.DownloadingScreen.PMCOLFHGIDP$$System.Collections.IEnumerator.Reset @ RVA 0x34422C4

void Nekki_SF2_GUI_Dialogs_DownloadingScreen_PMCOLFHGIDP__System_Collections_IEnumerator_Reset
               (Nekki_SF2_GUI_Dialogs_DownloadingScreen_PMCOLFHGIDP_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&
                             Method_Nekki_SF2_GUI_Dialogs_DownloadingScreen_PMCOLFHGIDP_System_Collections_IEnumerator_Reset__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x34422FC]
// Nekki.SF2.GUI.Dialogs.DownloadingScreen.PMCOLFHGIDP$$System.Collections.IEnumerator.get_Current @ RVA 0x34422FC

Il2CppObject *
Nekki_SF2_GUI_Dialogs_DownloadingScreen_PMCOLFHGIDP__System_Collections_IEnumerator_get_Current
          (Nekki_SF2_GUI_Dialogs_DownloadingScreen_PMCOLFHGIDP_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

