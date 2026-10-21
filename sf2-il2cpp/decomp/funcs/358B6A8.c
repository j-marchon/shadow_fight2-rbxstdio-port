// EnterScreen$$End @ RVA 0x358B6A8

void EnterScreen__End(EnterScreen_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  System_Action_o *pSVar1;
  
  if ((DAT_04568d44 & 1) == 0) {
    FUN_01bab630(&MFIKGMIDDIG_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    FUN_01bab630(&StringLiteral_19657);
    DAT_04568d44 = 1;
    method = extraout_x1;
  }
  pSVar1 = (__this->fields).DNPHBCPFMPB;
  if (pSVar1 != (System_Action_o *)0x0) {
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
    method = extraout_x1_00;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
    method = extraout_x1_01;
  }
  if (DAT_04565f32 == '\0') {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04565f32 = '\x01';
    method = extraout_x1_02;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
  }
  if (PNLFHHJGDLI_TypeInfo->static_fields->MGFLMNJLJLK == false) {
    MFIKGMIDDIG_TypeInfo->static_fields->NHGIAGMKJKG = false;
    MFIKGMIDDIG__DKLEOPOALEN(StringLiteral_19657,true,(MethodInfo *)0x0);
  }
  LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
  return;
}

