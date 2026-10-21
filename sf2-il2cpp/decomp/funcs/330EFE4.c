// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$OAIJOOFCOEK @ RVA 0x330EFE4

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__OAIJOOFCOEK
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *pSVar1;
  Il2CppObject *pIVar2;
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *__this_00;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar3;
  char cVar4;
  int index;
  System_String_o *pSVar5;
  Il2CppClass *BANLPNAAHPH;
  UnityEngine_GameObject_o *pUVar6;
  int iVar7;
  
  if ((DAT_045677a2 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<BuyConsContainerCell>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_HJLEKMDIDPO>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_HJLEKMDIDPO>_get_Item__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_10824);
    FUN_01bab630(&StringLiteral_18003);
    DAT_045677a2 = 1;
  }
  cVar4 = (__this->fields).OCMNMHFIJCJ;
  if ((bool_conflict)cVar4 == false) {
    pSVar1 = (__this->fields).FHPLGHNOJGE;
    if (pSVar1 == (System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *)0x0)
    goto LAB_0340f1fc;
    iVar7 = (pSVar1->fields)._size;
    if (iVar7 < 1) {
      return;
    }
  }
  else {
    iVar7 = 1;
  }
  index = 0;
  do {
    if (cVar4 == '\0') {
      pSVar1 = (__this->fields).FHPLGHNOJGE;
      if ((pSVar1 == (System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *)0x0) ||
         (pIVar2 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar1,index,
                              Method_System_Collections_Generic_List<JMDPBFOCHHP_HJLEKMDIDPO>_get_Item__
                             ), pIVar2 == (Il2CppObject *)0x0)) goto LAB_0340f1fc;
      pSVar5 = pIVar2[1].monitor;
      pIVar2 = pIVar2 + 1;
    }
    else {
      pSVar5 = System_Int32__ToString((int)__this + 0x98,(MethodInfo *)0x0);
      pSVar5 = System_String__Concat(StringLiteral_10824,pSVar5,(MethodInfo *)0x0);
      pIVar2 = (Il2CppObject *)&StringLiteral_18003;
    }
    BANLPNAAHPH = pIVar2->klass;
    pUVar6 = (__this->fields)._consumableCellPrefab;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pUVar6 = (UnityEngine_GameObject_o *)
             UnityEngine_Object__Instantiate<object>
                       ((Il2CppObject *)pUVar6,Method_UnityEngine_Object_Instantiate<GameObject>__);
    if ((pUVar6 == (UnityEngine_GameObject_o *)0x0) ||
       (__this_00 = (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *)
                    UnityEngine_GameObject__GetComponent<object>
                              (pUVar6,
                               Method_UnityEngine_GameObject_GetComponent<BuyConsContainerCell>__),
       __this_00 == (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *)0x0)) goto LAB_0340f1fc;
    Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell__Init
              (__this_00,(System_String_o *)BANLPNAAHPH,pSVar5,__this,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._scroll;
    if (pNVar3 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) goto LAB_0340f1fc;
    Nekki_SF2_GUI_SimpleScroll__AddItem
              (pNVar3,(Nekki_SF2_GUI_BaseScrollItem_o *)__this_00,true,(MethodInfo *)0x0);
    cVar4 = (__this->fields).OCMNMHFIJCJ;
    index = index + 1;
  } while (iVar7 != index);
  if ((bool_conflict)cVar4 == false) {
    return;
  }
  pNVar3 = (__this->fields)._scroll;
  if (pNVar3 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__ScrollToMedium(pNVar3,0.0,8,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._scroll;
    if (pNVar3 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pNVar3,false,(MethodInfo *)0x0);
      return;
    }
  }
LAB_0340f1fc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

