// TypeDefIndex 2030
// Namespace: 
// [CompilerGenerated]
// private sealed class CharacterSelectModule.FFPLKABOEHN : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public CharacterSelectModule <>4__this; // 0x20
//   private HOOAAGABMBL[] <>7__wrap1; // 0x28
//   private int <>7__wrap2; // 0x30

// ===== public void .ctor(int <>1__state)  [RVA 0x32A71FC]
// Nekki.SF2.GUI.Pvp.CharacterSelectModule.FFPLKABOEHN$$.ctor @ RVA 0x32A71FC

void Nekki_SF2_GUI_Pvp_CharacterSelectModule_FFPLKABOEHN___ctor
               (Nekki_SF2_GUI_Pvp_CharacterSelectModule_FFPLKABOEHN_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x32A7224]
// Nekki.SF2.GUI.Pvp.CharacterSelectModule.FFPLKABOEHN$$System.IDisposable.Dispose @ RVA 0x32A7224

void Nekki_SF2_GUI_Pvp_CharacterSelectModule_FFPLKABOEHN__System_IDisposable_Dispose
               (Nekki_SF2_GUI_Pvp_CharacterSelectModule_FFPLKABOEHN_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x32A7228]
// Nekki.SF2.GUI.Pvp.CharacterSelectModule.FFPLKABOEHN$$MoveNext @ RVA 0x32A7228

bool Nekki_SF2_GUI_Pvp_CharacterSelectModule_FFPLKABOEHN__MoveNext
               (Nekki_SF2_GUI_Pvp_CharacterSelectModule_FFPLKABOEHN_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  NLPJLHOEAOE_o *pNVar3;
  System_String_o *pSVar4;
  System_String_array *pSVar5;
  UnityEngine_ResourceRequest_o *pUVar6;
  MethodInfo *extraout_x1;
  uint uVar7;
  Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *pNVar8;
  PvpSettings_o *pIVar9;
  HOOAAGABMBL_array *pHVar10;
  Il2CppObject **ppIVar11;
  HOOAAGABMBL_array **ppHVar12;
  
  if ((DAT_04567400 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_ResourcesAndBundles_LoadAsync<Sprite>__);
    FUN_01bab630(&StringLiteral_14100/*"UI/Items/"*/);
    DAT_04567400 = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    uVar7 = (__this->fields).__7__wrap2 + 1;
    (__this->fields).__7__wrap2 = uVar7;
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    pNVar8 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (pNVar8 == (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *)0x0) goto LAB_033a73a0;
    (pNVar8->fields).PNCOPANDAGE = true;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    }
    pNVar3 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
    if ((pNVar3 == (NLPJLHOEAOE_o *)0x0) ||
       (pIVar9 = (pNVar3->fields).OMDCNDHOACL, pIVar9 == (PvpSettings_o *)0x0)) goto LAB_033a73a0;
    ppHVar12 = &(__this->fields).__7__wrap1;
    *ppHVar12 = (pIVar9->fields).HJCHDJBLAAG;
    thunk_FUN_01c20e04(ppHVar12);
    uVar7 = 0;
    (__this->fields).__7__wrap2 = 0;
  }
  ppHVar12 = &(__this->fields).__7__wrap1;
  pHVar10 = *ppHVar12;
  if (pHVar10 == (HOOAAGABMBL_array *)0x0) {
LAB_033a73a0:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar2 = (uint)pHVar10->max_length;
  if ((int)uVar2 <= (int)uVar7) {
    *ppHVar12 = (HOOAAGABMBL_array *)0x0;
    thunk_FUN_01c20e04(ppHVar12,0);
    return false;
  }
  if (uVar7 < uVar2) {
    if (((pHVar10->m_Items[(int)uVar7] == (HOOAAGABMBL_o *)0x0) ||
        (pSVar4 = (pHVar10->m_Items[(int)uVar7]->fields)._GPEFIOMJHNN_k__BackingField,
        pSVar4 == (System_String_o *)0x0)) ||
       (pSVar5 = System_String__Split(pSVar4,0x2e,0,(MethodInfo *)0x0),
       pSVar5 == (System_String_array *)0x0)) goto LAB_033a73a0;
    if ((int)pSVar5->max_length != 0) {
      pSVar4 = System_String__Concat(StringLiteral_14100/*"UI/Items/"*/,pSVar5->m_Items[0],(MethodInfo *)0x0);
      pUVar6 = UnityEngine_ResourcesAndBundles__LoadAsync<object>
                         (pSVar4,Method_UnityEngine_ResourcesAndBundles_LoadAsync<Sprite>__);
      ppIVar11 = &(__this->fields).__2__current;
      *ppIVar11 = (Il2CppObject *)pUVar6;
      thunk_FUN_01c20e04(ppIVar11,pUVar6);
      (__this->fields).__1__state = 1;
      return true;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x32A73A8]
// Nekki.SF2.GUI.Pvp.CharacterSelectModule.FFPLKABOEHN$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x32A73A8

Il2CppObject *
Nekki_SF2_GUI_Pvp_CharacterSelectModule_FFPLKABOEHN__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Nekki_SF2_GUI_Pvp_CharacterSelectModule_FFPLKABOEHN_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x32A73B0]
// Nekki.SF2.GUI.Pvp.CharacterSelectModule.FFPLKABOEHN$$System.Collections.IEnumerator.Reset @ RVA 0x32A73B0

void Nekki_SF2_GUI_Pvp_CharacterSelectModule_FFPLKABOEHN__System_Collections_IEnumerator_Reset
               (Nekki_SF2_GUI_Pvp_CharacterSelectModule_FFPLKABOEHN_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&
                             Method_Nekki_SF2_GUI_Pvp_CharacterSelectModule_FFPLKABOEHN_System_Collections_IEnumerator_Reset__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x32A73E8]
// Nekki.SF2.GUI.Pvp.CharacterSelectModule.FFPLKABOEHN$$System.Collections.IEnumerator.get_Current @ RVA 0x32A73E8

Il2CppObject *
Nekki_SF2_GUI_Pvp_CharacterSelectModule_FFPLKABOEHN__System_Collections_IEnumerator_get_Current
          (Nekki_SF2_GUI_Pvp_CharacterSelectModule_FFPLKABOEHN_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

