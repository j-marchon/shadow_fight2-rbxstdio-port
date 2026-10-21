// PEEIMHCMDND$$CKFELMACGEH @ RVA 0x3423A24

void PEEIMHCMDND__CKFELMACGEH(PEEIMHCMDND_o *__this,MethodInfo *method)

{
  SimpleJSON_JSONObject_o *__this_00;
  SimpleJSON_JSONNode_o *pSVar1;
  KKLJIDJBFEI_o *pKVar2;
  int64_t n;
  SimpleJSON_JSONArray_o *__this_01;
  PEEIMHCMDND_o *__this_02;
  System_String_o *AIGOBLJEBCA;
  System_Byte_array *bytes;
  OLHGMELLLFK_o *__this_03;
  Google_Protobuf_ByteString_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_045680f6 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_ByteString_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONArray_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONObject_TypeInfo);
    FUN_01bab630(&OLHGMELLLFK_TypeInfo);
    FUN_01bab630(&StringLiteral_21837);
    FUN_01bab630(&StringLiteral_19522);
    FUN_01bab630(&StringLiteral_18062);
    FUN_01bab630(&StringLiteral_21920);
    DAT_045680f6 = 1;
    method = extraout_x1;
  }
  __this_00 = (SimpleJSON_JSONObject_o *)thunk_FUN_01bda818(SimpleJSON_JSONObject_TypeInfo,method);
  SimpleJSON_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = SimpleJSON_JSONNode__op_Implicit(2,(MethodInfo *)0x0);
  if (__this_00 != (SimpleJSON_JSONObject_o *)0x0) {
    (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
              (__this_00,StringLiteral_21920,pSVar1,(__this_00->klass->vtable)._8_set_Item.method);
    pKVar2 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    if (pKVar2 != (KKLJIDJBFEI_o *)0x0) {
      n = KKLJIDJBFEI__HEDLNKCNMCI(pKVar2,(MethodInfo *)0x0);
      pSVar1 = SimpleJSON_JSONNode__op_Implicit(n,(MethodInfo *)0x0);
      (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
                (__this_00,StringLiteral_19522,pSVar1,(__this_00->klass->vtable)._8_set_Item.method)
      ;
      __this_01 = (SimpleJSON_JSONArray_o *)thunk_FUN_01bda818(SimpleJSON_JSONArray_TypeInfo);
      SimpleJSON_JSONArray___ctor(__this_01,(MethodInfo *)0x0);
      (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
                (__this_00,StringLiteral_18062,__this_01,
                 (__this_00->klass->vtable)._8_set_Item.method);
      method_00 = (__this_00->klass->vtable)._7_get_Item.method;
      __this_02 = (PEEIMHCMDND_o *)
                  (*(__this_00->klass->vtable)._7_get_Item.methodPtr)(__this_00,StringLiteral_18062)
      ;
      PEEIMHCMDND__OGHFMBJIOBB(__this_02,(SimpleJSON_JSONNode_o *)__this_02,method_00);
      AIGOBLJEBCA = (System_String_o *)
                    (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                              (__this_00,(__this_00->klass->vtable)._3_ToString.method);
      bytes = DBIJLEGANCE__KEIDOJDOFNN(AIGOBLJEBCA,(System_Text_Encoding_o *)0x0,(MethodInfo *)0x0);
      __this_03 = (OLHGMELLLFK_o *)thunk_FUN_01bda818(OLHGMELLLFK_TypeInfo);
      OLHGMELLLFK___ctor(__this_03,(MethodInfo *)0x0);
      if ((Google_Protobuf_ByteString_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      CJNHFNHJHPE = Google_Protobuf_ByteString__CopyFrom(bytes,(MethodInfo *)0x0);
      if (__this_03 != (OLHGMELLLFK_o *)0x0) {
        OLHGMELLLFK__BGOOPIDKJEC(__this_03,CJNHFNHJHPE,(MethodInfo *)0x0);
        pKVar2 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
        if (pKVar2 != (KKLJIDJBFEI_o *)0x0) {
          KDPDBGNOFEN__KLNMLOOCAAO
                    ((KDPDBGNOFEN_o *)pKVar2,StringLiteral_21837,
                     (Google_Protobuf_IMessage_o *)__this_03,(System_Action_KEFHDOHHHML__o *)0x0,0.0
                     ,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

