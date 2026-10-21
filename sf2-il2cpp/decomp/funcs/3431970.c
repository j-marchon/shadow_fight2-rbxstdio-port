// NLBIMFJEHGC$$OFPHPMGMCAL @ RVA 0x3431970

System_String_o * NLBIMFJEHGC__OFPHPMGMCAL(NLBIMFJEHGC_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  System_String_o *str0;
  
  if ((DAT_04568172 & 1) == 0) {
    FUN_01bab630(&StringLiteral_167);
    DAT_04568172 = 1;
    method = extraout_x1;
  }
  pSVar1 = (__this->fields).OIKLOAGFFGO;
  if (pSVar1 != (System_String_o *)0x0) {
    str0 = (__this->fields).OJEDDJHFLOG;
    pSVar1 = (System_String_o *)
             (*(pSVar1->klass->vtable)._3_ToString.methodPtr)
                       (pSVar1,(pSVar1->klass->vtable)._3_ToString.method);
    pSVar1 = System_String__Concat(str0,StringLiteral_167,pSVar1,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

