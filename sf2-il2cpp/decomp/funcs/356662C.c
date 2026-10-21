// Nekki.SF2.GUI.Dialogs.BaseRewardCell$$RefreshCellView @ RVA 0x356662C

void Nekki_SF2_GUI_Dialogs_BaseRewardCell__RefreshCellView
               (Nekki_SF2_GUI_Dialogs_BaseRewardCell_o *__this,MethodInfo *method)

{
  int32_t JLAFGLDIFOC;
  System_Object_array *args;
  long lVar1;
  Il2CppObject *pIVar2;
  ACHLOMELAJE_o *__this_00;
  JHBHHHKEFOO_o *pJVar3;
  System_Collections_Generic_List_OCOEAJMJEOP__o *__this_01;
  undefined8 uVar4;
  MethodInfo *method_00;
  BCOICIIDFPD_o *pBVar5;
  MCCHIAKPFEL_o *__this_02;
  System_String_o *pSVar6;
  int32_t local_2c;
  undefined1 local_28 [4];
  int32_t local_24;
  
  if ((DAT_04568bfb & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&BCOICIIDFPD_GIGJJDKLIJP_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OCOEAJMJEOP>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OCOEAJMJEOP>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_15429);
    DAT_04568bfb = 1;
  }
  pBVar5 = (__this->fields).RewardData;
  if (pBVar5 != (BCOICIIDFPD_o *)0x0) {
    if ((pBVar5->fields)._BLIMDANKDIH_k__BackingField == (MCCHIAKPFEL_o *)0x0) {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,4);
      pBVar5 = (__this->fields).RewardData;
      if ((pBVar5 == (BCOICIIDFPD_o *)0x0) || (args == (System_Object_array *)0x0))
      goto LAB_03666958;
      pSVar6 = (pBVar5->fields)._COIPKAKHDFP_k__BackingField;
      if ((pSVar6 != (System_String_o *)0x0) &&
         (lVar1 = thunk_FUN_01bda71c(pSVar6,(((args->obj).klass)->_1).element_class), lVar1 == 0)) {
LAB_03666960:
        uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar4,0);
      }
      if ((int)args->max_length == 0) {
LAB_0366695c:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      args->m_Items[0] = (Il2CppObject *)pSVar6;
      thunk_FUN_01c20e04(args->m_Items,pSVar6);
      pBVar5 = (__this->fields).RewardData;
      if (pBVar5 == (BCOICIIDFPD_o *)0x0) goto LAB_03666958;
      local_24 = (pBVar5->fields)._HFPMLGFDOKC_k__BackingField;
      pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_24);
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (lVar1 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar1 == 0))
      goto LAB_03666960;
      if ((uint)args->max_length < 2) goto LAB_0366695c;
      args->m_Items[1] = pIVar2;
      thunk_FUN_01c20e04(args->m_Items + 1,pIVar2);
      pBVar5 = (__this->fields).RewardData;
      if (pBVar5 == (BCOICIIDFPD_o *)0x0) goto LAB_03666958;
      local_28[0] = (pBVar5->fields)._GDKBFEGNHNP_k__BackingField;
      pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(bool_TypeInfo,local_28);
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (lVar1 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar1 == 0))
      goto LAB_03666960;
      if ((uint)args->max_length < 3) goto LAB_0366695c;
      args->m_Items[2] = pIVar2;
      thunk_FUN_01c20e04(args->m_Items + 2,pIVar2);
      pBVar5 = (__this->fields).RewardData;
      if (pBVar5 == (BCOICIIDFPD_o *)0x0) goto LAB_03666958;
      local_2c = (pBVar5->fields)._FOBKGCDONOI_k__BackingField;
      pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(BCOICIIDFPD_GIGJJDKLIJP_TypeInfo,&local_2c);
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (lVar1 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar1 == 0))
      goto LAB_03666960;
      if ((uint)args->max_length < 4) goto LAB_0366695c;
      args->m_Items[3] = pIVar2;
      thunk_FUN_01c20e04(args->m_Items + 3,pIVar2);
      pSVar6 = System_String__Format(StringLiteral_15429,args,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pBVar5 = (__this->fields).RewardData;
    if ((pBVar5 != (BCOICIIDFPD_o *)0x0) &&
       (__this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField,
       __this_00 != (ACHLOMELAJE_o *)0x0)) {
      __this_02 = (pBVar5->fields)._BLIMDANKDIH_k__BackingField;
      JLAFGLDIFOC = ACHLOMELAJE__EOEAKGGDBFH(__this_00,(MethodInfo *)0x0);
      if ((__this_02 != (MCCHIAKPFEL_o *)0x0) &&
         ((pJVar3 = MCCHIAKPFEL__ALLFNDNBMCO(__this_02,JLAFGLDIFOC,(MethodInfo *)0x0),
          pJVar3 != (JHBHHHKEFOO_o *)0x0 &&
          (__this_01 = (pJVar3->fields).GHAAKPDHIJJ,
          __this_01 != (System_Collections_Generic_List_OCOEAJMJEOP__o *)0x0)))) {
        if ((__this_01->fields)._size < 1) {
          Nekki_SF2_GUI_Dialogs_BaseRewardCell__LKLAKFGEDPP(__this,method_00);
        }
        else {
          pIVar2 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_01,0,
                              Method_System_Collections_Generic_List<OCOEAJMJEOP>_get_Item__);
          (*(__this->klass->vtable)._6_IBPGLHOKFFM.methodPtr)
                    (__this,pIVar2,(__this->klass->vtable)._6_IBPGLHOKFFM.method);
        }
        return;
      }
    }
  }
LAB_03666958:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

