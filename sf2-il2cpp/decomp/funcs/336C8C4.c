// IEHDDOIHPNI$$DMFPHHLKEPI @ RVA 0x336C8C4

LBMOOFGGPEB_o * IEHDDOIHPNI__DMFPHHLKEPI(System_String_o *DGMHNKGDAIL,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  LBMOOFGGPEB_o *__this;
  System_Action_object__o *pSVar4;
  System_Action_object__o **ppSVar5;
  MethodInfo *extraout_x1;
  BHEDGAKGKPO_StaticFields *pBVar6;
  
  if ((DAT_04567afc & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&LBMOOFGGPEB_TypeInfo);
    FUN_01bab630(&Method_NLPJLHOEAOE_JDHFCFGBAIO__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567afc = 1;
    method = extraout_x1;
  }
  __this = (LBMOOFGGPEB_o *)thunk_FUN_01bda818(LBMOOFGGPEB_TypeInfo,method);
  LBMOOFGGPEB___ctor(__this,(System_Action_object__o *)0x0,(MethodInfo *)0x0);
  if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pBVar6 = BHEDGAKGKPO_TypeInfo->static_fields;
  fVar1 = (pBVar6->ODGAJIBDACC).fields.a;
  fVar2 = (pBVar6->ODGAJIBDACC).fields.r;
  fVar3 = (pBVar6->ODGAJIBDACC).fields.g;
  if (__this != (LBMOOFGGPEB_o *)0x0) {
    (__this->fields).BANIDGFENDE.fields.b = (pBVar6->ODGAJIBDACC).fields.b;
    (__this->fields).BANIDGFENDE.fields.a = fVar1;
    (__this->fields).BANIDGFENDE.fields.r = fVar2;
    (__this->fields).BANIDGFENDE.fields.g = fVar3;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
    pSVar4 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar5 = &(__this->fields).FBKGGPDECHB;
    *ppSVar5 = pSVar4;
    thunk_FUN_01c20e04(ppSVar5,pSVar4);
    LBMOOFGGPEB__IIKPNGJAJIH(__this,(Il2CppObject *)DGMHNKGDAIL,(MethodInfo *)0x0);
    LBMOOFGGPEB__JBGIAEJIKCA(__this,(Nekki_SF2_GUI_TimerLabel_o *)0x0,(MethodInfo *)0x0);
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

