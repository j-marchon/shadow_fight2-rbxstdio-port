// Nekki.SF2.Core.Quests.QuestsManager$$ExistsQuestsWithActOrShowVideoAction @ RVA 0x3307544

bool Nekki_SF2_Core_Quests_QuestsManager__ExistsQuestsWithActOrShowVideoAction
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,MethodInfo *method)

{
  Il2CppType *handle;
  bool bVar1;
  Il2CppObject *__this_00;
  Il2CppClass *pIVar2;
  System_Type_o *pSVar3;
  System_Func_TSource__bool__o *pSVar4;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_FPPKHNNABAD__o *pSVar5;
  
  if ((DAT_0456776a & 1) == 0) {
    FUN_01bab630(&CPJDJFPABGI_var);
    FUN_01bab630(&Method_System_Linq_Enumerable_Any<FPPKHNNABAD>__);
    FUN_01bab630(&System_Func<FPPKHNNABAD,_bool>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_Core_Quests_QuestsManager_IGKFCNKEMFG_INEIJPAINGL__);
    FUN_01bab630(&Method_Nekki_SF2_Core_Quests_QuestsManager_IGKFCNKEMFG_LJOECDLDGKP__);
    FUN_01bab630(&Nekki_SF2_Core_Quests_QuestsManager_IGKFCNKEMFG_TypeInfo);
    FUN_01bab630(&LJFLEGDMCMI_var);
    FUN_01bab630(&System_Type_TypeInfo);
    DAT_0456776a = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_Core_Quests_QuestsManager_IGKFCNKEMFG_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  handle = CPJDJFPABGI_var;
  if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pIVar2 = (Il2CppClass *)
           System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = pIVar2;
    thunk_FUN_01c20e04();
    pSVar3 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)LJFLEGDMCMI_var,(MethodInfo *)0x0);
    __this_00[1].monitor = pSVar3;
    thunk_FUN_01c20e04();
    pSVar5 = (__this->fields).GOAJEJNPDFA;
    pSVar4 = (System_Func_TSource__bool__o *)
             thunk_FUN_01bda818(System_Func<FPPKHNNABAD,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    bVar1 = System_Linq_Enumerable__Any<object>
                      ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar5,pSVar4,
                       Method_System_Linq_Enumerable_Any<FPPKHNNABAD>__);
    if (bVar1) {
      return true;
    }
    pSVar5 = (__this->fields).GOAJEJNPDFA;
    pSVar4 = (System_Func_TSource__bool__o *)
             thunk_FUN_01bda818(System_Func<FPPKHNNABAD,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    bVar1 = System_Linq_Enumerable__Any<object>
                      ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar5,pSVar4,
                       Method_System_Linq_Enumerable_Any<FPPKHNNABAD>__);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

