// Nekki.SF2.GUI.Fight.ComboModel$$UpdateCombo @ RVA 0x332C80C

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_Fight_ComboModel__UpdateCombo
               (Nekki_SF2_GUI_Fight_ComboModel_o *__this,int32_t CJNHFNHJHPE,int32_t LHLELGFDIAP,
               MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int32_t iVar3;
  System_Predicate_ComboModel_IADNCANFNJH__o **ppSVar4;
  Nekki_SF2_GUI_Fight_ComboModel_o *pNVar5;
  Nekki_SF2_GUI_Fight_ComboModel_o *__this_00;
  MethodInfo *pMVar6;
  Nekki_SF2_GUI_Fight_ComboItem_o *__this_01;
  GOJLGHMMDBO_o *pGVar7;
  System_Collections_Generic_List_ComboModel_IADNCANFNJH__o *__this_02;
  System_Predicate_ComboModel_IADNCANFNJH__o *match;
  
  if ((DAT_045678cf & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>_Find__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&System_Predicate<ComboModel_IADNCANFNJH>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ComboModel_<>c_PEAJCEEDOIA__);
    FUN_01bab630(&Nekki_SF2_GUI_Fight_ComboModel_<>c_TypeInfo);
    DAT_045678cf = 1;
  }
  (__this->fields).ENMLIMOGANA = CJNHFNHJHPE;
  if (0 < CJNHFNHJHPE) {
    (__this->fields).BGCKGKMOJJO = 0;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  iVar3 = MGNPHCAAEIO__BHIHCKDOJKB((MethodInfo *)0x0);
  if (CJNHFNHJHPE < iVar3) {
    return;
  }
  __this_02 = (__this->fields).EGHLGEIJLAM;
  if ((Nekki_SF2_GUI_Fight_ComboModel_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  match = Nekki_SF2_GUI_Fight_ComboModel_<>c_TypeInfo->static_fields->__9__38_0;
  if (match == (System_Predicate_ComboModel_IADNCANFNJH__o *)0x0) {
    if ((Nekki_SF2_GUI_Fight_ComboModel_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    match = (System_Predicate_ComboModel_IADNCANFNJH__o *)
            thunk_FUN_01bda818(System_Predicate<ComboModel_IADNCANFNJH>_TypeInfo);
    method = (MethodInfo *)0x0;
    System_Predicate<object>___ctor();
    ppSVar4 = &Nekki_SF2_GUI_Fight_ComboModel_<>c_TypeInfo->static_fields->__9__38_0;
    *ppSVar4 = match;
    thunk_FUN_01c20e04(ppSVar4,match);
  }
  if (__this_02 != (System_Collections_Generic_List_ComboModel_IADNCANFNJH__o *)0x0) {
    pMVar6 = Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>_Find__;
    pNVar5 = (Nekki_SF2_GUI_Fight_ComboModel_o *)
             System_Collections_Generic_List<object>__Find
                       ((System_Collections_Generic_List_object__o *)__this_02,
                        (System_Predicate_T__o *)match,
                        (MethodInfo_26E5414 *)
                        Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>_Find__);
    __this_00 = pNVar5;
    if (pNVar5 == (Nekki_SF2_GUI_Fight_ComboModel_o *)0x0) {
      __this_00 = (Nekki_SF2_GUI_Fight_ComboModel_o *)
                  Nekki_SF2_GUI_Fight_ComboModel__CreateComboStrike
                            (__this,(__this->fields).ENMLIMOGANA,pMVar6);
    }
    if (__this_00 != (Nekki_SF2_GUI_Fight_ComboModel_o *)0x0) {
      iVar3 = Nekki_SF2_GUI_Fight_ComboModel__JMMHIPLMPMG
                        (__this_00,*(int32_t *)&(__this_00->fields).super.EKFFCOAOHBD,LHLELGFDIAP,
                         method);
      __this_01 = (Nekki_SF2_GUI_Fight_ComboItem_o *)
                  (__this_00->fields).super.super.super.super.super.m_CachedPtr;
      *(int32_t *)&(__this_00->fields).super.super.m_CancellationTokenSource = iVar3;
      if (__this_01 != (Nekki_SF2_GUI_Fight_ComboItem_o *)0x0) {
        pMVar6 = (MethodInfo *)0x0;
        Nekki_SF2_GUI_Fight_ComboItem__UpdateCount
                  (__this_01,(__this->fields).ENMLIMOGANA,(MethodInfo *)0x0);
        pGVar7 = (__this->fields).AMKECFKEGJH;
        if (pGVar7 != (GOJLGHMMDBO_o *)0x0) {
          iVar1 = (pGVar7->fields).OODAOEGNBGP;
          iVar2 = (__this->fields).ENMLIMOGANA;
          if (iVar1 <= iVar2) {
            iVar1 = iVar2;
          }
          (pGVar7->fields).OODAOEGNBGP = iVar1;
          Nekki_SF2_GUI_Fight_ComboModel__ELAEKEBBFCI
                    (__this,(uint)(pNVar5 != (Nekki_SF2_GUI_Fight_ComboModel_o *)0x0),pMVar6);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

