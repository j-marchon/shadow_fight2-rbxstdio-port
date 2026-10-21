// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityContent$$EFMALKIOHMA @ RVA 0x3456B28

void Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__EFMALKIOHMA
               (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  JMDPBFOCHHP_o *__this_00;
  JMDPBFOCHHP_FNILDHLJBBJ_o *GDGBNEPJEOO;
  System_Collections_Generic_List_DDMHMABAHHD__o *__this_01;
  System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o *__this_02;
  Il2CppObject *arg0;
  System_String_o *CJNHFNHJHPE;
  System_Comparison_T__o *pSVar4;
  MethodInfo *method_00;
  MethodInfo *pMVar5;
  MethodInfo *in_x3;
  JMDPBFOCHHP_ENBCJNLAHAC_o *pJVar6;
  Nekki_SF2_GUI_LabelAlias_o *__this_03;
  System_Collections_Generic_List_KBAIDAHOMHA__o *pSVar7;
  float fVar8;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
                    /* try { // try from 03556b44 to 03656b4f has its CatchHandler @ 03558110 */
                    /* try { // try from 03556b54 to 03656b5b has its CatchHandler @ 03557ce0 */
  if ((DAT_045682d1 & 1) == 0) {
    FUN_01bab630(&System_Comparison<KBAIDAHOMHA>_TypeInfo);
                    /* try { // try from 03556b6c to 03656b73 has its CatchHandler @ 03557cdc */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_Dispose__
                );
                    /* try { // try from 03556b78 to 03656b7f has its CatchHandler @ 03557cd8 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_MoveNext__);
                    /* try { // try from 03556b90 to 03656b97 has its CatchHandler @ 03557cd4 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_MoveNext__
                );
                    /* try { // try from 03556b98 to 03656ba7 has its CatchHandler @ 03557cd0 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_get_Current__);
                    /* try { // try from 03556bb0 to 03656bb7 has its CatchHandler @ 03557ccc */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
                    /* try { // try from 03556bc8 to 03656bcf has its CatchHandler @ 03557cc8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_GetEnumerator__);
                    /* try { // try from 03556bd4 to 03656bdb has its CatchHandler @ 03557cc4 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_GetEnumerator__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<KBAIDAHOMHA>_Sort__);
                    /* try { // try from 03556bec to 03656bf3 has its CatchHandler @ 03557cc0 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_FMBJPOAOGFJ__);
                    /* try { // try from 03556bf4 to 03656c17 has its CatchHandler @ 03557e80 */
    FUN_01bab630(&StringLiteral_21522);
    DAT_045682d1 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  pUVar2 = (__this->fields)._chanceContent;
  if ((pUVar2 == (UnityEngine_RectTransform_o *)0x0) ||
     (pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
     pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03556f1c;
                    /* try { // try from 03556c34 to 03656c3b has its CatchHandler @ 03558110 */
                    /* try { // try from 03556c3c to 03656c43 has its CatchHandler @ 03557dcc */
  UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  pJVar6 = (__this->fields).AICEKIFKCEH;
  if ((pJVar6 == (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) || (__this_00 == (JMDPBFOCHHP_o *)0x0))
  goto LAB_03556f1c;
                    /* try { // try from 03556c68 to 03656c6b has its CatchHandler @ 035581cc */
  pMVar5 = (MethodInfo *)0x0;
                    /* try { // try from 03556c6c to 03656c73 has its CatchHandler @ 035581ac */
  GDGBNEPJEOO = JMDPBFOCHHP__OJOIAONADNG(__this_00,(pJVar6->fields).LEJBNEIJJIF,(MethodInfo *)0x0);
                    /* try { // try from 03556c78 to 03656c7f has its CatchHandler @ 03557ef0 */
  if ((GDGBNEPJEOO == (JMDPBFOCHHP_FNILDHLJBBJ_o *)0x0) ||
     (__this_01 = (GDGBNEPJEOO->fields).GFBNJPMOEKD,
     __this_01 == (System_Collections_Generic_List_DDMHMABAHHD__o *)0x0)) goto LAB_03556f1c;
                    /* try { // try from 03556c90 to 03656c97 has its CatchHandler @ 03557df4 */
                    /* try { // try from 03556ca8 to 03656caf has its CatchHandler @ 03557df0 */
                    /* try { // try from 03556cb4 to 03656cbb has its CatchHandler @ 03557dec */
                    /* try { // try from 03556ccc to 03656cd3 has its CatchHandler @ 03557de4 */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_b8,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<DDMHMABAHHD>_GetEnumerator__);
                    /* try { // try from 03556cd4 to 03656ce3 has its CatchHandler @ 03557de0 */
  local_80.fields._list =
       (System_Collections_Generic_List_T__o *)
       CONCAT44(local_b8.fields._list._4_4_,(int)local_b8.fields._list);
  local_80.fields._index = local_b8.fields._index;
  local_80.fields._version = local_b8.fields._version;
  local_80.fields._current = local_b8.fields._current;
                    /* try { // try from 03556ce8 to 03656d03 has its CatchHandler @ 03558164 */
  while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                           (&local_80,
                            Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_MoveNext__
                           ), bVar1) {
    if ((JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *)local_80.fields._current ==
        (JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pMVar5 = *(MethodInfo **)((long)local_80.fields._current + 0x10);
    Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__MOONCCCJECI
              (__this,(DDMHMABAHHD_o *)local_80.fields._current,(System_String_o *)pMVar5,
               (float)((JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_Fields *)
                      ((long)local_80.fields._current + 0x10))->MOIGDPBNMNI,in_x3);
  }
                    /* try { // try from 03556d10 to 03656d17 has its CatchHandler @ 03557ddc */
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_80,Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_Dispose__);
  __this_02 = (GDGBNEPJEOO->fields).BAPMMGFEIDM;
  if (__this_02 == (System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o *)0x0)
  goto LAB_03556f1c;
                    /* try { // try from 03556d28 to 03656d2f has its CatchHandler @ 03557dd8 */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_b8,(System_Collections_Generic_List_object__o *)__this_02,
             Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_GetEnumerator__
            );
  local_a0.fields._list =
       (System_Collections_Generic_List_T__o *)
       CONCAT44(local_b8.fields._list._4_4_,(int)local_b8.fields._list);
                    /* try { // try from 03556d34 to 03656d3b has its CatchHandler @ 03557dd4 */
  local_a0.fields._index = local_b8.fields._index;
  local_a0.fields._version = local_b8.fields._version;
  local_a0.fields._current = local_b8.fields._current;
                    /* try { // try from 03556d4c to 03656d53 has its CatchHandler @ 03557dd0 */
  while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                           (&local_a0,
                            Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_MoveNext__
                           ), bVar1) {
                    /* try { // try from 03556d54 to 03656d77 has its CatchHandler @ 03557e88 */
    pMVar5 = (MethodInfo *)0x0;
    Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__FillContainerItemChances
              (__this,(JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *)local_a0.fields._current,
               (JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *)0x0,1.0,in_x3);
  }
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_a0,
             Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_Dispose__
            );
                    /* try { // try from 03556d78 to 03656d7f has its CatchHandler @ 0355815c */
  fVar8 = Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__POEHCBAHPED(__this,GDGBNEPJEOO,pMVar5);
                    /* try { // try from 03556d84 to 03656d8b has its CatchHandler @ 03557dc8 */
                    /* try { // try from 03556d90 to 03656daf has its CatchHandler @ 03558158 */
  if ((fVar8 <= 0.0) || ((__this->fields).HNMGGECHAKN != false)) {
    pUVar2 = (__this->fields)._chanceContent;
    if ((pUVar2 == (UnityEngine_RectTransform_o *)0x0) ||
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03556f1c;
    pMVar5 = (MethodInfo *)0x0;
    UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
                    /* try { // try from 03556db4 to 03656dbb has its CatchHandler @ 03557dc4 */
    if ((__this->fields).HNMGGECHAKN == false) goto LAB_03556dbc;
  }
  else {
LAB_03556dbc:
    __this_03 = (__this->fields)._probabilityLable;
                    /* try { // try from 03556dcc to 03656dd3 has its CatchHandler @ 03557dc0 */
                    /* try { // try from 03556dd8 to 03656ddf has its CatchHandler @ 03557dbc */
    local_b8.fields._list._0_4_ = -0x80000000;
    if (fVar8 * 100.0 != INFINITY) {
      local_b8.fields._list._0_4_ = (int)(fVar8 * 100.0);
    }
                    /* try { // try from 03556df0 to 03656df7 has its CatchHandler @ 03557db8 */
                    /* try { // try from 03556df8 to 03656e07 has its CatchHandler @ 03557db4 */
    arg0 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_b8);
                    /* try { // try from 03556e0c to 03656e13 has its CatchHandler @ 03558154 */
    CJNHFNHJHPE = System_String__Format(StringLiteral_21522,arg0,(MethodInfo *)0x0);
                    /* try { // try from 03556e18 to 03656e33 has its CatchHandler @ 03558150 */
    if (__this_03 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_03556f1c;
    pMVar5 = (MethodInfo *)0x0;
    Nekki_SF2_GUI_LabelAlias__set_Alias(__this_03,CJNHFNHJHPE,(MethodInfo *)0x0);
  }
  Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__JKGADFCFHFO(__this,0,pMVar5);
                    /* try { // try from 03556e38 to 03656e3f has its CatchHandler @ 03557db0 */
  Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__JKGADFCFHFO(__this,1,pMVar5);
  Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__JKGADFCFHFO(__this,2,pMVar5);
                    /* try { // try from 03556e50 to 03656e57 has its CatchHandler @ 03557dac */
  pSVar7 = (__this->fields).ACCKHLLKADM;
  pSVar4 = (System_Comparison_T__o *)thunk_FUN_01bda818(System_Comparison<KBAIDAHOMHA>_TypeInfo);
                    /* try { // try from 03556e5c to 03656e63 has its CatchHandler @ 03557da8 */
  System_Comparison<object>___ctor();
  if (pSVar7 != (System_Collections_Generic_List_KBAIDAHOMHA__o *)0x0) {
                    /* try { // try from 03556e74 to 03656e7b has its CatchHandler @ 03557da4 */
                    /* try { // try from 03556e7c to 03656e8b has its CatchHandler @ 03557da0 */
    System_Collections_Generic_List<object>__Sort
              ((System_Collections_Generic_List_object__o *)pSVar7,pSVar4,
               Method_System_Collections_Generic_List<KBAIDAHOMHA>_Sort__);
    pSVar7 = (__this->fields).DKOKMOCDAJD;
    pSVar4 = (System_Comparison_T__o *)thunk_FUN_01bda818(System_Comparison<KBAIDAHOMHA>_TypeInfo);
                    /* try { // try from 03556e90 to 03656e97 has its CatchHandler @ 0355814c */
                    /* try { // try from 03556e9c to 03656eb7 has its CatchHandler @ 03558148 */
    System_Comparison<object>___ctor();
    if (pSVar7 != (System_Collections_Generic_List_KBAIDAHOMHA__o *)0x0) {
      System_Collections_Generic_List<object>__Sort
                ((System_Collections_Generic_List_object__o *)pSVar7,pSVar4,
                 Method_System_Collections_Generic_List<KBAIDAHOMHA>_Sort__);
                    /* try { // try from 03556ebc to 03656ec3 has its CatchHandler @ 03557d9c */
      pSVar7 = (__this->fields).LOMGJKLDCGH;
      pSVar4 = (System_Comparison_T__o *)thunk_FUN_01bda818(System_Comparison<KBAIDAHOMHA>_TypeInfo)
      ;
                    /* try { // try from 03556ed4 to 03656edb has its CatchHandler @ 03557d98 */
      System_Comparison<object>___ctor();
      if (pSVar7 != (System_Collections_Generic_List_KBAIDAHOMHA__o *)0x0) {
                    /* try { // try from 03556ee0 to 03656ee7 has its CatchHandler @ 03557d94 */
        System_Collections_Generic_List<object>__Sort
                  ((System_Collections_Generic_List_object__o *)pSVar7,pSVar4,
                   Method_System_Collections_Generic_List<KBAIDAHOMHA>_Sort__);
        Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__NHMPMKNIHBP(__this,method_00);
                    /* try { // try from 03556ef8 to 03656eff has its CatchHandler @ 03557d90 */
                    /* try { // try from 03556f00 to 03656f0f has its CatchHandler @ 03557d8c */
                    /* try { // try from 03556f14 to 03656f1b has its CatchHandler @ 03558144 */
        return;
      }
    }
  }
LAB_03556f1c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

