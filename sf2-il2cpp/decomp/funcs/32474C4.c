// CHDGOFBHAFI$$GMHKJNAIEAG @ RVA 0x32474C4

void CHDGOFBHAFI__GMHKJNAIEAG(CHDGOFBHAFI_o *__this,bool JAJCPIICHNL,MethodInfo *method)

{
  KKLJIDJBFEI_o *__this_00;
  System_Action_o *pSVar1;
  
  (__this->fields).KIAJFCGANAH = false;
  if (JAJCPIICHNL) {
    __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    if (__this_00 == (KKLJIDJBFEI_o *)0x0) goto LAB_03347508;
    KKLJIDJBFEI__IPHHKDOLHPN(__this_00,(System_Action_KEFHDOHHHML__o *)0x0,(MethodInfo *)0x0);
  }
  pSVar1 = (__this->fields).OJAPEIKHMAP;
  if (pSVar1 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03347504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
    return;
  }
LAB_03347508:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

