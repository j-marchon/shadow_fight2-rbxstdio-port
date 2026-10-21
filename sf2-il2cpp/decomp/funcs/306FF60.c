// EEGDOGKBLNG$$JAIGNIGLBBN @ RVA 0x306FF60

bool EEGDOGKBLNG__JAIGNIGLBBN(EEGDOGKBLNG_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  PEEIMHCMDND_o *pPVar3;
  SimpleJSON_JSONNode_o *a;
  SimpleJSON_JSONArray_o *__this_00;
  System_String_o *__this_01;
  long *plVar4;
  System_String_o *strB;
  MethodInfo *extraout_x1;
  KAMBBJFPLGM_o *pKVar5;
  System_String_o *local_28;
  
  if ((DAT_04565f5b & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONArray_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&StringLiteral_18062);
    DAT_04565f5b = 1;
    method = extraout_x1;
  }
  local_28 = (System_String_o *)0x0;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pPVar3 = HJPEKDOPBHN__JHBLAJKKPFG((MethodInfo *)0x0);
  pKVar5 = (__this->fields).MLAAJICBOAD;
  if ((pKVar5 != (KAMBBJFPLGM_o *)0x0) && (pPVar3 != (PEEIMHCMDND_o *)0x0)) {
    a = PEEIMHCMDND__BHCOOILLMGA(pPVar3,(pKVar5->fields).FLAFELDNABC,&local_28,(MethodInfo *)0x0);
    if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
    }
    bVar1 = SimpleJSON_JSONNode__op_Equality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      return false;
    }
    __this_00 = (SimpleJSON_JSONArray_o *)thunk_FUN_01bda818(SimpleJSON_JSONArray_TypeInfo);
    SimpleJSON_JSONArray___ctor(__this_00,(MethodInfo *)0x0);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pPVar3 = HJPEKDOPBHN__JHBLAJKKPFG((MethodInfo *)0x0);
    if ((((pPVar3 != (PEEIMHCMDND_o *)0x0) &&
         (PEEIMHCMDND__OGHFMBJIOBB(pPVar3,(SimpleJSON_JSONNode_o *)__this_00,(MethodInfo *)0x0),
         __this_00 != (SimpleJSON_JSONArray_o *)0x0)) &&
        (__this_01 = (System_String_o *)
                     (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                               (__this_00,(__this_00->klass->vtable)._3_ToString.method),
        a != (SimpleJSON_JSONNode_o *)0x0)) &&
       ((plVar4 = (long *)(*(a->klass->vtable)._7_get_Item.methodPtr)
                                    (a,StringLiteral_18062,(a->klass->vtable)._7_get_Item.method),
        plVar4 != (long *)0x0 &&
        (strB = (System_String_o *)
                (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170)),
        __this_01 != (System_String_o *)0x0)))) {
      iVar2 = System_String__CompareTo(__this_01,strB,(MethodInfo *)0x0);
      return iVar2 != 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

