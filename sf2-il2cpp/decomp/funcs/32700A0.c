// Nekki.SF2.GUI.Dialogs.Raids.RaidBuyConsumablesDialog$$BBLNNJBABKO @ RVA 0x32700A0

void Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog__BBLNNJBABKO
               (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *__this,
               System_String_o *HKINKAAMGJD,UnityEngine_Transform_o *JBHMIBBMGLH,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_GameObject_o *pUVar3;
  
  if ((DAT_04567224 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_BuyConsContainer>_Add__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_BuyConsContainer>_ContainsKey__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_BuyConsContainer>_Remove__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<BuyConsContainer>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567224 = 1;
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).FEBICCAKJMD;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar2,(Il2CppObject *)HKINKAAMGJD,
                       Method_System_Collections_Generic_Dictionary<string,_BuyConsContainer>_ContainsKey__
                      );
    if (bVar1) {
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields).FEBICCAKJMD;
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_033701f4;
      System_Collections_Generic_Dictionary<object,_object>__Remove
                (pSVar2,(Il2CppObject *)HKINKAAMGJD,
                 Method_System_Collections_Generic_Dictionary<string,_BuyConsContainer>_Remove__);
    }
    pUVar3 = (__this->fields)._buyConsContainerPrefab;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pUVar3 = (UnityEngine_GameObject_o *)
             UnityEngine_Object__Instantiate<object>
                       ((Il2CppObject *)pUVar3,Method_UnityEngine_Object_Instantiate<GameObject>__);
    if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
       (__this_00 = (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *)
                    UnityEngine_GameObject__GetComponent<object>
                              (pUVar3,Method_UnityEngine_GameObject_GetComponent<BuyConsContainer>__
                              ), __this_00 != (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *)0x0)
       ) {
      Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__Init(__this_00,HKINKAAMGJD,(MethodInfo *)0x0);
      __this_01 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent(__this_01,JBHMIBBMGLH,false,(MethodInfo *)0x0);
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields).FEBICCAKJMD;
        if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary<object,_object>__Add
                    (pSVar2,(Il2CppObject *)HKINKAAMGJD,(Il2CppObject *)__this_00,
                     Method_System_Collections_Generic_Dictionary<string,_BuyConsContainer>_Add__);
          return;
        }
      }
    }
  }
LAB_033701f4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

