// NCNJEIBHGBH$$GJCCEHJONPA @ RVA 0x32F355C

void NCNJEIBHGBH__GJCCEHJONPA(NCNJEIBHGBH_o *__this,int32_t OGPGLGPMEPD,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *key;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar3;
  System_String_o **ppSVar4;
  System_Collections_Generic_Dictionary_object__int__o *pSVar5;
  System_Action_string__o *pSVar6;
  PKHMIGFEJCL_o *pPVar7;
  
  if ((DAT_0456767a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    FUN_01bab630(&StringLiteral_1);
    DAT_0456767a = 1;
  }
  __this_00 = (__this->fields).PAFEHLCLKEC;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    key = StringLiteral_1;
    if (OGPGLGPMEPD < (__this_00->fields)._size) {
      key = (System_String_o *)
            System_Collections_Generic_List<object>__get_Item
                      ((System_Collections_Generic_List_object__o *)__this_00,OGPGLGPMEPD,
                       Method_System_Collections_Generic_List<string>_get_Item__);
    }
    pNVar3 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if ((pNVar3 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
       (pPVar7 = (pNVar3->fields).QuestParameters, pPVar7 != (PKHMIGFEJCL_o *)0x0)) {
      ppSVar4 = &(pPVar7->fields).MCEKGACJNMK;
      *ppSVar4 = key;
      thunk_FUN_01c20e04(ppSVar4,key);
      pSVar5 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).CJKAPEOHOLL;
      if (pSVar5 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
        bVar1 = System_Collections_Generic_Dictionary<object,_int>__ContainsKey
                          (pSVar5,(Il2CppObject *)key,
                           Method_System_Collections_Generic_Dictionary<string,_int>_ContainsKey__);
        if (bVar1) {
          pSVar5 = (System_Collections_Generic_Dictionary_object__int__o *)
                   (__this->fields).CJKAPEOHOLL;
          if (pSVar5 == (System_Collections_Generic_Dictionary_object__int__o *)0x0)
          goto LAB_033f36a4;
          iVar2 = System_Collections_Generic_Dictionary<object,_int>__get_Item
                            (pSVar5,(Il2CppObject *)key,
                             Method_System_Collections_Generic_Dictionary<string,_int>_get_Item__);
          (pPVar7->fields).FGOGAJBOILK = iVar2;
        }
        pNVar3 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
        if (pNVar3 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
          Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar3,0x1a,(MethodInfo *)0x0);
          pSVar6 = (__this->fields).BKGHBFHIPHK;
          if (pSVar6 == (System_Action_string__o *)0x0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x033f3694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(pSVar6->fields).super.super.invoke_impl)
                    ((pSVar6->fields).super.super.method_code,key,
                     (pSVar6->fields).super.super.method);
          return;
        }
      }
    }
  }
LAB_033f36a4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

