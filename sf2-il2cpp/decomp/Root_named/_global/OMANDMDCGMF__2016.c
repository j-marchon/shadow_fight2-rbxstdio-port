// TypeDefIndex 2016
// Namespace: 
// public static class OMANDMDCGMF
// Fields:

// ===== internal static void IKLEMLDDDPI(IHIFNKAMALG JDMFOIKOOMB, float MJCBABPPIAD, Vector3 PCLFHFELAII, bool HLADBJELCDH)  [RVA 0x329828C]
// OMANDMDCGMF$$IKLEMLDDDPI @ RVA 0x329828C

void OMANDMDCGMF__IKLEMLDDDPI
               (IHIFNKAMALG_o *JDMFOIKOOMB,float MJCBABPPIAD,UnityEngine_Vector3_o PCLFHFELAII,
               bool HLADBJELCDH,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  if (JDMFOIKOOMB != (IHIFNKAMALG_o *)0x0) {
    fVar1 = (JDMFOIKOOMB->fields).BLEOKMIDGIK.fields.y;
    fVar2 = (JDMFOIKOOMB->fields).BLEOKMIDGIK.fields.z;
    if (!HLADBJELCDH) {
      fVar1 = PCLFHFELAII.fields.y + (fVar1 - PCLFHFELAII.fields.y) * MJCBABPPIAD;
    }
    (JDMFOIKOOMB->fields).BLEOKMIDGIK.fields.x =
         PCLFHFELAII.fields.x +
         ((JDMFOIKOOMB->fields).BLEOKMIDGIK.fields.x - PCLFHFELAII.fields.x) * MJCBABPPIAD;
    (JDMFOIKOOMB->fields).BLEOKMIDGIK.fields.y = fVar1;
    (JDMFOIKOOMB->fields).BLEOKMIDGIK.fields.z =
         PCLFHFELAII.fields.z + (fVar2 - PCLFHFELAII.fields.z) * MJCBABPPIAD;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static float AKJLNDMOICM(TextPic.AIBKGOEIOLC MMEECJEKHGB, float MJCBABPPIAD, TextAnchor NJLNDHBHPMK)  [RVA 0x32982DC]
// OMANDMDCGMF$$AKJLNDMOICM @ RVA 0x32982DC

float OMANDMDCGMF__AKJLNDMOICM
                (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *MMEECJEKHGB,float MJCBABPPIAD,
                int32_t NJLNDHBHPMK,MethodInfo *method)

{
  Il2CppObject *NFNNIOEGDBG;
  bool bVar1;
  System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o *__this;
  MethodInfo *method_00;
  MethodInfo *in_x5;
  float CHOCOAGNFDD;
  float fVar2;
  UnityEngine_Vector3_o PCLFHFELAII;
  UnityEngine_Bounds_o local_a0;
  UnityEngine_Bounds_o local_88;
  UnityEngine_Vector3_Fields local_70 [2];
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  if ((DAT_0456737b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_MoveNext__)
    ;
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_GetEnumerator__);
    DAT_0456737b = 1;
  }
  CHOCOAGNFDD = (float)NEON_fminnm(MJCBABPPIAD,0x3f800000);
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  bVar1 = Util__JFJCDAJGFKD(CHOCOAGNFDD,1.0,0.01,(MethodInfo *)0x0);
  fVar2 = 1.0;
  if (!bVar1) {
    if ((MMEECJEKHGB == (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)0x0) ||
       (__this = (MMEECJEKHGB->fields)._NNFPEOCIPFE_k__BackingField,
       __this == (System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_58,(System_Collections_Generic_List_object__o *)__this,
               Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_58,
                              Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_MoveNext__
                             ), NFNNIOEGDBG = local_58.fields._current, bVar1) {
      method_00 = (MethodInfo *)0x0;
      OMANDMDCGMF__MLCFOLPGDBO
                (&local_88,MMEECJEKHGB,
                 (Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *)local_58.fields._current,
                 (System_Collections_Generic_HashSet_char__o *)0x0,
                 (System_Collections_Generic_HashSet_char__o *)0x0,
                 (System_Collections_Generic_HashSet_char__o *)0x0,in_x5);
      local_70[0].z = local_88.fields.m_Center.fields.z;
      local_70[1].x = local_88.fields.m_Extents.fields.x;
      local_70[0].x = local_88.fields.m_Center.fields.x;
      local_70[0].y = local_88.fields.m_Center.fields.y;
      local_70[1].y = local_88.fields.m_Extents.fields.y;
      local_70[1].z = local_88.fields.m_Extents.fields.z;
      local_a0.fields.m_Center.fields.z = local_88.fields.m_Center.fields.z;
      local_a0.fields.m_Extents.fields.x = local_88.fields.m_Extents.fields.x;
      local_a0.fields.m_Center.fields.x = local_88.fields.m_Center.fields.x;
      local_a0.fields.m_Center.fields.y = local_88.fields.m_Center.fields.y;
      local_a0.fields.m_Extents.fields.y = local_88.fields.m_Extents.fields.y;
      local_a0.fields.m_Extents.fields.z = local_88.fields.m_Extents.fields.z;
      PCLFHFELAII = OMANDMDCGMF__IMPBHOBAEEI(NJLNDHBHPMK,&local_a0,method_00);
      OMANDMDCGMF__ILJGHDGPDEP
                (MMEECJEKHGB,(Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *)NFNNIOEGDBG,CHOCOAGNFDD,
                 PCLFHFELAII,method_00);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_58,
               Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_Dispose__);
    fVar2 = CHOCOAGNFDD;
  }
  return fVar2;
}


// ===== private static bool GOIFPODNLCH(char ALCMPEINKGL, HashSet<char>[] HAKPMGCKCLB)  [RVA 0x32987E0]
// OMANDMDCGMF$$GOIFPODNLCH @ RVA 0x32987E0

bool OMANDMDCGMF__GOIFPODNLCH
               (uint16_t ALCMPEINKGL,System_Collections_Generic_HashSet_char__array *HAKPMGCKCLB,
               MethodInfo *method)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((DAT_0456737c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<char>_Contains__);
    DAT_0456737c = 1;
  }
  if ((HAKPMGCKCLB != (System_Collections_Generic_HashSet_char__array *)0x0) &&
     (0 < (int)HAKPMGCKCLB->max_length)) {
    uVar3 = 0;
    uVar2 = HAKPMGCKCLB->max_length & 0xffffffff;
    do {
      if (uVar2 <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      if (HAKPMGCKCLB->m_Items[uVar3] != (System_Collections_Generic_HashSet_char__o *)0x0) {
        bVar1 = System_Collections_Generic_HashSet<char>__Contains
                          (HAKPMGCKCLB->m_Items[uVar3],ALCMPEINKGL,
                           Method_System_Collections_Generic_HashSet<char>_Contains__);
        if (bVar1) {
          return true;
        }
        uVar2 = (ulong)(uint)HAKPMGCKCLB->max_length;
      }
      uVar3 = uVar3 + 1;
    } while ((long)uVar3 < (long)(int)uVar2);
  }
  return false;
}


// ===== public static int CLBEEDGBPKJ(TextPic.AIBKGOEIOLC MMEECJEKHGB, int OKLGEACMDEK, int BNLIAKKMPBL)  [RVA 0x3298888]
// OMANDMDCGMF$$CLBEEDGBPKJ @ RVA 0x3298888

int32_t OMANDMDCGMF__CLBEEDGBPKJ
                  (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *MMEECJEKHGB,int32_t OKLGEACMDEK,
                  int32_t BNLIAKKMPBL,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *__this;
  Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *__this_00;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  System_Collections_Generic_List_IHIFNKAMALG__o *pSVar5;
  int iVar6;
  
  if ((DAT_0456737d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
    DAT_0456737d = 1;
  }
  if ((MMEECJEKHGB != (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)0x0) &&
     (pSVar5 = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField,
     pSVar5 != (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0)) {
    iVar6 = 0;
    if ((3 < (pSVar5->fields)._size) && (OKLGEACMDEK < BNLIAKKMPBL + 1)) {
      iVar6 = 0;
      do {
        __this = (MMEECJEKHGB->fields)._FEKFGIIMCOE_k__BackingField;
        if (__this == (System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *)0x0)
        goto LAB_033989f0;
        __this_00 = (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)__this,OKLGEACMDEK,
                               Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__
                              );
        if (__this_00 == (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)0x0) goto LAB_033989f0;
        bVar1 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__GAAAPCIKPKL(__this_00,(MethodInfo *)0x0);
        if (bVar1) {
          pSVar5 = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField;
          iVar2 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__OGEMDBCBONL(__this_00,(MethodInfo *)0x0);
          if (pSVar5 == (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) goto LAB_033989f0;
          pIVar3 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar5,iVar2 + -1,
                              Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
          pSVar5 = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField;
          iVar2 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__OGEMDBCBONL(__this_00,(MethodInfo *)0x0);
          if (((pSVar5 == (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) ||
              (pIVar4 = System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar5,iVar2,
                                   Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__),
              pIVar3 == (Il2CppObject *)0x0)) || (pIVar4 == (Il2CppObject *)0x0)) goto LAB_033989f0;
          bVar1 = Util__JFJCDAJGFKD(*(float *)&pIVar3[1].klass,*(float *)&pIVar4[1].klass,0.001,
                                    (MethodInfo *)0x0);
          iVar6 = iVar6 + (~(uint)bVar1 & 1);
        }
        OKLGEACMDEK = OKLGEACMDEK + 1;
      } while (BNLIAKKMPBL + 1 != OKLGEACMDEK);
    }
    return iVar6;
  }
LAB_033989f0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static bool IJOPPOBBLEO(TextPic.AIBKGOEIOLC MMEECJEKHGB, HashSet<char>[] HAKPMGCKCLB)  [RVA 0x32989F4]
// OMANDMDCGMF$$IJOPPOBBLEO @ RVA 0x32989F4

bool OMANDMDCGMF__IJOPPOBBLEO
               (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *MMEECJEKHGB,
               System_Collections_Generic_HashSet_char__array *HAKPMGCKCLB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  MethodInfo *in_x4;
  
  if (MMEECJEKHGB != (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)0x0) {
    iVar2 = Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__IKMLAEGCJHC(MMEECJEKHGB,(MethodInfo *)0x0);
    bVar1 = OMANDMDCGMF__IJOPPOBBLEO(MMEECJEKHGB,0,iVar2 + -1,HAKPMGCKCLB,in_x4);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static Bounds ANEFCCHAKEI(TextPic.AIBKGOEIOLC MMEECJEKHGB, HashSet<char> PEBPAIJLMNO, HashSet<char> HAEKBBEMADA, HashSet<char> JDMDKJNLBBD)  [RVA 0x3298BF0]
// OMANDMDCGMF$$ANEFCCHAKEI @ RVA 0x3298BF0

void OMANDMDCGMF__ANEFCCHAKEI
               (UnityEngine_Bounds_o *__return_storage_ptr__,
               Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *MMEECJEKHGB,
               System_Collections_Generic_HashSet_char__o *PEBPAIJLMNO,
               System_Collections_Generic_HashSet_char__o *HAEKBBEMADA,
               System_Collections_Generic_HashSet_char__o *JDMDKJNLBBD,MethodInfo *method)

{
  bool FKPFODHFEPE;
  bool bVar1;
  uint uVar2;
  int32_t iVar3;
  System_Collections_Generic_HashSet_char__array *pSVar4;
  long lVar5;
  System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *pSVar6;
  Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *pNVar7;
  Il2CppObject *pIVar8;
  undefined8 uVar9;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_x7;
  UnityEngine_Vector3_StaticFields *pUVar10;
  int index;
  System_Collections_Generic_List_IHIFNKAMALG__o *__this;
  undefined4 uVar11;
  undefined4 uVar12;
  Il2CppClass *pIVar13;
  float fVar14;
  Il2CppClass *local_88;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  
                    /* try { // try from 03398c24 to 03498c27 has its CatchHandler @ 03398c48 */
                    /* try { // try from 03398c28 to 03498c2b has its CatchHandler @ 03398c40 */
                    /* try { // try from 03398c2c to 03498c2f has its CatchHandler @ 03398c34 */
                    /* try { // try from 03398c30 to 03498c6f has its CatchHandler @ 03398aa8 */
                    /* catch() { ... } // from try @ 03398c2c with catch @ 03398c34 */
  method_00 = (MethodInfo *)HAEKBBEMADA;
  method_01 = (MethodInfo *)JDMDKJNLBBD;
  if ((DAT_0456737e & 1) == 0) {
                    /* catch() { ... } // from try @ 03398ba4 with catch @ 03398c38 */
                    /* catch() { ... } // from try @ 03398b7c with catch @ 03398c3c */
                    /* catch() { ... } // from try @ 03398c28 with catch @ 03398c40 */
    FUN_01bab630(&System_Collections_Generic_HashSet<char>___TypeInfo);
                    /* catch() { ... } // from try @ 03398bcc with catch @ 03398c44 */
                    /* catch() { ... } // from try @ 03398c24 with catch @ 03398c48 */
                    /* catch() { ... } // from try @ 03398bb4 with catch @ 03398c4c */
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__);
                    /* catch() { ... } // from try @ 03398b8c with catch @ 03398c50 */
                    /* catch() { ... } // from try @ 03398b64 with catch @ 03398c54 */
                    /* catch() { ... } // from try @ 03398b50 with catch @ 03398c58 */
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
    DAT_0456737e = 1;
  }
  local_88 = (Il2CppClass *)0x0;
  fStack_80 = 0.0;
  fStack_7c = 0.0;
                    /* try { // try from 03398c70 to 03498c73 has its CatchHandler @ 03398c9c */
  fStack_78 = 0.0;
  fStack_74 = 0.0;
                    /* try { // try from 03398c74 to 03498cab has its CatchHandler @ 03398aa8 */
  pSVar4 = (System_Collections_Generic_HashSet_char__array *)
           FUN_01bab718(System_Collections_Generic_HashSet<char>___TypeInfo,3);
  if (pSVar4 == (System_Collections_Generic_HashSet_char__array *)0x0) goto LAB_03398fb8;
  if ((PEBPAIJLMNO != (System_Collections_Generic_HashSet_char__o *)0x0) &&
     (lVar5 = thunk_FUN_01bda71c(PEBPAIJLMNO,(((pSVar4->obj).klass)->_1).element_class), lVar5 == 0)
     ) {
LAB_03398fc0:
    uVar9 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar9,0);
  }
                    /* catch() { ... } // from try @ 03398c70 with catch @ 03398c9c */
  if ((int)pSVar4->max_length == 0) {
LAB_03398fbc:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
  pSVar4->m_Items[0] = PEBPAIJLMNO;
                    /* try { // try from 03398cac to 03498cb3 has its CatchHandler @ 03398cc8 */
  thunk_FUN_01c20e04(pSVar4->m_Items,PEBPAIJLMNO);
                    /* try { // try from 03398cb4 to 03498cbf has its CatchHandler @ 03398aa8 */
                    /* try { // try from 03398cc0 to 03498cc7 has its CatchHandler @ 03398cc8 */
  if ((HAEKBBEMADA != (System_Collections_Generic_HashSet_char__o *)0x0) &&
     (lVar5 = thunk_FUN_01bda71c(HAEKBBEMADA,(((pSVar4->obj).klass)->_1).element_class), lVar5 == 0)
     ) goto LAB_03398fc0;
                    /* catch() { ... } // from try @ 03398cac with catch @ 03398cc8
                       catch() { ... } // from try @ 03398cc0 with catch @ 03398cc8 */
  if ((uint)pSVar4->max_length < 2) goto LAB_03398fbc;
  pSVar4->m_Items[1] = HAEKBBEMADA;
  thunk_FUN_01c20e04(pSVar4->m_Items + 1,HAEKBBEMADA);
  if ((JDMDKJNLBBD != (System_Collections_Generic_HashSet_char__o *)0x0) &&
     (lVar5 = thunk_FUN_01bda71c(JDMDKJNLBBD,(((pSVar4->obj).klass)->_1).element_class), lVar5 == 0)
     ) goto LAB_03398fc0;
  if ((uint)pSVar4->max_length < 3) goto LAB_03398fbc;
  pSVar4->m_Items[2] = JDMDKJNLBBD;
  thunk_FUN_01c20e04(pSVar4->m_Items + 2,JDMDKJNLBBD);
  FKPFODHFEPE = OMANDMDCGMF__IJOPPOBBLEO(MMEECJEKHGB,pSVar4,method_00);
  pSVar4 = (System_Collections_Generic_HashSet_char__array *)
           FUN_01bab718(System_Collections_Generic_HashSet<char>___TypeInfo,3);
  if (pSVar4 == (System_Collections_Generic_HashSet_char__array *)0x0) goto LAB_03398fb8;
  if ((PEBPAIJLMNO != (System_Collections_Generic_HashSet_char__o *)0x0) &&
     (lVar5 = thunk_FUN_01bda71c(PEBPAIJLMNO,(((pSVar4->obj).klass)->_1).element_class), lVar5 == 0)
     ) goto LAB_03398fc0;
  if ((int)pSVar4->max_length == 0) goto LAB_03398fbc;
  pSVar4->m_Items[0] = PEBPAIJLMNO;
  thunk_FUN_01c20e04(pSVar4->m_Items,PEBPAIJLMNO);
  if ((HAEKBBEMADA != (System_Collections_Generic_HashSet_char__o *)0x0) &&
     (lVar5 = thunk_FUN_01bda71c(HAEKBBEMADA,(((pSVar4->obj).klass)->_1).element_class), lVar5 == 0)
     ) goto LAB_03398fc0;
  if ((uint)pSVar4->max_length < 2) goto LAB_03398fbc;
  pSVar4->m_Items[1] = HAEKBBEMADA;
  thunk_FUN_01c20e04(pSVar4->m_Items + 1,HAEKBBEMADA);
  if ((JDMDKJNLBBD != (System_Collections_Generic_HashSet_char__o *)0x0) &&
     (lVar5 = thunk_FUN_01bda71c(JDMDKJNLBBD,(((pSVar4->obj).klass)->_1).element_class), lVar5 == 0)
     ) goto LAB_03398fc0;
  if ((uint)pSVar4->max_length < 3) goto LAB_03398fbc;
  pSVar4->m_Items[2] = JDMDKJNLBBD;
  thunk_FUN_01c20e04(pSVar4->m_Items + 2,JDMDKJNLBBD);
  uVar2 = OMANDMDCGMF__EFHPGADJODB(MMEECJEKHGB,FKPFODHFEPE,pSVar4,method_01);
  if ((int)uVar2 < 0) {
    if (MMEECJEKHGB == (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)0x0) goto LAB_03398fb8;
    iVar3 = Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__IKMLAEGCJHC(MMEECJEKHGB,(MethodInfo *)0x0);
    uVar2 = OMANDMDCGMF__LBEILMMCDGJ(MMEECJEKHGB,0,iVar3 + -1,method_01);
    PEBPAIJLMNO = (System_Collections_Generic_HashSet_char__o *)0x0;
    HAEKBBEMADA = (System_Collections_Generic_HashSet_char__o *)0x0;
    JDMDKJNLBBD = (System_Collections_Generic_HashSet_char__o *)0x0;
    uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  }
  else if (MMEECJEKHGB == (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)0x0) goto LAB_03398fb8;
  pSVar6 = (MMEECJEKHGB->fields)._FEKFGIIMCOE_k__BackingField;
  if ((pSVar6 != (System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *)0x0) &&
     (pNVar7 = (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar6,uVar2,
                          Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__),
     pNVar7 != (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)0x0)) {
    bVar1 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__GAAAPCIKPKL(pNVar7,(MethodInfo *)0x0);
    if (bVar1) {
      __this = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField;
      iVar3 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__NMHOGBGNJIF(pNVar7,(MethodInfo *)0x0);
      if ((__this == (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) ||
         (pIVar8 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this,iVar3,
                              Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__),
         pIVar8 == (Il2CppObject *)0x0)) goto LAB_03398fb8;
      pIVar13 = pIVar8[1].klass;
      fVar14 = *(float *)&pIVar8[1].monitor;
      if (DAT_0455fa77 == '\0') {
        FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
        DAT_0455fa77 = '\x01';
      }
    }
    else {
      if (DAT_0455fa77 == '\0') {
        FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
        DAT_0455fa77 = '\x01';
      }
      pIVar13 = *(Il2CppClass **)&(UnityEngine_Vector3_TypeInfo->static_fields->zeroVector).fields;
      fVar14 = (UnityEngine_Vector3_TypeInfo->static_fields->zeroVector).fields.z;
    }
    pUVar10 = UnityEngine_Vector3_TypeInfo->static_fields;
    uVar11 = (pUVar10->zeroVector).fields.x;
    uVar12 = (pUVar10->zeroVector).fields.y;
    fStack_7c = (float)uVar11 * 0.5;
    fStack_78 = (float)uVar12 * 0.5;
    fStack_74 = (pUVar10->zeroVector).fields.z * 0.5;
    local_88 = pIVar13;
    fStack_80 = fVar14;
    iVar3 = Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__IKMLAEGCJHC(MMEECJEKHGB,(MethodInfo *)0x0);
    if (0 < iVar3) {
      index = 0;
      do {
        pSVar6 = (MMEECJEKHGB->fields)._FEKFGIIMCOE_k__BackingField;
        if ((pSVar6 == (System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *)0x0) ||
           (pNVar7 = (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar6,index,
                                Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__
                               ), pNVar7 == (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)0x0))
        goto LAB_03398fb8;
        bVar1 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__GAAAPCIKPKL(pNVar7,(MethodInfo *)0x0);
        if (bVar1) {
          OMANDMDCGMF__JFMMFNKCKFB
                    (MMEECJEKHGB,index,PEBPAIJLMNO,HAEKBBEMADA,JDMDKJNLBBD,
                     (UnityEngine_Bounds_o *)&local_88,FKPFODHFEPE,in_x7);
        }
        index = index + 1;
      } while (iVar3 != index);
    }
    (__return_storage_ptr__->fields).m_Extents.fields.y = fStack_78;
    (__return_storage_ptr__->fields).m_Extents.fields.z = fStack_74;
    *(ulong *)&(__return_storage_ptr__->fields).m_Center.fields.z = CONCAT44(fStack_7c,fStack_80);
    *(Il2CppClass **)&(__return_storage_ptr__->fields).m_Center.fields = local_88;
    return;
  }
LAB_03398fb8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static int EFHPGADJODB(TextPic.AIBKGOEIOLC MMEECJEKHGB, int BIBGGHMEPBI, int HDLNCPGECMP, bool FKPFODHFEPE, HashSet<char>[] OAFNLBMMPHJ)  [RVA 0x32995B8]
// OMANDMDCGMF$$EFHPGADJODB @ RVA 0x32995B8

int32_t OMANDMDCGMF__EFHPGADJODB
                  (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *MMEECJEKHGB,int32_t BIBGGHMEPBI,
                  int32_t HDLNCPGECMP,bool FKPFODHFEPE,
                  System_Collections_Generic_HashSet_char__array *OAFNLBMMPHJ,MethodInfo *method)

{
  uint16_t c;
  bool bVar1;
  int32_t iVar2;
  System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *pSVar3;
  Il2CppObject *pIVar4;
  Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *__this;
  MethodInfo *method_00;
  int index;
  
  if ((DAT_0456737f & 1) == 0) {
    FUN_01bab630(&char_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__);
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_0456737f = 1;
  }
  if (MMEECJEKHGB == (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)0x0) {
LAB_033997a8:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__BDLEIEHBFAD(MMEECJEKHGB,(MethodInfo *)0x0);
  if (!bVar1) {
    if (FKPFODHFEPE) {
      iVar2 = Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__IKMLAEGCJHC(MMEECJEKHGB,(MethodInfo *)0x0);
      if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(System_Math_TypeInfo);
      }
      iVar2 = System_Math__Min(HDLNCPGECMP + 1,iVar2,(MethodInfo *)0x0);
      index = BIBGGHMEPBI;
      if (BIBGGHMEPBI < iVar2) {
        do {
          pSVar3 = (MMEECJEKHGB->fields)._FEKFGIIMCOE_k__BackingField;
          if ((pSVar3 == (System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *)0x0) ||
             (pIVar4 = System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                  (MethodInfo_26E4ADC *)
                                  Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__
                                 ), pIVar4 == (Il2CppObject *)0x0)) goto LAB_033997a8;
          c = *(uint16_t *)((long)&pIVar4[1].klass + 4);
          if ((char_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(char_TypeInfo);
          }
          bVar1 = System_Char__IsUpper(c,(MethodInfo *)0x0);
          if (bVar1) {
            return index;
          }
          index = index + 1;
        } while (iVar2 != index);
      }
    }
    iVar2 = Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__IKMLAEGCJHC(MMEECJEKHGB,(MethodInfo *)0x0);
    if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_Math_TypeInfo);
    }
    iVar2 = System_Math__Min(HDLNCPGECMP + 1,iVar2,(MethodInfo *)0x0);
    if (BIBGGHMEPBI < iVar2) {
      do {
        pSVar3 = (MMEECJEKHGB->fields)._FEKFGIIMCOE_k__BackingField;
        if ((pSVar3 == (System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *)0x0) ||
           (__this = (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar3,BIBGGHMEPBI,
                                (MethodInfo_26E4ADC *)
                                Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__
                               ), __this == (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)0x0))
        goto LAB_033997a8;
        bVar1 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__GAAAPCIKPKL(__this,(MethodInfo *)0x0);
        if (bVar1) {
          pSVar3 = (MMEECJEKHGB->fields)._FEKFGIIMCOE_k__BackingField;
          if ((pSVar3 == (System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *)0x0) ||
             (method_00 = Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__,
             pIVar4 = System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar3,BIBGGHMEPBI,
                                 (MethodInfo_26E4ADC *)
                                 Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__
                                ), pIVar4 == (Il2CppObject *)0x0)) goto LAB_033997a8;
          bVar1 = OMANDMDCGMF__GOIFPODNLCH
                            (*(uint16_t *)((long)&pIVar4[1].klass + 4),OAFNLBMMPHJ,method_00);
          if (!bVar1) {
            return BIBGGHMEPBI;
          }
        }
        BIBGGHMEPBI = BIBGGHMEPBI + 1;
      } while (iVar2 != BIBGGHMEPBI);
    }
  }
  return -1;
}


// ===== public static Bounds MLCFOLPGDBO(TextPic.AIBKGOEIOLC MMEECJEKHGB, int KJGHHJCGPND, int JDANDJGGFOI, HashSet<char> PEBPAIJLMNO, HashSet<char> HAEKBBEMADA, HashSet<char> JDMDKJNLBBD)  [RVA 0x32997AC]
// OMANDMDCGMF$$MLCFOLPGDBO @ RVA 0x32997AC

void OMANDMDCGMF__MLCFOLPGDBO
               (UnityEngine_Bounds_o *__return_storage_ptr__,
               Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *MMEECJEKHGB,int32_t KJGHHJCGPND,
               int32_t JDANDJGGFOI,System_Collections_Generic_HashSet_char__o *PEBPAIJLMNO,
               System_Collections_Generic_HashSet_char__o *HAEKBBEMADA,
               System_Collections_Generic_HashSet_char__o *JDMDKJNLBBD,MethodInfo *method)

{
  bool FKPFODHFEPE;
  bool bVar1;
  uint uVar2;
  int32_t index;
  int iVar3;
  System_Collections_Generic_HashSet_char__array *pSVar4;
  long lVar5;
  System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *pSVar7;
  Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *pNVar8;
  Il2CppObject *pIVar9;
  undefined8 uVar10;
  MethodInfo *method_00;
  MethodInfo *in_x7;
  UnityEngine_Vector3_StaticFields *pUVar11;
  System_Collections_Generic_List_IHIFNKAMALG__o *__this;
  undefined4 uVar12;
  undefined4 uVar13;
  Il2CppClass *pIVar14;
  float fVar15;
  Il2CppClass *local_88;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  MethodInfo *pMVar6;
  
  pMVar6 = (MethodInfo *)HAEKBBEMADA;
  method_00 = (MethodInfo *)JDMDKJNLBBD;
  if ((DAT_04567380 & 1) == 0) {
    FUN_01bab630(&System_Collections_Generic_HashSet<char>___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
    DAT_04567380 = 1;
  }
  local_88 = (Il2CppClass *)0x0;
  fStack_80 = 0.0;
  fStack_7c = 0.0;
  fStack_78 = 0.0;
  fStack_74 = 0.0;
  pSVar4 = (System_Collections_Generic_HashSet_char__array *)
           FUN_01bab718(System_Collections_Generic_HashSet<char>___TypeInfo,3);
  if (pSVar4 == (System_Collections_Generic_HashSet_char__array *)0x0) goto LAB_03399b8c;
  if ((PEBPAIJLMNO != (System_Collections_Generic_HashSet_char__o *)0x0) &&
     (lVar5 = thunk_FUN_01bda71c(PEBPAIJLMNO,(((pSVar4->obj).klass)->_1).element_class), lVar5 == 0)
     ) {
LAB_03399b94:
    uVar10 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar10,0);
  }
  if ((int)pSVar4->max_length != 0) {
    pSVar4->m_Items[0] = PEBPAIJLMNO;
    thunk_FUN_01c20e04(pSVar4->m_Items,PEBPAIJLMNO);
    if ((HAEKBBEMADA != (System_Collections_Generic_HashSet_char__o *)0x0) &&
       (lVar5 = thunk_FUN_01bda71c(HAEKBBEMADA,(((pSVar4->obj).klass)->_1).element_class),
       lVar5 == 0)) goto LAB_03399b94;
    if (1 < (uint)pSVar4->max_length) {
      pSVar4->m_Items[1] = HAEKBBEMADA;
      thunk_FUN_01c20e04(pSVar4->m_Items + 1,HAEKBBEMADA);
      if ((JDMDKJNLBBD != (System_Collections_Generic_HashSet_char__o *)0x0) &&
         (lVar5 = thunk_FUN_01bda71c(JDMDKJNLBBD,(((pSVar4->obj).klass)->_1).element_class),
         lVar5 == 0)) goto LAB_03399b94;
      if (2 < (uint)pSVar4->max_length) {
        pSVar4->m_Items[2] = JDMDKJNLBBD;
        thunk_FUN_01c20e04(pSVar4->m_Items + 2,JDMDKJNLBBD);
        FKPFODHFEPE = OMANDMDCGMF__IJOPPOBBLEO(MMEECJEKHGB,KJGHHJCGPND,JDANDJGGFOI,pSVar4,pMVar6);
        pMVar6 = (MethodInfo *)(ulong)FKPFODHFEPE;
        pSVar4 = (System_Collections_Generic_HashSet_char__array *)
                 FUN_01bab718(System_Collections_Generic_HashSet<char>___TypeInfo,3);
        if (pSVar4 == (System_Collections_Generic_HashSet_char__array *)0x0) goto LAB_03399b8c;
        if ((PEBPAIJLMNO != (System_Collections_Generic_HashSet_char__o *)0x0) &&
           (lVar5 = thunk_FUN_01bda71c(PEBPAIJLMNO,(((pSVar4->obj).klass)->_1).element_class),
           lVar5 == 0)) goto LAB_03399b94;
        if ((int)pSVar4->max_length != 0) {
          pSVar4->m_Items[0] = PEBPAIJLMNO;
          thunk_FUN_01c20e04(pSVar4->m_Items,PEBPAIJLMNO);
          if ((HAEKBBEMADA != (System_Collections_Generic_HashSet_char__o *)0x0) &&
             (lVar5 = thunk_FUN_01bda71c(HAEKBBEMADA,(((pSVar4->obj).klass)->_1).element_class),
             lVar5 == 0)) goto LAB_03399b94;
          if (1 < (uint)pSVar4->max_length) {
            pSVar4->m_Items[1] = HAEKBBEMADA;
            thunk_FUN_01c20e04(pSVar4->m_Items + 1,HAEKBBEMADA);
            if ((JDMDKJNLBBD != (System_Collections_Generic_HashSet_char__o *)0x0) &&
               (lVar5 = thunk_FUN_01bda71c(JDMDKJNLBBD,(((pSVar4->obj).klass)->_1).element_class),
               lVar5 == 0)) goto LAB_03399b94;
            if (2 < (uint)pSVar4->max_length) {
              pSVar4->m_Items[2] = JDMDKJNLBBD;
              thunk_FUN_01c20e04(pSVar4->m_Items + 2,JDMDKJNLBBD);
              uVar2 = OMANDMDCGMF__EFHPGADJODB
                                (MMEECJEKHGB,KJGHHJCGPND,JDANDJGGFOI,FKPFODHFEPE,pSVar4,method_00);
              if ((int)uVar2 < 0) {
                uVar2 = OMANDMDCGMF__LBEILMMCDGJ(MMEECJEKHGB,KJGHHJCGPND,JDANDJGGFOI,pMVar6);
                JDMDKJNLBBD = (System_Collections_Generic_HashSet_char__o *)0x0;
                HAEKBBEMADA = (System_Collections_Generic_HashSet_char__o *)0x0;
                PEBPAIJLMNO = (System_Collections_Generic_HashSet_char__o *)0x0;
                uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
              }
              if (((MMEECJEKHGB != (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)0x0) &&
                  (pSVar7 = (MMEECJEKHGB->fields)._FEKFGIIMCOE_k__BackingField,
                  pSVar7 != (System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *)0x0)) &&
                 (pNVar8 = (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)
                           System_Collections_Generic_List<object>__get_Item
                                     ((System_Collections_Generic_List_object__o *)pSVar7,uVar2,
                                      Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__
                                     ), pNVar8 != (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)0x0)) {
                bVar1 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__GAAAPCIKPKL(pNVar8,(MethodInfo *)0x0);
                if (bVar1) {
                  __this = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField;
                  index = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__NMHOGBGNJIF(pNVar8,(MethodInfo *)0x0);
                  if ((__this == (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) ||
                     (pIVar9 = System_Collections_Generic_List<object>__get_Item
                                         ((System_Collections_Generic_List_object__o *)__this,index,
                                          Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__
                                         ), pIVar9 == (Il2CppObject *)0x0)) goto LAB_03399b8c;
                  pIVar14 = pIVar9[1].klass;
                  fVar15 = *(float *)&pIVar9[1].monitor;
                  if (DAT_0455fa77 == '\0') {
                    FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
                    DAT_0455fa77 = '\x01';
                  }
                }
                else {
                  if (DAT_0455fa77 == '\0') {
                    FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
                    DAT_0455fa77 = '\x01';
                  }
                  pIVar14 = *(Il2CppClass **)
                             &(UnityEngine_Vector3_TypeInfo->static_fields->zeroVector).fields;
                  fVar15 = (UnityEngine_Vector3_TypeInfo->static_fields->zeroVector).fields.z;
                }
                pUVar11 = UnityEngine_Vector3_TypeInfo->static_fields;
                uVar12 = (pUVar11->zeroVector).fields.x;
                uVar13 = (pUVar11->zeroVector).fields.y;
                fStack_7c = (float)uVar12 * 0.5;
                fStack_78 = (float)uVar13 * 0.5;
                fStack_74 = (pUVar11->zeroVector).fields.z * 0.5;
                local_88 = pIVar14;
                fStack_80 = fVar15;
                iVar3 = Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__IKMLAEGCJHC
                                  (MMEECJEKHGB,(MethodInfo *)0x0);
                if (JDANDJGGFOI + 1 < iVar3) {
                  iVar3 = JDANDJGGFOI + 1;
                }
                if (KJGHHJCGPND < iVar3) {
                  do {
                    pSVar7 = (MMEECJEKHGB->fields)._FEKFGIIMCOE_k__BackingField;
                    if ((pSVar7 == (System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *)0x0) ||
                       (pNVar8 = (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)
                                 System_Collections_Generic_List<object>__get_Item
                                           ((System_Collections_Generic_List_object__o *)pSVar7,
                                            KJGHHJCGPND,
                                            Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__
                                           ), pNVar8 == (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)0x0))
                    goto LAB_03399b8c;
                    bVar1 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__GAAAPCIKPKL(pNVar8,(MethodInfo *)0x0)
                    ;
                    if (bVar1) {
                      OMANDMDCGMF__JFMMFNKCKFB
                                (MMEECJEKHGB,KJGHHJCGPND,PEBPAIJLMNO,HAEKBBEMADA,JDMDKJNLBBD,
                                 (UnityEngine_Bounds_o *)&local_88,FKPFODHFEPE,in_x7);
                    }
                    KJGHHJCGPND = KJGHHJCGPND + 1;
                  } while (iVar3 != KJGHHJCGPND);
                }
                (__return_storage_ptr__->fields).m_Extents.fields.y = fStack_78;
                (__return_storage_ptr__->fields).m_Extents.fields.z = fStack_74;
                *(ulong *)&(__return_storage_ptr__->fields).m_Center.fields.z =
                     CONCAT44(fStack_7c,fStack_80);
                *(Il2CppClass **)&(__return_storage_ptr__->fields).m_Center.fields = local_88;
                return;
              }
LAB_03399b8c:
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== public static void EJKENGNOLPL(TextPic.AIBKGOEIOLC MMEECJEKHGB, int OMFLMECKGPO, int NKMHAPFOOBI, Vector3 MJBMLNKAPGC)  [RVA 0x3299BA0]
// OMANDMDCGMF$$EJKENGNOLPL @ RVA 0x3299BA0

void OMANDMDCGMF__EJKENGNOLPL
               (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *MMEECJEKHGB,int32_t OMFLMECKGPO,
               int32_t NKMHAPFOOBI,UnityEngine_Vector3_o MJBMLNKAPGC,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *__this;
  Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *__this_00;
  Il2CppObject *pIVar3;
  System_Collections_Generic_List_IHIFNKAMALG__o *pSVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = MJBMLNKAPGC.fields.z;
  fVar6 = MJBMLNKAPGC.fields.y;
  fVar5 = MJBMLNKAPGC.fields.x;
  if ((DAT_04567381 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
    FUN_01bab630(&UnityEngine_Mathf_TypeInfo);
    DAT_04567381 = 1;
  }
  if ((UnityEngine_Mathf_TypeInfo->static_fields->Epsilon <
       fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6) && (OMFLMECKGPO < NKMHAPFOOBI + 1)) {
    if (MMEECJEKHGB == (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)0x0) {
LAB_03399dcc:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      __this = (MMEECJEKHGB->fields)._FEKFGIIMCOE_k__BackingField;
      if ((__this == (System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *)0x0) ||
         (__this_00 = (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this,OMFLMECKGPO,
                                 Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__
                                ), __this_00 == (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)0x0))
      goto LAB_03399dcc;
      bVar1 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__GAAAPCIKPKL(__this_00,(MethodInfo *)0x0);
      if (bVar1) {
        pSVar4 = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField;
        iVar2 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__NMHOGBGNJIF(__this_00,(MethodInfo *)0x0);
        if ((pSVar4 == (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) ||
           (pIVar3 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar4,iVar2,
                                Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__),
           pIVar3 == (Il2CppObject *)0x0)) goto LAB_03399dcc;
        pIVar3[1].klass =
             (Il2CppClass *)
             CONCAT44(fVar6 + (float)((ulong)pIVar3[1].klass >> 0x20),
                      fVar5 + SUB84(pIVar3[1].klass,0));
        *(float *)&pIVar3[1].monitor = fVar7 + *(float *)&pIVar3[1].monitor;
        pSVar4 = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField;
        iVar2 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__NMHOGBGNJIF(__this_00,(MethodInfo *)0x0);
        if ((pSVar4 == (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) ||
           (pIVar3 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar4,iVar2 + 1,
                                Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__),
           pIVar3 == (Il2CppObject *)0x0)) goto LAB_03399dcc;
        pIVar3[1].klass =
             (Il2CppClass *)
             CONCAT44(fVar6 + (float)((ulong)pIVar3[1].klass >> 0x20),
                      fVar5 + SUB84(pIVar3[1].klass,0));
        *(float *)&pIVar3[1].monitor = fVar7 + *(float *)&pIVar3[1].monitor;
        pSVar4 = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField;
        iVar2 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__NMHOGBGNJIF(__this_00,(MethodInfo *)0x0);
        if ((pSVar4 == (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) ||
           (pIVar3 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar4,iVar2 + 2,
                                Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__),
           pIVar3 == (Il2CppObject *)0x0)) goto LAB_03399dcc;
        pIVar3[1].klass =
             (Il2CppClass *)
             CONCAT44(fVar6 + (float)((ulong)pIVar3[1].klass >> 0x20),
                      fVar5 + SUB84(pIVar3[1].klass,0));
        *(float *)&pIVar3[1].monitor = fVar7 + *(float *)&pIVar3[1].monitor;
        pSVar4 = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField;
        iVar2 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__NMHOGBGNJIF(__this_00,(MethodInfo *)0x0);
        if ((pSVar4 == (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) ||
           (pIVar3 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar4,iVar2 + 3,
                                Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__),
           pIVar3 == (Il2CppObject *)0x0)) goto LAB_03399dcc;
        pIVar3[1].klass =
             (Il2CppClass *)
             CONCAT44(fVar6 + (float)((ulong)pIVar3[1].klass >> 0x20),
                      fVar5 + SUB84(pIVar3[1].klass,0));
        *(float *)&pIVar3[1].monitor = fVar7 + *(float *)&pIVar3[1].monitor;
      }
      OMFLMECKGPO = OMFLMECKGPO + 1;
    } while (NKMHAPFOOBI + 1 != OMFLMECKGPO);
  }
  return;
}


// ===== public static float FIGODBIGEIC(TextPic.AIBKGOEIOLC MMEECJEKHGB, TextPic.OFKFGMDCIJP NFNNIOEGDBG)  [RVA 0x3299DD0]
// OMANDMDCGMF$$FIGODBIGEIC @ RVA 0x3299DD0

float OMANDMDCGMF__FIGODBIGEIC
                (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *MMEECJEKHGB,
                Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *NFNNIOEGDBG,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *__this;
  Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *__this_00;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  int index;
  System_Collections_Generic_List_IHIFNKAMALG__o *pSVar6;
  float fVar7;
  float fVar8;
  
  if ((DAT_04567382 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
    DAT_04567382 = 1;
  }
  if (NFNNIOEGDBG != (Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *)0x0) {
    index = (NFNNIOEGDBG->fields)._LKDPNJEBNFO_k__BackingField;
    fVar7 = 0.0;
    iVar1 = (NFNNIOEGDBG->fields)._BNEEPBICADN_k__BackingField + 1;
    if (index < iVar1) {
      if (MMEECJEKHGB == (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)0x0) goto LAB_03399f08;
      fVar8 = 0.0;
      do {
        __this = (MMEECJEKHGB->fields)._FEKFGIIMCOE_k__BackingField;
        if ((__this == (System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *)0x0) ||
           (__this_00 = (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)__this,index,
                                   Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__
                                  ), __this_00 == (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)0x0))
        goto LAB_03399f08;
        bVar2 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__GAAAPCIKPKL(__this_00,(MethodInfo *)0x0);
        fVar7 = fVar8;
        if (bVar2) {
          pSVar6 = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField;
          iVar3 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__NMHOGBGNJIF(__this_00,(MethodInfo *)0x0);
          if (pSVar6 == (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) goto LAB_03399f08;
          pIVar4 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar6,iVar3 + -3,
                              Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
          pSVar6 = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField;
          iVar3 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__NMHOGBGNJIF(__this_00,(MethodInfo *)0x0);
          if (((pSVar6 == (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) ||
              (pIVar5 = System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar6,iVar3,
                                   Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__),
              pIVar5 == (Il2CppObject *)0x0)) || (pIVar4 == (Il2CppObject *)0x0)) goto LAB_03399f08;
          fVar7 = ABS(*(float *)((long)&pIVar5[1].klass + 4) -
                      *(float *)((long)&pIVar4[1].klass + 4));
          if (fVar7 <= fVar8) {
            fVar7 = fVar8;
          }
        }
        index = index + 1;
        fVar8 = fVar7;
      } while (iVar1 != index);
    }
    return fVar7;
  }
LAB_03399f08:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void AJMLPDCFOEK(Color CJDCMKEBBNK, Vector3 FMPJLBLNHMC, Vector3 IHEPHBIPLPM, float BMIPOAFLAPO, VertexHelper NLKOFFFAFHM)  [RVA 0x3299F0C]
// OMANDMDCGMF$$AJMLPDCFOEK @ RVA 0x3299F0C

void OMANDMDCGMF__AJMLPDCFOEK
               (UnityEngine_Color_o CJDCMKEBBNK,UnityEngine_Vector3_o FMPJLBLNHMC,
               UnityEngine_Vector3_o IHEPHBIPLPM,float BMIPOAFLAPO,
               UnityEngine_UI_VertexHelper_o *NLKOFFFAFHM,MethodInfo *method)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  UnityEngine_UIVertex_array *verts;
  ulong uVar4;
  float *pfVar5;
  float *pfVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_100 [112];
  
  fVar10 = FMPJLBLNHMC.fields.z;
  fVar9 = FMPJLBLNHMC.fields.y;
  fVar11 = FMPJLBLNHMC.fields.x;
  if ((DAT_04567383 & 1) == 0) {
    FUN_01bab630(&UnityEngine_UIVertex___TypeInfo);
    FUN_01bab630(&UnityEngine_UIVertex_TypeInfo);
    FUN_01bab630(&UnityEngine_Vector3___TypeInfo);
    DAT_04567383 = 1;
  }
  lVar3 = FUN_01bab718(UnityEngine_Vector3___TypeInfo,4);
  fVar8 = BMIPOAFLAPO * 0.5;
  if (ABS(fVar11 - IHEPHBIPLPM.fields.x) <= ABS(fVar9 - IHEPHBIPLPM.fields.y)) {
    if (lVar3 == 0) goto LAB_0339a1c0;
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (uVar1 == 0) goto LAB_0339a1bc;
    *(float *)(lVar3 + 0x20) = fVar11 - fVar8;
    *(float *)(lVar3 + 0x24) = fVar9;
    *(float *)(lVar3 + 0x28) = fVar10;
    if (uVar1 == 1) goto LAB_0339a1bc;
    *(float *)(lVar3 + 0x2c) = fVar11 + fVar8;
    *(float *)(lVar3 + 0x30) = fVar9 + 0.0;
    *(float *)(lVar3 + 0x34) = fVar10 + 0.0;
    if (uVar1 < 3) goto LAB_0339a1bc;
    *(float *)(lVar3 + 0x38) = IHEPHBIPLPM.fields.x + fVar8;
    *(float *)(lVar3 + 0x3c) = IHEPHBIPLPM.fields.y + 0.0;
    *(float *)(lVar3 + 0x40) = IHEPHBIPLPM.fields.z + 0.0;
    if (uVar1 == 3) goto LAB_0339a1bc;
    fVar11 = IHEPHBIPLPM.fields.x - fVar8;
  }
  else {
    if (lVar3 == 0) goto LAB_0339a1c0;
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (uVar1 == 0) {
LAB_0339a1bc:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    *(float *)(lVar3 + 0x20) = fVar11 + 0.0;
    *(float *)(lVar3 + 0x24) = fVar9 + fVar8;
    *(float *)(lVar3 + 0x28) = fVar10 + 0.0;
    if (uVar1 == 1) goto LAB_0339a1bc;
    *(float *)(lVar3 + 0x2c) = IHEPHBIPLPM.fields.x + 0.0;
    *(float *)(lVar3 + 0x30) = IHEPHBIPLPM.fields.y + fVar8;
    *(float *)(lVar3 + 0x34) = IHEPHBIPLPM.fields.z + 0.0;
    if (uVar1 < 3) goto LAB_0339a1bc;
    *(float *)(lVar3 + 0x38) = IHEPHBIPLPM.fields.x;
    *(float *)(lVar3 + 0x3c) = IHEPHBIPLPM.fields.y - fVar8;
    *(float *)(lVar3 + 0x40) = IHEPHBIPLPM.fields.z;
    if (uVar1 == 3) goto LAB_0339a1bc;
    IHEPHBIPLPM.fields.y = fVar9 - fVar8;
    IHEPHBIPLPM.fields.z = fVar10;
  }
  *(float *)(lVar3 + 0x44) = fVar11;
  *(float *)(lVar3 + 0x48) = IHEPHBIPLPM.fields.y;
  *(float *)(lVar3 + 0x4c) = IHEPHBIPLPM.fields.z;
  verts = (UnityEngine_UIVertex_array *)FUN_01bab718(UnityEngine_UIVertex___TypeInfo,4);
  if (verts != (UnityEngine_UIVertex_array *)0x0) {
    if (0 < (int)verts->max_length) {
      uVar4 = 0;
      uVar7 = verts->max_length & 0xffffffff;
      pfVar5 = &verts->m_Items[0].fields.position.fields.z;
      pfVar6 = (float *)(lVar3 + 0x28);
      do {
        if ((UnityEngine_UIVertex_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          uVar7 = (ulong)(uint)verts->max_length;
        }
        memcpy(auStack_100,
               &(UnityEngine_UIVertex_TypeInfo->static_fields->s_DefaultTangent).fields.w,0x6c);
        if (uVar7 <= uVar4) goto LAB_0339a1bc;
        memcpy((UnityEngine_Vector3_Fields *)(pfVar5 + -2),auStack_100,0x6c);
        uVar2 = FUN_01ca4568(CJDCMKEBBNK.fields.r,CJDCMKEBBNK.fields.g,CJDCMKEBBNK.fields.b,
                             CJDCMKEBBNK.fields.a,0);
        uVar1 = (uint)verts->max_length;
        uVar7 = (ulong)uVar1;
        if ((uVar7 <= uVar4) || (pfVar5[8] = (float)uVar2, *(uint *)(lVar3 + 0x18) <= uVar4))
        goto LAB_0339a1bc;
        fVar11 = pfVar6[-1];
        fVar9 = *pfVar6;
        uVar4 = uVar4 + 1;
        ((UnityEngine_Vector3_Fields *)(pfVar5 + -2))->x = pfVar6[-2];
        ((UnityEngine_Vector3_Fields *)(pfVar5 + -2))->y = fVar11;
        *pfVar5 = fVar9;
        pfVar5 = pfVar5 + 0x1b;
        pfVar6 = pfVar6 + 3;
      } while ((long)uVar4 < (long)(int)uVar1);
    }
    if (NLKOFFFAFHM != (UnityEngine_UI_VertexHelper_o *)0x0) {
      UnityEngine_UI_VertexHelper__AddUIVertexQuad(NLKOFFFAFHM,verts,(MethodInfo *)0x0);
      return;
    }
  }
LAB_0339a1c0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static float LAGJEPOKPHD(TextPic.AIBKGOEIOLC MMEECJEKHGB)  [RVA 0x329A1C4]
// OMANDMDCGMF$$LAGJEPOKPHD @ RVA 0x329A1C4

float OMANDMDCGMF__LAGJEPOKPHD(Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *MMEECJEKHGB,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o *__this;
  undefined8 uVar2;
  MethodInfo *in_x5;
  System_Collections_Generic_List_IHIFNKAMALG__o *pSVar3;
  float fVar4;
  undefined1 auVar5 [16];
  UnityEngine_Bounds_o UStack_50;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  auVar5._8_8_ = method;
  auVar5._0_8_ = MMEECJEKHGB;
  if ((DAT_04567384 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_MoveNext__)
    ;
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_GetEnumerator__);
    auVar5 = FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Count__);
    DAT_04567384 = 1;
  }
  uVar2 = auVar5._0_8_;
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  if ((MMEECJEKHGB != (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)0x0) &&
     (pSVar3 = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField,
     pSVar3 != (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0)) {
    fVar4 = 0.0;
    if (3 < (pSVar3->fields)._size) {
      __this = (MMEECJEKHGB->fields)._NNFPEOCIPFE_k__BackingField;
      uVar2 = 0;
      if (__this == (System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o *)0x0)
      goto LAB_0339a2e0;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_38,(System_Collections_Generic_List_object__o *)__this,
                 Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_GetEnumerator__);
      fVar4 = 0.0;
      while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_38,
                                Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_MoveNext__
                               ), bVar1) {
        OMANDMDCGMF__MLCFOLPGDBO
                  (&UStack_50,MMEECJEKHGB,
                   (Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *)local_38.fields._current,
                   (System_Collections_Generic_HashSet_char__o *)0x0,
                   (System_Collections_Generic_HashSet_char__o *)0x0,
                   (System_Collections_Generic_HashSet_char__o *)0x0,in_x5);
        if (fVar4 <= UStack_50.fields.m_Extents.fields.y + UStack_50.fields.m_Extents.fields.y) {
          fVar4 = UStack_50.fields.m_Extents.fields.y + UStack_50.fields.m_Extents.fields.y;
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_38,
                 Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_Dispose__);
    }
    return fVar4;
  }
LAB_0339a2e0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar2,auVar5._8_8_);
}


// ===== public static void PMNCECHABEA(Bounds IHEPHBIPLPM, Color CJDCMKEBBNK, float BMIPOAFLAPO, VertexHelper NLKOFFFAFHM)  [RVA 0x329A35C]
// OMANDMDCGMF$$PMNCECHABEA @ RVA 0x329A35C

void OMANDMDCGMF__PMNCECHABEA
               (UnityEngine_Bounds_o *IHEPHBIPLPM,UnityEngine_Color_o CJDCMKEBBNK,float BMIPOAFLAPO,
               UnityEngine_UI_VertexHelper_o *NLKOFFFAFHM,MethodInfo *method)

{
  UnityEngine_Vector3_o IHEPHBIPLPM_00;
  UnityEngine_Vector3_o IHEPHBIPLPM_01;
  UnityEngine_Vector3_o IHEPHBIPLPM_02;
  UnityEngine_Vector3_o IHEPHBIPLPM_03;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Vector3_o FMPJLBLNHMC;
  UnityEngine_Vector3_o FMPJLBLNHMC_00;
  UnityEngine_Vector3_o FMPJLBLNHMC_01;
  UnityEngine_Vector3_o FMPJLBLNHMC_02;
  
  fVar7 = (IHEPHBIPLPM->fields).m_Center.fields.x;
  fVar6 = (IHEPHBIPLPM->fields).m_Center.fields.y;
  fVar5 = (IHEPHBIPLPM->fields).m_Center.fields.z;
  fVar2 = (IHEPHBIPLPM->fields).m_Extents.fields.x;
  fVar8 = (IHEPHBIPLPM->fields).m_Extents.fields.y;
  fVar1 = (IHEPHBIPLPM->fields).m_Extents.fields.z;
  fVar9 = fVar7 - fVar2;
  fVar3 = fVar6 + fVar8;
  fVar4 = fVar5 + 0.0;
  FMPJLBLNHMC_00.fields.z = fVar5 + fVar1;
  fVar5 = fVar5 - fVar1;
  fVar7 = fVar7 + fVar2;
  fVar6 = fVar6 - fVar8;
  IHEPHBIPLPM_00.fields.y = fVar3;
  IHEPHBIPLPM_00.fields.x = fVar7;
  IHEPHBIPLPM_00.fields.z = FMPJLBLNHMC_00.fields.z;
  FMPJLBLNHMC.fields.y = fVar3;
  FMPJLBLNHMC.fields.x = fVar9;
  FMPJLBLNHMC.fields.z = fVar4;
  OMANDMDCGMF__AJMLPDCFOEK
            (CJDCMKEBBNK,FMPJLBLNHMC,IHEPHBIPLPM_00,BMIPOAFLAPO,NLKOFFFAFHM,
             (MethodInfo *)NLKOFFFAFHM);
  IHEPHBIPLPM_01.fields.y = fVar6;
  IHEPHBIPLPM_01.fields.x = fVar7;
  IHEPHBIPLPM_01.fields.z = fVar4;
  FMPJLBLNHMC_00.fields.y = fVar3;
  FMPJLBLNHMC_00.fields.x = fVar7;
  OMANDMDCGMF__AJMLPDCFOEK
            (CJDCMKEBBNK,FMPJLBLNHMC_00,IHEPHBIPLPM_01,BMIPOAFLAPO,NLKOFFFAFHM,method_00);
  IHEPHBIPLPM_02.fields.y = fVar6;
  IHEPHBIPLPM_02.fields.x = fVar9;
  IHEPHBIPLPM_02.fields.z = fVar5;
  FMPJLBLNHMC_01.fields.y = fVar6;
  FMPJLBLNHMC_01.fields.x = fVar7;
  FMPJLBLNHMC_01.fields.z = fVar4;
  OMANDMDCGMF__AJMLPDCFOEK
            (CJDCMKEBBNK,FMPJLBLNHMC_01,IHEPHBIPLPM_02,BMIPOAFLAPO,NLKOFFFAFHM,method_01);
  IHEPHBIPLPM_03.fields.y = fVar3;
  IHEPHBIPLPM_03.fields.x = fVar9;
  IHEPHBIPLPM_03.fields.z = fVar4;
  FMPJLBLNHMC_02.fields.y = fVar6;
  FMPJLBLNHMC_02.fields.x = fVar9;
  FMPJLBLNHMC_02.fields.z = fVar5;
  OMANDMDCGMF__AJMLPDCFOEK
            (CJDCMKEBBNK,FMPJLBLNHMC_02,IHEPHBIPLPM_03,BMIPOAFLAPO,NLKOFFFAFHM,method_02);
  return;
}


// ===== public static int CCDHGNJODKP(List<TextPic.OFKFGMDCIJP> CGOJNOMNFCL, int OCPCLNIPLLB)  [RVA 0x329A4AC]
// OMANDMDCGMF$$CCDHGNJODKP @ RVA 0x329A4AC

int32_t OMANDMDCGMF__CCDHGNJODKP
                  (System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o *CGOJNOMNFCL,
                  int32_t OCPCLNIPLLB,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *__this;
  int index;
  int32_t iVar3;
  
  if ((DAT_04567385 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_get_Item__);
    DAT_04567385 = 1;
  }
  if (CGOJNOMNFCL == (System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o *)0x0) {
LAB_0339a558:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar1 = (CGOJNOMNFCL->fields)._size;
  if (iVar1 < 2) {
    iVar3 = 0;
  }
  else {
    index = 0;
    do {
      __this = (Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)CGOJNOMNFCL,index,
                          Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_get_Item__);
      if (__this == (Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *)0x0) goto LAB_0339a558;
      bVar2 = Nekki_SF2_GUI_TextPic_OFKFGMDCIJP__NFJIIGCLFOF(__this,OCPCLNIPLLB,(MethodInfo *)0x0);
      if (bVar2) {
        return index;
      }
      index = index + 1;
    } while (iVar1 != index);
    iVar3 = -1;
  }
  return iVar3;
}


// ===== public static float AKJLNDMOICM(TextPic.AIBKGOEIOLC MMEECJEKHGB, IList<Bounds> EEAKDOHMFDK, Vector2 DDBMAGFPDPO, TextAnchor NJLNDHBHPMK)  [RVA 0x329A55C]
// OMANDMDCGMF$$AKJLNDMOICM @ RVA 0x329A55C

float OMANDMDCGMF__AKJLNDMOICM
                (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *MMEECJEKHGB,
                System_Collections_Generic_IList_Bounds__o *EEAKDOHMFDK,
                UnityEngine_Vector2_o DDBMAGFPDPO,int32_t NJLNDHBHPMK,MethodInfo *method)

{
  MethodInfo *method_00;
  float fVar1;
  
  method_00 = (MethodInfo *)(ulong)(uint)NJLNDHBHPMK;
  fVar1 = OMANDMDCGMF__JDLAHMOFGOC(EEAKDOHMFDK,DDBMAGFPDPO,(MethodInfo *)EEAKDOHMFDK);
  fVar1 = OMANDMDCGMF__AKJLNDMOICM(MMEECJEKHGB,fVar1,NJLNDHBHPMK,method_00);
  return fVar1;
}


// ===== public static void NDINDIAHJHG(float JKOJPEKLBCI, IList<IHIFNKAMALG> NLKOFFFAFHM, Bounds OPKEIKHKJAC)  [RVA 0x329A6E4]
// OMANDMDCGMF$$NDINDIAHJHG @ RVA 0x329A6E4

void OMANDMDCGMF__NDINDIAHJHG
               (float JKOJPEKLBCI,System_Collections_Generic_IList_IHIFNKAMALG__o *NLKOFFFAFHM,
               UnityEngine_Bounds_o *OPKEIKHKJAC,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  VirtualInvokeData *pVVar6;
  long lVar7;
  System_Collections_Generic_IList_IHIFNKAMALG__c *pSVar8;
  ulong uVar9;
  int32_t *piVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  
  if ((DAT_04567386 & 1) == 0) {
    FUN_01bab630(&System_Collections_Generic_ICollection<IHIFNKAMALG>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<IHIFNKAMALG>_TypeInfo);
    DAT_04567386 = 1;
  }
  if (NLKOFFFAFHM == (System_Collections_Generic_IList_IHIFNKAMALG__o *)0x0) {
LAB_0339a8e0:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar8 = NLKOFFFAFHM->klass;
  uVar1._0_1_ = (pSVar8->_2).rank;
  uVar1._1_1_ = (pSVar8->_2).minimumAlignment;
  uVar9 = (ulong)uVar1;
  if (uVar9 != 0) {
    piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_ICollection<IHIFNKAMALG>_TypeInfo) {
        pVVar6 = pSVar8->vtable + *piVar10;
        goto LAB_0339a78c;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  pVVar6 = (VirtualInvokeData *)
           FUN_01b81914(NLKOFFFAFHM,System_Collections_Generic_ICollection<IHIFNKAMALG>_TypeInfo,0);
LAB_0339a78c:
  iVar4 = (*pVVar6->methodPtr)(NLKOFFFAFHM,pVVar6->method);
  if (iVar4 < 4) {
    return;
  }
  uVar11 = (OPKEIKHKJAC->fields).m_Center.fields.x;
  uVar12 = (OPKEIKHKJAC->fields).m_Center.fields.y;
  fVar13 = (OPKEIKHKJAC->fields).m_Center.fields.z;
  iVar4 = 0;
  do {
    pSVar8 = NLKOFFFAFHM->klass;
    uVar2._0_1_ = (pSVar8->_2).rank;
    uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
    uVar9 = (ulong)uVar2;
    if (uVar9 != 0) {
      piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_ICollection<IHIFNKAMALG>_TypeInfo) {
          pVVar6 = pSVar8->vtable + *piVar10;
          goto LAB_0339a808;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar6 = (VirtualInvokeData *)
             FUN_01b81914(NLKOFFFAFHM,System_Collections_Generic_ICollection<IHIFNKAMALG>_TypeInfo,0
                         );
LAB_0339a808:
    iVar5 = (*pVVar6->methodPtr)(NLKOFFFAFHM,pVVar6->method);
    if (iVar5 + -3 <= iVar4) {
      return;
    }
    iVar5 = 0;
    do {
      pSVar8 = NLKOFFFAFHM->klass;
      uVar3._0_1_ = (pSVar8->_2).rank;
      uVar3._1_1_ = (pSVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar3;
      if (uVar9 != 0) {
        piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IList<IHIFNKAMALG>_TypeInfo) {
            pVVar6 = pSVar8->vtable + *piVar10;
            goto LAB_0339a870;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar6 = (VirtualInvokeData *)
               FUN_01b81914(NLKOFFFAFHM,System_Collections_Generic_IList<IHIFNKAMALG>_TypeInfo,0);
LAB_0339a870:
      lVar7 = (*pVVar6->methodPtr)(NLKOFFFAFHM,(ulong)(uint)(iVar5 + iVar4),pVVar6->method);
      if (lVar7 == 0) goto LAB_0339a8e0;
      iVar5 = iVar5 + 1;
      *(ulong *)(lVar7 + 0x10) =
           CONCAT44((float)uVar12 +
                    ((float)((ulong)*(undefined8 *)(lVar7 + 0x10) >> 0x20) - (float)uVar12) *
                    JKOJPEKLBCI,
                    (float)uVar11 +
                    ((float)*(undefined8 *)(lVar7 + 0x10) - (float)uVar11) * JKOJPEKLBCI);
      *(float *)(lVar7 + 0x18) = fVar13 + (*(float *)(lVar7 + 0x18) - fVar13) * JKOJPEKLBCI;
    } while (iVar5 != 4);
    iVar4 = iVar4 + 4;
  } while( true );
}


// ===== public static void JINKFEFKLCA(TextPic.AIBKGOEIOLC MMEECJEKHGB, int LHCPKHGHCMF, float GANJLDMKLAE = 0, float AFLKEKAJJEA = 0)  [RVA 0x329AA30]
// OMANDMDCGMF$$JINKFEFKLCA @ RVA 0x329AA30

void OMANDMDCGMF__JINKFEFKLCA
               (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *MMEECJEKHGB,int32_t LHCPKHGHCMF,
               float GANJLDMKLAE,float AFLKEKAJJEA,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_IHIFNKAMALG__o *pSVar2;
  IHIFNKAMALG_o *__this;
  IHIFNKAMALG_o *__this_00;
  IHIFNKAMALG_o *__this_01;
  IHIFNKAMALG_o *__this_02;
  float BHOOMCEABGH;
  
  if ((DAT_04567387 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
    DAT_04567387 = 1;
  }
  if ((MMEECJEKHGB != (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)0x0) &&
     (pSVar2 = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField,
     pSVar2 != (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0)) {
    __this = (IHIFNKAMALG_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar2,LHCPKHGHCMF + -3,
                        Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
    pSVar2 = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField;
    if (pSVar2 != (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) {
      __this_00 = (IHIFNKAMALG_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar2,LHCPKHGHCMF + -2,
                             Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
      pSVar2 = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField;
      if (pSVar2 != (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) {
        __this_01 = (IHIFNKAMALG_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar2,LHCPKHGHCMF + -1,
                               Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
        pSVar2 = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField;
        if (((pSVar2 != (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) &&
            (__this_02 = (IHIFNKAMALG_o *)
                         System_Collections_Generic_List<object>__get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar2,LHCPKHGHCMF,
                                    Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__),
            __this_02 != (IHIFNKAMALG_o *)0x0)) && (__this != (IHIFNKAMALG_o *)0x0)) {
          BHOOMCEABGH = (__this_02->fields).BLEOKMIDGIK.fields.y;
          (__this->fields).BLEOKMIDGIK.fields.x =
               (__this->fields).BLEOKMIDGIK.fields.x + GANJLDMKLAE;
          (__this_02->fields).BLEOKMIDGIK.fields.x =
               (__this_02->fields).BLEOKMIDGIK.fields.x + GANJLDMKLAE;
          if ((__this_00 != (IHIFNKAMALG_o *)0x0) &&
             ((__this_00->fields).BLEOKMIDGIK.fields.x =
                   (__this_00->fields).BLEOKMIDGIK.fields.x + AFLKEKAJJEA,
             __this_01 != (IHIFNKAMALG_o *)0x0)) {
            (__this_01->fields).BLEOKMIDGIK.fields.x =
                 (__this_01->fields).BLEOKMIDGIK.fields.x + AFLKEKAJJEA;
            IHIFNKAMALG__ODKJAGGEMLG(__this,BHOOMCEABGH,(MethodInfo *)0x0);
            IHIFNKAMALG__ODKJAGGEMLG(__this_00,BHOOMCEABGH,(MethodInfo *)0x0);
            IHIFNKAMALG__ODKJAGGEMLG(__this_01,BHOOMCEABGH,(MethodInfo *)0x0);
            IHIFNKAMALG__ODKJAGGEMLG(__this_02,BHOOMCEABGH,(MethodInfo *)0x0);
            iVar1 = FUN_01ca4568(0,0,0,0,0);
            (__this->fields).EFJKPCADGJH.fields.rgba = iVar1;
            iVar1 = FUN_01ca4568(0,0,0,0,0);
            (__this_00->fields).EFJKPCADGJH.fields.rgba = iVar1;
            iVar1 = FUN_01ca4568(0,0,0,0,0);
            (__this_01->fields).EFJKPCADGJH.fields.rgba = iVar1;
            iVar1 = FUN_01ca4568(0,0,0,0,0);
            (__this_02->fields).EFJKPCADGJH.fields.rgba = iVar1;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void ILJGHDGPDEP(TextPic.AIBKGOEIOLC MMEECJEKHGB, TextPic.OFKFGMDCIJP NFNNIOEGDBG, float MJCBABPPIAD, Vector3 PCLFHFELAII)  [RVA 0x32985C8]
// OMANDMDCGMF$$ILJGHDGPDEP @ RVA 0x32985C8

void OMANDMDCGMF__ILJGHDGPDEP
               (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *MMEECJEKHGB,
               Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *NFNNIOEGDBG,float MJCBABPPIAD,
               UnityEngine_Vector3_o PCLFHFELAII,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *__this;
  Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *__this_00;
  IHIFNKAMALG_o *pIVar4;
  MethodInfo *pMVar5;
  int index;
  System_Collections_Generic_List_IHIFNKAMALG__o *pSVar6;
  
  if ((DAT_04567388 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
    DAT_04567388 = 1;
  }
  if (NFNNIOEGDBG == (Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *)0x0) {
LAB_033987dc:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  index = (NFNNIOEGDBG->fields)._LKDPNJEBNFO_k__BackingField;
  iVar1 = (NFNNIOEGDBG->fields)._BNEEPBICADN_k__BackingField + 1;
  if (index < iVar1) {
    if (MMEECJEKHGB == (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)0x0) goto LAB_033987dc;
    do {
      __this = (MMEECJEKHGB->fields)._FEKFGIIMCOE_k__BackingField;
      if ((__this == (System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *)0x0) ||
         (__this_00 = (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this,index,
                                 Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__
                                ), __this_00 == (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)0x0))
      goto LAB_033987dc;
      bVar2 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__GAAAPCIKPKL(__this_00,(MethodInfo *)0x0);
      if (bVar2) {
        pSVar6 = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField;
        iVar3 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__NMHOGBGNJIF(__this_00,(MethodInfo *)0x0);
        if (pSVar6 == (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) goto LAB_033987dc;
        pMVar5 = Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__;
        pIVar4 = (IHIFNKAMALG_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar6,iVar3,
                            (MethodInfo_26E4ADC *)
                            Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
        bVar2 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__EFLKILFFJKH(__this_00,(MethodInfo *)0x0);
        OMANDMDCGMF__IKLEMLDDDPI(pIVar4,MJCBABPPIAD,PCLFHFELAII,bVar2,pMVar5);
        pSVar6 = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField;
        iVar3 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__NMHOGBGNJIF(__this_00,(MethodInfo *)0x0);
        if (pSVar6 == (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) goto LAB_033987dc;
        pMVar5 = Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__;
        pIVar4 = (IHIFNKAMALG_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar6,iVar3 + 1,
                            (MethodInfo_26E4ADC *)
                            Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
        bVar2 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__EFLKILFFJKH(__this_00,(MethodInfo *)0x0);
        OMANDMDCGMF__IKLEMLDDDPI(pIVar4,MJCBABPPIAD,PCLFHFELAII,bVar2,pMVar5);
        pSVar6 = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField;
        iVar3 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__NMHOGBGNJIF(__this_00,(MethodInfo *)0x0);
        if (pSVar6 == (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) goto LAB_033987dc;
        pMVar5 = Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__;
        pIVar4 = (IHIFNKAMALG_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar6,iVar3 + 2,
                            (MethodInfo_26E4ADC *)
                            Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
        bVar2 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__EFLKILFFJKH(__this_00,(MethodInfo *)0x0);
        OMANDMDCGMF__IKLEMLDDDPI(pIVar4,MJCBABPPIAD,PCLFHFELAII,bVar2,pMVar5);
        pSVar6 = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField;
        iVar3 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__NMHOGBGNJIF(__this_00,(MethodInfo *)0x0);
        if (pSVar6 == (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) goto LAB_033987dc;
        pMVar5 = Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__;
        pIVar4 = (IHIFNKAMALG_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar6,iVar3 + 3,
                            (MethodInfo_26E4ADC *)
                            Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
        bVar2 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__EFLKILFFJKH(__this_00,(MethodInfo *)0x0);
        OMANDMDCGMF__IKLEMLDDDPI(pIVar4,MJCBABPPIAD,PCLFHFELAII,bVar2,pMVar5);
      }
      index = index + 1;
    } while (iVar1 != index);
  }
  return;
}


// ===== private static float JDLAHMOFGOC(IList<Bounds> PJDGODLGJHG, Vector2 DDBMAGFPDPO)  [RVA 0x329A588]
// OMANDMDCGMF$$JDLAHMOFGOC @ RVA 0x329A588

float OMANDMDCGMF__JDLAHMOFGOC
                (System_Collections_Generic_IList_Bounds__o *PJDGODLGJHG,
                UnityEngine_Vector2_o DDBMAGFPDPO,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  float fVar3;
  int iVar4;
  VirtualInvokeData *pVVar5;
  System_Collections_Generic_IList_Bounds__c *pSVar6;
  ulong uVar7;
  int32_t *piVar8;
  uint uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_58 [12];
  float local_4c;
  
  auVar11._8_8_ = method;
  auVar11._0_8_ = PJDGODLGJHG;
  if ((DAT_04567389 & 1) == 0) {
    FUN_01bab630(DDBMAGFPDPO.fields.x,DDBMAGFPDPO.fields.y,
                 &System_Collections_Generic_ICollection<Bounds>_TypeInfo);
    auVar11 = FUN_01bab630(&System_Collections_Generic_IList<Bounds>_TypeInfo);
    DAT_04567389 = 1;
  }
  if (PJDGODLGJHG == (System_Collections_Generic_IList_Bounds__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar11._0_8_,auVar11._8_8_);
  }
  uVar9 = 0;
  fVar3 = 0.0;
  do {
    fVar10 = fVar3;
    pSVar6 = PJDGODLGJHG->klass;
    uVar1._0_1_ = (pSVar6->_2).rank;
    uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar1;
    if (uVar7 != 0) {
      piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_ICollection<Bounds>_TypeInfo) {
          pVVar5 = pSVar6->vtable + *piVar8;
          goto LAB_0339a638;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar5 = (VirtualInvokeData *)
             FUN_01b81914(PJDGODLGJHG,System_Collections_Generic_ICollection<Bounds>_TypeInfo,0);
LAB_0339a638:
    iVar4 = (*pVVar5->methodPtr)(PJDGODLGJHG,pVVar5->method);
    if (iVar4 <= (int)uVar9) {
      return DDBMAGFPDPO.fields.x / fVar10;
    }
    pSVar6 = PJDGODLGJHG->klass;
    uVar2._0_1_ = (pSVar6->_2).rank;
    uVar2._1_1_ = (pSVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar2;
    if (uVar7 != 0) {
      piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IList<Bounds>_TypeInfo) {
          pVVar5 = pSVar6->vtable + *piVar8;
          goto LAB_0339a698;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar5 = (VirtualInvokeData *)
             FUN_01b81914(PJDGODLGJHG,System_Collections_Generic_IList<Bounds>_TypeInfo,0);
LAB_0339a698:
    (*pVVar5->methodPtr)(auStack_58,PJDGODLGJHG,(ulong)uVar9,pVVar5->method);
    uVar9 = uVar9 + 1;
    fVar3 = local_4c + local_4c;
    if (local_4c + local_4c <= fVar10) {
      fVar3 = fVar10;
    }
  } while( true );
}


// ===== public static float GPEPOJMOHKA(Font ADNMCIPDIJG, string CJNHFNHJHPE, int NJBICBHLOMO, OMANDMDCGMF.MOHBDJOFHEN LPHIIIFKLND)  [RVA 0x329ABFC]
// OMANDMDCGMF$$GPEPOJMOHKA @ RVA 0x329ABFC

float OMANDMDCGMF__GPEPOJMOHKA
                (UnityEngine_Font_o *ADNMCIPDIJG,System_String_o *CJNHFNHJHPE,int32_t NJBICBHLOMO,
                OMANDMDCGMF_MOHBDJOFHEN_o *LPHIIIFKLND,MethodInfo *method)

{
  bool bVar1;
  int32_t CKCOLJLFJDB;
  int32_t DEDNHOELFOD;
  System_Collections_Generic_List_T__o *CJNHFNHJHPE_00;
  MethodInfo *in_x6;
  int index;
  float fVar2;
  float fVar3;
  
  if ((DAT_0456738a & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<int>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_get_Item__);
    DAT_0456738a = 1;
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE,(MethodInfo *)0x0);
  if (!bVar1) {
    CJNHFNHJHPE_00 =
         (System_Collections_Generic_List_T__o *)
         PCOEHCPGBBG__CKAJEAKDJOK(CJNHFNHJHPE,10,(MethodInfo *)0x0);
    bVar1 = DJNBJHPDKDP__OBECCOPBADO<int>(CJNHFNHJHPE_00,Method_DJNBJHPDKDP_OBECCOPBADO<int>__);
    if (bVar1) {
      if (CJNHFNHJHPE != (System_String_o *)0x0) {
        fVar2 = OMANDMDCGMF__GPEPOJMOHKA
                          (ADNMCIPDIJG,0,(CJNHFNHJHPE->fields)._stringLength + -1,CJNHFNHJHPE,
                           NJBICBHLOMO,LPHIIIFKLND,in_x6);
        return fVar2;
      }
    }
    else if (CJNHFNHJHPE_00 != (System_Collections_Generic_List_T__o *)0x0) {
      if ((CJNHFNHJHPE_00->fields)._size < 1) {
        return 0.0;
      }
      index = 0;
      fVar2 = 0.0;
      do {
        if (index == 0) {
          CKCOLJLFJDB = 0;
        }
        else {
          CKCOLJLFJDB = System_Collections_Generic_List<int>__get_Item
                                  ((System_Collections_Generic_List_int__o *)CJNHFNHJHPE_00,
                                   index + -1,Method_System_Collections_Generic_List<int>_get_Item__
                                  );
        }
        DEDNHOELFOD = System_Collections_Generic_List<int>__get_Item
                                ((System_Collections_Generic_List_int__o *)CJNHFNHJHPE_00,index,
                                 Method_System_Collections_Generic_List<int>_get_Item__);
        if (DEDNHOELFOD != CKCOLJLFJDB) {
          fVar3 = OMANDMDCGMF__GPEPOJMOHKA
                            (ADNMCIPDIJG,CKCOLJLFJDB,DEDNHOELFOD,CJNHFNHJHPE,NJBICBHLOMO,LPHIIIFKLND
                             ,in_x6);
          if (fVar3 < 0.0) {
            return -1.0;
          }
          if (fVar2 <= fVar3) {
            fVar2 = fVar3;
          }
        }
        index = index + 1;
      } while (index < (CJNHFNHJHPE_00->fields)._size);
      return fVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return 0.0;
}


// ===== private static float GPEPOJMOHKA(Font ADNMCIPDIJG, int CKCOLJLFJDB, int DEDNHOELFOD, string CJNHFNHJHPE, int NJBICBHLOMO, OMANDMDCGMF.MOHBDJOFHEN LPHIIIFKLND)  [RVA 0x329AD98]
// OMANDMDCGMF$$GPEPOJMOHKA @ RVA 0x329AD98

/* WARNING: Type propagation algorithm not settling */

float OMANDMDCGMF__GPEPOJMOHKA
                (UnityEngine_Font_o *ADNMCIPDIJG,int32_t CKCOLJLFJDB,int32_t DEDNHOELFOD,
                System_String_o *CJNHFNHJHPE,int32_t NJBICBHLOMO,
                OMANDMDCGMF_MOHBDJOFHEN_o *LPHIIIFKLND,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  uint16_t uVar3;
  int32_t iVar4;
  ulong uVar5;
  float fVar6;
  UnityEngine_CharacterInfo_Fields local_80;
  
  if (CJNHFNHJHPE == (System_String_o *)0x0) {
LAB_0339aeac:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar1 = (CJNHFNHJHPE->fields)._stringLength;
  if (CKCOLJLFJDB < iVar1) {
    iVar1 = iVar1 + -1;
    if (iVar1 <= DEDNHOELFOD) {
      DEDNHOELFOD = iVar1;
    }
    if (CKCOLJLFJDB <= DEDNHOELFOD) {
      local_80.flipped = false;
      local_80._49_3_ = 0;
      local_80.vert.fields.m_YMin = 0.0;
      local_80.vert.fields.m_Width = 0.0;
      local_80.uv.fields.m_Height = 0.0;
      local_80.vert.fields.m_XMin = 0.0;
      local_80.size = 0;
      local_80.style = 0;
      local_80.vert.fields.m_Height = 0.0;
      local_80.width = 0.0;
      local_80.uv.fields.m_YMin = 0.0;
      local_80.uv.fields.m_Width = 0.0;
      local_80.index = 0;
      local_80.uv.fields.m_XMin = 0.0;
      if (LPHIIIFKLND != (OMANDMDCGMF_MOHBDJOFHEN_o *)0x0) {
        fVar6 = 0.0;
        do {
          uVar5 = (*(code *)(LPHIIIFKLND->fields).super.super.invoke_impl)
                            ((LPHIIIFKLND->fields).super.super.method_code,CKCOLJLFJDB,
                             (LPHIIIFKLND->fields).super.super.method);
          if ((uVar5 & 1) != 0) {
            uVar3 = System_String__get_Chars(CJNHFNHJHPE,CKCOLJLFJDB,(MethodInfo *)0x0);
            if (ADNMCIPDIJG == (UnityEngine_Font_o *)0x0) break;
            bVar2 = UnityEngine_Font__GetCharacterInfo
                              (ADNMCIPDIJG,uVar3,(UnityEngine_CharacterInfo_o *)&local_80,
                               NJBICBHLOMO,(MethodInfo *)0x0);
            if ((!bVar2) &&
               (uVar3 = System_String__get_Chars(CJNHFNHJHPE,CKCOLJLFJDB,(MethodInfo *)0x0),
               uVar3 != 10)) {
              return -1.0;
            }
            iVar4 = UnityEngine_CharacterInfo__get_advance
                              ((UnityEngine_CharacterInfo_o *)&local_80,(MethodInfo *)0x0);
            fVar6 = fVar6 + (float)iVar4;
          }
          CKCOLJLFJDB = CKCOLJLFJDB + 1;
          if (DEDNHOELFOD < CKCOLJLFJDB) {
            return fVar6;
          }
        } while( true );
      }
      goto LAB_0339aeac;
    }
  }
  return -1.0;
}


// ===== public static void BGKECKJMNNJ(Material PMGHIPKHGJP, float KEFILECBPMF, float BHOOMCEABGH, float KJNOLCAONEB, float JLPMKKKMANE, Color EFJKPCADGJH)  [RVA 0x329AEB0]
// OMANDMDCGMF$$BGKECKJMNNJ @ RVA 0x329AEB0

void OMANDMDCGMF__BGKECKJMNNJ
               (UnityEngine_Material_o *PMGHIPKHGJP,float KEFILECBPMF,float BHOOMCEABGH,
               float KJNOLCAONEB,float JLPMKKKMANE,UnityEngine_Color_o EFJKPCADGJH,
               MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  UnityEngine_Event_o *__this;
  float y;
  
  if ((DAT_0456738b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_15203/*"You have forgot to set a material."*/);
    DAT_0456738b = 1;
  }
  __this = UnityEngine_Event__get_current((MethodInfo *)0x0);
  if (__this != (UnityEngine_Event_o *)0x0) {
    iVar2 = UnityEngine_Event__get_type(__this,(MethodInfo *)0x0);
    if (iVar2 != 7) {
      return;
    }
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)PMGHIPKHGJP,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (bVar1) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_15203/*"You have forgot to set a material."*/,(MethodInfo *)0x0);
      return;
    }
    iVar2 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
    if (PMGHIPKHGJP != (UnityEngine_Material_o *)0x0) {
      y = (float)iVar2 - BHOOMCEABGH;
      UnityEngine_Material__SetPass(PMGHIPKHGJP,0,(MethodInfo *)0x0);
      UnityEngine_GL__Color(EFJKPCADGJH,(MethodInfo *)0x0);
      UnityEngine_GL__Begin(7,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(0.0,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(KEFILECBPMF,y,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(1.0,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(KEFILECBPMF + KJNOLCAONEB,y,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(1.0,1.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(KEFILECBPMF + KJNOLCAONEB,y - JLPMKKKMANE,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(0.0,1.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(KEFILECBPMF,y - JLPMKKKMANE,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__End((MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void JFMMFNKCKFB(TextPic.AIBKGOEIOLC MMEECJEKHGB, int OCPCLNIPLLB, HashSet<char> PEBPAIJLMNO, HashSet<char> HAEKBBEMADA, HashSet<char> JDMDKJNLBBD, ref Bounds LKFALEIFDIO, bool FKPFODHFEPE)  [RVA 0x3299120]
// OMANDMDCGMF$$JFMMFNKCKFB @ RVA 0x3299120

void OMANDMDCGMF__JFMMFNKCKFB
               (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *MMEECJEKHGB,int32_t OCPCLNIPLLB,
               System_Collections_Generic_HashSet_char__o *PEBPAIJLMNO,
               System_Collections_Generic_HashSet_char__o *HAEKBBEMADA,
               System_Collections_Generic_HashSet_char__o *JDMDKJNLBBD,
               UnityEngine_Bounds_o *LKFALEIFDIO,bool FKPFODHFEPE,MethodInfo *method)

{
  uint16_t c;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int32_t index;
  System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *pSVar4;
  Il2CppObject *pIVar5;
  Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *__this;
  System_Collections_Generic_List_IHIFNKAMALG__o *pSVar6;
  int index_00;
  Il2CppClass *pIVar7;
  ulong uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  ulong uVar30;
  float fVar31;
  UnityEngine_Bounds_o local_d0;
  UnityEngine_Vector3_Fields local_b0 [2];
  UnityEngine_Bounds_o local_90;
  UnityEngine_Vector3_Fields local_70 [2];
  
  if ((DAT_0456738c & 1) == 0) {
    FUN_01bab630(&char_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<char>_Contains__);
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
    DAT_0456738c = 1;
  }
  if (MMEECJEKHGB == (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)0x0) goto LAB_033995b4;
  bVar1 = Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__BDLEIEHBFAD(MMEECJEKHGB,(MethodInfo *)0x0);
  if (bVar1) {
LAB_033991fc:
    bVar3 = false;
    bVar2 = false;
    bVar1 = false;
  }
  else {
    pSVar4 = (MMEECJEKHGB->fields)._FEKFGIIMCOE_k__BackingField;
    if ((pSVar4 == (System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *)0x0) ||
       (pIVar5 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar4,OCPCLNIPLLB,
                            Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__),
       pIVar5 == (Il2CppObject *)0x0)) goto LAB_033995b4;
    c = *(uint16_t *)((long)&pIVar5[1].klass + 4);
    if (FKPFODHFEPE) {
      if ((char_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = System_Char__IsUpper(c,(MethodInfo *)0x0);
      if (bVar1) goto LAB_033991fc;
    }
    bVar1 = false;
    if (PEBPAIJLMNO != (System_Collections_Generic_HashSet_char__o *)0x0) {
      bVar1 = System_Collections_Generic_HashSet<char>__Contains
                        (PEBPAIJLMNO,c,Method_System_Collections_Generic_HashSet<char>_Contains__);
    }
    bVar2 = false;
    if (HAEKBBEMADA != (System_Collections_Generic_HashSet_char__o *)0x0) {
      bVar2 = System_Collections_Generic_HashSet<char>__Contains
                        (HAEKBBEMADA,c,Method_System_Collections_Generic_HashSet<char>_Contains__);
    }
    bVar3 = false;
    if (JDMDKJNLBBD != (System_Collections_Generic_HashSet_char__o *)0x0) {
      bVar3 = System_Collections_Generic_HashSet<char>__Contains
                        (JDMDKJNLBBD,c,Method_System_Collections_Generic_HashSet<char>_Contains__);
    }
  }
  pSVar4 = (MMEECJEKHGB->fields)._FEKFGIIMCOE_k__BackingField;
  if ((pSVar4 != (System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *)0x0) &&
     (__this = (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar4,OCPCLNIPLLB,
                          Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__),
     __this != (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)0x0)) {
    index = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__NMHOGBGNJIF(__this,(MethodInfo *)0x0);
    if (bVar3 == false) {
      pSVar6 = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField;
      if (pSVar6 != (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) {
        if (bVar1 == false) {
          if (bVar2 == false) {
            pIVar5 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar6,index,
                                Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
            if (pIVar5 == (Il2CppObject *)0x0) goto LAB_033995b4;
            uVar12 = (LKFALEIFDIO->fields).m_Center.fields.x;
            uVar16 = (LKFALEIFDIO->fields).m_Center.fields.y;
            fVar18 = (LKFALEIFDIO->fields).m_Center.fields.z;
            uVar22 = (LKFALEIFDIO->fields).m_Extents.fields.x;
            uVar26 = (LKFALEIFDIO->fields).m_Extents.fields.y;
            fVar28 = (LKFALEIFDIO->fields).m_Extents.fields.z;
            pIVar7 = pIVar5[1].klass;
            fVar9 = *(float *)&pIVar5[1].monitor;
            fVar20 = fVar18 - fVar28;
            fVar18 = fVar18 + fVar28;
            fVar28 = (float)((ulong)pIVar7 >> 0x20);
            uVar30 = (ulong)pIVar7 ^
                     ((ulong)pIVar7 ^
                     CONCAT44((float)uVar16 - (float)uVar26,(float)uVar12 - (float)uVar22)) &
                     CONCAT44(-(uint)((float)uVar16 - (float)uVar26 < fVar28),
                              -(uint)((float)uVar12 - (float)uVar22 < SUB84(pIVar7,0)));
            if (fVar9 <= fVar20) {
              fVar20 = fVar9;
            }
            uVar8 = (ulong)pIVar7 ^
                    ((ulong)pIVar7 ^
                    CONCAT44((float)uVar16 + (float)uVar26,(float)uVar12 + (float)uVar22)) &
                    CONCAT44(-(uint)(fVar28 < (float)uVar16 + (float)uVar26),
                             -(uint)(SUB84(pIVar7,0) < (float)uVar12 + (float)uVar22));
            if (fVar18 <= fVar9) {
              fVar18 = fVar9;
            }
            fVar29 = (float)uVar30;
            fVar31 = (float)(uVar30 >> 0x20);
            fVar28 = ((float)uVar8 - fVar29) * 0.5;
            fVar9 = ((float)(uVar8 >> 0x20) - fVar31) * 0.5;
            fVar18 = (fVar18 - fVar20) * 0.5;
            (LKFALEIFDIO->fields).m_Extents.fields.x = fVar28;
            (LKFALEIFDIO->fields).m_Extents.fields.y = fVar9;
            (LKFALEIFDIO->fields).m_Extents.fields.z = fVar18;
            (LKFALEIFDIO->fields).m_Center.fields.x = fVar29 + fVar28;
            (LKFALEIFDIO->fields).m_Center.fields.y = fVar31 + fVar9;
            (LKFALEIFDIO->fields).m_Center.fields.z = fVar20 + fVar18;
            pSVar6 = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField;
            if (pSVar6 == (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) goto LAB_033995b4;
            index_00 = index + 2;
          }
          else {
            pIVar5 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar6,index + 2,
                                Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
            if (pIVar5 == (Il2CppObject *)0x0) goto LAB_033995b4;
            uVar11 = (LKFALEIFDIO->fields).m_Center.fields.x;
            uVar15 = (LKFALEIFDIO->fields).m_Center.fields.y;
            fVar18 = (LKFALEIFDIO->fields).m_Center.fields.z;
            uVar21 = (LKFALEIFDIO->fields).m_Extents.fields.x;
            uVar25 = (LKFALEIFDIO->fields).m_Extents.fields.y;
            fVar28 = (LKFALEIFDIO->fields).m_Extents.fields.z;
            pIVar7 = pIVar5[1].klass;
            fVar9 = *(float *)&pIVar5[1].monitor;
            fVar20 = fVar18 - fVar28;
            fVar18 = fVar18 + fVar28;
            fVar28 = (float)((ulong)pIVar7 >> 0x20);
            uVar30 = (ulong)pIVar7 ^
                     ((ulong)pIVar7 ^
                     CONCAT44((float)uVar15 - (float)uVar25,(float)uVar11 - (float)uVar21)) &
                     CONCAT44(-(uint)((float)uVar15 - (float)uVar25 < fVar28),
                              -(uint)((float)uVar11 - (float)uVar21 < SUB84(pIVar7,0)));
            if (fVar9 <= fVar20) {
              fVar20 = fVar9;
            }
            uVar8 = (ulong)pIVar7 ^
                    ((ulong)pIVar7 ^
                    CONCAT44((float)uVar15 + (float)uVar25,(float)uVar11 + (float)uVar21)) &
                    CONCAT44(-(uint)(fVar28 < (float)uVar15 + (float)uVar25),
                             -(uint)(SUB84(pIVar7,0) < (float)uVar11 + (float)uVar21));
            if (fVar18 <= fVar9) {
              fVar18 = fVar9;
            }
            fVar29 = (float)uVar30;
            fVar31 = (float)(uVar30 >> 0x20);
            fVar28 = ((float)uVar8 - fVar29) * 0.5;
            fVar9 = ((float)(uVar8 >> 0x20) - fVar31) * 0.5;
            fVar18 = (fVar18 - fVar20) * 0.5;
            (LKFALEIFDIO->fields).m_Extents.fields.x = fVar28;
            (LKFALEIFDIO->fields).m_Extents.fields.y = fVar9;
            (LKFALEIFDIO->fields).m_Extents.fields.z = fVar18;
            (LKFALEIFDIO->fields).m_Center.fields.x = fVar29 + fVar28;
            (LKFALEIFDIO->fields).m_Center.fields.y = fVar31 + fVar9;
            (LKFALEIFDIO->fields).m_Center.fields.z = fVar20 + fVar18;
            pSVar6 = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField;
            if (pSVar6 == (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) goto LAB_033995b4;
            index_00 = index + 3;
          }
        }
        else {
          pIVar5 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar6,index,
                              Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
          if (pIVar5 == (Il2CppObject *)0x0) goto LAB_033995b4;
          uVar10 = (LKFALEIFDIO->fields).m_Center.fields.x;
          uVar14 = (LKFALEIFDIO->fields).m_Center.fields.y;
          fVar18 = (LKFALEIFDIO->fields).m_Center.fields.z;
          uVar19 = (LKFALEIFDIO->fields).m_Extents.fields.x;
          uVar24 = (LKFALEIFDIO->fields).m_Extents.fields.y;
          fVar28 = (LKFALEIFDIO->fields).m_Extents.fields.z;
          pIVar7 = pIVar5[1].klass;
          fVar9 = *(float *)&pIVar5[1].monitor;
          fVar20 = fVar18 - fVar28;
          fVar18 = fVar18 + fVar28;
          fVar28 = (float)((ulong)pIVar7 >> 0x20);
          uVar30 = (ulong)pIVar7 ^
                   ((ulong)pIVar7 ^
                   CONCAT44((float)uVar14 - (float)uVar24,(float)uVar10 - (float)uVar19)) &
                   CONCAT44(-(uint)((float)uVar14 - (float)uVar24 < fVar28),
                            -(uint)((float)uVar10 - (float)uVar19 < SUB84(pIVar7,0)));
          if (fVar9 <= fVar20) {
            fVar20 = fVar9;
          }
          uVar8 = (ulong)pIVar7 ^
                  ((ulong)pIVar7 ^
                  CONCAT44((float)uVar14 + (float)uVar24,(float)uVar10 + (float)uVar19)) &
                  CONCAT44(-(uint)(fVar28 < (float)uVar14 + (float)uVar24),
                           -(uint)(SUB84(pIVar7,0) < (float)uVar10 + (float)uVar19));
          if (fVar18 <= fVar9) {
            fVar18 = fVar9;
          }
          fVar29 = (float)uVar30;
          fVar31 = (float)(uVar30 >> 0x20);
          fVar28 = ((float)uVar8 - fVar29) * 0.5;
          fVar9 = ((float)(uVar8 >> 0x20) - fVar31) * 0.5;
          fVar18 = (fVar18 - fVar20) * 0.5;
          (LKFALEIFDIO->fields).m_Extents.fields.x = fVar28;
          (LKFALEIFDIO->fields).m_Extents.fields.y = fVar9;
          (LKFALEIFDIO->fields).m_Extents.fields.z = fVar18;
          (LKFALEIFDIO->fields).m_Center.fields.x = fVar29 + fVar28;
          (LKFALEIFDIO->fields).m_Center.fields.y = fVar31 + fVar9;
          (LKFALEIFDIO->fields).m_Center.fields.z = fVar20 + fVar18;
          pSVar6 = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField;
          if (pSVar6 == (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) goto LAB_033995b4;
          index_00 = index + 1;
        }
        pIVar5 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar6,index_00,
                            Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
        if (pIVar5 != (Il2CppObject *)0x0) {
          uVar13 = (LKFALEIFDIO->fields).m_Center.fields.x;
          uVar17 = (LKFALEIFDIO->fields).m_Center.fields.y;
          fVar18 = (LKFALEIFDIO->fields).m_Center.fields.z;
          uVar23 = (LKFALEIFDIO->fields).m_Extents.fields.x;
          uVar27 = (LKFALEIFDIO->fields).m_Extents.fields.y;
          fVar28 = (LKFALEIFDIO->fields).m_Extents.fields.z;
          pIVar7 = pIVar5[1].klass;
          fVar9 = *(float *)&pIVar5[1].monitor;
          fVar20 = fVar18 - fVar28;
          fVar18 = fVar18 + fVar28;
          fVar28 = (float)((ulong)pIVar7 >> 0x20);
          uVar30 = (ulong)pIVar7 ^
                   ((ulong)pIVar7 ^
                   CONCAT44((float)uVar17 - (float)uVar27,(float)uVar13 - (float)uVar23)) &
                   CONCAT44(-(uint)((float)uVar17 - (float)uVar27 < fVar28),
                            -(uint)((float)uVar13 - (float)uVar23 < SUB84(pIVar7,0)));
          if (fVar9 <= fVar20) {
            fVar20 = fVar9;
          }
          uVar8 = (ulong)pIVar7 ^
                  ((ulong)pIVar7 ^
                  CONCAT44((float)uVar17 + (float)uVar27,(float)uVar13 + (float)uVar23)) &
                  CONCAT44(-(uint)(fVar28 < (float)uVar17 + (float)uVar27),
                           -(uint)(SUB84(pIVar7,0) < (float)uVar13 + (float)uVar23));
          if (fVar18 <= fVar9) {
            fVar18 = fVar9;
          }
          fVar29 = (float)uVar30;
          fVar31 = (float)(uVar30 >> 0x20);
          fVar28 = ((float)uVar8 - fVar29) * 0.5;
          fVar9 = ((float)(uVar8 >> 0x20) - fVar31) * 0.5;
          fVar18 = (fVar18 - fVar20) * 0.5;
          (LKFALEIFDIO->fields).m_Extents.fields.x = fVar28;
          (LKFALEIFDIO->fields).m_Extents.fields.y = fVar9;
          (LKFALEIFDIO->fields).m_Extents.fields.z = fVar18;
          (LKFALEIFDIO->fields).m_Center.fields.x = fVar29 + fVar28;
          (LKFALEIFDIO->fields).m_Center.fields.y = fVar31 + fVar9;
          (LKFALEIFDIO->fields).m_Center.fields.z = fVar20 + fVar18;
          return;
        }
      }
    }
    else {
      local_70[1].y = (LKFALEIFDIO->fields).m_Extents.fields.y;
      local_70[1].z = (LKFALEIFDIO->fields).m_Extents.fields.z;
      local_70._8_8_ = *(undefined8 *)&(LKFALEIFDIO->fields).m_Center.fields.z;
      local_70[0].x = (LKFALEIFDIO->fields).m_Center.fields.x;
      local_70[0].y = (LKFALEIFDIO->fields).m_Center.fields.y;
      pSVar6 = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField;
      if ((pSVar6 != (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) &&
         (pIVar5 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar6,index,
                              Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__),
         pIVar5 != (Il2CppObject *)0x0)) {
        local_90.fields.m_Center.fields.z = local_70[0].z;
        local_90.fields.m_Extents.fields.x = local_70[1].x;
        local_90.fields.m_Center.fields.x = local_70[0].x;
        local_90.fields.m_Center.fields.y = local_70[0].y;
        local_90.fields.m_Extents.fields.y = local_70[1].y;
        local_90.fields.m_Extents.fields.z = local_70[1].z;
        LJLLAKHOFFF__GKGMPIGPFPE(&local_90,*(float *)&pIVar5[1].klass,(MethodInfo *)0x0);
        local_b0[1].y = (LKFALEIFDIO->fields).m_Extents.fields.y;
        local_b0[1].z = (LKFALEIFDIO->fields).m_Extents.fields.z;
        local_b0._8_8_ = *(undefined8 *)&(LKFALEIFDIO->fields).m_Center.fields.z;
        local_b0[0].x = (LKFALEIFDIO->fields).m_Center.fields.x;
        local_b0[0].y = (LKFALEIFDIO->fields).m_Center.fields.y;
        pSVar6 = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField;
        if ((pSVar6 != (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) &&
           (pIVar5 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar6,index + 1,
                                Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__),
           pIVar5 != (Il2CppObject *)0x0)) {
          local_d0.fields.m_Center.fields.z = local_b0[0].z;
          local_d0.fields.m_Extents.fields.x = local_b0[1].x;
          local_d0.fields.m_Center.fields.x = local_b0[0].x;
          local_d0.fields.m_Center.fields.y = local_b0[0].y;
          local_d0.fields.m_Extents.fields.y = local_b0[1].y;
          local_d0.fields.m_Extents.fields.z = local_b0[1].z;
          LJLLAKHOFFF__GKGMPIGPFPE(&local_d0,*(float *)&pIVar5[1].klass,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_033995b4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static Bounds MLCFOLPGDBO(TextPic.AIBKGOEIOLC GAOIJJLDHEM, TextPic.OFKFGMDCIJP KAHAJHDGCFF, HashSet<char> HOJFIEJGIHA, HashSet<char> NINLELPNDEB, HashSet<char> HLBAFDGKOMM)  [RVA 0x32984D0]
// OMANDMDCGMF$$MLCFOLPGDBO @ RVA 0x32984D0

void OMANDMDCGMF__MLCFOLPGDBO
               (UnityEngine_Bounds_o *__return_storage_ptr__,
               Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *GAOIJJLDHEM,
               Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *KAHAJHDGCFF,
               System_Collections_Generic_HashSet_char__o *HOJFIEJGIHA,
               System_Collections_Generic_HashSet_char__o *NINLELPNDEB,
               System_Collections_Generic_HashSet_char__o *HLBAFDGKOMM,MethodInfo *method)

{
  MethodInfo *in_x6;
  UnityEngine_Bounds_o local_28;
  
  if (KAHAJHDGCFF != (Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *)0x0) {
    OMANDMDCGMF__MLCFOLPGDBO
              (&local_28,GAOIJJLDHEM,(KAHAJHDGCFF->fields)._LKDPNJEBNFO_k__BackingField,
               (KAHAJHDGCFF->fields)._BNEEPBICADN_k__BackingField,HOJFIEJGIHA,NINLELPNDEB,
               HLBAFDGKOMM,in_x6);
    (__return_storage_ptr__->fields).m_Extents.fields.y = local_28.fields.m_Extents.fields.y;
    (__return_storage_ptr__->fields).m_Extents.fields.z = local_28.fields.m_Extents.fields.z;
    *(undefined8 *)&(__return_storage_ptr__->fields).m_Center.fields.z = local_28.fields._8_8_;
    (__return_storage_ptr__->fields).m_Center.fields.x = local_28.fields.m_Center.fields.x;
    (__return_storage_ptr__->fields).m_Center.fields.y = local_28.fields.m_Center.fields.y;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static float AKJLNDMOICM(TextPic.AIBKGOEIOLC MMEECJEKHGB, IList<Bounds> KNLEPPBONIO, IList<Bounds> EEAKDOHMFDK, TextAnchor NJLNDHBHPMK)  [RVA 0x329B0D0]
// OMANDMDCGMF$$AKJLNDMOICM @ RVA 0x329B0D0

float OMANDMDCGMF__AKJLNDMOICM
                (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *MMEECJEKHGB,
                System_Collections_Generic_IList_Bounds__o *KNLEPPBONIO,
                System_Collections_Generic_IList_Bounds__o *EEAKDOHMFDK,int32_t NJLNDHBHPMK,
                MethodInfo *method)

{
  float fVar1;
  
  fVar1 = OMANDMDCGMF__JDLAHMOFGOC(KNLEPPBONIO,EEAKDOHMFDK,(MethodInfo *)EEAKDOHMFDK);
  fVar1 = OMANDMDCGMF__AKJLNDMOICM(MMEECJEKHGB,fVar1,NJLNDHBHPMK,(MethodInfo *)EEAKDOHMFDK);
  return fVar1;
}


// ===== private static int EFHPGADJODB(TextPic.AIBKGOEIOLC MMEECJEKHGB, bool FKPFODHFEPE, HashSet<char>[] OAFNLBMMPHJ)  [RVA 0x3298FCC]
// OMANDMDCGMF$$EFHPGADJODB @ RVA 0x3298FCC

int32_t OMANDMDCGMF__EFHPGADJODB
                  (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *MMEECJEKHGB,bool FKPFODHFEPE,
                  System_Collections_Generic_HashSet_char__array *OAFNLBMMPHJ,MethodInfo *method)

{
  int32_t iVar1;
  MethodInfo *in_x5;
  
  if (MMEECJEKHGB != (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)0x0) {
    iVar1 = Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__IKMLAEGCJHC(MMEECJEKHGB,(MethodInfo *)0x0);
    iVar1 = OMANDMDCGMF__EFHPGADJODB(MMEECJEKHGB,0,iVar1 + -1,FKPFODHFEPE,OAFNLBMMPHJ,in_x5);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static float JDLAHMOFGOC(IList<Bounds> KCLEODDNALH, IList<Bounds> GEMLHKNIDPK)  [RVA 0x329B100]
// OMANDMDCGMF$$JDLAHMOFGOC @ RVA 0x329B100

float OMANDMDCGMF__JDLAHMOFGOC
                (System_Collections_Generic_IList_Bounds__o *KCLEODDNALH,
                System_Collections_Generic_IList_Bounds__o *GEMLHKNIDPK,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  float fVar5;
  uint uVar6;
  VirtualInvokeData *pVVar7;
  System_Collections_Generic_IList_Bounds__c *pSVar8;
  ulong uVar9;
  int32_t *piVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_68 [12];
  float local_5c;
  
  if ((DAT_0456738d & 1) == 0) {
    FUN_01bab630(&System_Collections_Generic_ICollection<Bounds>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<Bounds>_TypeInfo);
    DAT_0456738d = 1;
  }
  if (KCLEODDNALH != (System_Collections_Generic_IList_Bounds__o *)0x0) {
    pSVar8 = KCLEODDNALH->klass;
    uVar1._0_1_ = (pSVar8->_2).rank;
    uVar1._1_1_ = (pSVar8->_2).minimumAlignment;
    uVar9 = (ulong)uVar1;
    if (uVar9 != 0) {
      piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_ICollection<Bounds>_TypeInfo) {
          pVVar7 = pSVar8->vtable + *piVar10;
          goto LAB_0339b1a4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar7 = (VirtualInvokeData *)
             FUN_01b81914(KCLEODDNALH,System_Collections_Generic_ICollection<Bounds>_TypeInfo,0);
LAB_0339b1a4:
    uVar6 = (*pVVar7->methodPtr)(KCLEODDNALH,pVVar7->method);
    if ((int)uVar6 < 1) {
      fVar12 = 0.0;
    }
    else {
      uVar11 = 0;
      fVar12 = 0.0;
      do {
        pSVar8 = KCLEODDNALH->klass;
        uVar2._0_1_ = (pSVar8->_2).rank;
        uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
        uVar9 = (ulong)uVar2;
        if (uVar9 != 0) {
          piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
                (Il2CppClass *)System_Collections_Generic_IList<Bounds>_TypeInfo) {
              pVVar7 = pSVar8->vtable + *piVar10;
              goto LAB_0339b218;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        pVVar7 = (VirtualInvokeData *)
                 FUN_01b81914(KCLEODDNALH,System_Collections_Generic_IList<Bounds>_TypeInfo,0);
LAB_0339b218:
        (*pVVar7->methodPtr)(auStack_68,KCLEODDNALH,(ulong)uVar11,pVVar7->method);
        uVar11 = uVar11 + 1;
        fVar13 = local_5c + local_5c;
        if (local_5c + local_5c <= fVar12) {
          fVar13 = fVar12;
        }
        fVar12 = fVar13;
      } while (uVar11 != uVar6);
    }
    if (GEMLHKNIDPK != (System_Collections_Generic_IList_Bounds__o *)0x0) {
      pSVar8 = GEMLHKNIDPK->klass;
      uVar3._0_1_ = (pSVar8->_2).rank;
      uVar3._1_1_ = (pSVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar3;
      if (uVar9 != 0) {
        piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_ICollection<Bounds>_TypeInfo) {
            pVVar7 = pSVar8->vtable + *piVar10;
            goto LAB_0339b2a4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar7 = (VirtualInvokeData *)
               FUN_01b81914(GEMLHKNIDPK,System_Collections_Generic_ICollection<Bounds>_TypeInfo,0);
LAB_0339b2a4:
      uVar6 = (*pVVar7->methodPtr)(GEMLHKNIDPK,pVVar7->method);
      if ((int)uVar6 < 1) {
        fVar13 = 0.0;
      }
      else {
        uVar11 = 0;
        fVar13 = 0.0;
        do {
          pSVar8 = GEMLHKNIDPK->klass;
          uVar4._0_1_ = (pSVar8->_2).rank;
          uVar4._1_1_ = (pSVar8->_2).minimumAlignment;
          uVar9 = (ulong)uVar4;
          if (uVar9 != 0) {
            piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
                  (Il2CppClass *)System_Collections_Generic_IList<Bounds>_TypeInfo) {
                pVVar7 = pSVar8->vtable + *piVar10;
                goto LAB_0339b310;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          pVVar7 = (VirtualInvokeData *)
                   FUN_01b81914(GEMLHKNIDPK,System_Collections_Generic_IList<Bounds>_TypeInfo,0);
LAB_0339b310:
          (*pVVar7->methodPtr)(auStack_68,GEMLHKNIDPK,(ulong)uVar11,pVVar7->method);
          uVar11 = uVar11 + 1;
          fVar5 = local_5c + local_5c;
          if (local_5c + local_5c <= fVar13) {
            fVar5 = fVar13;
          }
          fVar13 = fVar5;
        } while (uVar11 != uVar6);
      }
      return fVar12 / fVar13;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static bool IJOPPOBBLEO(TextPic.AIBKGOEIOLC MMEECJEKHGB, int BIBGGHMEPBI, int HDLNCPGECMP, HashSet<char>[] HAKPMGCKCLB)  [RVA 0x3298A30]
// OMANDMDCGMF$$IJOPPOBBLEO @ RVA 0x3298A30

bool OMANDMDCGMF__IJOPPOBBLEO
               (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *MMEECJEKHGB,int32_t BIBGGHMEPBI,
               int32_t HDLNCPGECMP,System_Collections_Generic_HashSet_char__array *HAKPMGCKCLB,
               MethodInfo *method)

{
  uint uVar1;
  uint16_t c;
  bool bVar2;
  bool bVar3;
  int32_t iVar4;
  System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *__this;
  Il2CppObject *pIVar5;
  MethodInfo *method_00;
  long lVar6;
  byte bVar7;
  
  if ((DAT_0456738e & 1) == 0) {
    FUN_01bab630(&char_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__);
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_0456738e = 1;
  }
  if (MMEECJEKHGB != (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)0x0) {
    bVar2 = Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__BDLEIEHBFAD(MMEECJEKHGB,(MethodInfo *)0x0);
    if (HAKPMGCKCLB == (System_Collections_Generic_HashSet_char__array *)0x0) {
      return false;
    }
    if (bVar2) {
      return false;
    }
                    /* try { // try from 03398aa8 to 03498b4f has its CatchHandler @ 03398aa8
                       catch() { ... } // from try @ 03398aa8 with catch @ 03398aa8
                       catch() { ... } // from try @ 03398bd4 with catch @ 03398aa8
                       catch() { ... } // from try @ 03398c30 with catch @ 03398aa8
                       catch() { ... } // from try @ 03398c74 with catch @ 03398aa8
                       catch() { ... } // from try @ 03398cb4 with catch @ 03398aa8 */
    uVar1 = (uint)HAKPMGCKCLB->max_length;
    if (0 < (int)uVar1) {
      lVar6 = 4;
      do {
        if (uVar1 <= (int)lVar6 - 4U) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        if (HAKPMGCKCLB->m_Items[lVar6 + -4] != (System_Collections_Generic_HashSet_char__o *)0x0) {
          iVar4 = Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__IKMLAEGCJHC(MMEECJEKHGB,(MethodInfo *)0x0);
          if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(System_Math_TypeInfo);
          }
          iVar4 = System_Math__Min(HDLNCPGECMP + 1,iVar4,(MethodInfo *)0x0);
          if (BIBGGHMEPBI < iVar4) {
                    /* try { // try from 03398b50 to 03498b57 has its CatchHandler @ 03398c58 */
            bVar7 = 0;
            bVar2 = true;
            goto LAB_03398b5c;
          }
          bVar7 = 0;
                    /* try { // try from 03398bd4 to 03498c23 has its CatchHandler @ 03398aa8 */
          bVar2 = true;
          goto LAB_03398bd8;
        }
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 + -4 < (int)uVar1);
    }
    return false;
  }
LAB_03398bec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
LAB_03398b5c:
  __this = (MMEECJEKHGB->fields)._FEKFGIIMCOE_k__BackingField;
                    /* try { // try from 03398b64 to 03498b6b has its CatchHandler @ 03398c54 */
  if ((__this == (System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *)0x0) ||
     (method_00 = Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__,
     pIVar5 = System_Collections_Generic_List<object>__get_Item
                        ((System_Collections_Generic_List_object__o *)__this,BIBGGHMEPBI,
                         (MethodInfo_26E4ADC *)
                         Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__),
     pIVar5 == (Il2CppObject *)0x0)) goto LAB_03398bec;
  c = *(uint16_t *)((long)&pIVar5[1].klass + 4);
                    /* try { // try from 03398b7c to 03498b83 has its CatchHandler @ 03398c3c */
  if ((char_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(char_TypeInfo);
  }
                    /* try { // try from 03398b8c to 03498b93 has its CatchHandler @ 03398c50 */
  bVar3 = System_Char__IsUpper(c,(MethodInfo *)0x0);
  if (bVar3) {
                    /* try { // try from 03398ba4 to 03498bab has its CatchHandler @ 03398c38 */
    bVar3 = OMANDMDCGMF__GOIFPODNLCH(c,HAKPMGCKCLB,method_00);
    if (!bVar3) {
      return (bool)(bVar2 ^ 1);
    }
    bVar7 = 1;
  }
  BIBGGHMEPBI = BIBGGHMEPBI + 1;
                    /* try { // try from 03398bb4 to 03498bbb has its CatchHandler @ 03398c4c */
  bVar2 = BIBGGHMEPBI < iVar4;
  if (iVar4 == BIBGGHMEPBI) {
    bVar2 = iVar4 <= BIBGGHMEPBI;
                    /* try { // try from 03398bcc to 03498bd3 has its CatchHandler @ 03398c44 */
LAB_03398bd8:
    return (bool)(bVar7 & bVar2);
  }
  goto LAB_03398b5c;
}


// ===== private static Vector3 IMPBHOBAEEI(TextAnchor NJLNDHBHPMK, Bounds JDNBFMCGGEG)  [RVA 0x329851C]
// OMANDMDCGMF$$IMPBHOBAEEI @ RVA 0x329851C

UnityEngine_Vector3_o
OMANDMDCGMF__IMPBHOBAEEI(int32_t NJLNDHBHPMK,UnityEngine_Bounds_o *JDNBFMCGGEG,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  UnityEngine_Vector3_o UVar6;
  
  if ((uint)NJLNDHBHPMK < 9) {
    fVar3 = (JDNBFMCGGEG->fields).m_Extents.fields.x;
    uVar1 = 1 << (ulong)(NJLNDHBHPMK & 0x1f);
    if ((uVar1 & 0x49) == 0) {
      if ((uVar1 & 0x92) != 0) {
        fVar3 = (JDNBFMCGGEG->fields).m_Center.fields.x;
        uVar4._0_4_ = (JDNBFMCGGEG->fields).m_Center.fields.y;
        uVar4._4_4_ = (JDNBFMCGGEG->fields).m_Center.fields.z;
        goto LAB_03398580;
      }
      uVar5._0_4_ = (JDNBFMCGGEG->fields).m_Center.fields.y;
      uVar5._4_4_ = (JDNBFMCGGEG->fields).m_Center.fields.z;
      fVar3 = fVar3 + (JDNBFMCGGEG->fields).m_Center.fields.x;
    }
    else {
      uVar5._0_4_ = (JDNBFMCGGEG->fields).m_Center.fields.y;
      uVar5._4_4_ = (JDNBFMCGGEG->fields).m_Center.fields.z;
      fVar3 = (JDNBFMCGGEG->fields).m_Center.fields.x - fVar3;
    }
    uVar4 = CONCAT44((float)((ulong)uVar5 >> 0x20) + 0.0,(float)uVar5 + 0.0);
  }
  else {
    if (DAT_0455fa77 == '\0') {
      FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
      DAT_0455fa77 = '\x01';
    }
    pUVar2 = UnityEngine_Vector3_TypeInfo->static_fields;
    fVar3 = (pUVar2->zeroVector).fields.x;
    uVar4._0_4_ = (pUVar2->zeroVector).fields.y;
    uVar4._4_4_ = (pUVar2->zeroVector).fields.z;
  }
LAB_03398580:
  UVar6.fields.y = (undefined4)uVar4;
  UVar6.fields.x = fVar3;
  UVar6.fields.z = (float)((ulong)uVar4 >> 0x20);
  return (UnityEngine_Vector3_o)UVar6.fields;
}


// ===== public static void CKOPLFDLFPL(TextPic.AIBKGOEIOLC MMEECJEKHGB, Vector3 CPFDIFKIPBN)  [RVA 0x329B368]
// OMANDMDCGMF$$CKOPLFDLFPL @ RVA 0x329B368

void OMANDMDCGMF__CKOPLFDLFPL
               (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *MMEECJEKHGB,UnityEngine_Vector3_o CPFDIFKIPBN,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_IHIFNKAMALG__o *__this;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = MMEECJEKHGB;
  if ((DAT_0456738f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IHIFNKAMALG>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IHIFNKAMALG>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IHIFNKAMALG>_get_Current__);
    auVar3 = FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_GetEnumerator__);
    DAT_0456738f = 1;
  }
  uVar2 = auVar3._0_8_;
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  if ((MMEECJEKHGB != (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)0x0) &&
     (__this = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField, uVar2 = 0,
     __this != (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this,
               Method_System_Collections_Generic_List<IHIFNKAMALG>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<IHIFNKAMALG>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<IHIFNKAMALG>_Dispose__);
        return;
      }
      if (local_38.fields._current == (Il2CppObject *)0x0) break;
      local_38.fields._current[1].klass =
           (Il2CppClass *)
           CONCAT44(CPFDIFKIPBN.fields.y + (float)((ulong)local_38.fields._current[1].klass >> 0x20)
                    ,CPFDIFKIPBN.fields.x + SUB84(local_38.fields._current[1].klass,0));
      *(float *)&local_38.fields._current[1].monitor =
           CPFDIFKIPBN.fields.z + *(float *)&local_38.fields._current[1].monitor;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar2,auVar3._8_8_);
}


// ===== public static float ANKNICPHMCM(TextPic.AIBKGOEIOLC MMEECJEKHGB)  [RVA 0x329B4E8]
// OMANDMDCGMF$$ANKNICPHMCM @ RVA 0x329B4E8

float OMANDMDCGMF__ANKNICPHMCM(Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *MMEECJEKHGB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int32_t iVar3;
  System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *__this;
  Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *__this_00;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  int index;
  System_Collections_Generic_List_IHIFNKAMALG__o *pSVar6;
  float fVar7;
  float fVar8;
  
  if ((DAT_04567390 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
    DAT_04567390 = 1;
  }
  if (MMEECJEKHGB != (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)0x0) {
    iVar2 = Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__IKMLAEGCJHC(MMEECJEKHGB,(MethodInfo *)0x0);
    if (iVar2 < 1) {
      fVar8 = 0.0;
    }
    else {
      index = 0;
      fVar8 = 0.0;
      do {
        __this = (MMEECJEKHGB->fields)._FEKFGIIMCOE_k__BackingField;
        if ((__this == (System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *)0x0) ||
           (__this_00 = (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)__this,index,
                                   Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__
                                  ), __this_00 == (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)0x0))
        goto LAB_0339b628;
        bVar1 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__GAAAPCIKPKL(__this_00,(MethodInfo *)0x0);
        fVar7 = fVar8;
        if (bVar1) {
          pSVar6 = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField;
          iVar3 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__NMHOGBGNJIF(__this_00,(MethodInfo *)0x0);
          if (pSVar6 == (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) goto LAB_0339b628;
          pIVar4 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar6,iVar3 + 2,
                              Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
          pSVar6 = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField;
          iVar3 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__NMHOGBGNJIF(__this_00,(MethodInfo *)0x0);
          if (((pSVar6 == (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) ||
              (pIVar5 = System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar6,iVar3 + 3,
                                   Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__),
              pIVar4 == (Il2CppObject *)0x0)) || (pIVar5 == (Il2CppObject *)0x0)) goto LAB_0339b628;
          fVar7 = *(float *)((long)&pIVar4[1].klass + 4) - *(float *)((long)&pIVar5[1].klass + 4);
          if (fVar7 <= fVar8) {
            fVar7 = fVar8;
          }
        }
        fVar8 = fVar7;
        index = index + 1;
      } while (iVar2 != index);
    }
    return fVar8;
  }
LAB_0339b628:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static int LBEILMMCDGJ(TextPic.AIBKGOEIOLC MMEECJEKHGB, int BIBGGHMEPBI, int HDLNCPGECMP)  [RVA 0x3299010]
// OMANDMDCGMF$$LBEILMMCDGJ @ RVA 0x3299010

int32_t OMANDMDCGMF__LBEILMMCDGJ
                  (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *MMEECJEKHGB,int32_t BIBGGHMEPBI,
                  int32_t HDLNCPGECMP,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *pSVar3;
  Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *__this;
  Il2CppObject *pIVar4;
  
  if ((DAT_04567391 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__);
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04567391 = 1;
  }
  if (MMEECJEKHGB == (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)0x0) {
LAB_0339911c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__BDLEIEHBFAD(MMEECJEKHGB,(MethodInfo *)0x0);
  if (!bVar1) {
    iVar2 = Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__IKMLAEGCJHC(MMEECJEKHGB,(MethodInfo *)0x0);
    if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_Math_TypeInfo);
    }
    iVar2 = System_Math__Min(HDLNCPGECMP + 1,iVar2,(MethodInfo *)0x0);
    if (BIBGGHMEPBI < iVar2) {
      do {
        pSVar3 = (MMEECJEKHGB->fields)._FEKFGIIMCOE_k__BackingField;
        if ((pSVar3 == (System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *)0x0) ||
           (__this = (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar3,BIBGGHMEPBI,
                                Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__
                               ), __this == (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)0x0))
        goto LAB_0339911c;
        bVar1 = Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__GAAAPCIKPKL(__this,(MethodInfo *)0x0);
        if (bVar1) {
          pSVar3 = (MMEECJEKHGB->fields)._FEKFGIIMCOE_k__BackingField;
          if ((pSVar3 != (System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *)0x0) &&
             (pIVar4 = System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar3,BIBGGHMEPBI,
                                  Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__
                                 ), pIVar4 != (Il2CppObject *)0x0)) {
            return *(int32_t *)&pIVar4[1].klass;
          }
          goto LAB_0339911c;
        }
        BIBGGHMEPBI = BIBGGHMEPBI + 1;
      } while (iVar2 != BIBGGHMEPBI);
    }
  }
  return -1;
}


// ===== public static Vector3 OIMANFCDDIJ(TextAnchor NJLNDHBHPMK, Bounds JDNBFMCGGEG)  [RVA 0x329A8E4]
// OMANDMDCGMF$$OIMANFCDDIJ @ RVA 0x329A8E4

UnityEngine_Vector3_o
OMANDMDCGMF__OIMANFCDDIJ(int32_t NJLNDHBHPMK,UnityEngine_Bounds_o *JDNBFMCGGEG,MethodInfo *method)

{
  UnityEngine_Vector3_StaticFields *pUVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar7;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar8;
  ulong uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar14;
  UnityEngine_Vector3_o UVar17;
  
  if (8 < (uint)NJLNDHBHPMK) {
    if (DAT_0455fa77 == '\0') {
      FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
      DAT_0455fa77 = '\x01';
    }
    pUVar1 = UnityEngine_Vector3_TypeInfo->static_fields;
    uVar5._0_4_ = (pUVar1->zeroVector).fields.x;
    uVar5._4_4_ = (pUVar1->zeroVector).fields.y;
    fVar12 = (pUVar1->zeroVector).fields.z;
    goto LAB_0339aa24;
  }
  uVar9._0_4_ = (JDNBFMCGGEG->fields).m_Extents.fields.x;
  uVar9._4_4_ = (JDNBFMCGGEG->fields).m_Extents.fields.y;
  switch(NJLNDHBHPMK) {
  case 0:
    uVar11 = (JDNBFMCGGEG->fields).m_Center.fields.x;
    uVar15 = (JDNBFMCGGEG->fields).m_Center.fields.y;
    fVar12 = (JDNBFMCGGEG->fields).m_Center.fields.z;
    fVar4 = (float)uVar11 - (float)(undefined4)uVar9;
    fVar10 = (float)uVar15 + (float)uVar9._4_4_;
    goto LAB_0339aa1c;
  case 1:
    uVar2 = (JDNBFMCGGEG->fields).m_Center.fields.x;
    uVar7 = (JDNBFMCGGEG->fields).m_Center.fields.y;
    fVar12 = (JDNBFMCGGEG->fields).m_Center.fields.z;
    uVar5 = CONCAT44((float)uVar7 + (float)uVar9._4_4_,(float)uVar2 + 0.0);
    break;
  case 2:
    uVar6._0_4_ = (JDNBFMCGGEG->fields).m_Center.fields.x;
    uVar6._4_4_ = (JDNBFMCGGEG->fields).m_Center.fields.y;
    fVar12 = (JDNBFMCGGEG->fields).m_Center.fields.z;
    goto LAB_0339a9c8;
  case 3:
    uVar13 = (JDNBFMCGGEG->fields).m_Center.fields.x;
    uVar16 = (JDNBFMCGGEG->fields).m_Center.fields.y;
    uVar5 = CONCAT44((float)uVar16 + 0.0,(float)uVar13 - (float)(undefined4)uVar9);
    fVar12 = (JDNBFMCGGEG->fields).m_Center.fields.z + 0.0;
    goto LAB_0339aa24;
  case 4:
    uVar5._0_4_ = (JDNBFMCGGEG->fields).m_Center.fields.x;
    uVar5._4_4_ = (JDNBFMCGGEG->fields).m_Center.fields.y;
    fVar12 = (JDNBFMCGGEG->fields).m_Center.fields.z;
    goto LAB_0339aa24;
  case 5:
    uVar6._0_4_ = (JDNBFMCGGEG->fields).m_Center.fields.x;
    uVar6._4_4_ = (JDNBFMCGGEG->fields).m_Center.fields.y;
    fVar12 = (JDNBFMCGGEG->fields).m_Center.fields.z;
    uVar9 = uVar9 & 0xffffffff;
LAB_0339a9c8:
    uVar5 = CONCAT44((float)(uVar9 >> 0x20) + (float)((ulong)uVar6 >> 0x20),
                     (float)uVar9 + (float)uVar6);
    break;
  case 6:
    uVar3 = (JDNBFMCGGEG->fields).m_Center.fields.x;
    uVar8 = (JDNBFMCGGEG->fields).m_Center.fields.y;
    fVar12 = (JDNBFMCGGEG->fields).m_Center.fields.z;
    uVar5 = CONCAT44((float)uVar8 - (float)uVar9._4_4_,(float)uVar3 - (float)(undefined4)uVar9);
    break;
  case 7:
    uVar14._0_4_ = (JDNBFMCGGEG->fields).m_Center.fields.x;
    uVar14._4_4_ = (JDNBFMCGGEG->fields).m_Center.fields.y;
    fVar12 = (JDNBFMCGGEG->fields).m_Center.fields.z;
    fVar4 = (float)(undefined4)uVar14 + 0.0;
    goto LAB_0339aa18;
  case 8:
    uVar14._0_4_ = (JDNBFMCGGEG->fields).m_Center.fields.x;
    uVar14._4_4_ = (JDNBFMCGGEG->fields).m_Center.fields.y;
    fVar12 = (JDNBFMCGGEG->fields).m_Center.fields.z;
    fVar4 = (float)(undefined4)uVar14 + (float)(undefined4)uVar9;
LAB_0339aa18:
    fVar10 = (float)((ulong)uVar14 >> 0x20) - (float)uVar9._4_4_;
LAB_0339aa1c:
    uVar5 = CONCAT44(fVar10,fVar4);
    fVar12 = fVar12 + 0.0;
    goto LAB_0339aa24;
  }
  fVar12 = fVar12 + 0.0;
LAB_0339aa24:
  UVar17.fields.z = fVar12;
  UVar17.fields.x = (float)(int)uVar5;
  UVar17.fields.y = (float)(int)((ulong)uVar5 >> 0x20);
  return (UnityEngine_Vector3_o)UVar17.fields;
}


// ===== public static List<Bounds> GNPDINFDHKG(TextPic.AIBKGOEIOLC GAOIJJLDHEM)  [RVA 0x329B62C]
// OMANDMDCGMF$$GNPDINFDHKG @ RVA 0x329B62C

/* WARNING: Type propagation algorithm not settling */

System_Collections_Generic_List_Bounds__o *
OMANDMDCGMF__GNPDINFDHKG(Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *GAOIJJLDHEM,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_Bounds__o *__this;
  System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x5;
  UnityEngine_Bounds_array *pUVar4;
  undefined8 uVar5;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_T__o *local_80;
  int32_t iStack_78;
  int32_t iStack_74;
  Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *local_70;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04567392 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_MoveNext__)
    ;
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<Bounds>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Bounds>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<Bounds>_TypeInfo);
    DAT_04567392 = 1;
    method = extraout_x1;
  }
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  __this = (System_Collections_Generic_List_Bounds__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<Bounds>_TypeInfo,method);
  System_Collections_Generic_List<Bounds>___ctor
            (__this,Method_System_Collections_Generic_List<Bounds>__ctor__);
  if ((GAOIJJLDHEM != (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)0x0) &&
     (__this_00 = (GAOIJJLDHEM->fields)._NNFPEOCIPFE_k__BackingField,
     __this_00 != (System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_60,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_GetEnumerator__);
    local_a0.fields._index = local_60.fields._index;
    local_a0.fields._version = local_60.fields._version;
    local_a0.fields._list = local_60.fields._list;
    local_a0.fields._current = local_60.fields._current;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_a0,
                         Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_MoveNext__
                        );
      if (!bVar3) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_a0,
                   Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_Dispose__)
        ;
        return __this;
      }
      OMANDMDCGMF__MLCFOLPGDBO
                ((UnityEngine_Bounds_o *)&local_60,GAOIJJLDHEM,
                 (Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *)local_a0.fields._current,
                 (System_Collections_Generic_HashSet_char__o *)0x0,
                 (System_Collections_Generic_HashSet_char__o *)0x0,
                 (System_Collections_Generic_HashSet_char__o *)0x0,in_x5);
      lVar2 = Method_System_Collections_Generic_List<Bounds>_Add__;
      if (__this == (System_Collections_Generic_List_Bounds__o *)0x0) break;
      uVar5._0_4_ = local_60.fields._index;
      uVar5._4_4_ = local_60.fields._version;
      local_80 = local_60.fields._list;
      local_70 = (Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *)local_60.fields._current;
      iStack_78 = local_60.fields._index;
      iStack_74 = local_60.fields._version;
      pUVar4 = (__this->fields)._items;
      (__this->fields)._version = (__this->fields)._version + 1;
      if (pUVar4 == (UnityEngine_Bounds_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar1 = (__this->fields)._size;
      if (uVar1 < (uint)pUVar4->max_length) {
        (__this->fields)._size = uVar1 + 1;
        *(Il2CppObject **)&pUVar4->m_Items[(int)uVar1].fields.m_Extents.fields.y =
             local_60.fields._current;
        *(undefined8 *)&pUVar4->m_Items[(int)uVar1].fields.m_Center.fields.z = local_60.fields._8_8_
        ;
        *(System_Collections_Generic_List_T__o **)
         &pUVar4->m_Items[(int)uVar1].fields.m_Center.fields = local_60.fields._list;
        _iStack_78 = uVar5;
      }
      else {
        System_Collections_Generic_List<Bounds>__AddWithResize
                  (__this,(UnityEngine_Bounds_o *)&local_60,
                   *(MethodInfo_269FCFC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

