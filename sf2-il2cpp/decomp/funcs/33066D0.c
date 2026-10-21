// Nekki.SF2.Core.Quests.QuestsManager$$PHBFKBEHGIK @ RVA 0x33066D0

void Nekki_SF2_Core_Quests_QuestsManager__PHBFKBEHGIK
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,FPPKHNNABAD_o *NDBPOFMECGL,
               MethodInfo *method)

{
  int32_t index;
  Il2CppObject *pIVar1;
  System_Action_FPPKHNNABAD__o *CJNHFNHJHPE;
  System_Predicate_T__o *match;
  PKHMIGFEJCL_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  System_Action_o *pSVar2;
  Il2CppClass *__this_01;
  System_Collections_Generic_List_FPPKHNNABAD__o *pSVar3;
  
  if ((DAT_0456775a & 1) == 0) {
    FUN_01bab630(&System_Action<FPPKHNNABAD>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_FindLastIndex__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Count__);
    FUN_01bab630(&Method_Nekki_SF2_Core_Quests_QuestsManager_PPPHDEGLIIA_NMCABINAHMK__);
    FUN_01bab630(&Nekki_SF2_Core_Quests_QuestsManager_PPPHDEGLIIA_TypeInfo);
    FUN_01bab630(&System_Predicate<FPPKHNNABAD>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_Core_Quests_QuestsManager_PHBFKBEHGIK__);
    DAT_0456775a = 1;
  }
  pIVar1 = (Il2CppObject *)
           thunk_FUN_01bda818(Nekki_SF2_Core_Quests_QuestsManager_PPPHDEGLIIA_TypeInfo);
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  if (pIVar1 != (Il2CppObject *)0x0) {
    pIVar1 = pIVar1 + 1;
    pIVar1->klass = (Il2CppClass *)NDBPOFMECGL;
    thunk_FUN_01c20e04(pIVar1,NDBPOFMECGL);
    __this_01 = pIVar1->klass;
    if (__this_01 == (Il2CppClass *)0x0) {
      return;
    }
    CJNHFNHJHPE = (System_Action_FPPKHNNABAD__o *)
                  thunk_FUN_01bda818(System_Action<FPPKHNNABAD>_TypeInfo);
    System_Action<object>___ctor();
    FPPKHNNABAD__HAFNHPBMIBI((FPPKHNNABAD_o *)__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar3 = (__this->fields).GOAJEJNPDFA;
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<FPPKHNNABAD>_TypeInfo);
    System_Predicate<object>___ctor();
    if (pSVar3 != (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
      index = System_Collections_Generic_List<object>__FindLastIndex
                        ((System_Collections_Generic_List_object__o *)pSVar3,match,
                         Method_System_Collections_Generic_List<FPPKHNNABAD>_FindLastIndex__);
      method_00 = extraout_x1;
      if (-1 < index) {
        pSVar3 = (__this->fields).GOAJEJNPDFA;
        if (pSVar3 == (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) goto LAB_034068b8;
        System_Collections_Generic_List<object>__RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar3,index,
                   Method_System_Collections_Generic_List<FPPKHNNABAD>_RemoveAt__);
        method_00 = extraout_x1_00;
      }
      if ((pIVar1->klass != (Il2CppClass *)0x0) &&
         (pSVar3 = (__this->fields).GOAJEJNPDFA,
         pSVar3 != (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0)) {
        if ((pSVar3->fields)._size < 1) {
          Nekki_SF2_Core_Quests_QuestsManager__ClearActions(__this,method_00);
          __this_00 = (__this->fields).QuestParameters;
          if (__this_00 == (PKHMIGFEJCL_o *)0x0) goto LAB_034068b8;
          PKHMIGFEJCL__FCOONLKJDAK(__this_00,(MethodInfo *)0x0);
          pSVar2 = (__this->fields).IPDPGDFFNFI;
          if (pSVar2 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034068b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(pSVar2->fields).super.super.invoke_impl)
                      ((pSVar2->fields).super.super.method_code,(pSVar2->fields).super.super.method)
            ;
            return;
          }
        }
        else {
          (__this->fields).HFOJKJFILDB = true;
        }
        return;
      }
    }
  }
LAB_034068b8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

