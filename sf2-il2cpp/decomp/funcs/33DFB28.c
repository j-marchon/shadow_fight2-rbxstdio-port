// Nekki.SF2.GUI.Pvp.PhaseWeapon$$FDNHGCEFCFK @ RVA 0x33DFB28

void Nekki_SF2_GUI_Pvp_PhaseWeapon__FDNHGCEFCFK
               (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *__this,MethodInfo *method)

{
  UnityEngine_UIVertex_array **ppUVar1;
  int32_t iVar2;
  bool_conflict bVar3;
  bool bVar4;
  Nekki_SF2_GUI_Common_Hints_HintCache_o *__this_00;
  System_String_array *values;
  System_String_o *pSVar5;
  UnityEngine_GameObject_o *pUVar6;
  SFButton_o *pSVar7;
  UnityEngine_UIVertex_array *pUVar8;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar9;
  Nekki_SF2_GUI_LabelAlias_o *pNVar10;
  int32_t local_44;
  
  if ((DAT_04567e95 & 1) == 0) {
    FUN_01bab630(&GJAEIBMAFGE_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_22513);
    FUN_01bab630(&StringLiteral_15820);
    FUN_01bab630(&StringLiteral_15819);
    FUN_01bab630(&StringLiteral_22504);
    DAT_04567e95 = 1;
  }
  pNVar10 = (__this->fields)._ResetToDefaultHint;
  if (pNVar10 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    pUVar8 = (pNVar10->fields).super.super.m_TempVerts;
    if ((pUVar8 == (UnityEngine_UIVertex_array *)0x0) || ((int)pUVar8->max_length < 2)) {
      __this_00 = Nekki_SF2_GUI_Common_Hints_HintCache__get_Current((MethodInfo *)0x0);
      if (__this_00 == (Nekki_SF2_GUI_Common_Hints_HintCache_o *)0x0) goto LAB_034dffcc;
      ppUVar1 = &(pNVar10->fields).super.super.m_TempVerts;
      pUVar8 = (UnityEngine_UIVertex_array *)
               Nekki_SF2_GUI_Common_Hints_HintCache__GetAllHints(__this_00,0,(MethodInfo *)0x0);
      *ppUVar1 = pUVar8;
      thunk_FUN_01c20e04(ppUVar1,pUVar8);
      pNVar10 = (__this->fields)._ResetToDefaultHint;
    }
    bVar3 = (__this->fields).LHNJHBEEBMN;
    values = (System_String_array *)FUN_01bab718(string___TypeInfo,7);
    if (values != (System_String_array *)0x0) {
      if (bVar3 == false) {
        if ((int)values->max_length == 0) goto LAB_034dffd0;
                    /* try { // try from 034dfdc0 to 035dfddb has its CatchHandler @ 034e0138 */
        values->m_Items[0] = StringLiteral_15819;
        thunk_FUN_01c20e04();
        iVar2 = (__this->fields).AFEOEPFDNLI;
        if ((GJAEIBMAFGE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 034dfdf4 to 035dfdfb has its CatchHandler @ 034e0144 */
        local_44 = GJAEIBMAFGE__MICKHLIJECC(0xc,iVar2,(MethodInfo *)0x0);
        pSVar5 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
                    /* try { // try from 034dfe0c to 035dfe13 has its CatchHandler @ 034e0148 */
        if ((uint)values->max_length < 2) goto LAB_034dffd0;
        values->m_Items[1] = pSVar5;
                    /* try { // try from 034dfe20 to 035dfe27 has its CatchHandler @ 034e0130 */
        thunk_FUN_01c20e04(values->m_Items + 1,pSVar5);
        if ((uint)values->max_length < 3) goto LAB_034dffd0;
                    /* try { // try from 034dfe38 to 035dfe3f has its CatchHandler @ 034e0124 */
                    /* try { // try from 034dfe40 to 035dfe4f has its CatchHandler @ 034e013c */
        values->m_Items[2] = StringLiteral_22513;
        thunk_FUN_01c20e04(values->m_Items + 2);
        local_44 = GJAEIBMAFGE__LOIDNFBMHNN(500,(MethodInfo *)0x0);
                    /* try { // try from 034dfe5c to 035dfe63 has its CatchHandler @ 034e0134 */
        pSVar5 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
                    /* try { // try from 034dfe68 to 035dfe73 has its CatchHandler @ 034e0120 */
        if ((uint)values->max_length < 4) goto LAB_034dffd0;
                    /* try { // try from 034dfe78 to 035dfe8b has its CatchHandler @ 034e012c */
        values->m_Items[3] = pSVar5;
        thunk_FUN_01c20e04(values->m_Items + 3,pSVar5);
                    /* try { // try from 034dfe8c to 035dfe97 has its CatchHandler @ 034e011c */
        if ((uint)values->max_length < 5) goto LAB_034dffd0;
                    /* try { // try from 034dfe98 to 035dffb3 has its CatchHandler @ 034df29c */
        values->m_Items[4] = StringLiteral_22513;
        thunk_FUN_01c20e04(values->m_Items + 4);
        local_44 = GJAEIBMAFGE__MICKHLIJECC(0xe,(__this->fields).AFEOEPFDNLI,(MethodInfo *)0x0);
        pSVar5 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
        if ((uint)values->max_length < 6) goto LAB_034dffd0;
        values->m_Items[5] = pSVar5;
        thunk_FUN_01c20e04(values->m_Items + 5,pSVar5);
        if ((uint)values->max_length < 7) goto LAB_034dffd0;
        values->m_Items[6] = StringLiteral_22504;
        thunk_FUN_01c20e04();
        pSVar5 = System_String__Concat(values,(MethodInfo *)0x0);
        if (pNVar10 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_034dffcc;
        Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar10,pSVar5,(MethodInfo *)0x0);
        pNVar10 = (__this->fields)._ResetToDefaultHint;
        if ((pNVar10 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
           (pUVar6 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar10,(MethodInfo *)0x0),
           pUVar6 == (UnityEngine_GameObject_o *)0x0)) goto LAB_034dffcc;
        bVar4 = (__this->fields).CCOCEGOEFNL != 0;
      }
      else {
        if ((int)values->max_length == 0) {
LAB_034dffd0:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        values->m_Items[0] = StringLiteral_15820;
        thunk_FUN_01c20e04();
        iVar2 = (__this->fields).AFEOEPFDNLI;
        if ((GJAEIBMAFGE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        local_44 = GJAEIBMAFGE__MICKHLIJECC(0xc,iVar2,(MethodInfo *)0x0);
        pSVar5 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
        if ((uint)values->max_length < 2) goto LAB_034dffd0;
        values->m_Items[1] = pSVar5;
        thunk_FUN_01c20e04(values->m_Items + 1,pSVar5);
        if ((uint)values->max_length < 3) goto LAB_034dffd0;
        values->m_Items[2] = StringLiteral_22513;
        thunk_FUN_01c20e04(values->m_Items + 2);
                    /* try { // try from 034dfccc to 035dfcd3 has its CatchHandler @ 034e0200 */
        local_44 = GJAEIBMAFGE__LOIDNFBMHNN(500,(MethodInfo *)0x0);
                    /* try { // try from 034dfcdc to 035dfceb has its CatchHandler @ 034e0284 */
        pSVar5 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
        if ((uint)values->max_length < 4) goto LAB_034dffd0;
        values->m_Items[3] = pSVar5;
                    /* try { // try from 034dfcfc to 035dfd03 has its CatchHandler @ 034e01f4 */
        thunk_FUN_01c20e04(values->m_Items + 3,pSVar5);
        if ((uint)values->max_length < 5) goto LAB_034dffd0;
                    /* try { // try from 034dfd14 to 035dfd17 has its CatchHandler @ 034e01ec */
        values->m_Items[4] = StringLiteral_22513;
        thunk_FUN_01c20e04(values->m_Items + 4);
                    /* try { // try from 034dfd28 to 035dfd47 has its CatchHandler @ 034e01f0 */
        local_44 = GJAEIBMAFGE__MICKHLIJECC(0xe,(__this->fields).AFEOEPFDNLI,(MethodInfo *)0x0);
        pSVar5 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
        if ((uint)values->max_length < 6) goto LAB_034dffd0;
                    /* try { // try from 034dfd4c to 035dfd57 has its CatchHandler @ 034e019c */
        values->m_Items[5] = pSVar5;
        thunk_FUN_01c20e04(values->m_Items + 5,pSVar5);
        if ((uint)values->max_length < 7) goto LAB_034dffd0;
        values->m_Items[6] = StringLiteral_22504;
        thunk_FUN_01c20e04();
        pSVar5 = System_String__Concat(values,(MethodInfo *)0x0);
        if (pNVar10 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_034dffcc;
        Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar10,pSVar5,(MethodInfo *)0x0);
        pNVar10 = (__this->fields)._ResetToDefaultHint;
        if ((pNVar10 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
           (pUVar6 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar10,(MethodInfo *)0x0),
           pUVar6 == (UnityEngine_GameObject_o *)0x0)) goto LAB_034dffcc;
        bVar4 = true;
      }
      UnityEngine_GameObject__SetActive(pUVar6,bVar4,(MethodInfo *)0x0);
      pSVar7 = (__this->fields)._LeftHint;
      if ((pSVar7 != (SFButton_o *)0x0) &&
         (pUVar6 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pSVar7,(MethodInfo *)0x0),
         pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive
                  (pUVar6,(__this->fields).CCOCEGOEFNL != 0,(MethodInfo *)0x0);
        pSVar7 = (__this->fields)._RightHint;
        if (pSVar7 != (SFButton_o *)0x0) {
          pUVar6 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pSVar7,(MethodInfo *)0x0);
          pSVar9 = (__this->fields).LGHNHMJIDIB;
          if (pSVar9 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
            bVar4 = false;
          }
          else {
            bVar4 = (__this->fields).CCOCEGOEFNL != (pSVar9->fields)._size + -1;
          }
                    /* try { // try from 034dffc8 to 035dffd7 has its CatchHandler @ 034e02ec */
          if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar6,bVar4,(MethodInfo *)0x0);
                    /* try { // try from 034dffb4 to 035dffbb has its CatchHandler @ 034e0218 */
            return;
          }
        }
      }
    }
  }
LAB_034dffcc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

