// KKLJIDJBFEI$$OFMEAAJALFO @ RVA 0x3145B38

void KKLJIDJBFEI__OFMEAAJALFO(KKLJIDJBFEI_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_WellKnownTypes_Empty_o *__this_00;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  KKLJIDJBFEI_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_04566777 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_Empty_TypeInfo);
    FUN_01bab630(&Method_KKLJIDJBFEI_NCNLJIIPOBJ__);
    FUN_01bab630(&StringLiteral_18643);
    FUN_01bab630(&StringLiteral_11525);
    DAT_04566777 = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo,method);
  }
  UnityEngine_Debug__Log(StringLiteral_11525,(MethodInfo *)0x0);
  __this_00 = (Google_Protobuf_WellKnownTypes_Empty_o *)
              thunk_FUN_01bda818(Google_Protobuf_WellKnownTypes_Empty_TypeInfo);
  Google_Protobuf_WellKnownTypes_Empty___ctor(__this_00,(MethodInfo *)0x0);
  BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
  System_Action<object>___ctor();
  iVar1 = KKLJIDJBFEI__BFOENPKALDN(__this_01,method_00);
  KDPDBGNOFEN__KLNMLOOCAAO
            ((KDPDBGNOFEN_o *)__this,StringLiteral_18643,(Google_Protobuf_IMessage_o *)__this_00,
             BLMFLPJJMPF,(float)iVar1,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  return;
}

