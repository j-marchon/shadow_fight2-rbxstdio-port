// ONEDJCACCGM$$FBMNAFFOAFL @ RVA 0x31DE48C

SimpleJSON_JSONObject_o *
ONEDJCACCGM__FBMNAFFOAFL
          (System_String_o *NEADDGBNOKK,System_String_o *DBDJKKPGFIH,System_String_o *MMAOCCAGLCH,
          MethodInfo *method)

{
  undefined8 uVar1;
  bool bVar2;
  int32_t iVar3;
  SimpleJSON_JSONObject_o *__this;
  SimpleJSON_JSONNode_o *pSVar4;
  CFGLKHFFEKA_o *pCVar5;
  System_String_o *pSVar6;
  GCFHEEKPCPJ_o *__this_00;
  
  if ((DAT_04566d3f & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONObject_TypeInfo);
    FUN_01bab630(&MGAGKCEDNNN_TypeInfo);
    FUN_01bab630(&StringLiteral_21304);
    FUN_01bab630(&StringLiteral_20143);
    FUN_01bab630(&StringLiteral_16840);
    FUN_01bab630(&StringLiteral_17977);
    FUN_01bab630(&StringLiteral_20127);
    FUN_01bab630(&StringLiteral_18104);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_20584);
    FUN_01bab630(&StringLiteral_20176);
    FUN_01bab630(&StringLiteral_17608);
    DAT_04566d3f = 1;
  }
  __this = (SimpleJSON_JSONObject_o *)thunk_FUN_01bda818(SimpleJSON_JSONObject_TypeInfo);
  SimpleJSON_JSONObject___ctor(__this,(MethodInfo *)0x0);
  iVar3 = NFNBHPOJFNJ__MNLKJHBKMPB((MethodInfo *)0x0);
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
  }
  pSVar4 = SimpleJSON_JSONNode__op_Implicit(iVar3,(MethodInfo *)0x0);
  if (__this != (SimpleJSON_JSONObject_o *)0x0) {
    (*(__this->klass->vtable)._8_set_Item.methodPtr)
              (__this,StringLiteral_17977,pSVar4,(__this->klass->vtable)._8_set_Item.method);
    pSVar4 = SimpleJSON_JSONNode__op_Implicit(StringLiteral_20176,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._8_set_Item.methodPtr)
              (__this,StringLiteral_18104,pSVar4,(__this->klass->vtable)._8_set_Item.method);
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pCVar5 = EOAOCPLIKOI__PNENLJCMECN((MethodInfo *)0x0);
    if (pCVar5 != (CFGLKHFFEKA_o *)0x0) {
      pSVar6 = (System_String_o *)
               (*(pCVar5->klass->vtable)._3_ToString.methodPtr)
                         (pCVar5,(pCVar5->klass->vtable)._3_ToString.method);
      pSVar4 = SimpleJSON_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._8_set_Item.methodPtr)
                (__this,StringLiteral_16840,pSVar4,(__this->klass->vtable)._8_set_Item.method);
      pCVar5 = EOAOCPLIKOI__KEAMCFNFPHB((MethodInfo *)0x0);
      if (pCVar5 != (CFGLKHFFEKA_o *)0x0) {
        pSVar6 = CFGLKHFFEKA__IBBMFNFIKPE(pCVar5,true,(MethodInfo *)0x0);
        pSVar4 = SimpleJSON_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._8_set_Item.methodPtr)
                  (__this,StringLiteral_17608,pSVar4,(__this->klass->vtable)._8_set_Item.method);
        pSVar4 = SimpleJSON_JSONNode__op_Implicit(NEADDGBNOKK,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._8_set_Item.methodPtr)
                  (__this,StringLiteral_21304,pSVar4,(__this->klass->vtable)._8_set_Item.method);
        bVar2 = System_String__IsNullOrEmpty(DBDJKKPGFIH,(MethodInfo *)0x0);
        uVar1 = StringLiteral_20127;
        pSVar6 = StringLiteral_1;
        if (!bVar2) {
          pSVar6 = DBDJKKPGFIH;
        }
        if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
        }
        pSVar4 = SimpleJSON_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._8_set_Item.methodPtr)
                  (__this,uVar1,pSVar4,(__this->klass->vtable)._8_set_Item.method);
        bVar2 = System_String__IsNullOrEmpty(MMAOCCAGLCH,(MethodInfo *)0x0);
        uVar1 = StringLiteral_20584;
        pSVar6 = StringLiteral_1;
        if (!bVar2) {
          if ((MGAGKCEDNNN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_00 = (GCFHEEKPCPJ_o *)MGAGKCEDNNN_TypeInfo->static_fields->EGHMLJDHLPK;
          if (__this_00 == (GCFHEEKPCPJ_o *)0x0) goto LAB_032de828;
          pSVar6 = GCFHEEKPCPJ__IDDPLJLECPA
                             (__this_00,MMAOCCAGLCH,(System_String_o *)0x0,(MethodInfo *)0x0);
        }
        if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar4 = SimpleJSON_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._8_set_Item.methodPtr)
                  (__this,uVar1,pSVar4,(__this->klass->vtable)._8_set_Item.method);
        iVar3 = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0);
        pSVar4 = SimpleJSON_JSONNode__op_Implicit(iVar3 == 0,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._8_set_Item.methodPtr)
                  (__this,StringLiteral_20143,pSVar4,(__this->klass->vtable)._8_set_Item.method);
        return __this;
      }
    }
  }
LAB_032de828:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

