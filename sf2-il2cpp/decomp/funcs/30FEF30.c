// AGILEPNENOH$$CDEMANBJMGK @ RVA 0x30FEF30

void AGILEPNENOH__CDEMANBJMGK(int64_t CJNHFNHJHPE,MethodInfo *method)

{
  Il2CppObject *__this;
  System_Action_T__o *action;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_AGILEPNENOH__o *__this_00;
  
  if ((DAT_045664ae & 1) == 0) {
    FUN_01bab630(&AGILEPNENOH_TypeInfo);
    FUN_01bab630(&System_Action<AGILEPNENOH>_TypeInfo);
    FUN_01bab630(&Method_AGILEPNENOH_JMFABHCADII_ADKAPHALAMC__);
    FUN_01bab630(&AGILEPNENOH_JMFABHCADII_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<AGILEPNENOH>_ForEach__);
    DAT_045664ae = 1;
    method = extraout_x1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(AGILEPNENOH_JMFABHCADII_TypeInfo,method);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    __this[1].klass = (Il2CppClass *)CJNHFNHJHPE;
    if ((AGILEPNENOH_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = AGILEPNENOH_TypeInfo->static_fields->DEKLKEHGJEB;
    action = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<AGILEPNENOH>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_00 != (System_Collections_Generic_List_AGILEPNENOH__o *)0x0) {
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)__this_00,action,
                 Method_System_Collections_Generic_List<AGILEPNENOH>_ForEach__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

