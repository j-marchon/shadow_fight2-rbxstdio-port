// Nekki.SF2.GUI.Dialogs.Raids.SeasFinMessageContent$$Init @ RVA 0x34CE2EC

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinMessageContent__Init
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinMessageContent_o *__this,
               KGBIBHEFBHA_o *HEHMPFLAEGE,MethodInfo *method)

{
  undefined8 *puVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  int32_t iVar4;
  EEGDOGKBLNG_o *__this_00;
  JMDPBFOCHHP_o *pJVar5;
  System_Collections_Generic_List_JMDPBFOCHHP_CMLEEJPGHNC__o *__this_01;
  PLIIGOCLJDL_o *pPVar6;
  System_Action_JCFJFJCKLKG__o *pSVar7;
  MethodInfo *method_00;
  BHEDGAKGKPO_StaticFields *pBVar8;
  JMDPBFOCHHP_AEJBILHMFDB_o *pJVar9;
  System_String_o *CJNHFNHJHPE;
  Nekki_SF2_GUI_LabelAlias_o *pNVar10;
  int32_t iVar11;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04568696 & 1) == 0) {
    FUN_01bab630(&System_Action<JCFJFJCKLKG>_TypeInfo);
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_CMLEEJPGHNC>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_CMLEEJPGHNC>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_CMLEEJPGHNC>_get_Current__
                );
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_CMLEEJPGHNC>_GetEnumerator__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_SeasFinMessageContent_KLOCOMEOKIO__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_SeasFinMessageContent_LJLEHMBBENH__);
    FUN_01bab630(&StringLiteral_17822);
    FUN_01bab630(&StringLiteral_16970);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_3640);
    FUN_01bab630(&StringLiteral_11757);
    FUN_01bab630(&StringLiteral_11814);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568696 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *)__this,true,1,StringLiteral_9679,
             false,1,StringLiteral_3640,(MethodInfo *)0x0);
  pNVar10 = (__this->fields)._loadMessage;
  if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (pNVar10 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    pBVar8 = BHEDGAKGKPO_TypeInfo->static_fields;
    (*(pNVar10->klass->vtable)._23_set_color.methodPtr)
              ((ulong)(uint)(pBVar8->FHIAKPJBBCB).fields.r,(pBVar8->FHIAKPJBBCB).fields.g,
               (pBVar8->FHIAKPJBBCB).fields.b,(pBVar8->FHIAKPJBBCB).fields.a,pNVar10,
               (pNVar10->klass->vtable)._23_set_color.method);
    if (HEHMPFLAEGE == (KGBIBHEFBHA_o *)0x0) {
      iVar11 = 0;
    }
    else {
      iVar11 = (HEHMPFLAEGE->fields).NLLKMEMKBAF;
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
      iVar4 = EEGDOGKBLNG__IGIHHCEONEM(__this_00,(MethodInfo *)0x0);
      pJVar5 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      if (((pJVar5 != (JMDPBFOCHHP_o *)0x0) &&
          (pJVar9 = (pJVar5->fields)._JMEOCLFDHMM_k__BackingField,
          pJVar9 != (JMDPBFOCHHP_AEJBILHMFDB_o *)0x0)) &&
         (__this_01 = (pJVar9->fields).NPPJFJBJLLG,
         __this_01 != (System_Collections_Generic_List_JMDPBFOCHHP_CMLEEJPGHNC__o *)0x0)) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_78,(System_Collections_Generic_List_object__o *)__this_01,
                   Method_System_Collections_Generic_List<JMDPBFOCHHP_CMLEEJPGHNC>_GetEnumerator__);
        local_60.fields._index = local_78.fields._index;
        local_60.fields._version = local_78.fields._version;
        local_60.fields._list = local_78.fields._list;
        local_60.fields._current = local_78.fields._current;
        do {
          bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_60,
                             Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_CMLEEJPGHNC>_MoveNext__
                            );
          pIVar2 = local_60.fields._current;
          if (!bVar3) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_CMLEEJPGHNC>_Dispose__
                      );
            (*(__this->klass->vtable)._5_OJGLIBHMOIE.methodPtr)
                      (__this,(__this->klass->vtable)._5_OJGLIBHMOIE.method);
            return;
          }
          if (local_60.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
        } while (*(int *)&local_60.fields._current[1].klass != iVar4);
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_60,
                   Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_CMLEEJPGHNC>_Dispose__
                  );
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pPVar6 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
        pSVar7 = (System_Action_JCFJFJCKLKG__o *)
                 thunk_FUN_01bda818(System_Action<JCFJFJCKLKG>_TypeInfo);
        System_Action<object>___ctor();
        if (pPVar6 != (PLIIGOCLJDL_o *)0x0) {
          PLIIGOCLJDL__JODJMGAGEFG(pPVar6,pSVar7,(MethodInfo *)0x0);
          pPVar6 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
          pSVar7 = (System_Action_JCFJFJCKLKG__o *)
                   thunk_FUN_01bda818(System_Action<JCFJFJCKLKG>_TypeInfo);
          System_Action<object>___ctor();
          if (pPVar6 != (PLIIGOCLJDL_o *)0x0) {
            PLIIGOCLJDL__AJDFKNGFMMF(pPVar6,pSVar7,(MethodInfo *)0x0);
            pNVar10 = (__this->fields)._header;
            puVar1 = &StringLiteral_11757;
            if (*(int *)&pIVar2[2].monitor <= iVar11) {
              puVar1 = &StringLiteral_11814;
            }
            if (pNVar10 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
              CJNHFNHJHPE = (System_String_o *)*puVar1;
              Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar10,StringLiteral_16970,(MethodInfo *)0x0);
              pNVar10 = (__this->fields)._congratulations;
              if (pNVar10 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar10,CJNHFNHJHPE,(MethodInfo *)0x0);
                pNVar10 = (__this->fields)._raidFinalists;
                if (pNVar10 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                  Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar10,StringLiteral_17822,(MethodInfo *)0x0)
                  ;
                  Nekki_SF2_GUI_Dialogs_Raids_SeasFinMessageContent__LIHMJBBBEPC(__this,method_00);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

