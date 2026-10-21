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
  IFKFDFGNMMN_o *pIVar9;
  HOOAAGABMBL_array *pHVar10;
  Il2CppObject **ppIVar11;
  HOOAAGABMBL_array **ppHVar12;
  
  if ((DAT_04567400 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_ResourcesAndBundles_LoadAsync<Sprite>__);
    FUN_01bab630(&StringLiteral_14100);
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
       (pIVar9 = (pNVar3->fields).OMDCNDHOACL, pIVar9 == (IFKFDFGNMMN_o *)0x0)) goto LAB_033a73a0;
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
      pSVar4 = System_String__Concat(StringLiteral_14100,pSVar5->m_Items[0],(MethodInfo *)0x0);
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

