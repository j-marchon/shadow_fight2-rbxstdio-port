// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyDialog$$CJPKPFBKMNP @ RVA 0x32BB368

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyDialog__CJPKPFBKMNP
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyDialog_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  int32_t iVar5;
  GALHNMPIEHA_o *pGVar6;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *__this_02;
  BDMABHJEEGD_o *JOBNGBCPEGO;
  System_String_o *pSVar7;
  Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this_03;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  System_Object_array *pSVar8;
  System_Collections_Generic_List_RaidDailyTaskCell__o *pSVar9;
  int index;
  BPBGAAHBFKH_o *pBVar10;
  System_Collections_Generic_List_Enumerator_T__o local_c0;
  undefined4 local_a4;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04567492 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<RaidDailyTaskCell>__);
    FUN_01bab630(&Method_DJNBJHPDKDP_OLAGEPMKJFC<RaidDailyTaskCell>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<RaidDailyTaskCell>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BDMABHJEEGD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BDMABHJEEGD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<RaidDailyTaskCell>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<RaidDailyTaskCell>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BDMABHJEEGD>_get_Current__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BDMABHJEEGD>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BDMABHJEEGD>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidDailyTaskCell>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidDailyTaskCell>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidDailyTaskCell>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BDMABHJEEGD>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidDailyTaskCell>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<RaidDailyTaskCell>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<BDMABHJEEGD>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_get_Item__);
    FUN_01bab630(&StringLiteral_10834);
    FUN_01bab630(&StringLiteral_10833);
    DAT_04567492 = 1;
    method = extraout_x1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  local_a4 = 0;
  if ((__this->fields).super.super._BOGAKJOFOEK_k__BackingField != false) {
    return;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pGVar6 = HJPEKDOPBHN__CCIPAEHGPFC((MethodInfo *)0x0);
  if (pGVar6 != (GALHNMPIEHA_o *)0x0) {
    pBVar10 = (pGVar6->fields)._MBJGPIOFAEE_k__BackingField;
    pGVar6 = HJPEKDOPBHN__CCIPAEHGPFC((MethodInfo *)0x0);
    if (pGVar6 != (GALHNMPIEHA_o *)0x0) {
      GALHNMPIEHA__CADLDOGMOJO(pGVar6,(MethodInfo *)0x0);
      if (pBVar10 == (BPBGAAHBFKH_o *)0x0) {
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogError(StringLiteral_10834,(MethodInfo *)0x0);
        return;
      }
      pSVar9 = (__this->fields).CGNMDFAAHDA;
      __this_00 = (System_Collections_Generic_List_object__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_List<RaidDailyTaskCell>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                (__this_00,(System_Collections_Generic_IEnumerable_T__o *)pSVar9,
                 Method_System_Collections_Generic_List<RaidDailyTaskCell>__ctor__);
      __this_01 = (System_Collections_Generic_List_object__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_List<BDMABHJEEGD>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                (__this_01,Method_System_Collections_Generic_List<BDMABHJEEGD>__ctor__);
      __this_02 = (pBVar10->fields).IGPJEDLPAGI;
      if (__this_02 != (Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *)0x0) {
        index = 0;
        while (index < (__this_02->fields).count) {
          JOBNGBCPEGO = (BDMABHJEEGD_o *)
                        Google_Protobuf_Collections_RepeatedField<object>__get_Item
                                  ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_02,index
                                   ,
                                   Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_get_Item__
                                  );
          pSVar9 = (__this->fields).CGNMDFAAHDA;
          if (pSVar9 == (System_Collections_Generic_List_RaidDailyTaskCell__o *)0x0)
          goto LAB_033bb884;
          System_Collections_Generic_List<object>__GetEnumerator
                    (&local_c0,(System_Collections_Generic_List_object__o *)pSVar9,
                     Method_System_Collections_Generic_List<RaidDailyTaskCell>_GetEnumerator__);
          local_80.fields._index = local_c0.fields._index;
          local_80.fields._version = local_c0.fields._version;
          local_80.fields._list = local_c0.fields._list;
          local_80.fields._current = local_c0.fields._current;
          do {
            bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (&local_80,
                               Method_System_Collections_Generic_List_Enumerator<RaidDailyTaskCell>_MoveNext__
                              );
            pIVar3 = local_80.fields._current;
            if (!bVar4) {
              System_Collections_Generic_List_Enumerator<object>__Dispose
                        (&local_80,
                         Method_System_Collections_Generic_List_Enumerator<RaidDailyTaskCell>_Dispose__
                        );
              lVar2 = Method_System_Collections_Generic_List<BDMABHJEEGD>_Add__;
              if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_033bb884;
              pSVar8 = (__this_01->fields)._items;
              (__this_01->fields)._version = (__this_01->fields)._version + 1;
              if (pSVar8 == (System_Object_array *)0x0) goto LAB_033bb884;
              uVar1 = (__this_01->fields)._size;
              if (uVar1 < (uint)pSVar8->max_length) {
                (__this_01->fields)._size = uVar1 + 1;
                pSVar8->m_Items[(int)uVar1] = (Il2CppObject *)JOBNGBCPEGO;
                thunk_FUN_01c20e04(pSVar8->m_Items + (int)uVar1,JOBNGBCPEGO);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          (__this_01,(Il2CppObject *)JOBNGBCPEGO,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
              goto LAB_033bb6b0;
            }
            if ((Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *)local_80.fields._current ==
                (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            iVar5 = Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__GetDailyQuestId
                              ((Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *)
                               local_80.fields._current,(MethodInfo *)0x0);
            if (JOBNGBCPEGO == (BDMABHJEEGD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
          } while (iVar5 != (JOBNGBCPEGO->fields).OHMDCKEDOGH);
          Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__UpdateTaskInfo
                    ((Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *)pIVar3,JOBNGBCPEGO,
                     (MethodInfo *)0x0);
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          System_Collections_Generic_List<object>__Remove
                    (__this_00,pIVar3,
                     Method_System_Collections_Generic_List<RaidDailyTaskCell>_Remove__);
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_80,
                     Method_System_Collections_Generic_List_Enumerator<RaidDailyTaskCell>_Dispose__)
          ;
LAB_033bb6b0:
          __this_02 = (pBVar10->fields).IGPJEDLPAGI;
          index = index + 1;
          if (__this_02 == (Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *)0x0)
          goto LAB_033bb884;
        }
        if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
          System_Collections_Generic_List<object>__GetEnumerator
                    (&local_c0,__this_01,
                     Method_System_Collections_Generic_List<BDMABHJEEGD>_GetEnumerator__);
          local_a0.fields._index = local_c0.fields._index;
          local_a0.fields._version = local_c0.fields._version;
          local_a0.fields._list = local_c0.fields._list;
          local_a0.fields._current = local_c0.fields._current;
          while( true ) {
            while( true ) {
              bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (&local_a0,
                                 Method_System_Collections_Generic_List_Enumerator<BDMABHJEEGD>_MoveNext__
                                );
              pIVar3 = local_a0.fields._current;
              if (!bVar4) {
                System_Collections_Generic_List_Enumerator<object>__Dispose
                          (&local_a0,
                           Method_System_Collections_Generic_List_Enumerator<BDMABHJEEGD>_Dispose__)
                ;
                return;
              }
              bVar4 = DJNBJHPDKDP__OBECCOPBADO<object>
                                ((System_Collections_Generic_List_T__o *)__this_00,
                                 Method_DJNBJHPDKDP_OBECCOPBADO<RaidDailyTaskCell>__);
              if (bVar4) break;
              __this_03 = (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *)
                          DJNBJHPDKDP__OLAGEPMKJFC<object>
                                    ((System_Collections_Generic_List_T__o *)__this_00,
                                     Method_DJNBJHPDKDP_OLAGEPMKJFC<RaidDailyTaskCell>__);
              if (__this_03 == (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__UpdateTaskInfo
                        (__this_03,(BDMABHJEEGD_o *)pIVar3,(MethodInfo *)0x0);
            }
            pSVar9 = (__this->fields).CGNMDFAAHDA;
            if (pSVar9 == (System_Collections_Generic_List_RaidDailyTaskCell__o *)0x0) break;
            iVar5 = (pSVar9->fields)._size;
            if (iVar5 < 3) {
              Nekki_SF2_GUI_Dialogs_Raids_RaidDailyDialog__INMMEJPGBPO
                        (__this,iVar5,(BDMABHJEEGD_o *)pIVar3,in_x3);
            }
            else {
              local_a4 = 3;
              pSVar7 = System_Int32__ToString((int32_t)&local_a4,(MethodInfo *)0x0);
              pSVar7 = System_String__Concat(StringLiteral_10833,pSVar7,(MethodInfo *)0x0);
              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              UnityEngine_Debug__LogError((Il2CppObject *)pSVar7,(MethodInfo *)0x0);
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      }
    }
  }
LAB_033bb884:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

