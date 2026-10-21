// CJFBGEEIPBA$$EHENAJFMBBA @ RVA 0x33658F8

void CJFBGEEIPBA__EHENAJFMBBA(CJFBGEEIPBA_o *__this,OJEHKJHEBID_o *PBNPKBJKFHE,MethodInfo *method)

{
  System_Collections_Generic_List_NLFLMJPNOLF__o *pSVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Action_List_NLFLMJPNOLF___o *pSVar2;
  
  if (PBNPKBJKFHE == (OJEHKJHEBID_o *)0x0) {
    return;
  }
  (__this->fields).FBILHKCKHEJ = PBNPKBJKFHE;
  thunk_FUN_01c20e04();
  pSVar1 = CJFBGEEIPBA__EBILFKOCKJM(__this,method_00);
  pSVar2 = (__this->fields).DOKOLOEMNGB;
  if (pSVar2 != (System_Action_List_NLFLMJPNOLF___o *)0x0) {
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,pSVar1,(pSVar2->fields).super.super.method);
    CJFBGEEIPBA__DMJNFPEFGNH(__this,method_01);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

