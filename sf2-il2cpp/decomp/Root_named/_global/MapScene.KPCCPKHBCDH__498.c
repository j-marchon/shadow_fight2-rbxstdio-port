// TypeDefIndex 498
// Namespace: 
// [CompilerGenerated]
// private sealed class MapScene.KPCCPKHBCDH : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public MapScene <>4__this; // 0x20

// ===== public void .ctor(int <>1__state)  [RVA 0x3589CDC]
// Nekki.SF2.GUI.Map.MapScene.KPCCPKHBCDH$$.ctor @ RVA 0x3589CDC

void Nekki_SF2_GUI_Map_MapScene_KPCCPKHBCDH___ctor
               (Nekki_SF2_GUI_Map_MapScene_KPCCPKHBCDH_o *__this,int32_t __1__state,
               MethodInfo *method)

{
                    /* try { // try from 03689ce4 to 03789ce7 has its CatchHandler @ 03689e38 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
                    /* try { // try from 03689cf4 to 03789d1b has its CatchHandler @ 03689e58 */
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x3589D04]
// Nekki.SF2.GUI.Map.MapScene.KPCCPKHBCDH$$System.IDisposable.Dispose @ RVA 0x3589D04

void Nekki_SF2_GUI_Map_MapScene_KPCCPKHBCDH__System_IDisposable_Dispose
               (Nekki_SF2_GUI_Map_MapScene_KPCCPKHBCDH_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x3589D08]
// Nekki.SF2.GUI.Map.MapScene.KPCCPKHBCDH$$MoveNext @ RVA 0x3589D08

bool Nekki_SF2_GUI_Map_MapScene_KPCCPKHBCDH__MoveNext
               (Nekki_SF2_GUI_Map_MapScene_KPCCPKHBCDH_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  Nekki_SF2_GUI_Map_InfoBattle_o *pNVar3;
  Il2CppObject **ppIVar4;
  Nekki_SF2_GUI_Map_ZoneScrollItem_o *pNVar5;
  Nekki_SF2_GUI_Map_MapScene_o *pNVar6;
  
  if ((DAT_04568d2f & 1) == 0) {
                    /* try { // try from 03689d28 to 03789d2f has its CatchHandler @ 03689e50 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568d2f = 1;
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    pNVar6 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (pNVar6 == (Nekki_SF2_GUI_Map_MapScene_o *)0x0) {
LAB_03689e08:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((pNVar6->fields).super.HPPDLINDJKA == false) {
                    /* try { // try from 03689d80 to 03789dbb has its CatchHandler @ 03689e3c */
      pNVar3 = (pNVar6->fields).OCBDFDALFLL;
      if (pNVar3 == (Nekki_SF2_GUI_Map_InfoBattle_o *)0x0) goto LAB_03689e08;
      bVar2 = Nekki_SF2_GUI_UIModule__get_IsDestroyed
                        ((Nekki_SF2_GUI_UIModule_o *)pNVar3,(MethodInfo *)0x0);
      if (!bVar2) {
        pNVar3 = (pNVar6->fields).OCBDFDALFLL;
        if (pNVar3 == (Nekki_SF2_GUI_Map_InfoBattle_o *)0x0) goto LAB_03689e08;
        Nekki_SF2_GUI_Map_InfoBattle__Refresh(pNVar3,(MethodInfo *)0x0);
      }
      pNVar5 = (pNVar6->fields).CAJCGACFIHD;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar2) {
                    /* try { // try from 03689dd4 to 03789ddf has its CatchHandler @ 03689e44 */
        pNVar5 = (pNVar6->fields).CAJCGACFIHD;
        if (pNVar5 == (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0) goto LAB_03689e08;
        bVar2 = UnityEngine_EventSystems_UIBehaviour__IsDestroyed
                          ((UnityEngine_EventSystems_UIBehaviour_o *)pNVar5,(MethodInfo *)0x0);
        if (!bVar2) {
          pNVar5 = (pNVar6->fields).CAJCGACFIHD;
          if (pNVar5 == (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0) goto LAB_03689e08;
          Nekki_SF2_GUI_Map_ZoneScrollItem__UpdateBattleFocus(pNVar5,(MethodInfo *)0x0);
        }
      }
    }
  }
  else if (iVar1 == 0) {
    ppIVar4 = &(__this->fields).__2__current;
    *ppIVar4 = (Il2CppObject *)0x0;
                    /* try { // try from 03689d50 to 03789d53 has its CatchHandler @ 03689e34 */
                    /* try { // try from 03689d54 to 03789d5f has its CatchHandler @ 03689e48 */
    (__this->fields).__1__state = -1;
    thunk_FUN_01c20e04(ppIVar4,0);
    (__this->fields).__1__state = 1;
    return true;
  }
                    /* try { // try from 03689df8 to 03789e03 has its CatchHandler @ 03689e40 */
  return false;
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x3589E0C]
// Nekki.SF2.GUI.Map.MapScene.KPCCPKHBCDH$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x3589E0C

Il2CppObject *
Nekki_SF2_GUI_Map_MapScene_KPCCPKHBCDH__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Nekki_SF2_GUI_Map_MapScene_KPCCPKHBCDH_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x3589E14]
// Nekki.SF2.GUI.Map.MapScene.KPCCPKHBCDH$$System.Collections.IEnumerator.Reset @ RVA 0x3589E14

void Nekki_SF2_GUI_Map_MapScene_KPCCPKHBCDH__System_Collections_IEnumerator_Reset
               (Nekki_SF2_GUI_Map_MapScene_KPCCPKHBCDH_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
                    /* try { // try from 03689e30 to 03789e33 has its CatchHandler @ 03689e4c */
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03689d50 with catch @ 03689e34
                       try { // try from 03689e34 to 03789e77 has its CatchHandler @ 03689bc4 */
                    /* catch() { ... } // from try @ 03689ce4 with catch @ 03689e38 */
                    /* catch() { ... } // from try @ 03689d80 with catch @ 03689e3c */
  uVar1 = thunk_FUN_01bb9178(&
                             Method_Nekki_SF2_GUI_Map_MapScene_KPCCPKHBCDH_System_Collections_IEnumerator_Reset__
                            );
                    /* catch() { ... } // from try @ 03689df8 with catch @ 03689e40 */
                    /* catch() { ... } // from try @ 03689dd4 with catch @ 03689e44 */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03689d54 with catch @ 03689e48 */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x3589E4C]
// Nekki.SF2.GUI.Map.MapScene.KPCCPKHBCDH$$System.Collections.IEnumerator.get_Current @ RVA 0x3589E4C

Il2CppObject *
Nekki_SF2_GUI_Map_MapScene_KPCCPKHBCDH__System_Collections_IEnumerator_get_Current
          (Nekki_SF2_GUI_Map_MapScene_KPCCPKHBCDH_o *__this,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 03689e30 with catch @ 03689e4c */
                    /* catch() { ... } // from try @ 03689d28 with catch @ 03689e50 */
  return (__this->fields).__2__current;
}

