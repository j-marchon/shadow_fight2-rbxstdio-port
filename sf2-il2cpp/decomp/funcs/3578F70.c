// Core.Network.ServerProvider$$SaveDump @ RVA 0x3578F70

void Core_Network_ServerProvider__SaveDump
               (Core_Network_ServerProvider_o *__this,System_String_o *JCHBCEKGBOP,
               System_Collections_Generic_Dictionary_string__ServerProviderBase_ECJOKKDKDGB__o
               *FKHMCPMNIFM,System_Action_bool__JSONNode__object__o *GFNABKGEGJA,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Action_o *BLMFLPJJMPF;
  
  if ((DAT_04568c96 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Core_Network_ServerProvider_COIAGMGJOJF_MDBLGJAGJKE__);
    FUN_01bab630(&Core_Network_ServerProvider_COIAGMGJOJF_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568c96 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(Core_Network_ServerProvider_COIAGMGJOJF_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  __this_00[1].klass = (Il2CppClass *)JCHBCEKGBOP;
  thunk_FUN_01c20e04(__this_00 + 1,JCHBCEKGBOP);
  __this_00[1].monitor = __this;
  thunk_FUN_01c20e04(&__this_00[1].monitor,__this);
  __this_00[2].klass = (Il2CppClass *)FKHMCPMNIFM;
  thunk_FUN_01c20e04(__this_00 + 2,FKHMCPMNIFM);
  __this_00[2].monitor = GFNABKGEGJA;
  thunk_FUN_01c20e04(&__this_00[2].monitor,GFNABKGEGJA);
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
  if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField != (ACHLOMELAJE_o *)0x0) {
    BLMFLPJJMPF = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    IMAPABEJECG__CBNFJDHJCNK(BLMFLPJJMPF,false,(MethodInfo *)0x0);
    return;
  }
  return;
}

