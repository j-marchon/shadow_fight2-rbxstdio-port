// Nekki.SF2.Core.Quests.QuestsManager$$.ctor @ RVA 0x3307708

void Nekki_SF2_Core_Quests_QuestsManager___ctor
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *pSVar1;
  System_Collections_Generic_List_string__o **ppSVar2;
  System_Collections_Generic_List_MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport__o *__this_00;
  System_Collections_Generic_List_MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport__o **ppSVar3;
  PKHMIGFEJCL_o *pPVar4;
  PKHMIGFEJCL_o **ppPVar5;
  System_Collections_Generic_List_FPPKHNNABAD__o *pSVar6;
  System_Collections_Generic_List_FPPKHNNABAD__o **ppSVar7;
  System_Collections_Generic_Dictionary_KFKFNDEJLKK_PCJFAKMBHCE__List_FPPKHNNABAD___o *__this_01;
  System_Collections_Generic_Dictionary_KFKFNDEJLKK_PCJFAKMBHCE__List_FPPKHNNABAD___o **ppSVar8;
  CNOGDCKPLMJ_o *__this_02;
  CNOGDCKPLMJ_o **ppCVar9;
  
  if ((DAT_0456776b & 1) == 0) {
    FUN_01bab630(&CNOGDCKPLMJ_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<KFKFNDEJLKK_PCJFAKMBHCE,_List<FPPKHNNABAD>>__ctor__
                );
    FUN_01bab630(&
                 System_Collections_Generic_Dictionary<KFKFNDEJLKK_PCJFAKMBHCE,_List<FPPKHNNABAD>>_TypeInfo
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>__ctor__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport>__ctor__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<FPPKHNNABAD>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&PKHMIGFEJCL_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_0456776b = 1;
  }
  (__this->fields).CurrentQuestName = StringLiteral_1;
  thunk_FUN_01c20e04();
  (__this->fields).CurrentActionName = StringLiteral_1;
  thunk_FUN_01c20e04();
  (__this->fields)._questsEndedMaxCount = 100;
  pSVar1 = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar2 = &(__this->fields)._runningQuestStagesInfo;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar2 = &(__this->fields)._questsEnded;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar2 = &(__this->fields)._questsInQueue;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  __this_00 = (System_Collections_Generic_List_MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport__o *)
              thunk_FUN_01bda818(
                                System_Collections_Generic_List<MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport>_TypeInfo
                                );
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport>__ctor__);
  ppSVar3 = &(__this->fields)._localVariablesInfo;
  *ppSVar3 = __this_00;
  thunk_FUN_01c20e04(ppSVar3,__this_00);
  pPVar4 = (PKHMIGFEJCL_o *)thunk_FUN_01bda818(PKHMIGFEJCL_TypeInfo);
  PKHMIGFEJCL___ctor(pPVar4,(MethodInfo *)0x0);
  ppPVar5 = &(__this->fields).QuestParametersBeforeLottery;
  *ppPVar5 = pPVar4;
  thunk_FUN_01c20e04(ppPVar5,pPVar4);
  pPVar4 = (PKHMIGFEJCL_o *)thunk_FUN_01bda818(PKHMIGFEJCL_TypeInfo);
  PKHMIGFEJCL___ctor(pPVar4,(MethodInfo *)0x0);
  ppPVar5 = &(__this->fields).QuestParameters;
  *ppPVar5 = pPVar4;
  thunk_FUN_01c20e04(ppPVar5,pPVar4);
  pSVar6 = (System_Collections_Generic_List_FPPKHNNABAD__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<FPPKHNNABAD>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar6,
             Method_System_Collections_Generic_List<FPPKHNNABAD>__ctor__);
  ppSVar7 = &(__this->fields).QuestsAll;
  *ppSVar7 = pSVar6;
  thunk_FUN_01c20e04(ppSVar7,pSVar6);
  __this_01 = (System_Collections_Generic_Dictionary_KFKFNDEJLKK_PCJFAKMBHCE__List_FPPKHNNABAD___o *
              )thunk_FUN_01bda818(
                                 System_Collections_Generic_Dictionary<KFKFNDEJLKK_PCJFAKMBHCE,_List<FPPKHNNABAD>>_TypeInfo
                                 );
  System_Collections_Generic_Dictionary<Int32Enum,_object>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
             Method_System_Collections_Generic_Dictionary<KFKFNDEJLKK_PCJFAKMBHCE,_List<FPPKHNNABAD>>__ctor__
            );
  ppSVar8 = &(__this->fields).LEJLGCMCPLG;
  *ppSVar8 = __this_01;
  thunk_FUN_01c20e04(ppSVar8,__this_01);
  pSVar6 = (System_Collections_Generic_List_FPPKHNNABAD__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<FPPKHNNABAD>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar6,
             Method_System_Collections_Generic_List<FPPKHNNABAD>__ctor__);
  ppSVar7 = &(__this->fields).GOAJEJNPDFA;
  *ppSVar7 = pSVar6;
  thunk_FUN_01c20e04(ppSVar7,pSVar6);
  __this_02 = (CNOGDCKPLMJ_o *)thunk_FUN_01bda818(CNOGDCKPLMJ_TypeInfo);
  CNOGDCKPLMJ___ctor(__this_02,(MethodInfo *)0x0);
  ppCVar9 = &(__this->fields).LJMFDFGELCO;
  *ppCVar9 = __this_02;
  thunk_FUN_01c20e04(ppCVar9,__this_02);
  pSVar6 = (System_Collections_Generic_List_FPPKHNNABAD__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<FPPKHNNABAD>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar6,
             Method_System_Collections_Generic_List<FPPKHNNABAD>__ctor__);
  ppSVar7 = &(__this->fields).GAMJEFPADCD;
  *ppSVar7 = pSVar6;
  thunk_FUN_01c20e04(ppSVar7,pSVar6);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

