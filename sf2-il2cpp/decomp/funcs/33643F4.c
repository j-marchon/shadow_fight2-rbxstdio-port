// CJFBGEEIPBA$$KMEMLHDKKFN @ RVA 0x33643F4

void CJFBGEEIPBA__KMEMLHDKKFN(CJFBGEEIPBA_o *__this,NLFLMJPNOLF_o *AOMBONOOJFP,MethodInfo *method)

{
  bool bVar1;
  NLFLMJPNOLF_o *AOMBONOOJFP_00;
  CJFBGEEIPBA_o *__this_00;
  EEGDOGKBLNG_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Action_NLFLMJPNOLF__o *pSVar2;
  
  if ((DAT_04567ac4 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04567ac4 = 1;
  }
  if (AOMBONOOJFP != (NLFLMJPNOLF_o *)0x0) {
    AOMBONOOJFP_00 = CJFBGEEIPBA__IPLHNJCJEIK(__this,(AOMBONOOJFP->fields).OHMDCKEDOGH,method);
    if (AOMBONOOJFP_00 == (NLFLMJPNOLF_o *)0x0) {
      CJFBGEEIPBA__MHEDHEODOPJ(__this,AOMBONOOJFP,method);
      return;
    }
    CJFBGEEIPBA__IGGCPEFPJPD(__this,AOMBONOOJFP,method);
    pSVar2 = (__this->fields).FJIFDGEPKBH;
    if (pSVar2 != (System_Action_NLFLMJPNOLF__o *)0x0) {
      method_01 = (MethodInfo *)(pSVar2->fields).super.super.method;
      __this_00 = (CJFBGEEIPBA_o *)
                  (*(code *)(pSVar2->fields).super.super.invoke_impl)
                            ((pSVar2->fields).super.super.method_code,AOMBONOOJFP);
      bVar1 = CJFBGEEIPBA__GPIFDPAIBNH(__this_00,AOMBONOOJFP_00,method_01);
      if (bVar1) {
        return;
      }
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      bVar1 = CJFBGEEIPBA__EDBDHGCEMEA(__this,method_00);
      if (__this_01 != (EEGDOGKBLNG_o *)0x0) {
        EEGDOGKBLNG__LIAFPDDOGIH(__this_01,bVar1,true,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

