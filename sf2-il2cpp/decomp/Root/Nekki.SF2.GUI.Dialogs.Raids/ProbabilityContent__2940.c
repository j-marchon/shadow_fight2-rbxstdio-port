// TypeDefIndex 2940
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class ProbabilityContent : MonoBehaviour
// Fields:
//   private LabelAlias _header; // 0x20
//   private LabelAlias _probabilityLable; // 0x28
//   private RectTransform _chanceContent; // 0x30
//   private ScrollRect _scroll; // 0x38
//   private LabelButton _buyButton; // 0x40
//   private GameObject _itemPrefab; // 0x48
//   private JMDPBFOCHHP.ENBCJNLAHAC AICEKIFKCEH; // 0x50
//   private bool HNMGGECHAKN; // 0x58
//   private List<KBAIDAHOMHA> ACCKHLLKADM; // 0x60
//   private List<KBAIDAHOMHA> LOMGJKLDCGH; // 0x68
//   private List<KBAIDAHOMHA> DKOKMOCDAJD; // 0x70

// ===== private void AEDCNNNBBPJ(JMDPBFOCHHP.FNILDHLJBBJ.FICOAMDKLKJ PBDIPLHDHHD, float KAFHJNFHFHL)  [RVA 0x34562C4]
// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityContent$$AEDCNNNBBPJ @ RVA 0x34562C4

void Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__AEDCNNNBBPJ
               (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *__this,
               JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *PBDIPLHDHHD,float KAFHJNFHFHL,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *__this_00;
  System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o *__this_01;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  System_Collections_Generic_List_DDMHMABAHHD__o *GHAAKPDHIJJ;
  int index;
  System_String_o *CNIELFLIKJB;
  float fVar2;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  
                    /* try { // try from 035562e8 to 036562f3 has its CatchHandler @ 03558098 */
  if ((DAT_045682d0 & 1) == 0) {
                    /* try { // try from 035562f8 to 036562ff has its CatchHandler @ 03558094 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_MoveNext__
                );
                    /* try { // try from 03556310 to 03656317 has its CatchHandler @ 03558090 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_get_Current__
                );
                    /* try { // try from 0355631c to 03656323 has its CatchHandler @ 0355808c */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_GetEnumerator__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Count__);
                    /* try { // try from 03556334 to 0365633b has its CatchHandler @ 03558088 */
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__);
                    /* try { // try from 0355633c to 0365634b has its CatchHandler @ 03558084 */
    DAT_045682d0 = 1;
  }
  local_68.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._current = (Il2CppObject *)0x0;
  if ((PBDIPLHDHHD != (JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *)0x0) &&
     (GHAAKPDHIJJ = (PBDIPLHDHHD->fields).GFBNJPMOEKD,
     GHAAKPDHIJJ != (System_Collections_Generic_List_DDMHMABAHHD__o *)0x0)) {
                    /* try { // try from 03556358 to 0365637b has its CatchHandler @ 03558198 */
    if (0 < (GHAAKPDHIJJ->fields)._size) {
      index = 0;
      do {
        method_00 = Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__;
        __this_00 = (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)GHAAKPDHIJJ,index,
                               (MethodInfo_26E4ADC *)
                               Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__);
        if (__this_00 == (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *)0x0) goto LAB_03556438;
        CNIELFLIKJB = (System_String_o *)(__this_00->fields).super.super.super.super.m_CachedPtr;
        fVar2 = Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__HMECCPGJAHJ
                          (__this_00,GHAAKPDHIJJ,
                           *(float *)((long)&(__this_00->fields).super.m_CancellationTokenSource + 4
                                     ),method_00);
                    /* try { // try from 035563a0 to 036563bb has its CatchHandler @ 035581b4 */
        Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__MOONCCCJECI
                  (__this,(DDMHMABAHHD_o *)__this_00,CNIELFLIKJB,fVar2 * KAFHJNFHFHL,in_x3);
        index = index + 1;
      } while (index < (GHAAKPDHIJJ->fields)._size);
    }
    __this_01 = (PBDIPLHDHHD->fields).BAPMMGFEIDM;
    if (__this_01 != (System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o *)0x0)
    {
                    /* try { // try from 035563c8 to 036563cf has its CatchHandler @ 03558080 */
                    /* try { // try from 035563e0 to 036563e7 has its CatchHandler @ 03557f48 */
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_68,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_GetEnumerator__
                );
                    /* try { // try from 035563ec to 036563f3 has its CatchHandler @ 03557f44 */
      while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_68,
                                Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_MoveNext__
                               ), bVar1) {
                    /* try { // try from 03556404 to 0365640b has its CatchHandler @ 03557f40 */
        Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__FillContainerItemChances
                  (__this,(JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *)local_68.fields._current,
                   PBDIPLHDHHD,KAFHJNFHFHL,in_x3);
                    /* try { // try from 0355640c to 0365641b has its CatchHandler @ 03557f3c */
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_68,
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_Dispose__
                );
                    /* try { // try from 03556428 to 0365644b has its CatchHandler @ 03558194 */
      return;
    }
  }
LAB_03556438:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EFMALKIOHMA()  [RVA 0x3456B28]
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
    FUN_01bab630(&StringLiteral_21522/*"titleEquipmentChance{{{0}}}"*/);
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
    CJNHFNHJHPE = System_String__Format(StringLiteral_21522/*"titleEquipmentChance{{{0}}}"*/,arg0,(MethodInfo *)0x0);
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


// ===== private void NHMPMKNIHBP()  [RVA 0x345771C]
// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityContent$$NHMPMKNIHBP @ RVA 0x345771C

void Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__NHMPMKNIHBP
               (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  System_Text_StringBuilder_o *pSVar5;
  int *piVar6;
  System_String_o *pSVar7;
  Il2CppObject *pIVar8;
  System_Collections_Generic_List_object__o *pSVar9;
  long lVar10;
  Il2CppClass *pIVar11;
  JMDPBFOCHHP_o *__this_00;
  JMDPBFOCHHP_ODJJOAOCFKO_o *pJVar12;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  System_Collections_Generic_List_KBAIDAHOMHA__o *pSVar13;
  UnityEngine_UI_ScrollRect_o *pUVar14;
  long lVar15;
  int iVar16;
  UnityEngine_GameObject_o *pUVar17;
  long *plVar18;
  int iVar19;
  float value;
  undefined4 local_64;
  
                    /* try { // try from 0355771c to 0365773f has its CatchHandler @ 03558180 */
                    /* try { // try from 03557740 to 0365774b has its CatchHandler @ 03557eb8 */
  if ((DAT_045682d2 & 1) == 0) {
                    /* try { // try from 0355774c to 03657757 has its CatchHandler @ 03557eb4 */
    FUN_01bab630(&Method_System_Array_Empty<object>__);
                    /* try { // try from 03557760 to 03657767 has its CatchHandler @ 03557eb0 */
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ProbabilityDialogItem>__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* try { // try from 03557778 to 0365777f has its CatchHandler @ 03557eac */
    FUN_01bab630(&int_TypeInfo);
                    /* try { // try from 03557784 to 0365778b has its CatchHandler @ 03557ea8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KBAIDAHOMHA>_get_Count__);
                    /* try { // try from 0355779c to 036577a3 has its CatchHandler @ 03557ea4 */
    FUN_01bab630(&Method_System_Collections_Generic_List<KBAIDAHOMHA>_get_Item__);
                    /* try { // try from 035577a4 to 036577b3 has its CatchHandler @ 03557ea0 */
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_get_Item__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
                    /* try { // try from 035577c0 to 036577c7 has its CatchHandler @ 03557d38 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
                    /* try { // try from 035577d8 to 036577df has its CatchHandler @ 03557d30 */
    FUN_01bab630(&StringLiteral_22157/*"x{0} - {1}% \n"*/);
                    /* try { // try from 035577e4 to 036577eb has its CatchHandler @ 03557d28 */
    FUN_01bab630(&StringLiteral_6544/*"Forge"*/);
    FUN_01bab630(&StringLiteral_10931/*"RaidMisc.ruby_big"*/);
                    /* try { // try from 035577fc to 03657803 has its CatchHandler @ 03557d20 */
    FUN_01bab630(&StringLiteral_1/*""*/);
                    /* try { // try from 03557804 to 03657813 has its CatchHandler @ 03557d18 */
    FUN_01bab630(&StringLiteral_2187/*"<1"*/);
    DAT_045682d2 = 1;
    method = extraout_x1;
  }
  pSVar13 = (__this->fields).ACCKHLLKADM;
                    /* try { // try from 03557818 to 0365781f has its CatchHandler @ 03557d34 */
  if (pSVar13 != (System_Collections_Generic_List_KBAIDAHOMHA__o *)0x0) {
                    /* try { // try from 03557830 to 03657837 has its CatchHandler @ 03557d2c */
                    /* try { // try from 0355783c to 03657843 has its CatchHandler @ 03557d24 */
    iVar16 = 0;
    while (iVar16 < (pSVar13->fields)._size) {
                    /* try { // try from 03557854 to 0365785b has its CatchHandler @ 03557d1c */
      pUVar17 = (__this->fields)._itemPrefab;
                    /* try { // try from 0355785c to 0365786b has its CatchHandler @ 03557d14 */
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
      }
                    /* try { // try from 03557874 to 03657897 has its CatchHandler @ 035581cc */
      pUVar17 = (UnityEngine_GameObject_o *)
                UnityEngine_Object__Instantiate<object>
                          ((Il2CppObject *)pUVar17,
                           Method_UnityEngine_Object_Instantiate<GameObject>__);
      if (pUVar17 == (UnityEngine_GameObject_o *)0x0) goto LAB_035580a0;
      pUVar2 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0);
      pUVar14 = (__this->fields)._scroll;
      if ((pUVar14 == (UnityEngine_UI_ScrollRect_o *)0x0) ||
         (pUVar2 == (UnityEngine_Transform_o *)0x0)) goto LAB_035580a0;
                    /* try { // try from 035578a4 to 036578c7 has its CatchHandler @ 03557e78 */
      UnityEngine_Transform__SetParent
                (pUVar2,(UnityEngine_Transform_o *)(pUVar14->fields).m_Content,false,
                 (MethodInfo *)0x0);
      pIVar3 = UnityEngine_GameObject__GetComponent<object>
                         (pUVar17,
                          Method_UnityEngine_GameObject_GetComponent<ProbabilityDialogItem>__);
      pSVar13 = (__this->fields).ACCKHLLKADM;
      if (pSVar13 == (System_Collections_Generic_List_KBAIDAHOMHA__o *)0x0) goto LAB_035580a0;
                    /* try { // try from 035578d4 to 036578db has its CatchHandler @ 03557e9c */
      pIVar4 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar13,iVar16,
                          Method_System_Collections_Generic_List<KBAIDAHOMHA>_get_Item__);
                    /* try { // try from 035578ec to 036578f3 has its CatchHandler @ 03557d10 */
      pSVar5 = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo)
      ;
                    /* try { // try from 03557904 to 0365790b has its CatchHandler @ 03557d0c */
      System_Text_StringBuilder___ctor(pSVar5,(MethodInfo *)0x0);
      if (pIVar4 == (Il2CppObject *)0x0) goto LAB_035580a0;
      piVar6 = (int *)((long)&pIVar4[1].klass + 4);
                    /* try { // try from 03557910 to 03657917 has its CatchHandler @ 03557d08 */
      pSVar7 = StringLiteral_2187/*"<1"*/;
      if (0 < *piVar6) {
        pSVar7 = System_Int32__ToString((int32_t)piVar6,(MethodInfo *)0x0);
                    /* try { // try from 03557928 to 0365792f has its CatchHandler @ 03557d04 */
      }
      local_64 = *(undefined4 *)&pIVar4[1].klass;
      pIVar8 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_64);
                    /* try { // try from 03557958 to 03657973 has its CatchHandler @ 03557e98 */
      pSVar7 = System_String__Format
                         (StringLiteral_22157/*"x{0} - {1}% \n"*/,pIVar8,(Il2CppObject *)pSVar7,(MethodInfo *)0x0);
      if (pSVar5 == (System_Text_StringBuilder_o *)0x0) goto LAB_035580a0;
      System_Text_StringBuilder__Append(pSVar5,pSVar7,(MethodInfo *)0x0);
                    /* try { // try from 03557978 to 0365797f has its CatchHandler @ 03557cfc */
      pSVar9 = pIVar4[1].monitor;
      if (pSVar9 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_035580a0;
      if (0 < (pSVar9->fields)._size) {
        iVar19 = 0;
        do {
                    /* try { // try from 03557990 to 03657997 has its CatchHandler @ 03557cf8 */
          pIVar8 = System_Collections_Generic_List<object>__get_Item
                             (pSVar9,iVar19,
                              Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_get_Item__
                             );
          if (pIVar8 == (Il2CppObject *)0x0) goto LAB_035580a0;
          piVar6 = (int *)((long)&pIVar8[1].klass + 4);
                    /* try { // try from 035579a0 to 036579a7 has its CatchHandler @ 03557cf4 */
          pSVar7 = StringLiteral_2187/*"<1"*/;
          if (0 < *piVar6) {
            pSVar7 = System_Int32__ToString((int32_t)piVar6,(MethodInfo *)0x0);
                    /* try { // try from 035579b8 to 036579bf has its CatchHandler @ 03557cf0 */
          }
          local_64 = *(undefined4 *)&pIVar8[1].klass;
                    /* try { // try from 035579dc to 036579e3 has its CatchHandler @ 03557cec */
          pIVar8 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_64);
          pSVar7 = System_String__Format
                             (StringLiteral_22157/*"x{0} - {1}% \n"*/,pIVar8,(Il2CppObject *)pSVar7,(MethodInfo *)0x0);
          lVar10 = Method_System_Array_Empty<object>__;
          lVar15 = *(long *)(Method_System_Array_Empty<object>__ + 0x38);
          if (lVar15 == 0) {
                    /* try { // try from 03557a08 to 03657a0b has its CatchHandler @ 035581cc */
            FUN_01b8167c(Method_System_Array_Empty<object>__);
            lVar15 = *(long *)(lVar10 + 0x38);
          }
                    /* try { // try from 03557a14 to 03657a3b has its CatchHandler @ 03557c94 */
          lVar15 = *(long *)(lVar15 + 0x10);
          if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
            lVar15 = FUN_01b81620();
          }
          if (*(int *)(lVar15 + 0xe0) == 0) {
            thunk_FUN_01ba7564();
          }
          lVar10 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_01b81620();
          }
                    /* try { // try from 03557a54 to 03657a5b has its CatchHandler @ 035581cc */
          System_Text_StringBuilder__AppendFormat
                    (pSVar5,pSVar7,(System_Object_array *)**(undefined8 **)(lVar10 + 0xb8),
                     (MethodInfo *)0x0);
          pSVar9 = pIVar4[1].monitor;
          if (pSVar9 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_035580a0;
                    /* try { // try from 03557a64 to 03657a87 has its CatchHandler @ 03557d48 */
          iVar19 = iVar19 + 1;
        } while (iVar19 < (pSVar9->fields)._size);
      }
      if (pIVar3 == (Il2CppObject *)0x0) goto LAB_035580a0;
      pIVar11 = pIVar3[2].klass;
      if (pIVar4[2].klass == (Il2CppClass *)0x0) {
        if (pIVar11 == (Il2CppClass *)0x0) goto LAB_035580a0;
        Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                  ((Nekki_SF2_GUI_ResolutionImage_o *)pIVar11,StringLiteral_10931/*"RaidMisc.ruby_big"*/,(MethodInfo *)0x0)
        ;
                    /* try { // try from 03557abc to 03657ac3 has its CatchHandler @ 03557c68 */
        pIVar11 = pIVar3[2].klass;
        if (pIVar11 == (Il2CppClass *)0x0) goto LAB_035580a0;
        value = 0.75;
      }
      else {
        if (pIVar11 == (Il2CppClass *)0x0) goto LAB_035580a0;
        Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                  ((Nekki_SF2_GUI_ResolutionImage_o *)pIVar11,((pIVar4[2].klass)->_1).byval_arg.data
                   ,(MethodInfo *)0x0);
        pIVar11 = pIVar3[2].klass;
                    /* try { // try from 03557a98 to 03657abb has its CatchHandler @ 03557ce4 */
        if (pIVar11 == (Il2CppClass *)0x0) goto LAB_035580a0;
        value = 1.0;
      }
      pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pIVar11,(MethodInfo *)0x0);
                    /* try { // try from 03557ad0 to 03657ad7 has its CatchHandler @ 03557e74 */
      UnityEngine_TransformExtensions__SetLocalScale(pUVar2,value,(MethodInfo *)0x0);
      plVar18 = pIVar3[2].monitor;
                    /* try { // try from 03557ae8 to 03657aef has its CatchHandler @ 03557e70 */
      pSVar7 = (System_String_o *)
               (*(pSVar5->klass->vtable)._3_ToString.methodPtr)
                         (pSVar5,(pSVar5->klass->vtable)._3_ToString.method);
                    /* try { // try from 03557af4 to 03657afb has its CatchHandler @ 03557e6c */
      if ((pSVar7 == (System_String_o *)0x0) ||
         (pSVar7 = System_String__TrimEnd(pSVar7,10,(MethodInfo *)0x0), plVar18 == (long *)0x0))
      goto LAB_035580a0;
                    /* try { // try from 03557b10 to 03657b17 has its CatchHandler @ 03557e68 */
                    /* try { // try from 03557b18 to 03657b2b has its CatchHandler @ 0355817c */
      (**(code **)(*plVar18 + 0x5e8))(plVar18,pSVar7,*(undefined8 *)(*plVar18 + 0x5f0));
      pSVar13 = (__this->fields).ACCKHLLKADM;
      iVar16 = iVar16 + 1;
      method = extraout_x1_00;
      if (pSVar13 == (System_Collections_Generic_List_KBAIDAHOMHA__o *)0x0) goto LAB_035580a0;
    }
                    /* try { // try from 03557b34 to 03657b3b has its CatchHandler @ 03557e64 */
    pSVar13 = (__this->fields).DKOKMOCDAJD;
    if (pSVar13 != (System_Collections_Generic_List_KBAIDAHOMHA__o *)0x0) {
      iVar16 = 0;
      goto LAB_03557b4c;
    }
  }
LAB_035580a0:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03556288 with catch @ 035580a0 */
  FUN_01bab8c8();
LAB_03557b4c:
  if ((pSVar13->fields)._size <= iVar16) {
                    /* catch() { ... } // from try @ 03556e38 with catch @ 03557db0 */
    pSVar13 = (__this->fields).LOMGJKLDCGH;
                    /* catch() { ... } // from try @ 03556df8 with catch @ 03557db4 */
    if (pSVar13 != (System_Collections_Generic_List_KBAIDAHOMHA__o *)0x0) {
                    /* catch() { ... } // from try @ 03556df0 with catch @ 03557db8 */
                    /* catch() { ... } // from try @ 03556dd8 with catch @ 03557dbc */
                    /* catch() { ... } // from try @ 03556dcc with catch @ 03557dc0 */
      iVar16 = 0;
      goto LAB_03557dc4;
    }
    goto LAB_035580a0;
  }
  pUVar17 = (__this->fields)._itemPrefab;
                    /* try { // try from 03557b60 to 03657b63 has its CatchHandler @ 035581d0 */
                    /* try { // try from 03557b64 to 03657b67 has its CatchHandler @ 035581c0 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03557b68 to 03657b6b has its CatchHandler @ 035581a0 */
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
                    /* try { // try from 03557b6c to 03657b6f has its CatchHandler @ 0355819c */
                    /* try { // try from 03557b70 to 03657b73 has its CatchHandler @ 03558198 */
                    /* try { // try from 03557b74 to 03657b77 has its CatchHandler @ 03558194 */
                    /* try { // try from 03557b78 to 03657b7b has its CatchHandler @ 03558190 */
                    /* try { // try from 03557b7c to 03657b7f has its CatchHandler @ 035581ac */
  pUVar17 = (UnityEngine_GameObject_o *)
            UnityEngine_Object__Instantiate<object>
                      ((Il2CppObject *)pUVar17,Method_UnityEngine_Object_Instantiate<GameObject>__);
                    /* try { // try from 03557b80 to 03657b83 has its CatchHandler @ 0355817c */
  if (pUVar17 == (UnityEngine_GameObject_o *)0x0) goto LAB_035580a0;
                    /* try { // try from 03557b84 to 03657b87 has its CatchHandler @ 03558128 */
                    /* try { // try from 03557b88 to 03657b8b has its CatchHandler @ 03558124 */
                    /* try { // try from 03557b8c to 03657b8f has its CatchHandler @ 03558120 */
  pUVar2 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0);
                    /* try { // try from 03557b90 to 03657b93 has its CatchHandler @ 0355811c */
  pUVar14 = (__this->fields)._scroll;
                    /* try { // try from 03557b94 to 03657b97 has its CatchHandler @ 03558118 */
                    /* try { // try from 03557b98 to 03657b9b has its CatchHandler @ 03558114 */
  if ((pUVar14 == (UnityEngine_UI_ScrollRect_o *)0x0) || (pUVar2 == (UnityEngine_Transform_o *)0x0))
  goto LAB_035580a0;
                    /* try { // try from 03557b9c to 03657b9f has its CatchHandler @ 03558160 */
                    /* try { // try from 03557ba0 to 03657ba3 has its CatchHandler @ 0355815c */
                    /* try { // try from 03557ba4 to 03657ba7 has its CatchHandler @ 03558154 */
                    /* try { // try from 03557ba8 to 03657bab has its CatchHandler @ 0355814c */
  UnityEngine_Transform__SetParent
            (pUVar2,(UnityEngine_Transform_o *)(pUVar14->fields).m_Content,false,(MethodInfo *)0x0);
                    /* try { // try from 03557bac to 03657baf has its CatchHandler @ 03558144 */
                    /* try { // try from 03557bb0 to 03657bb3 has its CatchHandler @ 0355813c */
                    /* try { // try from 03557bb4 to 03657bb7 has its CatchHandler @ 03558134 */
                    /* try { // try from 03557bb8 to 03657bbb has its CatchHandler @ 0355812c */
                    /* try { // try from 03557bbc to 03657bbf has its CatchHandler @ 03557d44 */
  pIVar3 = UnityEngine_GameObject__GetComponent<object>
                     (pUVar17,Method_UnityEngine_GameObject_GetComponent<ProbabilityDialogItem>__);
                    /* try { // try from 03557bc0 to 03657bc3 has its CatchHandler @ 03557e94 */
  pSVar13 = (__this->fields).DKOKMOCDAJD;
                    /* try { // try from 03557bc4 to 03657bc7 has its CatchHandler @ 03557d54 */
  if (pSVar13 == (System_Collections_Generic_List_KBAIDAHOMHA__o *)0x0) goto LAB_035580a0;
                    /* try { // try from 03557bc8 to 03657bcb has its CatchHandler @ 03557d50 */
                    /* try { // try from 03557bcc to 03657bcf has its CatchHandler @ 03557d48 */
                    /* catch() { ... } // from try @ 0355753c with catch @ 03557bd0
                       try { // try from 03557bd0 to 03657f57 has its CatchHandler @ 035559c8 */
                    /* catch() { ... } // from try @ 035574e4 with catch @ 03557bd4 */
                    /* catch() { ... } // from try @ 03557534 with catch @ 03557bd8 */
                    /* catch() { ... } // from try @ 035574dc with catch @ 03557bdc */
                    /* catch() { ... } // from try @ 0355751c with catch @ 03557be0 */
  pIVar4 = System_Collections_Generic_List<object>__get_Item
                     ((System_Collections_Generic_List_object__o *)pSVar13,iVar16,
                      Method_System_Collections_Generic_List<KBAIDAHOMHA>_get_Item__);
                    /* catch() { ... } // from try @ 035574c4 with catch @ 03557be4 */
                    /* catch() { ... } // from try @ 03557510 with catch @ 03557be8 */
                    /* catch() { ... } // from try @ 035574b8 with catch @ 03557bec */
                    /* catch() { ... } // from try @ 035574f8 with catch @ 03557bf0 */
                    /* catch() { ... } // from try @ 035574a0 with catch @ 03557bf4 */
                    /* catch() { ... } // from try @ 03557408 with catch @ 03557bf8 */
  pSVar5 = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
                    /* catch() { ... } // from try @ 035573a0 with catch @ 03557bfc */
                    /* catch() { ... } // from try @ 03557400 with catch @ 03557c00 */
                    /* catch() { ... } // from try @ 03557398 with catch @ 03557c04 */
  System_Text_StringBuilder___ctor(pSVar5,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035573e8 with catch @ 03557c08 */
  if (pIVar4 == (Il2CppObject *)0x0) goto LAB_035580a0;
  piVar6 = (int *)((long)&pIVar4[1].klass + 4);
                    /* catch() { ... } // from try @ 03557380 with catch @ 03557c0c */
                    /* catch() { ... } // from try @ 035573dc with catch @ 03557c10 */
                    /* catch() { ... } // from try @ 03557374 with catch @ 03557c14 */
                    /* catch() { ... } // from try @ 035573c4 with catch @ 03557c18 */
  pSVar7 = StringLiteral_2187/*"<1"*/;
  if (0 < *piVar6) {
                    /* catch() { ... } // from try @ 0355735c with catch @ 03557c1c */
                    /* catch() { ... } // from try @ 035575e8 with catch @ 03557c20 */
    pSVar7 = System_Int32__ToString((int32_t)piVar6,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03557484 with catch @ 03557c24 */
                    /* catch() { ... } // from try @ 035575cc with catch @ 03557c28 */
  }
                    /* catch() { ... } // from try @ 035575ac with catch @ 03557c38 */
  local_64 = *(undefined4 *)&pIVar4[1].klass;
                    /* catch() { ... } // from try @ 03557458 with catch @ 03557c3c */
                    /* catch() { ... } // from try @ 035575a0 with catch @ 03557c40 */
                    /* catch() { ... } // from try @ 03557440 with catch @ 03557c44 */
                    /* catch() { ... } // from try @ 03557588 with catch @ 03557c48 */
  pIVar8 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_64);
                    /* catch() { ... } // from try @ 0355742c with catch @ 03557c4c */
                    /* catch() { ... } // from try @ 03557344 with catch @ 03557c50 */
                    /* catch() { ... } // from try @ 03557330 with catch @ 03557c54 */
                    /* catch() { ... } // from try @ 03557328 with catch @ 03557c58 */
                    /* catch() { ... } // from try @ 03557310 with catch @ 03557c5c */
                    /* catch() { ... } // from try @ 03557304 with catch @ 03557c60 */
  pSVar7 = System_String__Format
                     (StringLiteral_22157/*"x{0} - {1}% \n"*/,pIVar8,(Il2CppObject *)pSVar7,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035572ec with catch @ 03557c64 */
  if (pSVar5 == (System_Text_StringBuilder_o *)0x0) goto LAB_035580a0;
                    /* catch() { ... } // from try @ 03557abc with catch @ 03557c68 */
                    /* catch() { ... } // from try @ 03557160 with catch @ 03557c6c */
                    /* catch() { ... } // from try @ 03557158 with catch @ 03557c70 */
                    /* catch() { ... } // from try @ 03557140 with catch @ 03557c74 */
  System_Text_StringBuilder__Append(pSVar5,pSVar7,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03557134 with catch @ 03557c78 */
  pSVar9 = pIVar4[1].monitor;
                    /* catch() { ... } // from try @ 0355711c with catch @ 03557c7c */
  if (pSVar9 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_035580a0;
                    /* catch() { ... } // from try @ 0355710c with catch @ 03557c80 */
                    /* catch() { ... } // from try @ 035570cc with catch @ 03557c84 */
                    /* catch() { ... } // from try @ 035570b4 with catch @ 03557c88 */
  if (0 < (pSVar9->fields)._size) {
                    /* catch() { ... } // from try @ 035570a8 with catch @ 03557c8c */
    iVar19 = 0;
    do {
                    /* catch() { ... } // from try @ 03557090 with catch @ 03557c90 */
                    /* catch() { ... } // from try @ 03557a14 with catch @ 03557c94 */
                    /* catch() { ... } // from try @ 035572bc with catch @ 03557c98 */
      pIVar8 = System_Collections_Generic_List<object>__get_Item
                         (pSVar9,iVar19,
                          Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_get_Item__);
                    /* catch() { ... } // from try @ 03557258 with catch @ 03557c9c */
      if (pIVar8 == (Il2CppObject *)0x0) goto LAB_035580a0;
      piVar6 = (int *)((long)&pIVar8[1].klass + 4);
                    /* catch() { ... } // from try @ 03557240 with catch @ 03557ca0 */
                    /* catch() { ... } // from try @ 03557234 with catch @ 03557ca4 */
                    /* catch() { ... } // from try @ 0355721c with catch @ 03557ca8 */
                    /* catch() { ... } // from try @ 03557204 with catch @ 03557cac */
      pSVar7 = StringLiteral_2187/*"<1"*/;
      if (0 < *piVar6) {
                    /* catch() { ... } // from try @ 035571fc with catch @ 03557cb0 */
                    /* catch() { ... } // from try @ 035571e4 with catch @ 03557cb4 */
        pSVar7 = System_Int32__ToString((int32_t)piVar6,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035571d8 with catch @ 03557cb8 */
                    /* catch() { ... } // from try @ 035571c0 with catch @ 03557cbc */
      }
                    /* catch() { ... } // from try @ 03556bb0 with catch @ 03557ccc */
      local_64 = *(undefined4 *)&pIVar8[1].klass;
                    /* catch() { ... } // from try @ 03556b98 with catch @ 03557cd0 */
                    /* catch() { ... } // from try @ 03556b90 with catch @ 03557cd4 */
                    /* catch() { ... } // from try @ 03556b78 with catch @ 03557cd8 */
                    /* catch() { ... } // from try @ 03556b6c with catch @ 03557cdc */
      pIVar8 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_64);
                    /* catch() { ... } // from try @ 03556b54 with catch @ 03557ce0 */
                    /* catch() { ... } // from try @ 03557a98 with catch @ 03557ce4 */
                    /* catch() { ... } // from try @ 035570d4 with catch @ 03557ce8 */
                    /* catch() { ... } // from try @ 035579dc with catch @ 03557cec */
                    /* catch() { ... } // from try @ 035579b8 with catch @ 03557cf0 */
                    /* catch() { ... } // from try @ 035579a0 with catch @ 03557cf4 */
      pSVar7 = System_String__Format
                         (StringLiteral_22157/*"x{0} - {1}% \n"*/,pIVar8,(Il2CppObject *)pSVar7,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03557990 with catch @ 03557cf8 */
                    /* catch() { ... } // from try @ 03557978 with catch @ 03557cfc */
                    /* catch() { ... } // from try @ 03557930 with catch @ 03557d00 */
                    /* catch() { ... } // from try @ 03557928 with catch @ 03557d04 */
      System_Text_StringBuilder__Append(pSVar5,pSVar7,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03557910 with catch @ 03557d08 */
      pSVar9 = pIVar4[1].monitor;
                    /* catch() { ... } // from try @ 03557904 with catch @ 03557d0c */
      if (pSVar9 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_035580a0;
                    /* catch() { ... } // from try @ 035578ec with catch @ 03557d10 */
                    /* catch() { ... } // from try @ 0355785c with catch @ 03557d14 */
      iVar19 = iVar19 + 1;
                    /* catch() { ... } // from try @ 03557804 with catch @ 03557d18 */
                    /* catch() { ... } // from try @ 03557854 with catch @ 03557d1c */
    } while (iVar19 < (pSVar9->fields)._size);
  }
                    /* catch() { ... } // from try @ 035577fc with catch @ 03557d20 */
                    /* catch() { ... } // from try @ 0355783c with catch @ 03557d24 */
                    /* catch() { ... } // from try @ 035577e4 with catch @ 03557d28 */
                    /* catch() { ... } // from try @ 03557830 with catch @ 03557d2c */
                    /* catch() { ... } // from try @ 035577d8 with catch @ 03557d30 */
  if (((pIVar3 == (Il2CppObject *)0x0) || (pIVar4[2].klass == (Il2CppClass *)0x0)) ||
     (pIVar3[2].klass == (Il2CppClass *)0x0)) goto LAB_035580a0;
                    /* catch() { ... } // from try @ 03557818 with catch @ 03557d34 */
                    /* catch() { ... } // from try @ 035577c0 with catch @ 03557d38 */
                    /* catch() { ... } // from try @ 03557570 with catch @ 03557d3c */
  Nekki_SF2_GUI_ResolutionImage__set_SpriteName
            ((Nekki_SF2_GUI_ResolutionImage_o *)pIVar3[2].klass,
             ((pIVar4[2].klass)->_1).byval_arg.data,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035572d8 with catch @ 03557d40 */
                    /* catch() { ... } // from try @ 03557bbc with catch @ 03557d44 */
  if (pIVar3[2].klass == (Il2CppClass *)0x0) goto LAB_035580a0;
                    /* catch() { ... } // from try @ 03557a64 with catch @ 03557d48
                       catch() { ... } // from try @ 03557bcc with catch @ 03557d48 */
                    /* catch() { ... } // from try @ 0355719c with catch @ 03557d4c */
  pUVar2 = UnityEngine_Component__get_transform
                     ((UnityEngine_Component_o *)pIVar3[2].klass,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03557174 with catch @ 03557d50
                       catch() { ... } // from try @ 03557bc8 with catch @ 03557d50 */
                    /* catch() { ... } // from try @ 035570f8 with catch @ 03557d54
                       catch() { ... } // from try @ 03557bc4 with catch @ 03557d54 */
                    /* catch() { ... } // from try @ 03557080 with catch @ 03557d58 */
  UnityEngine_TransformExtensions__SetLocalScale(pUVar2,0.9,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03557028 with catch @ 03557d5c */
                    /* catch() { ... } // from try @ 03557020 with catch @ 03557d60 */
  plVar18 = pIVar3[2].monitor;
                    /* catch() { ... } // from try @ 03557008 with catch @ 03557d64 */
                    /* catch() { ... } // from try @ 03556ffc with catch @ 03557d68 */
                    /* catch() { ... } // from try @ 03556fe4 with catch @ 03557d6c */
  pSVar7 = (System_String_o *)
           (*(pSVar5->klass->vtable)._3_ToString.methodPtr)
                     (pSVar5,(pSVar5->klass->vtable)._3_ToString.method);
                    /* catch() { ... } // from try @ 03556fb4 with catch @ 03557d70 */
                    /* catch() { ... } // from try @ 03556f94 with catch @ 03557d74 */
                    /* catch() { ... } // from try @ 03556f8c with catch @ 03557d78 */
                    /* catch() { ... } // from try @ 03556f74 with catch @ 03557d7c */
                    /* catch() { ... } // from try @ 03556f68 with catch @ 03557d80 */
                    /* catch() { ... } // from try @ 03556f50 with catch @ 03557d84 */
  if ((pSVar7 == (System_String_o *)0x0) ||
     (pSVar7 = System_String__TrimEnd(pSVar7,10,(MethodInfo *)0x0), plVar18 == (long *)0x0))
  goto LAB_035580a0;
                    /* catch() { ... } // from try @ 03556f20 with catch @ 03557d88 */
                    /* catch() { ... } // from try @ 03556f00 with catch @ 03557d8c */
                    /* catch() { ... } // from try @ 03556ef8 with catch @ 03557d90 */
                    /* catch() { ... } // from try @ 03556ee0 with catch @ 03557d94 */
                    /* catch() { ... } // from try @ 03556ed4 with catch @ 03557d98 */
                    /* catch() { ... } // from try @ 03556ebc with catch @ 03557d9c */
  (**(code **)(*plVar18 + 0x5e8))(plVar18,pSVar7,*(undefined8 *)(*plVar18 + 0x5f0));
                    /* catch() { ... } // from try @ 03556e7c with catch @ 03557da0 */
  pSVar13 = (__this->fields).DKOKMOCDAJD;
                    /* catch() { ... } // from try @ 03556e74 with catch @ 03557da4 */
  iVar16 = iVar16 + 1;
                    /* catch() { ... } // from try @ 03556e5c with catch @ 03557da8 */
  method = extraout_x1_01;
  if (pSVar13 == (System_Collections_Generic_List_KBAIDAHOMHA__o *)0x0) goto LAB_035580a0;
  goto LAB_03557b4c;
LAB_03557dc4:
                    /* catch() { ... } // from try @ 03556db4 with catch @ 03557dc4 */
                    /* catch() { ... } // from try @ 03556d84 with catch @ 03557dc8 */
                    /* catch() { ... } // from try @ 03556c3c with catch @ 03557dcc */
  if ((pSVar13->fields)._size <= iVar16) {
                    /* catch() { ... } // from try @ 03556270 with catch @ 035580a4 */
                    /* catch() { ... } // from try @ 03556264 with catch @ 035580a8 */
                    /* catch() { ... } // from try @ 0355624c with catch @ 035580ac */
                    /* catch() { ... } // from try @ 03556218 with catch @ 035580b0 */
                    /* catch() { ... } // from try @ 03556210 with catch @ 035580b4 */
                    /* catch() { ... } // from try @ 035561f8 with catch @ 035580b8 */
                    /* catch() { ... } // from try @ 035561ec with catch @ 035580bc */
                    /* catch() { ... } // from try @ 035561d4 with catch @ 035580c0 */
                    /* catch() { ... } // from try @ 035561c4 with catch @ 035580c4 */
    return;
  }
                    /* catch() { ... } // from try @ 03556d4c with catch @ 03557dd0 */
                    /* catch() { ... } // from try @ 03556d34 with catch @ 03557dd4 */
  pUVar17 = (__this->fields)._itemPrefab;
                    /* catch() { ... } // from try @ 03556d28 with catch @ 03557dd8 */
                    /* catch() { ... } // from try @ 03556d10 with catch @ 03557ddc */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03556cd4 with catch @ 03557de0 */
    thunk_FUN_01ba7564();
  }
                    /* catch() { ... } // from try @ 03556ccc with catch @ 03557de4 */
                    /* catch() { ... } // from try @ 03556a70 with catch @ 03557de8 */
                    /* catch() { ... } // from try @ 03556cb4 with catch @ 03557dec */
                    /* catch() { ... } // from try @ 03556ca8 with catch @ 03557df0 */
                    /* catch() { ... } // from try @ 03556c90 with catch @ 03557df4 */
  pUVar17 = (UnityEngine_GameObject_o *)
            UnityEngine_Object__Instantiate<object>
                      ((Il2CppObject *)pUVar17,Method_UnityEngine_Object_Instantiate<GameObject>__);
                    /* catch() { ... } // from try @ 03556a20 with catch @ 03557df8 */
  if (pUVar17 == (UnityEngine_GameObject_o *)0x0) goto LAB_035580a0;
                    /* catch() { ... } // from try @ 03556a18 with catch @ 03557dfc */
                    /* catch() { ... } // from try @ 03556a00 with catch @ 03557e00 */
                    /* catch() { ... } // from try @ 035569f4 with catch @ 03557e04 */
  pUVar2 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035569dc with catch @ 03557e08 */
  pUVar14 = (__this->fields)._scroll;
                    /* catch() { ... } // from try @ 035569ac with catch @ 03557e0c */
                    /* catch() { ... } // from try @ 0355695c with catch @ 03557e10 */
  if ((pUVar14 == (UnityEngine_UI_ScrollRect_o *)0x0) || (pUVar2 == (UnityEngine_Transform_o *)0x0))
  goto LAB_035580a0;
                    /* catch() { ... } // from try @ 03556954 with catch @ 03557e14 */
                    /* catch() { ... } // from try @ 0355693c with catch @ 03557e18 */
                    /* catch() { ... } // from try @ 03556930 with catch @ 03557e1c */
                    /* catch() { ... } // from try @ 03556918 with catch @ 03557e20 */
  UnityEngine_Transform__SetParent
            (pUVar2,(UnityEngine_Transform_o *)(pUVar14->fields).m_Content,false,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035568a8 with catch @ 03557e24 */
                    /* catch() { ... } // from try @ 035568a0 with catch @ 03557e28 */
                    /* catch() { ... } // from try @ 03556888 with catch @ 03557e2c */
                    /* catch() { ... } // from try @ 0355687c with catch @ 03557e30 */
                    /* catch() { ... } // from try @ 03556864 with catch @ 03557e34 */
  pIVar3 = UnityEngine_GameObject__GetComponent<object>
                     (pUVar17,Method_UnityEngine_GameObject_GetComponent<ProbabilityDialogItem>__);
                    /* catch() { ... } // from try @ 03556834 with catch @ 03557e38 */
  pSVar13 = (__this->fields).LOMGJKLDCGH;
                    /* catch() { ... } // from try @ 035567e4 with catch @ 03557e3c */
  if (pSVar13 == (System_Collections_Generic_List_KBAIDAHOMHA__o *)0x0) goto LAB_035580a0;
                    /* catch() { ... } // from try @ 035567dc with catch @ 03557e40 */
                    /* catch() { ... } // from try @ 035567c4 with catch @ 03557e44 */
                    /* catch() { ... } // from try @ 035567b8 with catch @ 03557e48 */
                    /* catch() { ... } // from try @ 035567a0 with catch @ 03557e4c */
                    /* catch() { ... } // from try @ 03556770 with catch @ 03557e50 */
                    /* catch() { ... } // from try @ 03556708 with catch @ 03557e54 */
                    /* catch() { ... } // from try @ 035566f0 with catch @ 03557e58 */
  pIVar4 = System_Collections_Generic_List<object>__get_Item
                     ((System_Collections_Generic_List_object__o *)pSVar13,iVar16,
                      Method_System_Collections_Generic_List<KBAIDAHOMHA>_get_Item__);
                    /* catch() { ... } // from try @ 035566e4 with catch @ 03557e5c */
                    /* catch() { ... } // from try @ 035566cc with catch @ 03557e60 */
                    /* catch() { ... } // from try @ 03557b34 with catch @ 03557e64 */
                    /* catch() { ... } // from try @ 03557b10 with catch @ 03557e68 */
                    /* catch() { ... } // from try @ 03557af4 with catch @ 03557e6c */
                    /* catch() { ... } // from try @ 03557ae8 with catch @ 03557e70 */
  pSVar5 = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
                    /* catch() { ... } // from try @ 03557ad0 with catch @ 03557e74 */
                    /* catch() { ... } // from try @ 035578a4 with catch @ 03557e78 */
                    /* catch() { ... } // from try @ 03557260 with catch @ 03557e7c */
  System_Text_StringBuilder___ctor(pSVar5,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03556bf4 with catch @ 03557e80 */
  if (pIVar4 == (Il2CppObject *)0x0) goto LAB_035580a0;
  piVar6 = (int *)((long)&pIVar4[1].klass + 4);
                    /* catch() { ... } // from try @ 03556694 with catch @ 03557e84 */
                    /* catch() { ... } // from try @ 03556d54 with catch @ 03557e88 */
                    /* catch() { ... } // from try @ 03556ad8 with catch @ 03557e8c */
                    /* catch() { ... } // from try @ 03556710 with catch @ 03557e90 */
  pSVar7 = StringLiteral_2187/*"<1"*/;
  if (0 < *piVar6) {
                    /* catch() { ... } // from try @ 035579c0 with catch @ 03557e94
                       catch() { ... } // from try @ 03557bc0 with catch @ 03557e94 */
                    /* catch() { ... } // from try @ 03557958 with catch @ 03557e98 */
    pSVar7 = System_Int32__ToString((int32_t)piVar6,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035578d4 with catch @ 03557e9c */
                    /* catch() { ... } // from try @ 035577a4 with catch @ 03557ea0 */
  }
                    /* catch() { ... } // from try @ 03557760 with catch @ 03557eb0 */
  local_64 = *(undefined4 *)&pIVar4[1].klass;
                    /* catch() { ... } // from try @ 0355774c with catch @ 03557eb4 */
                    /* catch() { ... } // from try @ 03557740 with catch @ 03557eb8 */
                    /* catch() { ... } // from try @ 035576e4 with catch @ 03557ebc */
                    /* catch() { ... } // from try @ 035576dc with catch @ 03557ec0 */
  pIVar8 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_64);
                    /* catch() { ... } // from try @ 035576c4 with catch @ 03557ec4 */
                    /* catch() { ... } // from try @ 035576b8 with catch @ 03557ec8 */
                    /* catch() { ... } // from try @ 035576a0 with catch @ 03557ecc */
                    /* catch() { ... } // from try @ 03557654 with catch @ 03557ed0 */
                    /* catch() { ... } // from try @ 03557640 with catch @ 03557ed4 */
                    /* catch() { ... } // from try @ 03557638 with catch @ 03557ed8 */
  pSVar7 = System_String__Format
                     (StringLiteral_22157/*"x{0} - {1}% \n"*/,pIVar8,(Il2CppObject *)pSVar7,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03557620 with catch @ 03557edc */
  if (pSVar5 == (System_Text_StringBuilder_o *)0x0) goto LAB_035580a0;
                    /* catch() { ... } // from try @ 03557614 with catch @ 03557ee0 */
                    /* catch() { ... } // from try @ 035575fc with catch @ 03557ee4 */
                    /* catch() { ... } // from try @ 035572c0 with catch @ 03557ee8 */
                    /* catch() { ... } // from try @ 0355729c with catch @ 03557eec */
  System_Text_StringBuilder__Append(pSVar5,pSVar7,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03556c78 with catch @ 03557ef0 */
  pSVar9 = pIVar4[1].monitor;
                    /* catch() { ... } // from try @ 03556628 with catch @ 03557ef4 */
  if (pSVar9 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_035580a0;
                    /* catch() { ... } // from try @ 035565f4 with catch @ 03557ef8 */
                    /* catch() { ... } // from try @ 035565dc with catch @ 03557efc */
                    /* catch() { ... } // from try @ 035565d0 with catch @ 03557f00 */
  if (0 < (pSVar9->fields)._size) {
                    /* catch() { ... } // from try @ 035565b8 with catch @ 03557f04 */
    iVar19 = 0;
    do {
                    /* catch() { ... } // from try @ 03556578 with catch @ 03557f08 */
                    /* catch() { ... } // from try @ 03556564 with catch @ 03557f0c */
                    /* catch() { ... } // from try @ 0355655c with catch @ 03557f10 */
      pIVar8 = System_Collections_Generic_List<object>__get_Item
                         (pSVar9,iVar19,
                          Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_get_Item__);
                    /* catch() { ... } // from try @ 03556544 with catch @ 03557f14 */
      if (pIVar8 == (Il2CppObject *)0x0) goto LAB_035580a0;
      piVar6 = (int *)((long)&pIVar8[1].klass + 4);
                    /* catch() { ... } // from try @ 03556538 with catch @ 03557f18 */
                    /* catch() { ... } // from try @ 03556520 with catch @ 03557f1c */
                    /* catch() { ... } // from try @ 03556510 with catch @ 03557f20 */
                    /* catch() { ... } // from try @ 035564b8 with catch @ 03557f24 */
      pSVar7 = StringLiteral_2187/*"<1"*/;
      if (0 < *piVar6) {
                    /* catch() { ... } // from try @ 035564b0 with catch @ 03557f28 */
                    /* catch() { ... } // from try @ 03556498 with catch @ 03557f2c */
        pSVar7 = System_Int32__ToString((int32_t)piVar6,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0355648c with catch @ 03557f30 */
                    /* catch() { ... } // from try @ 03556474 with catch @ 03557f34 */
      }
                    /* catch() { ... } // from try @ 035563ec with catch @ 03557f44 */
      local_64 = *(undefined4 *)&pIVar8[1].klass;
                    /* catch() { ... } // from try @ 035563e0 with catch @ 03557f48 */
      pIVar8 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_64);
                    /* try { // try from 03557f58 to 03657f6f has its CatchHandler @ 0355806c */
      pSVar7 = System_String__Format
                         (StringLiteral_22157/*"x{0} - {1}% \n"*/,pIVar8,(Il2CppObject *)pSVar7,(MethodInfo *)0x0);
                    /* try { // try from 03557f70 to 0365805b has its CatchHandler @ 035559c8 */
      System_Text_StringBuilder__Append(pSVar5,pSVar7,(MethodInfo *)0x0);
      pSVar9 = pIVar4[1].monitor;
      if (pSVar9 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_035580a0;
      iVar19 = iVar19 + 1;
    } while (iVar19 < (pSVar9->fields)._size);
  }
  if (pIVar3 == (Il2CppObject *)0x0) goto LAB_035580a0;
  plVar18 = pIVar3[2].monitor;
  pSVar7 = (System_String_o *)
           (*(pSVar5->klass->vtable)._3_ToString.methodPtr)
                     (pSVar5,(pSVar5->klass->vtable)._3_ToString.method);
  if ((pSVar7 == (System_String_o *)0x0) ||
     (pSVar7 = System_String__TrimEnd(pSVar7,10,(MethodInfo *)0x0), plVar18 == (long *)0x0))
  goto LAB_035580a0;
  (**(code **)(*plVar18 + 0x5e8))(plVar18,pSVar7,*(undefined8 *)(*plVar18 + 0x5f0));
  if ((pIVar4[3].klass == (Il2CppClass *)0x0) ||
     (pSVar7 = (System_String_o *)((pIVar4[3].klass)->_1).namespaze,
     pSVar7 == (System_String_o *)0x0)) goto LAB_035580a0;
  bVar1 = System_String__StartsWith(pSVar7,StringLiteral_6544/*"Forge"*/,(MethodInfo *)0x0);
  if (bVar1) {
    if (pIVar4[3].klass == (Il2CppClass *)0x0) goto LAB_035580a0;
    pSVar7 = OFFIONDOEPM__HHJFGJLPHCH
                       ((System_String_o *)((pIVar4[3].klass)->_1).namespaze,(MethodInfo *)0x0);
  }
  else {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
                    /* try { // try from 0355805c to 0365806b has its CatchHandler @ 0355806c */
    if (((pIVar4[3].klass == (Il2CppClass *)0x0) || (__this_00 == (JMDPBFOCHHP_o *)0x0)) ||
       (pJVar12 = JMDPBFOCHHP__DOKLIOAMCCO
                            (__this_00,(System_String_o *)((pIVar4[3].klass)->_1).namespaze,
                             (MethodInfo *)0x0), pJVar12 == (JMDPBFOCHHP_ODJJOAOCFKO_o *)0x0))
    goto LAB_035580a0;
    pSVar7 = (pJVar12->fields).KPDPJONADPJ;
  }
                    /* catch() { ... } // from try @ 03557f58 with catch @ 0355806c
                       catch() { ... } // from try @ 0355805c with catch @ 0355806c */
  if (pIVar3[2].klass == (Il2CppClass *)0x0) goto LAB_035580a0;
                    /* try { // try from 03558070 to 03658073 has its CatchHandler @ 0355807c */
                    /* try { // try from 03558074 to 036581d3 has its CatchHandler @ 035559c8 */
  Nekki_SF2_GUI_ResolutionImage__set_SpriteName
            ((Nekki_SF2_GUI_ResolutionImage_o *)pIVar3[2].klass,pSVar7,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03558070 with catch @ 0355807c */
  if (pIVar3[2].klass == (Il2CppClass *)0x0) goto LAB_035580a0;
                    /* catch() { ... } // from try @ 035563c8 with catch @ 03558080 */
                    /* catch() { ... } // from try @ 0355633c with catch @ 03558084 */
  pUVar2 = UnityEngine_Component__get_transform
                     ((UnityEngine_Component_o *)pIVar3[2].klass,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03556334 with catch @ 03558088 */
                    /* catch() { ... } // from try @ 0355631c with catch @ 0355808c */
                    /* catch() { ... } // from try @ 03556310 with catch @ 03558090 */
  UnityEngine_TransformExtensions__SetLocalScale(pUVar2,0.8,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035562f8 with catch @ 03558094 */
  pSVar13 = (__this->fields).LOMGJKLDCGH;
                    /* catch() { ... } // from try @ 035562e8 with catch @ 03558098 */
  iVar16 = iVar16 + 1;
                    /* catch() { ... } // from try @ 03556290 with catch @ 0355809c */
  if (pSVar13 == (System_Collections_Generic_List_KBAIDAHOMHA__o *)0x0) goto LAB_035580a0;
  goto LAB_03557dc4;
}


// ===== private float POEHCBAHPED(JMDPBFOCHHP.FNILDHLJBBJ GDGBNEPJEOO)  [RVA 0x3456FF4]
// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityContent$$POEHCBAHPED @ RVA 0x3456FF4

float Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__POEHCBAHPED
                (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *__this,
                JMDPBFOCHHP_FNILDHLJBBJ_o *GDGBNEPJEOO,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_JJFDHHNGKAL_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o **ppNVar2;
  JMDPBFOCHHP_o *pJVar3;
  System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o *__this_01;
  Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_JJFDHHNGKAL_Fields *pNVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
                    /* try { // try from 03556ffc to 03657003 has its CatchHandler @ 03557d68 */
                    /* try { // try from 03557008 to 0365700f has its CatchHandler @ 03557d64 */
                    /* try { // try from 03557020 to 03657027 has its CatchHandler @ 03557d60 */
  if ((DAT_045682d3 & 1) == 0) {
                    /* try { // try from 03557028 to 03657037 has its CatchHandler @ 03557d5c */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_Dispose__
                );
                    /* try { // try from 0355703c to 03657043 has its CatchHandler @ 03558134 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_get_Current__
                );
                    /* try { // try from 0355704c to 03657067 has its CatchHandler @ 03558130 */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_JJFDHHNGKAL_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_GetEnumerator__
                );
                    /* try { // try from 03557070 to 03657077 has its CatchHandler @ 0355812c */
    DAT_045682d3 = 1;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
                    /* try { // try from 03557080 to 03657087 has its CatchHandler @ 03557d58 */
  local_58.fields._current = (Il2CppObject *)0x0;
  __this_00 = (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_JJFDHHNGKAL_o *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_JJFDHHNGKAL_TypeInfo
                                );
                    /* try { // try from 03557090 to 03657097 has its CatchHandler @ 03557c90 */
  Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_JJFDHHNGKAL___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_JJFDHHNGKAL_o *)0x0) {
    ppNVar2 = &(__this_00->fields).__4__this;
    *ppNVar2 = __this;
                    /* try { // try from 035570a8 to 036570af has its CatchHandler @ 03557c8c */
    thunk_FUN_01c20e04(ppNVar2,__this);
                    /* try { // try from 035570b4 to 036570bb has its CatchHandler @ 03557c88 */
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pJVar3 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    if (pJVar3 != (JMDPBFOCHHP_o *)0x0) {
                    /* try { // try from 035570cc to 036570d3 has its CatchHandler @ 03557c84 */
      pNVar4 = &__this_00->fields;
                    /* try { // try from 035570d4 to 036570f7 has its CatchHandler @ 03557ce8 */
      pNVar4->raidItems = (pJVar3->fields).OFMMMBIIDAE;
      thunk_FUN_01c20e04(pNVar4);
      if (pNVar4->raidItems == (JMDPBFOCHHP_NOPCEDPNNKO_o *)0x0) {
        fVar6 = 0.0;
      }
      else {
        if (GDGBNEPJEOO == (JMDPBFOCHHP_FNILDHLJBBJ_o *)0x0) goto LAB_035571f4;
                    /* try { // try from 035570f8 to 036570ff has its CatchHandler @ 03557d54 */
        fVar5 = Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_JJFDHHNGKAL__JHIHBFFCHHP
                          (__this_00,(GDGBNEPJEOO->fields).GFBNJPMOEKD,2,(MethodInfo *)0x0);
        fVar6 = 1.0;
                    /* try { // try from 0355710c to 03657117 has its CatchHandler @ 03557c80 */
        if (fVar5 != 1.0) {
          __this_01 = (GDGBNEPJEOO->fields).BAPMMGFEIDM;
          if (__this_01 ==
              (System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o *)0x0)
          goto LAB_035571f4;
                    /* try { // try from 0355711c to 03657123 has its CatchHandler @ 03557c7c */
          System_Collections_Generic_List<object>__GetEnumerator
                    (&local_58,(System_Collections_Generic_List_object__o *)__this_01,
                     Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_GetEnumerator__
                    );
                    /* try { // try from 03557134 to 0365713b has its CatchHandler @ 03557c78 */
          fVar6 = 0.0;
                    /* try { // try from 03557140 to 03657147 has its CatchHandler @ 03557c74 */
          while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                   (&local_58,
                                    Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_MoveNext__
                                   ), bVar1) {
                    /* try { // try from 03557158 to 0365715f has its CatchHandler @ 03557c70 */
                    /* try { // try from 03557160 to 0365716f has its CatchHandler @ 03557c6c */
            fVar7 = Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_JJFDHHNGKAL__OBOLNPNGGBH
                              (__this_00,
                               (JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *)local_58.fields._current,
                               (JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *)0x0,1.0,(MethodInfo *)0x0);
            if (fVar7 == 1.0) {
                    /* try { // try from 035571c0 to 036571c7 has its CatchHandler @ 03557cbc */
              System_Collections_Generic_List_Enumerator<object>__Dispose
                        (&local_58,
                         Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_Dispose__
                        );
              return 1.0;
            }
            fVar8 = fVar6 * (1.0 - fVar7);
                    /* try { // try from 03557174 to 0365717b has its CatchHandler @ 03557d50 */
            bVar1 = fVar6 != 0.0;
            fVar6 = 1.0 - fVar7;
            if (bVar1) {
              fVar6 = fVar8;
            }
          }
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_58,
                     Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_Dispose__
                    );
                    /* try { // try from 0355719c to 036571bb has its CatchHandler @ 03557d4c */
          if (fVar6 != 0.0) {
            fVar6 = 1.0 - fVar6;
          }
          fVar6 = 1.0 - (1.0 - fVar5) * (1.0 - fVar6);
        }
      }
                    /* try { // try from 035571d8 to 036571df has its CatchHandler @ 03557cb8 */
                    /* try { // try from 035571e4 to 036571eb has its CatchHandler @ 03557cb4 */
      return fVar6;
    }
  }
LAB_035571f4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool FHPNDJBMBLN(KBAIDAHOMHA GBCPJHKADAD, KBAIDAHOMHA PGEOELLFHCH, ProbabilityContent.COEAHMKFHOB ACCIHBHMFPN)  [RVA 0x34580C8]
// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityContent$$FHPNDJBMBLN @ RVA 0x34580C8

bool Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__FHPNDJBMBLN
               (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *__this,KBAIDAHOMHA_o *GBCPJHKADAD,
               KBAIDAHOMHA_o *PGEOELLFHCH,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  bool bVar1;
  HOOAAGABMBL_o *pHVar2;
  HOOAAGABMBL_o *pHVar3;
  
                    /* catch() { ... } // from try @ 03556168 with catch @ 035580c8 */
                    /* catch() { ... } // from try @ 03556160 with catch @ 035580cc */
                    /* catch() { ... } // from try @ 03556148 with catch @ 035580d0 */
  if ((uint)ACCIHBHMFPN < 2) {
                    /* catch() { ... } // from try @ 03556028 with catch @ 035580f4 */
    if (GBCPJHKADAD == (KBAIDAHOMHA_o *)0x0) goto LAB_03558148;
                    /* catch() { ... } // from try @ 0355601c with catch @ 035580f8 */
                    /* catch() { ... } // from try @ 03556004 with catch @ 035580fc */
    if ((GBCPJHKADAD->fields).IAMKPGAKFNH != false) {
                    /* catch() { ... } // from try @ 03555fa0 with catch @ 03558100 */
      if (PGEOELLFHCH != (KBAIDAHOMHA_o *)0x0) {
                    /* catch() { ... } // from try @ 03555f88 with catch @ 03558104 */
        return (PGEOELLFHCH->fields).IAMKPGAKFNH;
                    /* catch() { ... } // from try @ 03555f7c with catch @ 03558108 */
      }
      goto LAB_03558148;
    }
                    /* catch() { ... } // from try @ 03555f64 with catch @ 0355810c */
    if (PGEOELLFHCH == (KBAIDAHOMHA_o *)0x0) goto LAB_03558148;
                    /* catch() { ... } // from try @ 03556b44 with catch @ 03558110
                       catch() { ... } // from try @ 03556c34 with catch @ 03558110 */
                    /* catch() { ... } // from try @ 03556aa4 with catch @ 03558114
                       catch() { ... } // from try @ 03557b98 with catch @ 03558114 */
    if ((PGEOELLFHCH->fields).IAMKPGAKFNH != false) {
      return false;
    }
                    /* catch() { ... } // from try @ 03556800 with catch @ 03558124
                       catch() { ... } // from try @ 03557b88 with catch @ 03558124 */
    pHVar2 = (GBCPJHKADAD->fields).CJLNOJMBNPN;
                    /* catch() { ... } // from try @ 0355673c with catch @ 03558128
                       catch() { ... } // from try @ 03557b84 with catch @ 03558128 */
    if (pHVar2 == (HOOAAGABMBL_o *)0x0) goto LAB_03558148;
                    /* catch() { ... } // from try @ 03557070 with catch @ 0355812c
                       catch() { ... } // from try @ 03557bb8 with catch @ 0355812c */
    pHVar3 = (PGEOELLFHCH->fields).CJLNOJMBNPN;
  }
  else {
                    /* catch() { ... } // from try @ 0355613c with catch @ 035580d4 */
    if (ACCIHBHMFPN != 2) {
                    /* catch() { ... } // from try @ 03556a3c with catch @ 03558118
                       catch() { ... } // from try @ 03557b94 with catch @ 03558118 */
                    /* catch() { ... } // from try @ 03556978 with catch @ 0355811c
                       catch() { ... } // from try @ 03557b90 with catch @ 0355811c */
                    /* catch() { ... } // from try @ 035568c4 with catch @ 03558120
                       catch() { ... } // from try @ 03557b8c with catch @ 03558120 */
      return false;
    }
                    /* catch() { ... } // from try @ 03556124 with catch @ 035580d8 */
                    /* catch() { ... } // from try @ 035560d8 with catch @ 035580dc */
                    /* catch() { ... } // from try @ 035560d0 with catch @ 035580e0 */
                    /* catch() { ... } // from try @ 035560b8 with catch @ 035580e4 */
    if (((GBCPJHKADAD == (KBAIDAHOMHA_o *)0x0) ||
        (pHVar2 = (HOOAAGABMBL_o *)(GBCPJHKADAD->fields).IEINLOAOCLD, pHVar2 == (HOOAAGABMBL_o *)0x0
        )) || (PGEOELLFHCH == (KBAIDAHOMHA_o *)0x0)) goto LAB_03558148;
                    /* catch() { ... } // from try @ 035560ac with catch @ 035580e8 */
    pHVar3 = (HOOAAGABMBL_o *)(PGEOELLFHCH->fields).IEINLOAOCLD;
                    /* catch() { ... } // from try @ 03556094 with catch @ 035580ec */
  }
                    /* catch() { ... } // from try @ 0355704c with catch @ 03558130 */
  if (pHVar3 != (HOOAAGABMBL_o *)0x0) {
                    /* catch() { ... } // from try @ 0355703c with catch @ 03558134
                       catch() { ... } // from try @ 03557bb4 with catch @ 03558134 */
                    /* catch() { ... } // from try @ 03556fc0 with catch @ 03558138 */
                    /* catch() { ... } // from try @ 03556fa8 with catch @ 0355813c
                       catch() { ... } // from try @ 03557bb0 with catch @ 0355813c */
                    /* catch() { ... } // from try @ 03556f2c with catch @ 03558140 */
                    /* catch() { ... } // from try @ 03556f14 with catch @ 03558144
                       catch() { ... } // from try @ 03557bac with catch @ 03558144 */
    bVar1 = System_String__op_Equality
                      ((pHVar2->fields)._COIPKAKHDFP_k__BackingField,
                       (pHVar3->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
    return bVar1;
  }
LAB_03558148:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03556e9c with catch @ 03558148 */
  FUN_01bab8c8();
}


// ===== private float HMECCPGJAHJ(List<DDMHMABAHHD> GHAAKPDHIJJ, float MCFPOCKJGBM)  [RVA 0x34564A4]
// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityContent$$HMECCPGJAHJ @ RVA 0x34564A4

float Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__HMECCPGJAHJ
                (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *__this,
                System_Collections_Generic_List_DDMHMABAHHD__o *GHAAKPDHIJJ,float MCFPOCKJGBM,
                MethodInfo *method)

{
  bool bVar1;
  float fVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
                    /* try { // try from 035564b0 to 036564b7 has its CatchHandler @ 03557f28 */
                    /* try { // try from 035564b8 to 036564c7 has its CatchHandler @ 03557f24 */
  if ((DAT_045682d4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_Dispose__);
                    /* try { // try from 035564d4 to 036564f7 has its CatchHandler @ 03558190 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_get_Current__);
    __this = (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *)
             FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_GetEnumerator__);
    DAT_045682d4 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (GHAAKPDHIJJ != (System_Collections_Generic_List_DDMHMABAHHD__o *)0x0) {
                    /* try { // try from 03556510 to 0365651b has its CatchHandler @ 03557f20 */
                    /* try { // try from 03556520 to 03656527 has its CatchHandler @ 03557f1c */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)GHAAKPDHIJJ,
               Method_System_Collections_Generic_List<DDMHMABAHHD>_GetEnumerator__);
    fVar2 = 0.0;
    while( true ) {
                    /* try { // try from 03556538 to 0365653f has its CatchHandler @ 03557f18 */
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_MoveNext__);
                    /* try { // try from 03556544 to 0365654b has its CatchHandler @ 03557f14 */
      if (!bVar1) {
                    /* try { // try from 0355655c to 03656563 has its CatchHandler @ 03557f10 */
                    /* try { // try from 03556564 to 03656573 has its CatchHandler @ 03557f0c */
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_Dispose__);
                    /* try { // try from 03556578 to 0365657f has its CatchHandler @ 03557f08 */
        return MCFPOCKJGBM / fVar2;
      }
      if (local_48.fields._current == (Il2CppObject *)0x0) break;
      fVar2 = fVar2 + *(float *)((long)&local_48.fields._current[1].monitor + 4);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== private void JKGADFCFHFO(ProbabilityContent.COEAHMKFHOB ACCIHBHMFPN)  [RVA 0x3457270]
// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityContent$$JKGADFCFHFO @ RVA 0x3457270

void Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__JKGADFCFHFO
               (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *__this,int32_t ACCIHBHMFPN,
               MethodInfo *method)

{
  int32_t JGGJNLLANAE;
  uint uVar1;
  Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_GPMNJAMPJOA_o *__this_00;
  System_Collections_Generic_List_KBAIDAHOMHA__o *__this_01;
  Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_EMFJNGCBDNF_o *__this_02;
  Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_GPMNJAMPJOA_o **ppNVar2;
  KBAIDAHOMHA_o *pKVar3;
  System_Predicate_T__o *match;
  Il2CppObject *pIVar4;
  Il2CppObject *value;
  KBAIDAHOMHA_o **ppKVar5;
  System_Collections_Generic_List_KBAIDAHOMHA__o **ppSVar6;
  KBAIDAHOMHA_array *pKVar7;
  long lVar8;
  System_Collections_Generic_List_KBAIDAHOMHA__o *__this_03;
  int iVar9;
  System_Collections_Generic_List_KBAIDAHOMHA__o *__this_04;
  Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_EMFJNGCBDNF_Fields *pNVar10;
  int NANHIJPKIAP;
  int iVar11;
  
                    /* try { // try from 03557298 to 0365729b has its CatchHandler @ 035581cc */
                    /* try { // try from 0355729c to 036572a3 has its CatchHandler @ 03557eec */
  if ((DAT_045682d5 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_EMFJNGCBDNF_OEFHLHMEAGD__);
                    /* try { // try from 035572bc to 036572bf has its CatchHandler @ 03557c98 */
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_EMFJNGCBDNF_TypeInfo);
                    /* try { // try from 035572c0 to 036572cf has its CatchHandler @ 03557ee8 */
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_GPMNJAMPJOA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KBAIDAHOMHA>_Add__);
                    /* try { // try from 035572d8 to 036572e3 has its CatchHandler @ 03557d40 */
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_Add__);
                    /* try { // try from 035572ec to 036572f3 has its CatchHandler @ 03557c64 */
    FUN_01bab630(&Method_System_Collections_Generic_List<KBAIDAHOMHA>_Find__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KBAIDAHOMHA>__ctor__);
                    /* try { // try from 03557304 to 0365730b has its CatchHandler @ 03557c60 */
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_get_Count__);
                    /* try { // try from 03557310 to 03657317 has its CatchHandler @ 03557c5c */
    FUN_01bab630(&Method_System_Collections_Generic_List<KBAIDAHOMHA>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KBAIDAHOMHA>_get_Item__);
                    /* try { // try from 03557328 to 0365732f has its CatchHandler @ 03557c58 */
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_get_Item__);
                    /* try { // try from 03557330 to 0365733f has its CatchHandler @ 03557c54 */
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_set_Item__);
    FUN_01bab630(&System_Collections_Generic_List<KBAIDAHOMHA>_TypeInfo);
                    /* try { // try from 03557344 to 0365734f has its CatchHandler @ 03557c50 */
    FUN_01bab630(&Method_MGNDHCBAPEN<int,_int>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<int,_int>_TypeInfo);
                    /* try { // try from 0355735c to 03657363 has its CatchHandler @ 03557c1c */
    FUN_01bab630(&System_Predicate<KBAIDAHOMHA>_TypeInfo);
    DAT_045682d5 = 1;
  }
                    /* try { // try from 03557374 to 0365737b has its CatchHandler @ 03557c14 */
  __this_00 = (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_GPMNJAMPJOA_o *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_GPMNJAMPJOA_TypeInfo
                                );
                    /* try { // try from 03557380 to 03657387 has its CatchHandler @ 03557c0c */
  Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_GPMNJAMPJOA___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_GPMNJAMPJOA_o *)0x0) {
                    /* try { // try from 03557398 to 0365739f has its CatchHandler @ 03557c04 */
    (__this_00->fields).__4__this = __this;
                    /* try { // try from 035573a0 to 036573af has its CatchHandler @ 03557bfc */
    thunk_FUN_01c20e04(&__this_00->fields,__this);
    (__this_00->fields).type = ACCIHBHMFPN;
    __this_01 = (System_Collections_Generic_List_KBAIDAHOMHA__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<KBAIDAHOMHA>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<KBAIDAHOMHA>__ctor__);
                    /* try { // try from 035573c4 to 036573cb has its CatchHandler @ 03557c18 */
    iVar9 = (__this_00->fields).type;
    if (iVar9 == 2) {
      ppSVar6 = &(__this->fields).LOMGJKLDCGH;
    }
    else if (iVar9 == 1) {
                    /* try { // try from 035573e8 to 036573ef has its CatchHandler @ 03557c08 */
      ppSVar6 = &(__this->fields).DKOKMOCDAJD;
    }
    else {
      ppSVar6 = &(__this->fields).ACCKHLLKADM;
                    /* try { // try from 035573dc to 036573e3 has its CatchHandler @ 03557c10 */
    }
    __this_03 = *ppSVar6;
    if (__this_03 != (System_Collections_Generic_List_KBAIDAHOMHA__o *)0x0) {
                    /* try { // try from 03557400 to 03657407 has its CatchHandler @ 03557c00 */
      if (0 < (__this_03->fields)._size) {
                    /* try { // try from 03557408 to 03657417 has its CatchHandler @ 03557bf8 */
        iVar9 = 0;
        do {
                    /* try { // try from 03557420 to 0365742b has its CatchHandler @ 035581cc */
          __this_02 = (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_EMFJNGCBDNF_o *)
                      thunk_FUN_01bda818(
                                        Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_EMFJNGCBDNF_TypeInfo
                                        );
                    /* try { // try from 0355742c to 03657437 has its CatchHandler @ 03557c4c */
          Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_EMFJNGCBDNF___ctor
                    (__this_02,(MethodInfo *)0x0);
          if (__this_02 == (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_EMFJNGCBDNF_o *)0x0)
          goto LAB_03557718;
          ppNVar2 = &(__this_02->fields).CS___8__locals1;
          *ppNVar2 = __this_00;
                    /* try { // try from 03557440 to 03657447 has its CatchHandler @ 03557c44 */
          thunk_FUN_01c20e04(ppNVar2,__this_00);
          pKVar3 = (KBAIDAHOMHA_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_03,iVar9,
                              Method_System_Collections_Generic_List<KBAIDAHOMHA>_get_Item__);
          pNVar10 = &__this_02->fields;
                    /* try { // try from 03557458 to 0365745f has its CatchHandler @ 03557c3c */
          pNVar10->curItem = pKVar3;
                    /* try { // try from 03557464 to 0365746b has its CatchHandler @ 03557c34 */
          thunk_FUN_01c20e04(pNVar10,pKVar3);
          match = (System_Predicate_T__o *)
                  thunk_FUN_01bda818(System_Predicate<KBAIDAHOMHA>_TypeInfo);
                    /* try { // try from 0355747c to 03657483 has its CatchHandler @ 03557c2c */
                    /* try { // try from 03557484 to 03657493 has its CatchHandler @ 03557c24 */
          System_Predicate<object>___ctor();
          if (__this_01 == (System_Collections_Generic_List_KBAIDAHOMHA__o *)0x0) goto LAB_03557718;
                    /* try { // try from 035574a0 to 036574a7 has its CatchHandler @ 03557bf4 */
          pIVar4 = System_Collections_Generic_List<object>__Find
                             ((System_Collections_Generic_List_object__o *)__this_01,match,
                              Method_System_Collections_Generic_List<KBAIDAHOMHA>_Find__);
          lVar8 = Method_System_Collections_Generic_List<KBAIDAHOMHA>_Add__;
          pKVar3 = pNVar10->curItem;
          if (pIVar4 == (Il2CppObject *)0x0) {
                    /* try { // try from 035574e4 to 036574f3 has its CatchHandler @ 03557bd4 */
            pKVar7 = (__this_01->fields)._items;
                    /* try { // try from 035574f8 to 036574ff has its CatchHandler @ 03557bf0 */
            (__this_01->fields)._version = (__this_01->fields)._version + 1;
            if (pKVar7 == (KBAIDAHOMHA_array *)0x0) goto LAB_03557718;
            uVar1 = (__this_01->fields)._size;
            if (uVar1 < (uint)pKVar7->max_length) {
                    /* try { // try from 03557510 to 03657517 has its CatchHandler @ 03557be8 */
              (__this_01->fields)._size = uVar1 + 1;
              ppKVar5 = pKVar7->m_Items + (int)uVar1;
                    /* try { // try from 0355751c to 03657523 has its CatchHandler @ 03557be0 */
              *ppKVar5 = pKVar3;
              goto LAB_0355761c;
            }
            lVar8 = *(long *)(lVar8 + 0x20);
            __this_04 = __this_01;
LAB_0355763c:
                    /* try { // try from 03557640 to 0365764f has its CatchHandler @ 03557ed4 */
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_04,(Il2CppObject *)pKVar3
                       ,*(MethodInfo_26E4DAC **)(*(long *)(lVar8 + 0xc0) + 0x70));
          }
          else {
            if (pKVar3 == (KBAIDAHOMHA_o *)0x0) goto LAB_03557718;
                    /* try { // try from 035574b8 to 036574bf has its CatchHandler @ 03557bec */
            NANHIJPKIAP = (pKVar3->fields).ADCKCMDHIHM;
                    /* try { // try from 035574c4 to 036574cb has its CatchHandler @ 03557be4 */
            if (NANHIJPKIAP == *(int *)&pIVar4[1].klass) {
              *(int32_t *)((long)&pIVar4[1].klass + 4) =
                   (pKVar3->fields).FABIFPKFPCK + *(int *)((long)&pIVar4[1].klass + 4);
                    /* try { // try from 035574dc to 036574e3 has its CatchHandler @ 03557bdc */
            }
            else {
              __this_04 = pIVar4[1].monitor;
              if (__this_04 == (System_Collections_Generic_List_KBAIDAHOMHA__o *)0x0)
              goto LAB_03557718;
              iVar11 = (__this_04->fields)._size;
                    /* try { // try from 03557534 to 0365753b has its CatchHandler @ 03557bd8 */
              if ((iVar11 != 0) && (0 < iVar11)) {
                    /* try { // try from 0355753c to 0365754b has its CatchHandler @ 03557bd0 */
                iVar11 = 0;
                do {
                    /* try { // try from 03557554 to 0365755f has its CatchHandler @ 035581cc */
                  value = System_Collections_Generic_List<object>__get_Item
                                    ((System_Collections_Generic_List_object__o *)__this_04,iVar11,
                                     Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_get_Item__
                                    );
                  if ((value == (Il2CppObject *)0x0) ||
                     (pKVar3 = pNVar10->curItem, pKVar3 == (KBAIDAHOMHA_o *)0x0)) goto LAB_03557718;
                    /* try { // try from 03557570 to 03657577 has its CatchHandler @ 03557d3c */
                  NANHIJPKIAP = (pKVar3->fields).ADCKCMDHIHM;
                  if (*(int *)&value[1].klass == NANHIJPKIAP) {
                    *(int32_t *)((long)&value[1].klass + 4) =
                         (pKVar3->fields).FABIFPKFPCK + *(int *)((long)&value[1].klass + 4);
                    if (pIVar4[1].monitor == (System_Collections_Generic_List_object__o *)0x0)
                    goto LAB_03557718;
                    /* try { // try from 03557674 to 03657693 has its CatchHandler @ 035581a8 */
                    System_Collections_Generic_List<object>__set_Item
                              (pIVar4[1].monitor,iVar11,value,
                               Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_set_Item__
                              );
                    goto LAB_03557648;
                  }
                  __this_04 = pIVar4[1].monitor;
                  if (__this_04 == (System_Collections_Generic_List_KBAIDAHOMHA__o *)0x0)
                  goto LAB_03557718;
                    /* try { // try from 03557588 to 0365758f has its CatchHandler @ 03557c48 */
                  iVar11 = iVar11 + 1;
                } while (iVar11 < (__this_04->fields)._size);
              }
                    /* try { // try from 035575ac to 036575b3 has its CatchHandler @ 03557c38 */
              JGGJNLLANAE = (pKVar3->fields).FABIFPKFPCK;
              pKVar3 = (KBAIDAHOMHA_o *)thunk_FUN_01bda818(MGNDHCBAPEN<int,_int>_TypeInfo);
                    /* try { // try from 035575c4 to 036575cb has its CatchHandler @ 03557c30 */
                    /* try { // try from 035575cc to 036575df has its CatchHandler @ 03557c28 */
              MGNDHCBAPEN<int,_int>___ctor
                        ((MGNDHCBAPEN_int__int__o *)pKVar3,NANHIJPKIAP,JGGJNLLANAE,
                         Method_MGNDHCBAPEN<int,_int>__ctor__);
              lVar8 = Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_Add__;
              pKVar7 = (__this_04->fields)._items;
                    /* try { // try from 035575e8 to 036575ef has its CatchHandler @ 03557c20 */
              (__this_04->fields)._version = (__this_04->fields)._version + 1;
              if (pKVar7 == (KBAIDAHOMHA_array *)0x0) goto LAB_03557718;
              uVar1 = (__this_04->fields)._size;
                    /* try { // try from 035575fc to 03657603 has its CatchHandler @ 03557ee4 */
              if ((uint)pKVar7->max_length <= uVar1) {
                lVar8 = *(long *)(lVar8 + 0x20);
                    /* try { // try from 03557638 to 0365763f has its CatchHandler @ 03557ed8 */
                goto LAB_0355763c;
              }
              (__this_04->fields)._size = uVar1 + 1;
              ppKVar5 = pKVar7->m_Items + (int)uVar1;
                    /* try { // try from 03557614 to 0365761b has its CatchHandler @ 03557ee0 */
              *ppKVar5 = pKVar3;
LAB_0355761c:
              thunk_FUN_01c20e04(ppKVar5,pKVar3);
                    /* try { // try from 03557620 to 03657627 has its CatchHandler @ 03557edc */
            }
          }
LAB_03557648:
          iVar9 = iVar9 + 1;
                    /* try { // try from 03557654 to 0365765b has its CatchHandler @ 03557ed0 */
        } while (iVar9 < (__this_03->fields)._size);
      }
      iVar9 = (__this_00->fields).type;
                    /* try { // try from 035576a0 to 036576a7 has its CatchHandler @ 03557ecc */
      if (iVar9 == 2) {
                    /* try { // try from 035576c4 to 036576cb has its CatchHandler @ 03557ec4 */
        ppSVar6 = &(__this->fields).LOMGJKLDCGH;
      }
      else if (iVar9 == 1) {
        ppSVar6 = &(__this->fields).DKOKMOCDAJD;
      }
      else {
        if (iVar9 != 0) {
                    /* try { // try from 035576f8 to 03657713 has its CatchHandler @ 035581a4 */
          return;
        }
                    /* try { // try from 035576b8 to 036576bf has its CatchHandler @ 03557ec8 */
        ppSVar6 = &(__this->fields).ACCKHLLKADM;
      }
      *ppSVar6 = __this_01;
                    /* try { // try from 035576dc to 036576e3 has its CatchHandler @ 03557ec0 */
                    /* try { // try from 035576e4 to 036576f3 has its CatchHandler @ 03557ebc */
      thunk_FUN_01c20e04(ppSVar6,__this_01);
      return;
    }
  }
LAB_03557718:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MOONCCCJECI(DDMHMABAHHD DPILKAHLFOA, string CNIELFLIKJB, float KGCPJFGOGAN)  [RVA 0x34565F0]
// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityContent$$MOONCCCJECI @ RVA 0x34565F0

void Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__MOONCCCJECI
               (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *__this,DDMHMABAHHD_o *DPILKAHLFOA,
               System_String_o *CNIELFLIKJB,float KGCPJFGOGAN,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_GLOGNBHENAL_o *__this_00;
  JMDPBFOCHHP_o *pJVar6;
  System_Predicate_T__o *match;
  Il2CppObject *pIVar7;
  GGHCLMEFIGO_o *__this_01;
  IGFGDDANEPE_o *pIVar8;
  DOPEEDABNEK_o *__this_02;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  MGNPHCAAEIO_HLAKGGFFNAO_o *__this_03;
  HBNENINHPGF_o *OAOLCGAIILM;
  KBAIDAHOMHA_o *__this_04;
  System_Collections_Generic_List_KBAIDAHOMHA__o *__this_05;
  JMDPBFOCHHP_NOPCEDPNNKO_o *pJVar9;
  ACHLOMELAJE_o *pAVar10;
  DDMHMABAHHD_o *pDVar11;
  KBAIDAHOMHA_array *pKVar12;
  int32_t iVar13;
  Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_GLOGNBHENAL_Fields *pNVar14;
  System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *__this_06;
  
                    /* try { // try from 035565f4 to 036565fb has its CatchHandler @ 03557ef8 */
                    /* try { // try from 035565fc to 03656627 has its CatchHandler @ 03558184 */
  if ((DAT_045682d6 & 1) == 0) {
                    /* try { // try from 03556628 to 0365662f has its CatchHandler @ 03557ef4 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_GLOGNBHENAL_ABHMJKNKBKG__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_GLOGNBHENAL_TypeInfo);
                    /* try { // try from 03556648 to 03656687 has its CatchHandler @ 035581c8 */
    FUN_01bab630(&JMDPBFOCHHP_HJLEKMDIDPO_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&KBAIDAHOMHA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KBAIDAHOMHA>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_HJLEKMDIDPO>_Find__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 03556694 to 036566b7 has its CatchHandler @ 03557e84 */
    FUN_01bab630(&System_Predicate<JMDPBFOCHHP_HJLEKMDIDPO>_TypeInfo);
    FUN_01bab630(&StringLiteral_5562/*"EQUIPMENT"*/);
    DAT_045682d6 = 1;
  }
  __this_00 = (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_GLOGNBHENAL_o *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_GLOGNBHENAL_TypeInfo
                                );
  Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_GLOGNBHENAL___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_GLOGNBHENAL_o *)0x0)
  goto LAB_03556a84;
  pNVar14 = &__this_00->fields;
                    /* try { // try from 035566cc to 036566d3 has its CatchHandler @ 03557e60 */
  pNVar14->it = DPILKAHLFOA;
                    /* try { // try from 035566e4 to 036566eb has its CatchHandler @ 03557e5c */
  thunk_FUN_01c20e04(pNVar14,DPILKAHLFOA);
                    /* try { // try from 035566f0 to 036566f7 has its CatchHandler @ 03557e58 */
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pJVar6 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
                    /* try { // try from 03556708 to 0365670f has its CatchHandler @ 03557e54 */
  if ((pJVar6 == (JMDPBFOCHHP_o *)0x0) ||
     (pJVar9 = (pJVar6->fields).OFMMMBIIDAE, pJVar9 == (JMDPBFOCHHP_NOPCEDPNNKO_o *)0x0))
  goto LAB_03556a84;
                    /* try { // try from 03556710 to 03656733 has its CatchHandler @ 03557e90 */
  __this_06 = (pJVar9->fields).GADHINPJDAF;
  match = (System_Predicate_T__o *)
          thunk_FUN_01bda818(System_Predicate<JMDPBFOCHHP_HJLEKMDIDPO>_TypeInfo);
  System_Predicate<object>___ctor();
                    /* try { // try from 0355673c to 0365675f has its CatchHandler @ 03558128 */
  if (__this_06 == (System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *)0x0)
  goto LAB_03556a84;
  pIVar7 = System_Collections_Generic_List<object>__Find
                     ((System_Collections_Generic_List_object__o *)__this_06,match,
                      Method_System_Collections_Generic_List<JMDPBFOCHHP_HJLEKMDIDPO>_Find__);
  if (pIVar7 != (Il2CppObject *)0x0) {
                    /* try { // try from 03556770 to 03656777 has its CatchHandler @ 03557e50 */
                    /* try { // try from 0355677c to 0365679b has its CatchHandler @ 03558178 */
    bVar2 = (JMDPBFOCHHP_HJLEKMDIDPO_TypeInfo->_2).naturalAligment;
                    /* try { // try from 035567a0 to 036567a7 has its CatchHandler @ 03557e4c */
    if (((bVar2 <= (pIVar7->klass->_2).naturalAligment) &&
        ((pIVar7->klass->_2).typeHierarchy[(ulong)bVar2 - 1] ==
         (Il2CppClass *)JMDPBFOCHHP_HJLEKMDIDPO_TypeInfo)) &&
       (bVar5 = System_String__op_Equality(pIVar7[4].monitor,StringLiteral_5562/*"EQUIPMENT"*/,(MethodInfo *)0x0),
       bVar5)) {
                    /* try { // try from 035567b8 to 036567bf has its CatchHandler @ 03557e48 */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 035567c4 to 036567cb has its CatchHandler @ 03557e44 */
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
                    /* try { // try from 035567dc to 036567e3 has its CatchHandler @ 03557e40 */
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 035567e4 to 036567f3 has its CatchHandler @ 03557e3c */
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 03556800 to 03656823 has its CatchHandler @ 03558124 */
      pAVar10 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if ((pAVar10 == (ACHLOMELAJE_o *)0x0) ||
         (__this_01 = (pAVar10->fields).OIDPLCLELEN, __this_01 == (GGHCLMEFIGO_o *)0x0))
      goto LAB_03556a84;
      pIVar8 = GGHCLMEFIGO__JNFIBDBHNOA
                         (__this_01,(System_String_o *)pIVar7[1].klass,(MethodInfo *)0x0);
      if (pIVar8 != (IGFGDDANEPE_o *)0x0) {
        return;
      }
    }
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03556834 to 0365683b has its CatchHandler @ 03557e38 */
  if (DAT_04563eaa == '\0') {
                    /* try { // try from 03556840 to 0365685f has its CatchHandler @ 03558174 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04563eaa = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03556864 to 0365686b has its CatchHandler @ 03557e34 */
  __this_02 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if (__this_02 == (DOPEEDABNEK_o *)0x0) goto LAB_03556a84;
  IKKAMAMLIKA = DOPEEDABNEK__CKKIPBAIEMN(__this_02,CNIELFLIKJB,(MethodInfo *)0x0);
                    /* try { // try from 0355687c to 03656883 has its CatchHandler @ 03557e30 */
  pDVar11 = pNVar14->it;
  if (pDVar11 == (DDMHMABAHHD_o *)0x0) goto LAB_03556a84;
                    /* try { // try from 03556888 to 0365688f has its CatchHandler @ 03557e2c */
                    /* try { // try from 035568a0 to 036568a7 has its CatchHandler @ 03557e28 */
                    /* try { // try from 035568a8 to 036568b7 has its CatchHandler @ 03557e24 */
  switch((pDVar11->fields)._GMPAEDFIIHF_k__BackingField) {
  case 1:
    iVar13 = (pDVar11->fields)._HFPMLGFDOKC_k__BackingField;
    __this_04 = (KBAIDAHOMHA_o *)thunk_FUN_01bda818(KBAIDAHOMHA_TypeInfo);
                    /* try { // try from 035568c4 to 036568e7 has its CatchHandler @ 03558120 */
    bVar5 = true;
    break;
  case 2:
                    /* try { // try from 035568f8 to 03656913 has its CatchHandler @ 03558170 */
    iVar13 = (pDVar11->fields)._HFPMLGFDOKC_k__BackingField;
    __this_04 = (KBAIDAHOMHA_o *)thunk_FUN_01bda818(KBAIDAHOMHA_TypeInfo);
                    /* try { // try from 03556918 to 0365691f has its CatchHandler @ 03557e20 */
    KBAIDAHOMHA___ctor(__this_04,IKKAMAMLIKA,iVar13,KGCPJFGOGAN,(HBNENINHPGF_o *)0x0,false,
                       (MethodInfo *)0x0);
    __this_05 = (__this->fields).DKOKMOCDAJD;
                    /* try { // try from 03556930 to 03656937 has its CatchHandler @ 03557e1c */
    if (__this_05 == (System_Collections_Generic_List_KBAIDAHOMHA__o *)0x0) goto LAB_03556a84;
    goto LAB_035569fc;
  case 3:
                    /* try { // try from 0355693c to 03656943 has its CatchHandler @ 03557e18 */
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 03556954 to 0365695b has its CatchHandler @ 03557e14 */
    __this_03 = MGNPHCAAEIO_TypeInfo->static_fields->BHAAICEFMBC;
                    /* try { // try from 0355695c to 0365696b has its CatchHandler @ 03557e10 */
    if (__this_03 == (MGNPHCAAEIO_HLAKGGFFNAO_o *)0x0) goto LAB_03556a84;
    OAOLCGAIILM = MGNPHCAAEIO_HLAKGGFFNAO__BHJOLIJDBLO(__this_03,CNIELFLIKJB,(MethodInfo *)0x0);
    pDVar11 = pNVar14->it;
    if (pDVar11 == (DDMHMABAHHD_o *)0x0) goto LAB_03556a84;
    iVar13 = (pDVar11->fields)._HFPMLGFDOKC_k__BackingField;
                    /* try { // try from 03556978 to 0365699b has its CatchHandler @ 0355811c */
    iVar1 = (pDVar11->fields)._GMPAEDFIIHF_k__BackingField;
    __this_04 = (KBAIDAHOMHA_o *)thunk_FUN_01bda818(KBAIDAHOMHA_TypeInfo);
                    /* try { // try from 035569ac to 036569b3 has its CatchHandler @ 03557e0c */
    KBAIDAHOMHA___ctor(__this_04,IKKAMAMLIKA,iVar13,KGCPJFGOGAN,OAOLCGAIILM,iVar1 == 1,
                       (MethodInfo *)0x0);
    __this_05 = (__this->fields).LOMGJKLDCGH;
    goto joined_r0x035569b8;
  case 4:
    iVar13 = (pDVar11->fields)._HFPMLGFDOKC_k__BackingField;
    __this_04 = (KBAIDAHOMHA_o *)thunk_FUN_01bda818(KBAIDAHOMHA_TypeInfo);
                    /* try { // try from 035569dc to 036569e3 has its CatchHandler @ 03557e08 */
    bVar5 = false;
    break;
  default:
    return;
  }
  KBAIDAHOMHA___ctor(__this_04,IKKAMAMLIKA,iVar13,KGCPJFGOGAN,(HBNENINHPGF_o *)0x0,bVar5,
                     (MethodInfo *)0x0);
                    /* try { // try from 035569f4 to 036569fb has its CatchHandler @ 03557e04 */
  __this_05 = (__this->fields).ACCKHLLKADM;
joined_r0x035569b8:
                    /* try { // try from 035569b8 to 036569d7 has its CatchHandler @ 0355816c */
  if (__this_05 != (System_Collections_Generic_List_KBAIDAHOMHA__o *)0x0) {
LAB_035569fc:
    lVar4 = Method_System_Collections_Generic_List<KBAIDAHOMHA>_Add__;
                    /* try { // try from 03556a00 to 03656a07 has its CatchHandler @ 03557e00 */
    pKVar12 = (__this_05->fields)._items;
    (__this_05->fields)._version = (__this_05->fields)._version + 1;
                    /* try { // try from 03556a18 to 03656a1f has its CatchHandler @ 03557dfc */
    if (pKVar12 != (KBAIDAHOMHA_array *)0x0) {
      uVar3 = (__this_05->fields)._size;
                    /* try { // try from 03556a20 to 03656a2f has its CatchHandler @ 03557df8 */
      if ((uint)pKVar12->max_length <= uVar3) {
                    /* try { // try from 03556a70 to 03656a77 has its CatchHandler @ 03557de8 */
                    /* try { // try from 03556a7c to 03656a9b has its CatchHandler @ 03558168 */
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_05,(Il2CppObject *)__this_04,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        return;
      }
      (__this_05->fields)._size = uVar3 + 1;
      pKVar12->m_Items[(int)uVar3] = __this_04;
                    /* try { // try from 03556a3c to 03656a5f has its CatchHandler @ 03558118 */
      thunk_FUN_01c20e04(pKVar12->m_Items + (int)uVar3,__this_04);
      return;
    }
  }
LAB_03556a84:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private float IHOCHOEKBMB(JMDPBFOCHHP.FNILDHLJBBJ.FICOAMDKLKJ IFMCOJNEHEO, JMDPBFOCHHP.FNILDHLJBBJ.FICOAMDKLKJ AOCJBPCEMHL, float OLBJCNHIFKG)  [RVA 0x345814C]
// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityContent$$IHOCHOEKBMB @ RVA 0x345814C

float Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__IHOCHOEKBMB
                (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *__this,
                JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *IFMCOJNEHEO,
                JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *AOCJBPCEMHL,float OLBJCNHIFKG,
                MethodInfo *method)

{
  float fVar1;
  
                    /* catch() { ... } // from try @ 03556e90 with catch @ 0355814c
                       catch() { ... } // from try @ 03557ba8 with catch @ 0355814c */
                    /* catch() { ... } // from try @ 03556e18 with catch @ 03558150 */
                    /* catch() { ... } // from try @ 03556e0c with catch @ 03558154
                       catch() { ... } // from try @ 03557ba4 with catch @ 03558154 */
                    /* catch() { ... } // from try @ 03556d90 with catch @ 03558158 */
                    /* catch() { ... } // from try @ 03556d78 with catch @ 0355815c
                       catch() { ... } // from try @ 03557ba0 with catch @ 0355815c */
                    /* catch() { ... } // from try @ 03556afc with catch @ 03558160
                       catch() { ... } // from try @ 03557b9c with catch @ 03558160 */
                    /* catch() { ... } // from try @ 03556ce8 with catch @ 03558164 */
  if ((AOCJBPCEMHL == (JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *)0x0) ||
     ((AOCJBPCEMHL->fields).MOIGDPBNMNI != 1)) {
                    /* catch() { ... } // from try @ 0355771c with catch @ 03558180 */
    if (IFMCOJNEHEO == (JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *)0x0) goto LAB_03558198;
                    /* catch() { ... } // from try @ 035565fc with catch @ 03558184 */
    fVar1 = (IFMCOJNEHEO->fields).FABIFPKFPCK;
  }
  else {
                    /* catch() { ... } // from try @ 03556a7c with catch @ 03558168 */
    if (IFMCOJNEHEO == (JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *)0x0) {
LAB_03558198:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03556358 with catch @ 03558198
                       catch() { ... } // from try @ 03557b70 with catch @ 03558198 */
      FUN_01bab8c8();
    }
                    /* catch() { ... } // from try @ 035569b8 with catch @ 0355816c */
                    /* catch() { ... } // from try @ 035568f8 with catch @ 03558170 */
                    /* catch() { ... } // from try @ 03556840 with catch @ 03558174 */
                    /* catch() { ... } // from try @ 0355677c with catch @ 03558178 */
    fVar1 = Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__HMECCPGJAHJ
                      (__this,(AOCJBPCEMHL->fields).BAPMMGFEIDM,(IFMCOJNEHEO->fields).EOLDGEJPLJK,
                       (MethodInfo *)AOCJBPCEMHL);
                    /* catch() { ... } // from try @ 03557b18 with catch @ 0355817c
                       catch() { ... } // from try @ 03557b80 with catch @ 0355817c */
  }
                    /* catch() { ... } // from try @ 03556048 with catch @ 03558188 */
                    /* catch() { ... } // from try @ 03555fa8 with catch @ 0355818c */
                    /* catch() { ... } // from try @ 035564d4 with catch @ 03558190
                       catch() { ... } // from try @ 03557b78 with catch @ 03558190 */
                    /* catch() { ... } // from try @ 03556428 with catch @ 03558194
                       catch() { ... } // from try @ 03557b74 with catch @ 03558194 */
  return fVar1 * OLBJCNHIFKG;
}


// ===== private float HMECCPGJAHJ(List<JMDPBFOCHHP.FNILDHLJBBJ.FICOAMDKLKJ> IKIJJNCPGEH, float MCFPOCKJGBM)  [RVA 0x345819C]
// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityContent$$HMECCPGJAHJ @ RVA 0x345819C

float Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__HMECCPGJAHJ
                (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *__this,
                System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o *IKIJJNCPGEH,
                float MCFPOCKJGBM,MethodInfo *method)

{
  bool bVar1;
  float fVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
                    /* catch() { ... } // from try @ 035562ac with catch @ 0355819c
                       catch() { ... } // from try @ 03557b6c with catch @ 0355819c */
                    /* catch() { ... } // from try @ 03556188 with catch @ 035581a0
                       catch() { ... } // from try @ 03557b68 with catch @ 035581a0 */
                    /* catch() { ... } // from try @ 035576f8 with catch @ 035581a4 */
                    /* catch() { ... } // from try @ 03557674 with catch @ 035581a8 */
                    /* catch() { ... } // from try @ 03556c6c with catch @ 035581ac
                       catch() { ... } // from try @ 03557b7c with catch @ 035581ac */
                    /* catch() { ... } // from try @ 03556594 with catch @ 035581b0 */
                    /* catch() { ... } // from try @ 035563a0 with catch @ 035581b4 */
                    /* catch() { ... } // from try @ 0355622c with catch @ 035581b8 */
                    /* catch() { ... } // from try @ 03556100 with catch @ 035581bc */
  if ((DAT_045682d7 & 1) == 0) {
                    /* catch() { ... } // from try @ 035560ec with catch @ 035581c0
                       catch() { ... } // from try @ 03557b64 with catch @ 035581c0 */
                    /* catch() { ... } // from try @ 03556074 with catch @ 035581c4 */
                    /* catch() { ... } // from try @ 03556648 with catch @ 035581c8 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_Dispose__
                );
                    /* catch() { ... } // from try @ 03556c68 with catch @ 035581cc
                       catch() { ... } // from try @ 03557298 with catch @ 035581cc
                       catch() { ... } // from try @ 03557420 with catch @ 035581cc
                       catch() { ... } // from try @ 03557554 with catch @ 035581cc
                       catch() { ... } // from try @ 03557874 with catch @ 035581cc
                       catch() { ... } // from try @ 03557a08 with catch @ 035581cc
                       catch() { ... } // from try @ 03557a54 with catch @ 035581cc */
                    /* catch() { ... } // from try @ 03555fd8 with catch @ 035581d0
                       catch() { ... } // from try @ 03557b60 with catch @ 035581d0 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_get_Current__
                );
    __this = (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *)
             FUN_01bab630(&
                          Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_GetEnumerator__
                         );
    DAT_045682d7 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (IKIJJNCPGEH != (System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o *)0x0)
  {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)IKIJJNCPGEH,
               Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_GetEnumerator__
              );
    fVar2 = 0.0;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_MoveNext__
                        );
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_Dispose__
                  );
        return MCFPOCKJGBM / fVar2;
      }
      if (local_48.fields._current == (Il2CppObject *)0x0) break;
      fVar2 = fVar2 + *(float *)&local_48.fields._current[1].klass;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== private void KGLBGFGMCAG(JMDPBFOCHHP.FNILDHLJBBJ.FICOAMDKLKJ PBDIPLHDHHD, float KAFHJNFHFHL)  [RVA 0x34582E8]
// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityContent$$KGLBGFGMCAG @ RVA 0x34582E8

void Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__KGLBGFGMCAG
               (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *__this,
               JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *PBDIPLHDHHD,float KAFHJNFHFHL,
               MethodInfo *method)

{
  bool bVar1;
  DDMHMABAHHD_o *DPILKAHLFOA;
  System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o *__this_00;
  MethodInfo *in_x3;
  System_Collections_Generic_List_DDMHMABAHHD__o *__this_01;
  int index;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  if ((DAT_045682d8 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_GetEnumerator__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Count__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_get_Count__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__);
    DAT_045682d8 = 1;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  if ((PBDIPLHDHHD != (JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *)0x0) &&
     (__this_01 = (PBDIPLHDHHD->fields).GFBNJPMOEKD,
     __this_01 != (System_Collections_Generic_List_DDMHMABAHHD__o *)0x0)) {
    if (0 < (__this_01->fields)._size) {
      index = 0;
      do {
        DPILKAHLFOA = (DDMHMABAHHD_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this_01,index,
                                 Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__);
        if (DPILKAHLFOA == (DDMHMABAHHD_o *)0x0) goto LAB_0355845c;
        Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__MOONCCCJECI
                  (__this,DPILKAHLFOA,(DPILKAHLFOA->fields)._COIPKAKHDFP_k__BackingField,
                   (DPILKAHLFOA->fields)._BKOJHCAOKBO_k__BackingField * KAFHJNFHFHL,in_x3);
        index = index + 1;
      } while (index < (__this_01->fields)._size);
    }
    __this_00 = (PBDIPLHDHHD->fields).BAPMMGFEIDM;
    if (__this_00 != (System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o *)0x0)
    {
      if (0 < (__this_00->fields)._size) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_58,(System_Collections_Generic_List_object__o *)__this_00,
                   Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_GetEnumerator__
                  );
        while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_58,
                                  Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_MoveNext__
                                 ), bVar1) {
          Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__FillContainerItemChances
                    (__this,(JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *)local_58.fields._current,
                     PBDIPLHDHHD,KAFHJNFHFHL,in_x3);
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_58,
                   Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_Dispose__
                  );
      }
      return;
    }
  }
LAB_0355845c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Init(JMDPBFOCHHP.ENBCJNLAHAC FHCHNMBPDDK, Action<object> DMEKIMDACOD, string EJBLDNOOBDP, LabelButton.MANJLBPDELA PEMBNLANBGE = 1, int LIBIMGBINNP = 1, bool KBIPPAEJHLH = False, bool OCBFFECAJFG = False)  [RVA 0x34584C8]
// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityContent$$Init @ RVA 0x34584C8

void Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__Init
               (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *__this,
               JMDPBFOCHHP_ENBCJNLAHAC_o *FHCHNMBPDDK,System_Action_object__o *DMEKIMDACOD,
               System_String_o *EJBLDNOOBDP,int32_t PEMBNLANBGE,int32_t LIBIMGBINNP,bool KBIPPAEJHLH
               ,bool OCBFFECAJFG,MethodInfo *method)

{
  int32_t *piVar1;
  long lVar2;
  bool bVar3;
  int32_t iVar4;
  LabelButton_o *pLVar5;
  UnityEngine_GameObject_o *__this_00;
  System_String_o *pSVar6;
  ACHLOMELAJE_o *__this_01;
  UnityEngine_RectTransform_o *pUVar7;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  UnityEngine_UI_ScrollRect_o *pUVar8;
  JMDPBFOCHHP_ENBCJNLAHAC_o **ppJVar9;
  Nekki_SF2_GUI_LabelAlias_o *__this_02;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  UnityEngine_Vector2_o UVar14;
  UnityEngine_Color_o UVar15;
  UnityEngine_Rect_o UVar16;
  
  if ((DAT_045682d9 & 1) == 0) {
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    FUN_01bab630(&StringLiteral_20991/*"shopBuy"*/);
    FUN_01bab630(&StringLiteral_20290/*"probabilityDlgBuy{img::MiscSprites.ruby}{"*/);
    FUN_01bab630(&StringLiteral_22500/*"}"*/);
    DAT_045682d9 = 1;
  }
  ppJVar9 = &(__this->fields).AICEKIFKCEH;
  *ppJVar9 = FHCHNMBPDDK;
  thunk_FUN_01c20e04(ppJVar9,FHCHNMBPDDK);
  (__this->fields).HNMGGECHAKN = OCBFFECAJFG;
  if (FHCHNMBPDDK != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
    __this_02 = (__this->fields)._header;
    bVar3 = PCOEHCPGBBG__BDLEIEHBFAD((FHCHNMBPDDK->fields).JMGIACHBIKG,(MethodInfo *)0x0);
    if (__this_02 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      lVar2 = 0x10;
      if (!bVar3) {
        lVar2 = 0x18;
      }
      Nekki_SF2_GUI_LabelAlias__set_Alias
                (__this_02,*(System_String_o **)((long)&FHCHNMBPDDK->klass + lVar2),
                 (MethodInfo *)0x0);
      if (OCBFFECAJFG) {
        pLVar5 = (__this->fields)._buyButton;
        if ((pLVar5 == (LabelButton_o *)0x0) ||
           (__this_00 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pLVar5,(MethodInfo *)0x0),
           __this_00 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03558834;
        UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
        method_00 = extraout_x1;
      }
      else {
        bVar3 = PCOEHCPGBBG__BDLEIEHBFAD(EJBLDNOOBDP,(MethodInfo *)0x0);
        pLVar5 = (__this->fields)._buyButton;
        if ((bVar3) && (EJBLDNOOBDP = StringLiteral_20991/*"shopBuy"*/, KBIPPAEJHLH)) {
          piVar1 = &(FHCHNMBPDDK->fields).NGMFKGGBHND;
          pSVar6 = System_Int32__ToString((int32_t)piVar1,(MethodInfo *)0x0);
          pSVar6 = System_String__Concat
                             (StringLiteral_20290/*"probabilityDlgBuy{img::MiscSprites.ruby}{"*/,pSVar6,StringLiteral_22500/*"}"*/,(MethodInfo *)0x0);
          if (pLVar5 == (LabelButton_o *)0x0) goto LAB_03558834;
          LabelButton__set_Alias(pLVar5,pSVar6,(MethodInfo *)0x0);
          pLVar5 = (__this->fields)._buyButton;
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04565b7d == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7d = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (__this_01 == (ACHLOMELAJE_o *)0x0) goto LAB_03558834;
          bVar3 = ACHLOMELAJE__MIFEPGNGDON(__this_01,(long)*piVar1,(MethodInfo *)0x0);
          if (bVar3) {
            fVar12 = 1.0;
            fVar13 = 0.0;
            fVar10 = 0.0;
            fVar11 = 0.0;
          }
          else {
            if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            UVar15 = FGKGKDEJCOG__IALPNFOEEBP((MethodInfo *)0x0);
            fVar12 = UVar15.fields.a;
            fVar11 = UVar15.fields.b;
            fVar10 = UVar15.fields.g;
            fVar13 = UVar15.fields.r;
          }
          if (pLVar5 == (LabelButton_o *)0x0) goto LAB_03558834;
          UVar15.fields.g = fVar10;
          UVar15.fields.r = fVar13;
          UVar15.fields.a = fVar12;
          UVar15.fields.b = fVar11;
          LabelButton__set_Color(pLVar5,UVar15,(MethodInfo *)0x0);
        }
        else {
          if (pLVar5 == (LabelButton_o *)0x0) goto LAB_03558834;
          LabelButton__set_Alias(pLVar5,EJBLDNOOBDP,(MethodInfo *)0x0);
        }
        pLVar5 = (__this->fields)._buyButton;
        if (pLVar5 == (LabelButton_o *)0x0) goto LAB_03558834;
        LabelButton__set_ButtonColor(pLVar5,PEMBNLANBGE,(MethodInfo *)0x0);
        pLVar5 = (__this->fields)._buyButton;
        if (pLVar5 == (LabelButton_o *)0x0) goto LAB_03558834;
        (pLVar5->fields).super.super.ButtonId = LIBIMGBINNP;
        SFButton__AddEventListener((SFButton_o *)pLVar5,2,DMEKIMDACOD,(MethodInfo *)0x0);
        method_00 = extraout_x1_00;
      }
      Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__EFMALKIOHMA(__this,method_00);
      pUVar8 = (__this->fields)._scroll;
      if ((pUVar8 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
         (pUVar7 = (pUVar8->fields).m_Content, pUVar7 != (UnityEngine_RectTransform_o *)0x0)) {
        iVar4 = UnityEngine_Transform__get_childCount
                          ((UnityEngine_Transform_o *)pUVar7,(MethodInfo *)0x0);
        if (iVar4 < 1) {
          fVar13 = 0.0;
        }
        else {
          pUVar8 = (__this->fields)._scroll;
          if ((((pUVar8 == (UnityEngine_UI_ScrollRect_o *)0x0) ||
               (pUVar7 = (pUVar8->fields).m_Content, pUVar7 == (UnityEngine_RectTransform_o *)0x0))
              || (pUVar7 = (UnityEngine_RectTransform_o *)
                           UnityEngine_Transform__GetChild
                                     ((UnityEngine_Transform_o *)pUVar7,0,(MethodInfo *)0x0),
                 pUVar7 == (UnityEngine_RectTransform_o *)0x0)) ||
             (pUVar7->klass != UnityEngine_RectTransform_TypeInfo)) goto LAB_03558834;
          UVar14 = UnityEngine_RectTransform__get_sizeDelta(pUVar7,(MethodInfo *)0x0);
          pUVar8 = (__this->fields)._scroll;
          if ((pUVar8 == (UnityEngine_UI_ScrollRect_o *)0x0) ||
             (pUVar7 = (pUVar8->fields).m_Content, pUVar7 == (UnityEngine_RectTransform_o *)0x0))
          goto LAB_03558834;
          iVar4 = UnityEngine_Transform__get_childCount
                            ((UnityEngine_Transform_o *)pUVar7,(MethodInfo *)0x0);
          fVar13 = UVar14.fields.y * (float)iVar4;
        }
        pUVar8 = (__this->fields)._scroll;
        if ((pUVar8 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
           (pUVar7 = (pUVar8->fields).m_Viewport, pUVar7 != (UnityEngine_RectTransform_o *)0x0)) {
          UVar16 = UnityEngine_RectTransform__get_rect(pUVar7,(MethodInfo *)0x0);
          (pUVar8->fields).m_Vertical = UVar16.fields.m_Height + 0.01 <= fVar13;
          return;
        }
      }
    }
  }
LAB_03558834:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private int FMBJPOAOGFJ(KBAIDAHOMHA FMPJLBLNHMC, KBAIDAHOMHA IHEPHBIPLPM)  [RVA 0x3458838]
// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityContent$$FMBJPOAOGFJ @ RVA 0x3458838

int32_t Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__FMBJPOAOGFJ
                  (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *__this,
                  KBAIDAHOMHA_o *FMPJLBLNHMC,KBAIDAHOMHA_o *IHEPHBIPLPM,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  int iVar3;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *pSVar6;
  int32_t *piVar7;
  
  if ((DAT_045682da & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_get_Count__);
    __this = (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *)
             FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_get_Item__)
    ;
    DAT_045682da = 1;
  }
  if ((FMPJLBLNHMC == (KBAIDAHOMHA_o *)0x0) ||
     (__this = (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *)(FMPJLBLNHMC->fields).ECGLDFDOAFM
     , __this == (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *)0x0)) goto LAB_03558968;
  iVar3 = *(int *)&(__this->fields).super.m_CancellationTokenSource;
  if (iVar3 == 0) {
joined_r0x035588f4:
    if (IHEPHBIPLPM == (KBAIDAHOMHA_o *)0x0) {
LAB_03558968:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(__this);
    }
  }
  else {
    if ((IHEPHBIPLPM == (KBAIDAHOMHA_o *)0x0) ||
       (pSVar6 = (IHEPHBIPLPM->fields).ECGLDFDOAFM,
       pSVar6 == (System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *)0x0))
    goto LAB_03558968;
    iVar1 = (pSVar6->fields)._size;
    if (iVar1 != 0) {
      if (0 < iVar3) {
        if (0 < iVar1) {
          pIVar4 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar6,0,
                              Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_get_Item__
                             );
          __this = (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *)0x0;
          if (pIVar4 != (Il2CppObject *)0x0) {
            pSVar6 = (FMPJLBLNHMC->fields).ECGLDFDOAFM;
            __this = (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *)0x0;
            if (pSVar6 != (System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *)0x0) {
              pIVar5 = System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar6,0,
                                  Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_get_Item__
                                 );
              __this = (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *)0x0;
              if (pIVar5 != (Il2CppObject *)0x0) {
                iVar3 = (int)pIVar4 + 0x14;
                piVar7 = (int32_t *)((long)&pIVar5[1].klass + 4);
                goto LAB_03558900;
              }
            }
          }
          goto LAB_03558968;
        }
        pIVar4 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this,0,
                            Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_get_Item__
                           );
        __this = (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *)0x0;
        if (pIVar4 == (Il2CppObject *)0x0) goto LAB_03558968;
        iVar3 = (int)pIVar4 + 0x14;
        piVar7 = &(IHEPHBIPLPM->fields).FABIFPKFPCK;
        goto LAB_03558900;
      }
      if (iVar1 < 1) {
        return 0;
      }
      IHEPHBIPLPM = (KBAIDAHOMHA_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar6,0,
                               Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_get_Item__
                              );
      __this = (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *)0x0;
      goto joined_r0x035588f4;
    }
  }
  iVar3 = (int)IHEPHBIPLPM + 0x14;
  piVar7 = &(FMPJLBLNHMC->fields).FABIFPKFPCK;
LAB_03558900:
  iVar2 = System_Int32__CompareTo(iVar3,*piVar7,(MethodInfo *)0x0);
  return iVar2;
}


// ===== public void FillContainerItemChances(JMDPBFOCHHP.FNILDHLJBBJ.FICOAMDKLKJ PBDIPLHDHHD, JMDPBFOCHHP.FNILDHLJBBJ.FICOAMDKLKJ AOCJBPCEMHL, float CMPEHJEKAJB)  [RVA 0x3456A88]
// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityContent$$FillContainerItemChances @ RVA 0x3456A88

void Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__FillContainerItemChances
               (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *__this,
               JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *PBDIPLHDHHD,
               JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *AOCJBPCEMHL,float CMPEHJEKAJB,
               MethodInfo *method)

{
  int iVar1;
  float fVar2;
  
  if (PBDIPLHDHHD == (JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar1 = (PBDIPLHDHHD->fields).MOIGDPBNMNI;
                    /* try { // try from 03556aa4 to 03656ac7 has its CatchHandler @ 03558114 */
  if (iVar1 == 3) {
                    /* try { // try from 03556afc to 03656b03 has its CatchHandler @ 03558160 */
    fVar2 = Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__IHOCHOEKBMB
                      (__this,PBDIPLHDHHD,AOCJBPCEMHL,CMPEHJEKAJB,method);
    Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__FEGLJPNHFJF
              (__this,PBDIPLHDHHD,fVar2,(MethodInfo *)AOCJBPCEMHL);
    return;
  }
  if (iVar1 == 2) {
                    /* try { // try from 03556ad8 to 03656afb has its CatchHandler @ 03557e8c */
    fVar2 = Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__IHOCHOEKBMB
                      (__this,PBDIPLHDHHD,AOCJBPCEMHL,CMPEHJEKAJB,method);
    Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__KGLBGFGMCAG
              (__this,PBDIPLHDHHD,fVar2,(MethodInfo *)AOCJBPCEMHL);
    return;
  }
  if (iVar1 == 1) {
    fVar2 = Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__IHOCHOEKBMB
                      (__this,PBDIPLHDHHD,AOCJBPCEMHL,CMPEHJEKAJB,method);
    Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__AEDCNNNBBPJ
              (__this,PBDIPLHDHHD,fVar2,(MethodInfo *)AOCJBPCEMHL);
    return;
  }
  return;
}


// ===== private void FEGLJPNHFJF(JMDPBFOCHHP.FNILDHLJBBJ.FICOAMDKLKJ PBDIPLHDHHD, float KAFHJNFHFHL)  [RVA 0x345896C]
// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityContent$$FEGLJPNHFJF @ RVA 0x345896C

void Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__FEGLJPNHFJF
               (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *__this,
               JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *PBDIPLHDHHD,float KAFHJNFHFHL,
               MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppObject *pIVar1;
  GGHCLMEFIGO_o *__this_01;
  IGFGDDANEPE_o *pIVar2;
  DDMHMABAHHD_o *DPILKAHLFOA;
  MethodInfo *in_x3;
  int iVar3;
  ACHLOMELAJE_o *pAVar4;
  System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o *pSVar5;
  int iVar6;
  System_Collections_Generic_List_DDMHMABAHHD__o *collection;
  
  if ((DAT_045682db & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Count__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_get_Count__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<DDMHMABAHHD>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_14844/*"WRContainer should not have sub containers"*/);
    DAT_045682db = 1;
  }
  if (PBDIPLHDHHD != (JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *)0x0) {
    collection = (PBDIPLHDHHD->fields).GFBNJPMOEKD;
    __this_00 = (System_Collections_Generic_List_object__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<DDMHMABAHHD>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              (__this_00,(System_Collections_Generic_IEnumerable_T__o *)collection,
               Method_System_Collections_Generic_List<DDMHMABAHHD>__ctor__);
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      iVar3 = (__this_00->fields)._size;
      if (0 < iVar3) {
        iVar6 = 0;
        do {
          pIVar1 = System_Collections_Generic_List<object>__get_Item
                             (__this_00,iVar6,
                              Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__);
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
          }
          if (DAT_04565b7d == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7d = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (((pAVar4 == (ACHLOMELAJE_o *)0x0) || (pIVar1 == (Il2CppObject *)0x0)) ||
             (__this_01 = (pAVar4->fields).OIDPLCLELEN, __this_01 == (GGHCLMEFIGO_o *)0x0))
          goto LAB_03558bec;
          pIVar2 = GGHCLMEFIGO__JNFIBDBHNOA
                             (__this_01,(System_String_o *)pIVar1[1].klass,(MethodInfo *)0x0);
          if (pIVar2 == (IGFGDDANEPE_o *)0x0) {
            iVar3 = (__this_00->fields)._size;
            iVar6 = iVar6 + 1;
          }
          else {
            System_Collections_Generic_List<object>__RemoveAt
                      (__this_00,iVar6,
                       Method_System_Collections_Generic_List<DDMHMABAHHD>_RemoveAt__);
            iVar3 = (__this_00->fields)._size;
          }
        } while (iVar6 < iVar3);
      }
      if (0 < iVar3) {
        iVar6 = 0;
        do {
          DPILKAHLFOA = (DDMHMABAHHD_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  (__this_00,iVar6,
                                   Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__);
          if (DPILKAHLFOA == (DDMHMABAHHD_o *)0x0) goto LAB_03558bec;
          Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__MOONCCCJECI
                    (__this,DPILKAHLFOA,(DPILKAHLFOA->fields)._COIPKAKHDFP_k__BackingField,
                     (1.0 / (float)iVar3) * KAFHJNFHFHL,in_x3);
          iVar6 = iVar6 + 1;
        } while (iVar6 < (__this_00->fields)._size);
      }
      pSVar5 = (PBDIPLHDHHD->fields).BAPMMGFEIDM;
      if (pSVar5 != (System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o *)0x0) {
        if ((pSVar5->fields)._size < 1) {
          return;
        }
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogError(StringLiteral_14844/*"WRContainer should not have sub containers"*/,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_03558bec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3458BF0]
// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityContent$$.ctor @ RVA 0x3458BF0

void Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_KBAIDAHOMHA__o *pSVar1;
  System_Collections_Generic_List_KBAIDAHOMHA__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_045682dc & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KBAIDAHOMHA>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<KBAIDAHOMHA>_TypeInfo);
    DAT_045682dc = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Collections_Generic_List_KBAIDAHOMHA__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<KBAIDAHOMHA>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<KBAIDAHOMHA>__ctor__);
  ppSVar2 = &(__this->fields).ACCKHLLKADM;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_KBAIDAHOMHA__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<KBAIDAHOMHA>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<KBAIDAHOMHA>__ctor__);
  ppSVar2 = &(__this->fields).LOMGJKLDCGH;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_KBAIDAHOMHA__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<KBAIDAHOMHA>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<KBAIDAHOMHA>__ctor__);
  ppSVar2 = &(__this->fields).DKOKMOCDAJD;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

