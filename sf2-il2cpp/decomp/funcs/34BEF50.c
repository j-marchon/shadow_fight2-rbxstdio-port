// KAHMAJKJMBK$$JMMGBCEIKIL @ RVA 0x34BEF50

void KAHMAJKJMBK__JMMGBCEIKIL(KAHMAJKJMBK_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  Il2CppObject *pIVar6;
  bool bVar7;
  int32_t iVar8;
  System_Collections_Generic_List_CNIGOFCKBGI__o *__this_00;
  FCJBEKHDLAF_o *pFVar9;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_045685ff & 1) == 0) {
    FUN_01bab630(&AFIEAGJGHGK_TypeInfo);
    FUN_01bab630(&EDELKOLBNDG_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CNIGOFCKBGI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CNIGOFCKBGI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CNIGOFCKBGI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CNIGOFCKBGI>_GetEnumerator__);
    FUN_01bab630(&NBCALFOIEAA_TypeInfo);
    DAT_045685ff = 1;
    method = extraout_x1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).OIJDFMHDHHK;
  if (__this_00 != (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<CNIGOFCKBGI>_GetEnumerator__);
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
    local_80.fields._list = local_98.fields._list;
    local_80.fields._current = local_98.fields._current;
    bVar2 = false;
    bVar3 = false;
    bVar4 = false;
    bVar5 = false;
    while( true ) {
      bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_List_Enumerator<CNIGOFCKBGI>_MoveNext__);
      pIVar6 = local_80.fields._current;
      if (!bVar7) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<CNIGOFCKBGI>_Dispose__);
        return;
      }
      if ((AJNNHGGLGIF_o *)local_80.fields._current == (AJNNHGGLGIF_o *)0x0) break;
      if (((AJNNHGGLGIF_Fields *)((long)local_80.fields._current + 0x10))->
          _BDDBFNHFMBC_k__BackingField != false) {
        iVar8 = AJNNHGGLGIF__NHGGBEACKBD
                          ((AJNNHGGLGIF_o *)local_80.fields._current,(MethodInfo *)0x0);
        if (iVar8 < 0x10) {
          if (iVar8 < 7) {
            if (iVar8 == 5) {
              bVar7 = !bVar4;
              bVar4 = true;
              if (bVar7) {
                bVar1 = (NBCALFOIEAA_TypeInfo->_2).naturalAligment;
                if (((((AJNNHGGLGIF_c *)pIVar6->klass)->_2).naturalAligment < bVar1) ||
                   ((((AJNNHGGLGIF_c *)pIVar6->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                    (Il2CppClass *)NBCALFOIEAA_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                  FUN_01babc64(pIVar6);
                }
                pFVar9 = (__this->fields).HPKHMGLOLPJ;
                if (pFVar9 == (FCJBEKHDLAF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                bVar4 = true;
                FCJBEKHDLAF__MBAMHICCADK
                          (pFVar9,(float)(((AJNNHGGLGIF_o *)((long)pIVar6 + 0x58))->fields).
                                         PJEIFMBEAKH,
                           *(float *)&(((AJNNHGGLGIF_o *)((long)pIVar6 + 0x58))->fields).
                                      _BDDBFNHFMBC_k__BackingField,
                           *(float *)&(((AJNNHGGLGIF_o *)((long)pIVar6 + 0x58))->fields).BPPCPHCDICD
                           ,*(System_String_o **)
                             &(((AJNNHGGLGIF_o *)((long)pIVar6 + 0x58))->fields).JDNKKGPNHPB.fields,
                           (MethodInfo *)0x0);
              }
            }
            else if ((iVar8 == 6) && (bVar7 = !bVar2, bVar2 = true, bVar7)) {
              pFVar9 = (__this->fields).HPKHMGLOLPJ;
              if (pFVar9 == (FCJBEKHDLAF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              bVar2 = true;
              FCJBEKHDLAF__KCHJHDCDKGB(pFVar9,(MethodInfo *)0x0);
            }
          }
          else if (iVar8 == 7) {
            bVar7 = !bVar5;
            bVar5 = true;
            if (bVar7) {
              bVar1 = (AFIEAGJGHGK_TypeInfo->_2).naturalAligment;
              if (((((AJNNHGGLGIF_c *)pIVar6->klass)->_2).naturalAligment < bVar1) ||
                 ((((AJNNHGGLGIF_c *)pIVar6->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                  (Il2CppClass *)AFIEAGJGHGK_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                FUN_01babc64(pIVar6);
              }
              bVar5 = true;
              if ((char)(((AJNNHGGLGIF_o *)((long)pIVar6 + 0x58))->fields).JDNKKGPNHPB.fields.
                        fakeValue != '\0') {
                pFVar9 = (__this->fields).HPKHMGLOLPJ;
                if (pFVar9 == (FCJBEKHDLAF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                bVar5 = true;
                FCJBEKHDLAF__IGGGBNLBJPI
                          (pFVar9,*(System_String_o **)
                                   &(((AJNNHGGLGIF_o *)((long)pIVar6 + 0x58))->fields).JDNKKGPNHPB.
                                    fields,
                           *(float *)&(((AJNNHGGLGIF_o *)((long)pIVar6 + 0x58))->fields).JDNKKGPNHPB
                                      .fields.fakeValueActive,(MethodInfo *)0x0);
              }
            }
          }
          else if (iVar8 == 0xf) {
            pFVar9 = (__this->fields).HPKHMGLOLPJ;
            if (pFVar9 == (FCJBEKHDLAF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            FCJBEKHDLAF__NPGJDKCAEHN
                      (pFVar9,*(int32_t *)&((AJNNHGGLGIF_o *)((long)pIVar6 + 0x58))->klass,false,
                       (MethodInfo *)0x0);
          }
        }
        else if (iVar8 == 0x12) {
          bVar7 = !bVar3;
          bVar3 = true;
          if (bVar7) {
            bVar1 = (EDELKOLBNDG_TypeInfo->_2).naturalAligment;
            if (((((AJNNHGGLGIF_c *)pIVar6->klass)->_2).naturalAligment < bVar1) ||
               ((((AJNNHGGLGIF_c *)pIVar6->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                (Il2CppClass *)EDELKOLBNDG_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_01babc64(pIVar6);
            }
            pFVar9 = (__this->fields).HPKHMGLOLPJ;
            if (pFVar9 == (FCJBEKHDLAF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            bVar3 = true;
            FCJBEKHDLAF__FPBGLCDHHFH
                      (pFVar9,0.0,-220.0,
                       *(int32_t *)
                        ((long)&(((AJNNHGGLGIF_o *)((long)pIVar6 + 0x58))->fields).super.GMPFJFBFHCH
                        + 4),*(int32_t *)
                              ((long)&(((AJNNHGGLGIF_o *)((long)pIVar6 + 0x58))->fields).HIJMBHIMFBB
                              + 4),100.0,(MethodInfo *)0x0);
          }
        }
        else if (iVar8 == 0x28) {
          pFVar9 = (__this->fields).HPKHMGLOLPJ;
          if (pFVar9 == (FCJBEKHDLAF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          FCJBEKHDLAF__PCKDILILPBJ(pFVar9,3,true,(MethodInfo *)0x0);
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

