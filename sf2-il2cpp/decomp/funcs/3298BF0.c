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

