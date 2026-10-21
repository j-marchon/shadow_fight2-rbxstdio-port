// TypeDefIndex 2073
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class RaidDailyDialog : RaidBaseDialog
// Fields:
//   private const int GCBCJBADCJI = 3;
//   private List<RaidDailyTaskCell> CGNMDFAAHDA; // 0xC8
//   private GameObject _raidDailyTaskCellPrefab; // 0xD0
//   private List<GameObject> _cellsPos; // 0xD8

// ===== protected override void IGDDKJJMDLP()  [RVA 0x32BB1CC]
// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyDialog$$IGDDKJJMDLP @ RVA 0x32BB1CC

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyDialog__IGDDKJJMDLP
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== private void INMMEJPGBPO(int ELACKBJPMNB, BDMABHJEEGD JOBNGBCPEGO)  [RVA 0x32BB1D0]
// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyDialog$$INMMEJPGBPO @ RVA 0x32BB1D0

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyDialog__INMMEJPGBPO
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyDialog_o *__this,int32_t ELACKBJPMNB,
               BDMABHJEEGD_o *JOBNGBCPEGO,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  System_Collections_Generic_List_RaidDailyTaskCell__o *__this_02;
  System_Collections_Generic_List_GameObject__o *__this_03;
  Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_array *pNVar3;
  UnityEngine_GameObject_o *pUVar4;
  
  if ((DAT_04567491 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RaidDailyTaskCell>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidDailyTaskCell>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GameObject>_get_Item__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567491 = 1;
  }
  pUVar4 = (__this->fields)._raidDailyTaskCellPrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pUVar4 = (UnityEngine_GameObject_o *)
           UnityEngine_Object__Instantiate<object>
                     ((Il2CppObject *)pUVar4,Method_UnityEngine_Object_Instantiate<GameObject>__);
  if ((pUVar4 != (UnityEngine_GameObject_o *)0x0) &&
     (__this_00 = (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *)
                  UnityEngine_GameObject__GetComponent<object>
                            (pUVar4,Method_UnityEngine_GameObject_GetComponent<RaidDailyTaskCell>__)
     , __this_00 != (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *)0x0)) {
    Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__Init(__this_00,JOBNGBCPEGO,(MethodInfo *)0x0);
    __this_01 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    __this_03 = (__this->fields)._cellsPos;
    if ((__this_03 != (System_Collections_Generic_List_GameObject__o *)0x0) &&
       ((pUVar4 = (UnityEngine_GameObject_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_03,ELACKBJPMNB,
                             Method_System_Collections_Generic_List<GameObject>_get_Item__),
        pUVar4 != (UnityEngine_GameObject_o *)0x0 &&
        (parent = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0),
        __this_01 != (UnityEngine_Transform_o *)0x0)))) {
      UnityEngine_Transform__SetParent(__this_01,parent,false,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<RaidDailyTaskCell>_Add__;
      __this_02 = (__this->fields).CGNMDFAAHDA;
      if (__this_02 != (System_Collections_Generic_List_RaidDailyTaskCell__o *)0x0) {
        pNVar3 = (__this_02->fields)._items;
        (__this_02->fields)._version = (__this_02->fields)._version + 1;
        if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_array *)0x0) {
          uVar1 = (__this_02->fields)._size;
          if (uVar1 < (uint)pNVar3->max_length) {
            (__this_02->fields)._size = uVar1 + 1;
            pNVar3->m_Items[(int)uVar1] = __this_00;
            thunk_FUN_01c20e04(pNVar3->m_Items + (int)uVar1,__this_00);
            return;
          }
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_02,
                     (Il2CppObject *)__this_00,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CJPKPFBKMNP()  [RVA 0x32BB368]
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
    FUN_01bab630(&StringLiteral_10834/*"RaidDailyDialog::OnRaidQuestUpdated: quests is null"*/);
    FUN_01bab630(&StringLiteral_10833/*"RaidDailyDialog::OnRaidQuestUpdated: MAX_CELL_COUNT reached. MAX_CELL_COUNT = "*/);
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
        UnityEngine_Debug__LogError(StringLiteral_10834/*"RaidDailyDialog::OnRaidQuestUpdated: quests is null"*/,(MethodInfo *)0x0);
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
              pSVar7 = System_String__Concat(StringLiteral_10833/*"RaidDailyDialog::OnRaidQuestUpdated: MAX_CELL_COUNT reached. MAX_CELL_COUNT = "*/,pSVar7,(MethodInfo *)0x0);
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


// ===== protected override void GKPJMHOFIOO()  [RVA 0x32BB94C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyDialog$$GKPJMHOFIOO @ RVA 0x32BB94C

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyDialog__GKPJMHOFIOO
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyDialog_o *__this,MethodInfo *method)

{
  GALHNMPIEHA_o *pGVar1;
  MethodInfo *in_x2;
  
  if ((DAT_04567493 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04567493 = 1;
  }
  Nekki_SF2_GUI_Dialogs_BaseDialog__GKPJMHOFIOO
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033bb998 to 034bb99f has its CatchHandler @ 033bbaf0 */
    thunk_FUN_01ba7564();
  }
  pGVar1 = HJPEKDOPBHN__CCIPAEHGPFC((MethodInfo *)0x0);
  if (pGVar1 != (GALHNMPIEHA_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_Raids_RaidDailyDialog__HOHPCNNNAHG
              (__this,(pGVar1->fields)._MBJGPIOFAEE_k__BackingField,in_x2);
                    /* try { // try from 033bb9b4 to 034bb9bb has its CatchHandler @ 033bbae8 */
    pGVar1 = HJPEKDOPBHN__CCIPAEHGPFC((MethodInfo *)0x0);
    if (pGVar1 != (GALHNMPIEHA_o *)0x0) {
      GALHNMPIEHA__CADLDOGMOJO(pGVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033bb9d0 to 034bb9d7 has its CatchHandler @ 033bbac0 */
  FUN_01bab8c8();
}


// ===== protected override void EJHAPHAHMHG(string EHNFGMGKCHO)  [RVA 0x32BBACC]
// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyDialog$$EJHAPHAHMHG @ RVA 0x32BBACC

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyDialog__EJHAPHAHMHG
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyDialog_o *__this,System_String_o *EHNFGMGKCHO,
               MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  System_String_o *extraout_x1;
  
                    /* catch() { ... } // from try @ 033bba9c with catch @ 033bbacc */
                    /* catch() { ... } // from try @ 033bba38 with catch @ 033bbad0 */
                    /* catch() { ... } // from try @ 033bba98 with catch @ 033bbad4 */
                    /* catch() { ... } // from try @ 033bba1c with catch @ 033bbad8 */
                    /* catch() { ... } // from try @ 033bba94 with catch @ 033bbadc */
                    /* catch() { ... } // from try @ 033bba90 with catch @ 033bbae0 */
  if ((DAT_04567494 & 1) == 0) {
                    /* catch() { ... } // from try @ 033bb9e8 with catch @ 033bbae4 */
                    /* catch() { ... } // from try @ 033bb9b4 with catch @ 033bbae8 */
                    /* catch() { ... } // from try @ 033bba8c with catch @ 033bbaec */
    FUN_01bab630(&StringLiteral_2425/*"<quad name=MiscSprites.raid_quests_icon offsety=8 color=#E0C090 /> ^DailyTitle^"*/);
                    /* catch() { ... } // from try @ 033bb998 with catch @ 033bbaf0 */
    DAT_04567494 = 1;
    EHNFGMGKCHO = extraout_x1;
  }
  __this_00 = (__this->fields).super.super._header;
  if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* try { // try from 033bbb08 to 034bbb0b has its CatchHandler @ 033bbb40 */
                    /* try { // try from 033bbb0c to 034bbb4f has its CatchHandler @ 033bb8bc */
    Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,StringLiteral_2425/*"<quad name=MiscSprites.raid_quests_icon offsety=8 color=#E0C090 /> ^DailyTitle^"*/,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,EHNFGMGKCHO);
}


// ===== public override void Init(object IMMNELPBGIF)  [RVA 0x32BBB20]
// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyDialog$$Init @ RVA 0x32BBB20

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyDialog__Init
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  GALHNMPIEHA_o *__this_00;
  System_Action_o *CJNHFNHJHPE;
  Il2CppObject *extraout_x1;
  
                    /* catch() { ... } // from try @ 033bbb08 with catch @ 033bbb40 */
  if ((DAT_04567495 & 1) == 0) {
                    /* try { // try from 033bbb50 to 034bbb57 has its CatchHandler @ 033bbb6c */
    FUN_01bab630(&System_Action_TypeInfo);
                    /* try { // try from 033bbb58 to 034bbb63 has its CatchHandler @ 033bb8bc */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* try { // try from 033bbb64 to 034bbb6b has its CatchHandler @ 033bbb6c */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidDailyDialog_CJPKPFBKMNP__);
                    /* catch() { ... } // from try @ 033bbb50 with catch @ 033bbb6c
                       catch() { ... } // from try @ 033bbb64 with catch @ 033bbb6c */
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567495 = 1;
    IMMNELPBGIF = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,IMMNELPBGIF);
  }
  __this_00 = HJPEKDOPBHN__CCIPAEHGPFC((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (__this_00 != (GALHNMPIEHA_o *)0x0) {
    GALHNMPIEHA__COKCPKHDHDN(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog__GIENGNEGHPJ
              ((Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_o *)__this,StringLiteral_1/*""*/,
               StringLiteral_9679/*"OK"*/,StringLiteral_3640/*"CANCEL"*/,1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HOHPCNNNAHG(BPBGAAHBFKH IHBNELGLLEB)  [RVA 0x32BB9D4]
// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyDialog$$HOHPCNNNAHG @ RVA 0x32BB9D4

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyDialog__HOHPCNNNAHG
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyDialog_o *__this,BPBGAAHBFKH_o *IHBNELGLLEB,
               MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *__this_00;
  BDMABHJEEGD_o *JOBNGBCPEGO;
  MethodInfo *in_x3;
  int index;
  
                    /* try { // try from 033bb9e8 to 034bb9ef has its CatchHandler @ 033bbae4 */
  if ((DAT_04567496 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 033bba04 to 034bba0b has its CatchHandler @ 033bbabc */
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_get_Item__);
                    /* try { // try from 033bba1c to 034bba23 has its CatchHandler @ 033bbad8 */
    FUN_01bab630(&StringLiteral_10835/*"RaidDailyDialog::createQuestCells: failed, quests is NULL"*/);
    DAT_04567496 = 1;
  }
  if (IHBNELGLLEB != (BPBGAAHBFKH_o *)0x0) {
    __this_00 = (IHBNELGLLEB->fields).IGPJEDLPAGI;
    if (__this_00 != (Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *)0x0) {
                    /* try { // try from 033bba38 to 034bba3f has its CatchHandler @ 033bbad0 */
      iVar1 = (__this_00->fields).count;
                    /* try { // try from 033bba40 to 034bba8b has its CatchHandler @ 033bb8bc */
      if (iVar1 < 1) {
                    /* try { // try from 033bba8c to 034bba8f has its CatchHandler @ 033bbaec */
                    /* try { // try from 033bba90 to 034bba93 has its CatchHandler @ 033bbae0 */
        return;
      }
      index = 0;
      do {
        JOBNGBCPEGO = (BDMABHJEEGD_o *)
                      Google_Protobuf_Collections_RepeatedField<object>__get_Item
                                ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,index,
                                 Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_get_Item__
                                );
        Nekki_SF2_GUI_Dialogs_Raids_RaidDailyDialog__INMMEJPGBPO(__this,index,JOBNGBCPEGO,in_x3);
        if (iVar1 + -1 == index) {
          return;
        }
        __this_00 = (IHBNELGLLEB->fields).IGPJEDLPAGI;
        index = index + 1;
      } while (__this_00 != (Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 033bba94 to 034bba97 has its CatchHandler @ 033bbadc */
                    /* try { // try from 033bba98 to 034bba9b has its CatchHandler @ 033bbad4 */
                    /* try { // try from 033bba9c to 034bba9f has its CatchHandler @ 033bbacc */
                    /* try { // try from 033bbaa0 to 034bbaa3 has its CatchHandler @ 033bbac8 */
                    /* try { // try from 033bbaa4 to 034bbaa7 has its CatchHandler @ 033bbac4 */
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033bbaa8 to 034bbaab has its CatchHandler @ 033bbab8 */
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 033bbaac to 034bbaaf has its CatchHandler @ 033bbab4 */
                    /* try { // try from 033bbab0 to 034bbb07 has its CatchHandler @ 033bb8bc */
                    /* catch() { ... } // from try @ 033bbaac with catch @ 033bbab4 */
                    /* catch() { ... } // from try @ 033bbaa8 with catch @ 033bbab8 */
                    /* catch() { ... } // from try @ 033bba04 with catch @ 033bbabc */
                    /* catch() { ... } // from try @ 033bb9d0 with catch @ 033bbac0 */
                    /* catch() { ... } // from try @ 033bbaa4 with catch @ 033bbac4 */
                    /* catch() { ... } // from try @ 033bbaa0 with catch @ 033bbac8 */
  UnityEngine_Debug__LogError(StringLiteral_10835/*"RaidDailyDialog::createQuestCells: failed, quests is NULL"*/,(MethodInfo *)0x0);
  return;
}


// ===== protected override void OnDestroy()  [RVA 0x32BBC40]
// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyDialog$$OnDestroy @ RVA 0x32BBC40

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyDialog__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyDialog_o *__this,MethodInfo *method)

{
  GALHNMPIEHA_o *__this_00;
  System_Action_o *CJNHFNHJHPE;
  
  if ((DAT_04567497 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidDailyDialog_CJPKPFBKMNP__);
    DAT_04567497 = 1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog__OnDestroy
            ((Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_o *)__this,(MethodInfo *)0x0);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__CCIPAEHGPFC((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (__this_00 != (GALHNMPIEHA_o *)0x0) {
    GALHNMPIEHA__BIDBPFJNEJI(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x32BBD0C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyDialog$$.ctor @ RVA 0x32BBD0C

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyDialog___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyDialog_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_RaidDailyTaskCell__o *__this_00;
  System_Collections_Generic_List_RaidDailyTaskCell__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567498 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidDailyTaskCell>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<RaidDailyTaskCell>_TypeInfo);
    DAT_04567498 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_RaidDailyTaskCell__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<RaidDailyTaskCell>_TypeInfo,method)
  ;
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<RaidDailyTaskCell>__ctor__);
  ppSVar1 = &(__this->fields).CGNMDFAAHDA;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}

