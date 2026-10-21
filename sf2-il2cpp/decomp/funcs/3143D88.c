// KKLJIDJBFEI$$MANGEOLLGCL @ RVA 0x3143D88

SimpleJSON_JSONObject_o * KKLJIDJBFEI__MANGEOLLGCL(KKLJIDJBFEI_o *__this,MethodInfo *method)

{
  SimpleJSON_JSONObject_o *__this_00;
  System_String_o *pSVar1;
  SimpleJSON_JSONNode_o *pSVar2;
  AJOGJBFNELI_o *pAVar3;
  MethodInfo *extraout_x1;
  
  if ((DAT_045667a7 & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONObject_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_20329);
    FUN_01bab630(&StringLiteral_17711);
    FUN_01bab630(&StringLiteral_20221);
    FUN_01bab630(&StringLiteral_21045);
    DAT_045667a7 = 1;
    method = extraout_x1;
  }
  __this_00 = (SimpleJSON_JSONObject_o *)thunk_FUN_01bda818(SimpleJSON_JSONObject_TypeInfo,method);
  SimpleJSON_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03243e40 to 03343f13 has its CatchHandler @ 03243e40
                       catch() { ... } // from try @ 03243e40 with catch @ 03243e40
                       catch() { ... } // from try @ 03243f44 with catch @ 03243e40
                       catch() { ... } // from try @ 03243fb8 with catch @ 03243e40
                       catch() { ... } // from try @ 03243fe0 with catch @ 03243e40
                       catch() { ... } // from try @ 03244010 with catch @ 03243e40 */
  pSVar1 = EOAOCPLIKOI__MHLLAKBCAHD((MethodInfo *)0x0);
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
  }
  pSVar2 = SimpleJSON_JSONNode__op_Implicit(pSVar1,(MethodInfo *)0x0);
  if (__this_00 != (SimpleJSON_JSONObject_o *)0x0) {
    (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
              (__this_00,StringLiteral_17711,pSVar2,(__this_00->klass->vtable)._8_set_Item.method);
    pSVar1 = EOAOCPLIKOI__GLFGHFIEIPL((MethodInfo *)0x0);
    pSVar2 = SimpleJSON_JSONNode__op_Implicit(pSVar1,(MethodInfo *)0x0);
    (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
              (__this_00,StringLiteral_20221,pSVar2,(__this_00->klass->vtable)._8_set_Item.method);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar3 = NLPJLHOEAOE__KDNCEEKJHMB((MethodInfo *)0x0);
    if (pAVar3 != (AJOGJBFNELI_o *)0x0) {
      pSVar1 = AJOGJBFNELI__NKGPBKKCLBH(pAVar3,(MethodInfo *)0x0);
      pSVar2 = SimpleJSON_JSONNode__op_Implicit(pSVar1,(MethodInfo *)0x0);
      (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
                (__this_00,StringLiteral_20329,pSVar2,(__this_00->klass->vtable)._8_set_Item.method)
      ;
                    /* try { // try from 03243f14 to 03343f1b has its CatchHandler @ 03243fc4 */
      pAVar3 = NLPJLHOEAOE__KDNCEEKJHMB((MethodInfo *)0x0);
      if (pAVar3 != (AJOGJBFNELI_o *)0x0) {
        pSVar1 = AJOGJBFNELI__ONHDKNBGCLC(pAVar3,(MethodInfo *)0x0);
                    /* try { // try from 03243f30 to 03343f43 has its CatchHandler @ 03243fc0 */
        pSVar2 = SimpleJSON_JSONNode__op_Implicit(pSVar1,(MethodInfo *)0x0);
                    /* try { // try from 03243f44 to 03343fb3 has its CatchHandler @ 03243e40 */
        (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
                  (__this_00,StringLiteral_21045,pSVar2,
                   (__this_00->klass->vtable)._8_set_Item.method);
        return __this_00;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

