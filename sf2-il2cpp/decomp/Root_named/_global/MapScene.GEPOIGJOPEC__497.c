// TypeDefIndex 497
// Namespace: 
// [CompilerGenerated]
// private sealed class MapScene.GEPOIGJOPEC : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18

// ===== public void .ctor(int <>1__state)  [RVA 0x3589B4C]
// Nekki.SF2.GUI.Map.MapScene.GEPOIGJOPEC$$.ctor @ RVA 0x3589B4C

void Nekki_SF2_GUI_Map_MapScene_GEPOIGJOPEC___ctor
               (Nekki_SF2_GUI_Map_MapScene_GEPOIGJOPEC_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x3589B74]
// Nekki.SF2.GUI.Map.MapScene.GEPOIGJOPEC$$System.IDisposable.Dispose @ RVA 0x3589B74

void Nekki_SF2_GUI_Map_MapScene_GEPOIGJOPEC__System_IDisposable_Dispose
               (Nekki_SF2_GUI_Map_MapScene_GEPOIGJOPEC_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x3589B78]
// Nekki.SF2.GUI.Map.MapScene.GEPOIGJOPEC$$MoveNext @ RVA 0x3589B78

bool Nekki_SF2_GUI_Map_MapScene_GEPOIGJOPEC__MoveNext
               (Nekki_SF2_GUI_Map_MapScene_GEPOIGJOPEC_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  RaidQuestsManager_o *__this_00;
  UnityEngine_WaitForSeconds_o *__this_01;
  MethodInfo *extraout_x1;
  Il2CppObject **ppIVar3;
  
  if ((DAT_04568d2e & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Map_MapScene_TypeInfo);
    FUN_01bab630(&UnityEngine_WaitForSeconds_TypeInfo);
    DAT_04568d2e = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).__1__state;
                    /* try { // try from 03689bc4 to 03789c3f has its CatchHandler @ 03689bc4
                       catch() { ... } // from try @ 03689bc4 with catch @ 03689bc4
                       catch() { ... } // from try @ 03689e34 with catch @ 03689bc4
                       catch() { ... } // from try @ 03689e90 with catch @ 03689bc4
                       catch() { ... } // from try @ 03689f4c with catch @ 03689bc4 */
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if ((Nekki_SF2_GUI_Map_MapScene_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Map_MapScene_TypeInfo,method);
    }
    bVar2 = Nekki_SF2_GUI_Map_MapScene__IOFENOLJOOO((MethodInfo *)0x0);
    if (bVar2) {
      DialogsOpener__ENALHJGHEEN((MethodInfo *)0x0);
                    /* try { // try from 03689c40 to 03789c4b has its CatchHandler @ 03689e60 */
      RaidQuestsManager__DJJAINGGBJN((MethodInfo *)0x0);
    }
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
    }
    __this_00 = HJPEKDOPBHN__CCIPAEHGPFC((MethodInfo *)0x0);
    if (__this_00 == (RaidQuestsManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    RaidQuestsManager__MFKHGFEDMIO(__this_00,(KEFHDOHHHML_o *)0x0,(MethodInfo *)0x0);
  }
  __this_01 = (UnityEngine_WaitForSeconds_o *)
              thunk_FUN_01bda818(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(__this_01,1.0,(MethodInfo *)0x0);
  ppIVar3 = &(__this->fields).__2__current;
                    /* try { // try from 03689c64 to 03789c9f has its CatchHandler @ 03689e5c */
  *ppIVar3 = (Il2CppObject *)__this_01;
  thunk_FUN_01c20e04(ppIVar3,__this_01);
  (__this->fields).__1__state = 1;
  return true;
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x3589C94]
// Nekki.SF2.GUI.Map.MapScene.GEPOIGJOPEC$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x3589C94

Il2CppObject *
Nekki_SF2_GUI_Map_MapScene_GEPOIGJOPEC__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Nekki_SF2_GUI_Map_MapScene_GEPOIGJOPEC_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x3589C9C]
// Nekki.SF2.GUI.Map.MapScene.GEPOIGJOPEC$$System.Collections.IEnumerator.Reset @ RVA 0x3589C9C

void Nekki_SF2_GUI_Map_MapScene_GEPOIGJOPEC__System_Collections_IEnumerator_Reset
               (Nekki_SF2_GUI_Map_MapScene_GEPOIGJOPEC_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 03689cbc to 03789ccb has its CatchHandler @ 03689e54 */
  uVar1 = thunk_FUN_01bb9178(&
                             Method_Nekki_SF2_GUI_Map_MapScene_GEPOIGJOPEC_System_Collections_IEnumerator_Reset__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x3589CD4]
// Nekki.SF2.GUI.Map.MapScene.GEPOIGJOPEC$$System.Collections.IEnumerator.get_Current @ RVA 0x3589CD4

Il2CppObject *
Nekki_SF2_GUI_Map_MapScene_GEPOIGJOPEC__System_Collections_IEnumerator_get_Current
          (Nekki_SF2_GUI_Map_MapScene_GEPOIGJOPEC_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

