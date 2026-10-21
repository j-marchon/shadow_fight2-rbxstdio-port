// Nekki.SF2.GUI.Dialogs.BaseRewardCell$$LKLAKFGEDPP @ RVA 0x35660EC

void Nekki_SF2_GUI_Dialogs_BaseRewardCell__LKLAKFGEDPP
               (Nekki_SF2_GUI_Dialogs_BaseRewardCell_o *__this,MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  IGPDCHBJAPD_JMPAGIGEFME_o *__this_00;
  System_Collections_Generic_List_BNKBGIIJNLF__o *source;
  System_Func_long__BNKBGIIJNLF__long__o **ppSVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_Transform_o *__this_01;
  System_Exception_o *__this_02;
  undefined8 uVar6;
  MethodInfo *extraout_x1;
  BCOICIIDFPD_o *pBVar7;
  MCCHIAKPFEL_o *COPNBALDNLF;
  int64_t CJNHFNHJHPE;
  System_Func_long__BNKBGIIJNLF__long__o *func;
  int64_t local_38;
  
  if ((DAT_04568bf9 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Aggregate<BNKBGIIJNLF,_long>__);
    FUN_01bab630(&System_Func<long,_BNKBGIIJNLF,_long>_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_BaseRewardCell_<>c_KKCINHOFHPH__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_BaseRewardCell_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_22352);
    FUN_01bab630(&StringLiteral_9080);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568bf9 = 1;
    method = extraout_x1;
  }
  pBVar7 = (__this->fields).RewardData;
  if (pBVar7 != (BCOICIIDFPD_o *)0x0) {
    if ((pBVar7->fields)._FOBKGCDONOI_k__BackingField == 0) {
      thunk_FUN_01bb9178(&System_Exception_TypeInfo,method);
      __this_02 = (System_Exception_o *)thunk_FUN_01bda818();
      pSVar2 = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_5945);
      System_Exception___ctor(__this_02,pSVar2,(MethodInfo *)0x0);
      uVar6 = thunk_FUN_01bb9178(&Method_Nekki_SF2_GUI_Dialogs_BaseRewardCell_LKLAKFGEDPP__);
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(__this_02,uVar6);
    }
    pSVar2 = System_String__Format
                       (StringLiteral_22352,StringLiteral_9080,
                        (Il2CppObject *)(pBVar7->fields)._IANGGJCONIH_k__BackingField,
                        (MethodInfo *)0x0);
    (*(__this->klass->vtable)._5_ENEJJGDDBGI.methodPtr)
              (0,__this,StringLiteral_1,pSVar2,0,(__this->klass->vtable)._5_ENEJJGDDBGI.method);
    local_38 = 0;
    pBVar7 = (__this->fields).RewardData;
    if (pBVar7 != (BCOICIIDFPD_o *)0x0) {
      COPNBALDNLF = (pBVar7->fields)._BLIMDANKDIH_k__BackingField;
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = MGNPHCAAEIO__FGELLDGCHFD(COPNBALDNLF,(MethodInfo *)0x0);
      pBVar7 = (__this->fields).RewardData;
      if (pBVar7 != (BCOICIIDFPD_o *)0x0) {
        iVar1 = (pBVar7->fields)._FOBKGCDONOI_k__BackingField;
        if (iVar1 == 2) {
          if (__this_00 == (IGPDCHBJAPD_JMPAGIGEFME_o *)0x0) goto LAB_0366638c;
          source = IGPDCHBJAPD_JMPAGIGEFME__LLIHIDKHAPN(__this_00,false,(MethodInfo *)0x0);
          if ((Nekki_SF2_GUI_Dialogs_BaseRewardCell_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_BaseRewardCell_<>c_TypeInfo);
          }
          func = Nekki_SF2_GUI_Dialogs_BaseRewardCell_<>c_TypeInfo->static_fields->__9__8_0;
          if (func == (System_Func_long__BNKBGIIJNLF__long__o *)0x0) {
            if ((Nekki_SF2_GUI_Dialogs_BaseRewardCell_<>c_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_BaseRewardCell_<>c_TypeInfo);
            }
            func = (System_Func_long__BNKBGIIJNLF__long__o *)
                   thunk_FUN_01bda818(System_Func<long,_BNKBGIIJNLF,_long>_TypeInfo);
            System_Func<long,_object,_long>___ctor();
            ppSVar3 = &Nekki_SF2_GUI_Dialogs_BaseRewardCell_<>c_TypeInfo->static_fields->__9__8_0;
            *ppSVar3 = func;
            thunk_FUN_01c20e04(ppSVar3,func);
          }
          local_38 = System_Linq_Enumerable__Aggregate<object,_long>
                               ((System_Collections_Generic_IEnumerable_TSource__o *)source,0,
                                (System_Func_TAccumulate__TSource__TAccumulate__o *)func,
                                Method_System_Linq_Enumerable_Aggregate<BNKBGIIJNLF,_long>__);
        }
        else if (iVar1 == 1) {
          if (__this_00 == (IGPDCHBJAPD_JMPAGIGEFME_o *)0x0) goto LAB_0366638c;
          CJNHFNHJHPE = (__this_00->fields).DCDLMCEEOCC;
          if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
          }
          local_38 = MGNPHCAAEIO__ADEEECDDBPN(CJNHFNHJHPE,0,(MethodInfo *)0x0);
        }
        pNVar4 = (__this->fields).SlotCount;
        if ((pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
           (pUVar5 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
           pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar5,true,(MethodInfo *)0x0);
          pNVar4 = (__this->fields).SlotCount;
          pSVar2 = System_Int64__ToString((int64_t)&local_38,(MethodInfo *)0x0);
          if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            (*(pNVar4->klass->vtable)._75_set_text.methodPtr)
                      (pNVar4,pSVar2,(pNVar4->klass->vtable)._75_set_text.method);
            __this_01 = (__this->fields).PerkContainer;
            if ((__this_01 != (UnityEngine_Transform_o *)0x0) &&
               (pUVar5 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
               pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_0366638c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

