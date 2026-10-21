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

