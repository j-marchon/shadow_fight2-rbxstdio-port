// TypeDefIndex 381
// Namespace: 
// [CompilerGenerated]
// private sealed class ItemSetDialog.CBOHPMNMGHO : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public ItemSetDialog <>4__this; // 0x20

// ===== public void .ctor(int <>1__state)  [RVA 0x347C58C]
// Nekki.SF2.GUI.Dialogs.ItemSetDialog.CBOHPMNMGHO$$.ctor @ RVA 0x347C58C

void Nekki_SF2_GUI_Dialogs_ItemSetDialog_CBOHPMNMGHO___ctor
               (Nekki_SF2_GUI_Dialogs_ItemSetDialog_CBOHPMNMGHO_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x347CC50]
// Nekki.SF2.GUI.Dialogs.ItemSetDialog.CBOHPMNMGHO$$System.IDisposable.Dispose @ RVA 0x347CC50

void Nekki_SF2_GUI_Dialogs_ItemSetDialog_CBOHPMNMGHO__System_IDisposable_Dispose
               (Nekki_SF2_GUI_Dialogs_ItemSetDialog_CBOHPMNMGHO_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x347CC54]
// Nekki.SF2.GUI.Dialogs.ItemSetDialog.CBOHPMNMGHO$$MoveNext @ RVA 0x347CC54

bool Nekki_SF2_GUI_Dialogs_ItemSetDialog_CBOHPMNMGHO__MoveNext
               (Nekki_SF2_GUI_Dialogs_ItemSetDialog_CBOHPMNMGHO_o *__this,MethodInfo *method)

{
  int iVar1;
  Nekki_SF2_GUI_HintBox_o *pNVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_WaitForSeconds_o *__this_00;
  Il2CppObject **ppIVar4;
  Nekki_SF2_GUI_Dialogs_ItemSetDialog_o *pNVar5;
  float seconds;
  
                    /* try { // try from 0357cc54 to 0367cc5b has its CatchHandler @ 0357cd6c */
                    /* try { // try from 0357cc5c to 0367cc6f has its CatchHandler @ 0357cd54 */
  if ((DAT_04568360 & 1) == 0) {
                    /* try { // try from 0357cc74 to 0367cc7f has its CatchHandler @ 0357cd80 */
    FUN_01bab630(&UnityEngine_WaitForSeconds_TypeInfo);
                    /* try { // try from 0357cc80 to 0367ccb3 has its CatchHandler @ 0357cdc0 */
    DAT_04568360 = 1;
  }
  iVar1 = (__this->fields).__1__state;
  pNVar5 = (__this->fields).__4__this;
  if (iVar1 == 1) {
                    /* try { // try from 0357cd04 to 0367cd07 has its CatchHandler @ 0357cd74 */
                    /* try { // try from 0357cd08 to 0367cd0b has its CatchHandler @ 0357cd70 */
    (__this->fields).__1__state = -1;
                    /* try { // try from 0357cd0c to 0367cd0f has its CatchHandler @ 0357cd64 */
                    /* try { // try from 0357cd10 to 0367cd13 has its CatchHandler @ 0357cd60 */
                    /* try { // try from 0357cd14 to 0367cd17 has its CatchHandler @ 0357cd5c */
                    /* try { // try from 0357cd18 to 0367cd1b has its CatchHandler @ 0357c3dc */
                    /* try { // try from 0357cd1c to 0367cd1f has its CatchHandler @ 0357cd28 */
                    /* try { // try from 0357cd20 to 0367ce03 has its CatchHandler @ 0357c3dc */
    if (((pNVar5 == (Nekki_SF2_GUI_Dialogs_ItemSetDialog_o *)0x0) ||
        (pNVar2 = (pNVar5->fields).HintBox, pNVar2 == (Nekki_SF2_GUI_HintBox_o *)0x0)) ||
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0357cd58;
                    /* catch() { ... } // from try @ 0357cd1c with catch @ 0357cd28 */
                    /* catch() { ... } // from try @ 0357ca74 with catch @ 0357cd2c */
    UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0357caa0 with catch @ 0357cd30 */
                    /* catch() { ... } // from try @ 0357cae0 with catch @ 0357cd34 */
                    /* catch() { ... } // from try @ 0357cb84 with catch @ 0357cd38 */
    (pNVar5->fields).LKDFKLMLCBL = (System_Collections_IEnumerator_o *)0x0;
                    /* catch() { ... } // from try @ 0357cb34 with catch @ 0357cd3c */
    thunk_FUN_01c20e04(&(pNVar5->fields).LKDFKLMLCBL,0);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
                    /* try { // try from 0357ccb4 to 0367cceb has its CatchHandler @ 0357c3dc */
    if (((pNVar5 != (Nekki_SF2_GUI_Dialogs_ItemSetDialog_o *)0x0) &&
        (pNVar2 = (pNVar5->fields).HintBox, pNVar2 != (Nekki_SF2_GUI_HintBox_o *)0x0)) &&
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
      seconds = (pNVar5->fields).HintCooldown;
      __this_00 = (UnityEngine_WaitForSeconds_o *)
                  thunk_FUN_01bda818(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(__this_00,seconds,(MethodInfo *)0x0);
      ppIVar4 = &(__this->fields).__2__current;
                    /* try { // try from 0357ccec to 0367ccef has its CatchHandler @ 0357ce78 */
      *ppIVar4 = (Il2CppObject *)__this_00;
                    /* try { // try from 0357ccf0 to 0367ccf3 has its CatchHandler @ 0357ce64 */
                    /* try { // try from 0357ccf4 to 0367ccf7 has its CatchHandler @ 0357ce60 */
                    /* try { // try from 0357ccf8 to 0367ccff has its CatchHandler @ 0357ce98 */
      thunk_FUN_01c20e04(ppIVar4,__this_00);
      (__this->fields).__1__state = 1;
      return true;
                    /* try { // try from 0357cd00 to 0367cd03 has its CatchHandler @ 0357cdc8 */
    }
LAB_0357cd58:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0357cb74 with catch @ 0357cd58 */
    FUN_01bab8c8();
  }
                    /* catch() { ... } // from try @ 0357caf0 with catch @ 0357cd40 */
                    /* catch() { ... } // from try @ 0357cb58 with catch @ 0357cd44 */
                    /* catch() { ... } // from try @ 0357cb9c with catch @ 0357cd48 */
                    /* catch() { ... } // from try @ 0357cb4c with catch @ 0357cd4c */
                    /* catch() { ... } // from try @ 0357cbe0 with catch @ 0357cd50 */
                    /* catch() { ... } // from try @ 0357cc5c with catch @ 0357cd54 */
  return false;
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x347CD5C]
// Nekki.SF2.GUI.Dialogs.ItemSetDialog.CBOHPMNMGHO$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x347CD5C

Il2CppObject *
Nekki_SF2_GUI_Dialogs_ItemSetDialog_CBOHPMNMGHO__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Nekki_SF2_GUI_Dialogs_ItemSetDialog_CBOHPMNMGHO_o *__this,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 0357cd14 with catch @ 0357cd5c */
                    /* catch() { ... } // from try @ 0357cd10 with catch @ 0357cd60 */
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x347CD64]
// Nekki.SF2.GUI.Dialogs.ItemSetDialog.CBOHPMNMGHO$$System.Collections.IEnumerator.Reset @ RVA 0x347CD64

void Nekki_SF2_GUI_Dialogs_ItemSetDialog_CBOHPMNMGHO__System_Collections_IEnumerator_Reset
               (Nekki_SF2_GUI_Dialogs_ItemSetDialog_CBOHPMNMGHO_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
                    /* catch() { ... } // from try @ 0357cd0c with catch @ 0357cd64 */
                    /* catch() { ... } // from try @ 0357cab8 with catch @ 0357cd68 */
                    /* catch() { ... } // from try @ 0357cc54 with catch @ 0357cd6c */
                    /* catch() { ... } // from try @ 0357cd08 with catch @ 0357cd70 */
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
                    /* catch() { ... } // from try @ 0357cd04 with catch @ 0357cd74 */
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
                    /* catch() { ... } // from try @ 0357cba8 with catch @ 0357cd78 */
                    /* catch() { ... } // from try @ 0357cc3c with catch @ 0357cd7c */
                    /* catch() { ... } // from try @ 0357cc74 with catch @ 0357cd80 */
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0357cbc8 with catch @ 0357cd84 */
                    /* catch() { ... } // from try @ 0357cac4 with catch @ 0357cd88 */
                    /* catch() { ... } // from try @ 0357cc30 with catch @ 0357cd8c */
  uVar1 = thunk_FUN_01bb9178(&
                             Method_Nekki_SF2_GUI_Dialogs_ItemSetDialog_CBOHPMNMGHO_System_Collections_IEnumerator_Reset__
                            );
                    /* catch() { ... } // from try @ 0357cc18 with catch @ 0357cd90 */
                    /* catch() { ... } // from try @ 0357cb08 with catch @ 0357cd94 */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0357cc08 with catch @ 0357cd98 */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x347CD9C]
// Nekki.SF2.GUI.Dialogs.ItemSetDialog.CBOHPMNMGHO$$System.Collections.IEnumerator.get_Current @ RVA 0x347CD9C

Il2CppObject *
Nekki_SF2_GUI_Dialogs_ItemSetDialog_CBOHPMNMGHO__System_Collections_IEnumerator_get_Current
          (Nekki_SF2_GUI_Dialogs_ItemSetDialog_CBOHPMNMGHO_o *__this,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 0357cbec with catch @ 0357cd9c */
                    /* catch() { ... } // from try @ 0357cb2c with catch @ 0357cda0 */
  return (__this->fields).__2__current;
}

