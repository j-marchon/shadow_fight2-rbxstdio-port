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

