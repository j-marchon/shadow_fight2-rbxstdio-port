// TypeDefIndex 414
// Namespace: Nekki.SF2.GUI.Shop
// public class ParametersPanel : MonoBehaviour
// Fields:
//   private VerticalLayoutGroup _LayoutGroup; // 0x20
//   private LayoutElement _LayoutElement; // 0x28
//   private RectTransform _ScrollContent; // 0x30
//   private GameObject _ItemPrefab; // 0x38
//   private Nullable<float> OIOACOCFGAM; // 0x40
//   private List<ParameterScrollItem> HEHMAPDMHIG; // 0x48

// ===== public void .ctor()  [RVA 0x3486A18]
// Nekki.SF2.GUI.Shop.ParametersPanel$$.ctor @ RVA 0x3486A18

void Nekki_SF2_GUI_Shop_ParametersPanel___ctor
               (Nekki_SF2_GUI_Shop_ParametersPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ParameterScrollItem__o *__this_00;
  System_Collections_Generic_List_ParameterScrollItem__o **ppSVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 03586a24 to 03686a2b has its CatchHandler @ 03587088 */
                    /* try { // try from 03586a3c to 03686a43 has its CatchHandler @ 0358708c */
  if ((DAT_045683b4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ParameterScrollItem>__ctor__);
                    /* try { // try from 03586a50 to 03686a57 has its CatchHandler @ 03587078 */
    FUN_01bab630(&System_Collections_Generic_List<ParameterScrollItem>_TypeInfo);
    DAT_045683b4 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03586a68 to 03686a6f has its CatchHandler @ 035870c4 */
  __this_00 = (System_Collections_Generic_List_ParameterScrollItem__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ParameterScrollItem>_TypeInfo,
                                 method);
                    /* try { // try from 03586a70 to 03686a83 has its CatchHandler @ 03587084 */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ParameterScrollItem>__ctor__);
  ppSVar1 = &(__this->fields).HEHMAPDMHIG;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
                    /* try { // try from 03586a88 to 03686a93 has its CatchHandler @ 03587080 */
                    /* try { // try from 03586a94 to 03686a9f has its CatchHandler @ 035870c0 */
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private float CJGJOJIHCGF()  [RVA 0x3486AA0]
// Nekki.SF2.GUI.Shop.ParametersPanel$$CJGJOJIHCGF @ RVA 0x3486AA0

float Nekki_SF2_GUI_Shop_ParametersPanel__CJGJOJIHCGF
                (Nekki_SF2_GUI_Shop_ParametersPanel_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this_01;
  System_Nullable_float__o *__this_02;
  float fVar1;
  System_Nullable_float__Fields local_18;
  
                    /* try { // try from 03586ab4 to 03686abb has its CatchHandler @ 03587094 */
  if ((DAT_045683b5 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ParameterScrollItem>__);
                    /* try { // try from 03586acc to 03686ad3 has its CatchHandler @ 035870cc */
    FUN_01bab630(&Method_System_Nullable<float>__ctor__);
    FUN_01bab630(&Method_System_Nullable<float>_get_HasValue__);
                    /* try { // try from 03586ae4 to 03686aeb has its CatchHandler @ 035870b4 */
    FUN_01bab630(&Method_System_Nullable<float>_get_Value__);
    DAT_045683b5 = 1;
  }
  __this_02 = &(__this->fields).OIOACOCFGAM;
                    /* try { // try from 03586af8 to 03686aff has its CatchHandler @ 03587008 */
  if ((__this_02->fields).hasValue == false) {
    __this_00 = (__this->fields)._ItemPrefab;
                    /* try { // try from 03586b10 to 03686b17 has its CatchHandler @ 03587014 */
    if ((__this_00 == (UnityEngine_GameObject_o *)0x0) ||
       (__this_01 = (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *)
                    UnityEngine_GameObject__GetComponent<object>
                              (__this_00,
                               Method_UnityEngine_GameObject_GetComponent<ParameterScrollItem>__),
       __this_01 == (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 03586b18 to 03686b2b has its CatchHandler @ 03587024 */
    fVar1 = Nekki_SF2_GUI_Shop_ParameterScrollItem__get_MinHeight(__this_01,(MethodInfo *)0x0);
    local_18.hasValue = false;
    local_18._1_3_ = 0;
    local_18.value = 0.0;
                    /* try { // try from 03586b30 to 03686b3b has its CatchHandler @ 03587048 */
    System_Nullable<float>___ctor
              ((System_Nullable_float__o)&local_18,fVar1,Method_System_Nullable<float>__ctor__);
                    /* try { // try from 03586b3c to 03686b47 has its CatchHandler @ 03587050 */
    __this_02->fields = local_18;
  }
  fVar1 = System_Nullable<float>__get_Value
                    ((System_Nullable_float__o)__this_02,Method_System_Nullable<float>_get_Value__);
                    /* try { // try from 03586b58 to 03686b5f has its CatchHandler @ 03587054 */
  return fVar1;
}


// ===== private void FKKKDIGNEFO(HOOAAGABMBL ANMFBABEMFD, HOOAAGABMBL PNBCDJEDGAP, bool ABJGMLMMJJA)  [RVA 0x3486B64]
// Nekki.SF2.GUI.Shop.ParametersPanel$$FKKKDIGNEFO @ RVA 0x3486B64

void Nekki_SF2_GUI_Shop_ParametersPanel__FKKKDIGNEFO
               (Nekki_SF2_GUI_Shop_ParametersPanel_o *__this,HOOAAGABMBL_o *ANMFBABEMFD,
               HOOAAGABMBL_o *PNBCDJEDGAP,bool ABJGMLMMJJA,MethodInfo *method)

{
  Il2CppObject *BHOLKPLJMNI;
  bool bVar1;
  System_Collections_Generic_List_IHDFIJGDCBL__o *__this_00;
  FPLCEOJCPOD_o *pFVar2;
  MethodInfo *method_00;
  ABCMPMHNMAP_o *pAVar3;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  int32_t local_48;
  int32_t local_44;
  
                    /* try { // try from 03586b70 to 03686b77 has its CatchHandler @ 03587004 */
                    /* try { // try from 03586b88 to 03686b8f has its CatchHandler @ 03587010 */
  if ((DAT_045683b6 & 1) == 0) {
                    /* try { // try from 03586b9c to 03686ba3 has its CatchHandler @ 03587074 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_MoveNext__);
                    /* try { // try from 03586bb4 to 03686bbb has its CatchHandler @ 03586ff8 */
                    /* try { // try from 03586bbc to 03686bcf has its CatchHandler @ 0358706c */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHDFIJGDCBL>_GetEnumerator__);
                    /* try { // try from 03586bd4 to 03686bdf has its CatchHandler @ 03587058 */
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_045683b6 = 1;
  }
  local_60.fields._current = (Il2CppObject *)0x0;
  local_48 = 0;
  local_44 = 0;
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03586bf4 to 03686bfb has its CatchHandler @ 0358704c */
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03586c00 to 03686c0f has its CatchHandler @ 03587070 */
  pAVar3 = MGNPHCAAEIO_TypeInfo->static_fields->EDKELIKNDEP;
  if ((pAVar3 != (ABCMPMHNMAP_o *)0x0) &&
     (__this_00 = (pAVar3->fields).ACHJNNOKEDK,
     __this_00 != (System_Collections_Generic_List_IHDFIJGDCBL__o *)0x0)) {
                    /* try { // try from 03586c1c to 03686c2f has its CatchHandler @ 035870d4 */
                    /* try { // try from 03586c30 to 03686c3b has its CatchHandler @ 03587028 */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<IHDFIJGDCBL>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    while( true ) {
      do {
                    /* try { // try from 03586c54 to 03686c57 has its CatchHandler @ 03586fe8 */
                    /* try { // try from 03586c58 to 03686c67 has its CatchHandler @ 03586ff4 */
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_60,
                           Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_MoveNext__
                          );
        BHOLKPLJMNI = local_60.fields._current;
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_60,
                     Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_Dispose__);
                    /* try { // try from 03586cec to 03686cf3 has its CatchHandler @ 03586ffc */
          return;
        }
        local_44 = 0;
      } while (ANMFBABEMFD == (HOOAAGABMBL_o *)0x0);
      if ((IHDFIJGDCBL_o *)local_60.fields._current == (IHDFIJGDCBL_o *)0x0) break;
      pFVar2 = (ANMFBABEMFD->fields)._EBHBCMICHKA_k__BackingField;
      if (pFVar2 == (FPLCEOJCPOD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 03586c80 to 03686c83 has its CatchHandler @ 03586fe4 */
                    /* try { // try from 03586c84 to 03686c93 has its CatchHandler @ 03586fec */
      method_00 = (MethodInfo *)0x0;
      bVar1 = FPLCEOJCPOD__KNMENIBLFGF
                        (pFVar2,((IHDFIJGDCBL_Fields *)((long)local_60.fields._current + 0x10))->
                                NPFMOEOIEKM,&local_44,true,false,(MethodInfo *)0x0);
      if ((bVar1) && (((IHDFIJGDCBL_Fields *)((long)BHOLKPLJMNI + 0x10))->CHLMHEGKKNH == false)) {
                    /* try { // try from 03586ca4 to 03686cab has its CatchHandler @ 03586ff0 */
        local_48 = local_44;
        if (PNBCDJEDGAP != (HOOAAGABMBL_o *)0x0 && ABJGMLMMJJA) {
          pFVar2 = (PNBCDJEDGAP->fields)._EBHBCMICHKA_k__BackingField;
          if (pFVar2 == (FPLCEOJCPOD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          method_00 = (MethodInfo *)0x0;
          FPLCEOJCPOD__KNMENIBLFGF
                    (pFVar2,((IHDFIJGDCBL_Fields *)((long)BHOLKPLJMNI + 0x10))->NPFMOEOIEKM,
                     &local_48,true,false,(MethodInfo *)0x0);
        }
                    /* try { // try from 03586cd4 to 03686cdf has its CatchHandler @ 0358705c */
        Nekki_SF2_GUI_Shop_ParametersPanel__PFFPCAEKIDC
                  (__this,(IHDFIJGDCBL_o *)BHOLKPLJMNI,local_44,local_48,method_00);
      }
    }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03586d04 to 03686d0b has its CatchHandler @ 03587044 */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Refresh(HOOAAGABMBL ANMFBABEMFD, HOOAAGABMBL PNBCDJEDGAP, bool ABJGMLMMJJA)  [RVA 0x3486F34]
// Nekki.SF2.GUI.Shop.ParametersPanel$$Refresh @ RVA 0x3486F34

void Nekki_SF2_GUI_Shop_ParametersPanel__Refresh
               (Nekki_SF2_GUI_Shop_ParametersPanel_o *__this,HOOAAGABMBL_o *ANMFBABEMFD,
               HOOAAGABMBL_o *PNBCDJEDGAP,bool ABJGMLMMJJA,MethodInfo *method)

{
  MethodInfo *method_00;
  
  Nekki_SF2_GUI_Shop_ParametersPanel__NDNPGAKJLHM(__this,(MethodInfo *)ANMFBABEMFD);
  Nekki_SF2_GUI_Shop_ParametersPanel__FKKKDIGNEFO(__this,ANMFBABEMFD,PNBCDJEDGAP,ABJGMLMMJJA,method)
  ;
  Nekki_SF2_GUI_Shop_ParametersPanel__JODPCNMCILH(__this,method_00);
  return;
}


// ===== private void BMGBHKLPKDE(List<HEFOANCOHDC> BJAHLFLBNDJ)  [RVA 0x34871E4]
// Nekki.SF2.GUI.Shop.ParametersPanel$$BMGBHKLPKDE @ RVA 0x34871E4

void Nekki_SF2_GUI_Shop_ParametersPanel__BMGBHKLPKDE
               (Nekki_SF2_GUI_Shop_ParametersPanel_o *__this,
               System_Collections_Generic_List_HEFOANCOHDC__o *BJAHLFLBNDJ,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_object__o *__this_00;
  System_Comparison_HEFOANCOHDC__o **ppSVar2;
  MethodInfo *method_00;
  System_Comparison_HEFOANCOHDC__o *comparison;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_045683b7 & 1) == 0) {
    FUN_01bab630(&System_Comparison<HEFOANCOHDC>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_Sort__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<HEFOANCOHDC>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ParametersPanel_<>c_PLNDGIALHJB__);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ParametersPanel_<>c_TypeInfo);
    DAT_045683b7 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if ((BJAHLFLBNDJ != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) &&
     ((BJAHLFLBNDJ->fields)._size != 0)) {
    __this_00 = (System_Collections_Generic_List_object__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<HEFOANCOHDC>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              (__this_00,(System_Collections_Generic_IEnumerable_T__o *)BJAHLFLBNDJ,
               Method_System_Collections_Generic_List<HEFOANCOHDC>__ctor__);
    if ((Nekki_SF2_GUI_Shop_ParametersPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    comparison = Nekki_SF2_GUI_Shop_ParametersPanel_<>c_TypeInfo->static_fields->__9__12_0;
    if (comparison == (System_Comparison_HEFOANCOHDC__o *)0x0) {
      if ((Nekki_SF2_GUI_Shop_ParametersPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      comparison = (System_Comparison_HEFOANCOHDC__o *)
                   thunk_FUN_01bda818(System_Comparison<HEFOANCOHDC>_TypeInfo);
      System_Comparison<object>___ctor();
      ppSVar2 = &Nekki_SF2_GUI_Shop_ParametersPanel_<>c_TypeInfo->static_fields->__9__12_0;
      *ppSVar2 = comparison;
      thunk_FUN_01c20e04(ppSVar2,comparison);
    }
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    method_00 = Method_System_Collections_Generic_List<HEFOANCOHDC>_Sort__;
    System_Collections_Generic_List<object>__Sort
              (__this_00,(System_Comparison_T__o *)comparison,
               (MethodInfo_26E6870 *)Method_System_Collections_Generic_List<HEFOANCOHDC>_Sort__);
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,__this_00,
               Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_48,
                              Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__
                             ), bVar1) {
      Nekki_SF2_GUI_Shop_ParametersPanel__JJPEDCEMMID
                (__this,(HEFOANCOHDC_o *)local_48.fields._current,method_00);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
  }
  return;
}


// ===== private void NDNPGAKJLHM()  [RVA 0x3486F7C]
// Nekki.SF2.GUI.Shop.ParametersPanel$$NDNPGAKJLHM @ RVA 0x3486F7C

void Nekki_SF2_GUI_Shop_ParametersPanel__NDNPGAKJLHM
               (Nekki_SF2_GUI_Shop_ParametersPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ParameterScrollItem__o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045683b8 & 1) == 0) {
                    /* try { // try from 03586fa0 to 03686fa3 has its CatchHandler @ 03587100 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ParameterScrollItem>_Dispose__);
                    /* try { // try from 03586fa4 to 03686fa7 has its CatchHandler @ 035870fc */
                    /* try { // try from 03586fa8 to 03686fab has its CatchHandler @ 035870e4 */
                    /* try { // try from 03586fac to 03686faf has its CatchHandler @ 035870e0 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ParameterScrollItem>_MoveNext__)
    ;
                    /* try { // try from 03586fb0 to 03686fb3 has its CatchHandler @ 035870ac */
                    /* try { // try from 03586fb4 to 03686fb7 has its CatchHandler @ 035870a8 */
                    /* try { // try from 03586fb8 to 03686fbb has its CatchHandler @ 035870a4 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ParameterScrollItem>_get_Current__
                );
                    /* try { // try from 03586fbc to 03686fbf has its CatchHandler @ 0358703c */
                    /* try { // try from 03586fc0 to 03686fc3 has its CatchHandler @ 03587038 */
                    /* try { // try from 03586fc4 to 03686fc7 has its CatchHandler @ 03587034 */
    FUN_01bab630(&Method_System_Collections_Generic_List<ParameterScrollItem>_Clear__);
                    /* try { // try from 03586fc8 to 03686fcb has its CatchHandler @ 03587030 */
                    /* try { // try from 03586fcc to 03686fcf has its CatchHandler @ 0358702c */
                    /* try { // try from 03586fd0 to 03686fd3 has its CatchHandler @ 03587020 */
    FUN_01bab630(&Method_System_Collections_Generic_List<ParameterScrollItem>_GetEnumerator__);
                    /* try { // try from 03586fd4 to 03686fd7 has its CatchHandler @ 0358701c */
                    /* try { // try from 03586fd8 to 0368711b has its CatchHandler @ 0358659c */
    DAT_045683b8 = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 03586c80 with catch @ 03586fe4 */
  pSVar1 = (__this->fields).HEHMAPDMHIG;
                    /* catch() { ... } // from try @ 03586c54 with catch @ 03586fe8 */
  if (pSVar1 != (System_Collections_Generic_List_ParameterScrollItem__o *)0x0) {
                    /* catch() { ... } // from try @ 03586c84 with catch @ 03586fec */
                    /* catch() { ... } // from try @ 03586ca4 with catch @ 03586ff0 */
                    /* catch() { ... } // from try @ 03586c58 with catch @ 03586ff4 */
                    /* catch() { ... } // from try @ 03586bb4 with catch @ 03586ff8 */
                    /* catch() { ... } // from try @ 03586cec with catch @ 03586ffc */
                    /* catch() { ... } // from try @ 03586d1c with catch @ 03587000 */
                    /* catch() { ... } // from try @ 03586b70 with catch @ 03587004 */
    FUN_03f93a50(pSVar1,Method_System_Collections_Generic_List<ParameterScrollItem>_GetEnumerator__)
    ;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== private void PFFPCAEKIDC(IHDFIJGDCBL BHOLKPLJMNI, int KNAENPACAKN, int LHBMDHAGMIO)  [RVA 0x3486D90]
// Nekki.SF2.GUI.Shop.ParametersPanel$$PFFPCAEKIDC @ RVA 0x3486D90

void Nekki_SF2_GUI_Shop_ParametersPanel__PFFPCAEKIDC
               (Nekki_SF2_GUI_Shop_ParametersPanel_o *__this,IHDFIJGDCBL_o *BHOLKPLJMNI,
               int32_t KNAENPACAKN,int32_t LHBMDHAGMIO,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this_01;
  System_Collections_Generic_List_ParameterScrollItem__o *__this_02;
  UnityEngine_UI_VerticalLayoutGroup_o *__this_03;
  Nekki_SF2_GUI_Shop_ParameterScrollItem_array *pNVar3;
  UnityEngine_GameObject_o *pUVar4;
  
                    /* try { // try from 03586d94 to 03686da3 has its CatchHandler @ 03587060 */
  if ((DAT_045683b9 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ParameterScrollItem>__);
                    /* try { // try from 03586dd8 to 03686de3 has its CatchHandler @ 03587104 */
    FUN_01bab630(&Method_System_Collections_Generic_List<ParameterScrollItem>_Add__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045683b9 = 1;
  }
  pUVar4 = (__this->fields)._ItemPrefab;
                    /* try { // try from 03586e08 to 03686e0b has its CatchHandler @ 035870d0 */
                    /* try { // try from 03586e0c to 03686f9f has its CatchHandler @ 0358659c */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pUVar4 = (UnityEngine_GameObject_o *)
           UnityEngine_Object__Instantiate<object>
                     ((Il2CppObject *)pUVar4,Method_UnityEngine_Object_Instantiate<GameObject>__);
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
    __this_03 = (__this->fields)._LayoutGroup;
    if ((__this_03 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) &&
       (parent = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetParent(__this_00,parent,false,(MethodInfo *)0x0);
      __this_01 = (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *)
                  UnityEngine_GameObject__GetComponent<object>
                            (pUVar4,
                             Method_UnityEngine_GameObject_GetComponent<ParameterScrollItem>__);
      if ((BHOLKPLJMNI != (IHDFIJGDCBL_o *)0x0) &&
         (__this_01 != (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *)0x0)) {
        Nekki_SF2_GUI_Shop_ParameterScrollItem__Init
                  (__this_01,(BHOLKPLJMNI->fields).NPFMOEOIEKM,(BHOLKPLJMNI->fields).OPBJKMDPKLG,
                   KNAENPACAKN,LHBMDHAGMIO,true,(System_String_o *)0x0,1.0,(MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<ParameterScrollItem>_Add__;
        __this_02 = (__this->fields).HEHMAPDMHIG;
        if (__this_02 != (System_Collections_Generic_List_ParameterScrollItem__o *)0x0) {
          pNVar3 = (__this_02->fields)._items;
          (__this_02->fields)._version = (__this_02->fields)._version + 1;
          if (pNVar3 != (Nekki_SF2_GUI_Shop_ParameterScrollItem_array *)0x0) {
            uVar1 = (__this_02->fields)._size;
            if (uVar1 < (uint)pNVar3->max_length) {
              (__this_02->fields)._size = uVar1 + 1;
              pNVar3->m_Items[(int)uVar1] = __this_01;
              thunk_FUN_01c20e04(pNVar3->m_Items + (int)uVar1,__this_01);
              return;
            }
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_02,
                       (Il2CppObject *)__this_01,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JJPEDCEMMID(HEFOANCOHDC CDEABOAKDEJ)  [RVA 0x3487450]
// Nekki.SF2.GUI.Shop.ParametersPanel$$JJPEDCEMMID @ RVA 0x3487450

void Nekki_SF2_GUI_Shop_ParametersPanel__JJPEDCEMMID
               (Nekki_SF2_GUI_Shop_ParametersPanel_o *__this,HEFOANCOHDC_o *CDEABOAKDEJ,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_String_o *KGLJICLJHEL;
  bool bVar3;
  int32_t CJNHFNHJHPE;
  int32_t NBHHBBOJJME;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this_01;
  System_Collections_Generic_List_ParameterScrollItem__o *__this_02;
  UnityEngine_UI_VerticalLayoutGroup_o *__this_03;
  Nekki_SF2_GUI_Shop_ParameterScrollItem_array *pNVar4;
  UnityEngine_GameObject_o *pUVar5;
  System_String_o *NEJHIEOHMCF;
  System_String_o *MHHLKEOKCOB;
  float AIOABLFEKGN;
  
  if ((DAT_045683ba & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ParameterScrollItem>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ParameterScrollItem>_Add__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_5704/*"Enchantments."*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045683ba = 1;
  }
  pUVar5 = (__this->fields)._ItemPrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pUVar5 = (UnityEngine_GameObject_o *)
           UnityEngine_Object__Instantiate<object>
                     ((Il2CppObject *)pUVar5,Method_UnityEngine_Object_Instantiate<GameObject>__);
  if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
    __this_03 = (__this->fields)._LayoutGroup;
    if ((__this_03 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) &&
       (parent = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetParent(__this_00,parent,false,(MethodInfo *)0x0);
      __this_01 = (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *)
                  UnityEngine_GameObject__GetComponent<object>
                            (pUVar5,
                             Method_UnityEngine_GameObject_GetComponent<ParameterScrollItem>__);
      if (__this_01 != (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *)0x0) {
        (__this_01->fields).ONONPELCDGE = StringLiteral_5704/*"Enchantments."*/;
        thunk_FUN_01c20e04(&(__this_01->fields).ONONPELCDGE);
        if (CDEABOAKDEJ != (HEFOANCOHDC_o *)0x0) {
          NEJHIEOHMCF = (CDEABOAKDEJ->fields).KPDPJONADPJ;
          CJNHFNHJHPE = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                  ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                                   (CDEABOAKDEJ->fields).EMLGCOFGNKH.fields,(MethodInfo *)0x0);
          NBHHBBOJJME = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                  ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                                   (CDEABOAKDEJ->fields).EMLGCOFGNKH.fields,(MethodInfo *)0x0);
          KGLJICLJHEL = StringLiteral_1/*""*/;
          MHHLKEOKCOB = (CDEABOAKDEJ->fields).FFDAPDCFBDO;
          AIOABLFEKGN = 1.0;
          if ((CDEABOAKDEJ->fields).OCABLLPNEGL == 0) {
            if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar3 = MGNPHCAAEIO__DODJBGHCIHD(CDEABOAKDEJ,(MethodInfo *)0x0);
            AIOABLFEKGN = 1.0;
            if (!bVar3) {
              AIOABLFEKGN = 0.5;
            }
          }
          Nekki_SF2_GUI_Shop_ParameterScrollItem__Init
                    (__this_01,KGLJICLJHEL,NEJHIEOHMCF,CJNHFNHJHPE,NBHHBBOJJME,false,MHHLKEOKCOB,
                     AIOABLFEKGN,(MethodInfo *)0x0);
          UnityEngine_UI_Selectable__set_interactable
                    ((UnityEngine_UI_Selectable_o *)__this_01,false,(MethodInfo *)0x0);
          lVar2 = Method_System_Collections_Generic_List<ParameterScrollItem>_Add__;
          __this_02 = (__this->fields).HEHMAPDMHIG;
          if (__this_02 != (System_Collections_Generic_List_ParameterScrollItem__o *)0x0) {
            pNVar4 = (__this_02->fields)._items;
            (__this_02->fields)._version = (__this_02->fields)._version + 1;
            if (pNVar4 != (Nekki_SF2_GUI_Shop_ParameterScrollItem_array *)0x0) {
              uVar1 = (__this_02->fields)._size;
              if (uVar1 < (uint)pNVar4->max_length) {
                (__this_02->fields)._size = uVar1 + 1;
                pNVar4->m_Items[(int)uVar1] = __this_01;
                thunk_FUN_01c20e04(pNVar4->m_Items + (int)uVar1,__this_01);
                return;
              }
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_02,
                         (Il2CppObject *)__this_01,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JODPCNMCILH()  [RVA 0x348710C]
// Nekki.SF2.GUI.Shop.ParametersPanel$$JODPCNMCILH @ RVA 0x348710C

void Nekki_SF2_GUI_Shop_ParametersPanel__JODPCNMCILH
               (Nekki_SF2_GUI_Shop_ParametersPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  MethodInfo *extraout_x1;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar2;
  System_Collections_Generic_List_ParameterScrollItem__o *pSVar3;
  UnityEngine_UI_LayoutElement_o *pUVar4;
  UnityEngine_RectTransform_o *__this_00;
  float fVar5;
  undefined4 extraout_var;
  undefined4 uVar6;
  UnityEngine_Vector2_o UVar7;
  
                    /* try { // try from 0358711c to 0368711f has its CatchHandler @ 03587134 */
  if ((DAT_045683bb & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ParameterScrollItem>_get_Count__);
                    /* catch() { ... } // from try @ 0358711c with catch @ 03587134 */
    DAT_045683bb = 1;
    method = extraout_x1;
  }
  pUVar4 = (__this->fields)._LayoutElement;
  fVar5 = Nekki_SF2_GUI_Shop_ParametersPanel__CJGJOJIHCGF(__this,method);
  pSVar3 = (__this->fields).HEHMAPDMHIG;
  if (((pSVar3 != (System_Collections_Generic_List_ParameterScrollItem__o *)0x0) &&
      (pUVar2 = (__this->fields)._LayoutGroup, pUVar2 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0
      )) && (pUVar4 != (UnityEngine_UI_LayoutElement_o *)0x0)) {
    iVar1 = (pSVar3->fields)._size;
                    /* try { // try from 03587174 to 0368719b has its CatchHandler @ 035871b0 */
    uVar6 = 0;
    (*(pUVar4->klass->vtable)._34_set_minHeight.methodPtr)
              ((ulong)(uint)(fVar5 * (float)iVar1 +
                            *(float *)&(pUVar2->fields).super.m_ChildScaleWidth *
                            (float)(iVar1 + -1)),pUVar4,
               (pUVar4->klass->vtable)._34_set_minHeight.method);
    __this_00 = (__this->fields)._ScrollContent;
    if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
                    /* try { // try from 0358719c to 036871a7 has its CatchHandler @ 0358659c */
      UVar7 = UnityEngine_RectTransform__get_sizeDelta(__this_00,(MethodInfo *)0x0);
      pUVar4 = (__this->fields)._LayoutElement;
                    /* try { // try from 035871a8 to 036871af has its CatchHandler @ 035871b0 */
      if (pUVar4 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                    /* catch() { ... } // from try @ 03587174 with catch @ 035871b0
                       catch() { ... } // from try @ 035871a8 with catch @ 035871b0 */
        fVar5 = (float)(*(pUVar4->klass->vtable)._33_get_minHeight.methodPtr)
                                 (CONCAT44(extraout_var,UVar7.fields.x),
                                  CONCAT44(uVar6,UVar7.fields.y),pUVar4,
                                  (pUVar4->klass->vtable)._33_get_minHeight.method);
        UVar7.fields.y = fVar5;
        UnityEngine_RectTransform__set_sizeDelta(__this_00,UVar7,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

