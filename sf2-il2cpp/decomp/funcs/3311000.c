// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$UpdateData @ RVA 0x3311000

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__UpdateData
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,bool FMIGJGPPDCD,
               MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int32_t DFIBGGDJPLM;
  LabelButton_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  System_Collections_Generic_List_object__o *__this_02;
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *pNVar3;
  System_String_o *__this_03;
  EEGDOGKBLNG_o *__this_04;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *method_00;
  MethodInfo *pMVar4;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar5;
  int index;
  
  pMVar4 = (MethodInfo *)(ulong)FMIGJGPPDCD;
  if ((DAT_045677b3 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_get_Item__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_18003);
    DAT_045677b3 = 1;
    pMVar4 = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__HGNJELDOFKM(__this,pMVar4);
  __this_00 = (__this->fields)._specialButton;
  if ((__this_00 != (LabelButton_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    pMVar4 = (MethodInfo *)0x0;
    UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
    pNVar5 = (__this->fields)._scroll;
    if (pNVar5 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
      index = 0;
      method_00 = extraout_x1_00;
      do {
        __this_02 = *(System_Collections_Generic_List_object__o **)&(pNVar5->fields)._snapEase;
        if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) break;
        if ((__this_02->fields)._size <= index) {
          pNVar3 = Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__DLGBDBPEIDN(__this,method_00);
          Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__ANIOKLANHAD(__this,pNVar3,pMVar4);
          return;
        }
        pNVar3 = (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *)
                 System_Collections_Generic_List<object>__get_Item
                           (__this_02,index,
                            Method_System_Collections_Generic_List<BaseScrollItem>_get_Item__);
        if (pNVar3 == (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *)0x0) {
LAB_03411114:
          pNVar3 = (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *)0x0;
        }
        else {
          bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_TypeInfo->_2).naturalAligment;
          if ((((Il2CppClass *)pNVar3->klass)->_2).naturalAligment < bVar1) goto LAB_03411114;
          if ((((Il2CppClass *)pNVar3->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_TypeInfo) {
            pNVar3 = (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *)0x0;
          }
        }
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar2 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar2) {
          return;
        }
        if (pNVar3 == (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *)0x0) break;
        bVar2 = PCOEHCPGBBG__BDLEIEHBFAD
                          ((pNVar3->fields)._FDBOKOGOEEG_k__BackingField,(MethodInfo *)0x0);
        if (bVar2) {
LAB_03411180:
          pMVar4 = (MethodInfo *)0x0;
          Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell__SetCountVisible
                    (pNVar3,false,(MethodInfo *)0x0);
          method_00 = extraout_x1_01;
        }
        else {
          __this_03 = (pNVar3->fields)._FDBOKOGOEEG_k__BackingField;
          if (__this_03 == (System_String_o *)0x0) break;
          bVar2 = System_String__Contains(__this_03,StringLiteral_18003,(MethodInfo *)0x0);
          if (bVar2) goto LAB_03411180;
          Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell__SetCountVisible
                    (pNVar3,true,(MethodInfo *)0x0);
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_04 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
          if (__this_04 == (EEGDOGKBLNG_o *)0x0) break;
          DFIBGGDJPLM = EEGDOGKBLNG__OHCGFHJNEGO
                                  (__this_04,(pNVar3->fields)._FDBOKOGOEEG_k__BackingField,
                                   (MethodInfo *)0x0);
          pMVar4 = (MethodInfo *)(ulong)FMIGJGPPDCD;
          Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell__SetCount
                    (pNVar3,DFIBGGDJPLM,FMIGJGPPDCD,(MethodInfo *)0x0);
          method_00 = extraout_x1_02;
        }
        pNVar5 = (__this->fields)._scroll;
        index = index + 1;
      } while (pNVar5 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

