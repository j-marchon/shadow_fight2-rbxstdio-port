// CJFBGEEIPBA$$MHEDHEODOPJ @ RVA 0x33648D0

void CJFBGEEIPBA__MHEDHEODOPJ(CJFBGEEIPBA_o *__this,NLFLMJPNOLF_o *AOMBONOOJFP,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *__this_00;
  OJEHKJHEBID_o *pOVar1;
  System_Action_NLFLMJPNOLF__o *pSVar2;
  
  if ((DAT_04567aa9 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_Add__);
    DAT_04567aa9 = 1;
  }
  pOVar1 = (__this->fields).FBILHKCKHEJ;
  if (pOVar1 != (OJEHKJHEBID_o *)0x0) {
    __this_00 = (pOVar1->fields).MJIHCLLODMF;
    if (__this_00 != (Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *)0x0) {
      Google_Protobuf_Collections_RepeatedField<object>__Add
                ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                 (Il2CppObject *)AOMBONOOJFP,
                 Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_Add__);
      pSVar2 = (__this->fields).HEJHGFDOMMG;
      if (pSVar2 != (System_Action_NLFLMJPNOLF__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03464944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(pSVar2->fields).super.super.invoke_impl)
                  ((pSVar2->fields).super.super.method_code,AOMBONOOJFP,
                   (pSVar2->fields).super.super.method);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

