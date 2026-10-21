// Nekki.SF2.GUI.TextPic$$IMOIFLIIIAI @ RVA 0x30B7D28

void Nekki_SF2_GUI_TextPic__IMOIFLIIIAI
               (Nekki_SF2_GUI_TextPic_o *__this,
               System_Collections_Generic_List_Bounds__o *GAPOMBJDGMG,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  System_Action_o *pSVar6;
  int index;
  float fVar7;
  float fVar8;
  float fVar10;
  ulong uVar9;
  float fVar11;
  float fVar13;
  ulong uVar12;
  float fVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  Il2CppClass *pIVar20;
  float fVar21;
  UnityEngine_Vector2_o UVar22;
  undefined1 local_e8 [20];
  float fStack_d4;
  System_Collections_Generic_List_Enumerator_T__o local_d0;
  UnityEngine_Bounds_o local_b8;
  
  if ((DAT_0456621a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Glyph>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Bounds>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Bounds>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Bounds>_set_Item__);
    DAT_0456621a = 1;
  }
  local_d0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_d0.fields._index = 0;
  local_d0.fields._version = 0;
  local_d0.fields._current = (Il2CppObject *)0x0;
  if (GAPOMBJDGMG != (System_Collections_Generic_List_Bounds__o *)0x0) {
    iVar1 = (GAPOMBJDGMG->fields)._size;
    if (0 < iVar1) {
      index = 0;
      do {
        pSVar3 = (System_Collections_Generic_List_object__o *)(__this->fields).NMHDAIIIHFP;
        if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_031b80f4;
        System_Collections_Generic_List<object>__GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_e8,pSVar3,
                   Method_System_Collections_Generic_List<Glyph>_GetEnumerator__);
        local_d0.fields._version = local_e8._12_4_;
        local_d0.fields._index = local_e8._8_4_;
        local_d0.fields._current = (Il2CppObject *)CONCAT44(fStack_d4,local_e8._16_4_);
        local_d0.fields._list = (System_Collections_Generic_List_T__o *)local_e8._0_8_;
        while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_d0,
                                  Method_System_Collections_Generic_List_Enumerator<Glyph>_MoveNext__
                                 ), pIVar5 = local_d0.fields._current, bVar2) {
          if (local_d0.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          if (*(int *)&local_d0.fields._current[3].monitor == index) {
            pSVar6 = (__this->fields).NFECDKAEFJL;
            if (pSVar6 == (System_Action_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar3 = (System_Collections_Generic_List_object__o *)
                     (pSVar6->fields).super.super.invoke_impl;
            if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pIVar4 = System_Collections_Generic_List<object>__get_Item
                               (pSVar3,*(int32_t *)&local_d0.fields._current[2].monitor,
                                Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__
                               );
            if (pIVar4 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            if ((*(char *)((long)&pIVar4[1].monitor + 6) != '\0') &&
               (*(char *)((long)&pIVar4[1].monitor + 4) == '\0')) {
              if (pIVar5[3].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              UVar22 = BOGDEGPCIJI__GCMGMGMCMNK((BOGDEGPCIJI_o *)pIVar5[3].klass,(MethodInfo *)0x0);
              pSVar6 = (__this->fields).NFECDKAEFJL;
              if (pSVar6 == (System_Action_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pSVar3 = (System_Collections_Generic_List_object__o *)
                       (pSVar6->fields).super.super.m_target;
              if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pIVar5 = System_Collections_Generic_List<object>__get_Item
                                 (pSVar3,*(int *)&pIVar4[1].monitor << 2 | 3,
                                  Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Item__);
              if (pIVar5 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pIVar20 = pIVar5[1].klass;
              fVar21 = *(float *)&pIVar5[1].monitor;
              System_Collections_Generic_List<Bounds>__get_Item
                        ((UnityEngine_Bounds_o *)local_e8,GAPOMBJDGMG,index,
                         Method_System_Collections_Generic_List<Bounds>_get_Item__);
              fVar7 = UVar22.fields.y * 0.5;
              fVar14 = UVar22.fields.x * 0.5;
              fVar8 = SUB84(pIVar20,0) + 0.0;
              fVar10 = (float)((ulong)pIVar20 >> 0x20) + fVar7;
              fVar21 = fVar21 + 0.0;
              fVar11 = fVar8 - fVar14;
              fVar13 = fVar10 - fVar7;
              uVar12 = CONCAT44(fVar13,fVar11);
              fVar14 = fVar14 + fVar8;
              fVar7 = fVar7 + fVar10;
              uVar9 = CONCAT44(fVar7,fVar14);
              fVar8 = (float)local_e8._0_8_ - (float)local_e8._12_4_;
              fVar10 = SUB84(local_e8._0_8_,4) - (float)local_e8._16_4_;
              uVar15 = CONCAT44(fVar10,fVar8);
              fVar16 = (float)local_e8._0_8_ + (float)local_e8._12_4_;
              fVar17 = SUB84(local_e8._0_8_,4) + (float)local_e8._16_4_;
              uVar15 = uVar15 ^ (uVar15 ^ uVar12) &
                                ~CONCAT44(-(uint)(fVar10 < fVar13),-(uint)(fVar8 < fVar11));
              fVar8 = (float)local_e8._8_4_ - fStack_d4;
              if (fVar21 <= (float)local_e8._8_4_ - fStack_d4) {
                fVar8 = fVar21;
              }
              uVar12 = uVar12 ^ (uVar12 ^ CONCAT44(fVar17,fVar16)) &
                                CONCAT44(-(uint)(fVar13 < fVar17),-(uint)(fVar11 < fVar16));
              fVar10 = (float)local_e8._8_4_ + fStack_d4;
              if ((float)local_e8._8_4_ + fStack_d4 <= fVar21) {
                fVar10 = fVar21;
              }
              fVar16 = (float)uVar15;
              fVar17 = (float)(uVar15 >> 0x20);
              fVar11 = ((float)uVar12 - fVar16) * 0.5;
              fVar13 = ((float)(uVar12 >> 0x20) - fVar17) * 0.5;
              fVar10 = (fVar10 - fVar8) * 0.5;
              fVar16 = fVar16 + fVar11;
              fVar17 = fVar17 + fVar13;
              fVar18 = fVar16 - fVar11;
              fVar19 = fVar17 - fVar13;
              uVar12 = CONCAT44(fVar19,fVar18);
              fVar11 = fVar11 + fVar16;
              fVar13 = fVar13 + fVar17;
              local_b8.fields.m_Center.fields.z = (fVar8 + fVar10) - fVar10;
              fVar10 = fVar10 + fVar8 + fVar10;
              uVar12 = uVar12 ^ (uVar12 ^ uVar9) &
                                ~CONCAT44(-(uint)(fVar19 < fVar7),-(uint)(fVar18 < fVar14));
              uVar9 = uVar9 ^ (uVar9 ^ CONCAT44(fVar13,fVar11)) &
                              CONCAT44(-(uint)(fVar7 < fVar13),-(uint)(fVar14 < fVar11));
              if (fVar21 <= local_b8.fields.m_Center.fields.z) {
                local_b8.fields.m_Center.fields.z = fVar21;
              }
              if (fVar10 <= fVar21) {
                fVar10 = fVar21;
              }
              fVar8 = (float)uVar12;
              fVar21 = (float)(uVar12 >> 0x20);
              local_b8.fields.m_Extents.fields.x = ((float)uVar9 - fVar8) * 0.5;
              local_b8.fields.m_Extents.fields.y = ((float)(uVar9 >> 0x20) - fVar21) * 0.5;
              local_b8.fields.m_Extents.fields.z =
                   (fVar10 - local_b8.fields.m_Center.fields.z) * 0.5;
              local_b8.fields.m_Center.fields.x = fVar8 + local_b8.fields.m_Extents.fields.x;
              local_b8.fields.m_Center.fields.y = fVar21 + local_b8.fields.m_Extents.fields.y;
              local_b8.fields.m_Center.fields.z =
                   local_b8.fields.m_Center.fields.z + local_b8.fields.m_Extents.fields.z;
              System_Collections_Generic_List<Bounds>__set_Item
                        (GAPOMBJDGMG,index,&local_b8,
                         Method_System_Collections_Generic_List<Bounds>_set_Item__);
            }
          }
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_d0,Method_System_Collections_Generic_List_Enumerator<Glyph>_Dispose__);
        index = index + 1;
      } while (index != iVar1);
    }
    return;
  }
LAB_031b80f4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

