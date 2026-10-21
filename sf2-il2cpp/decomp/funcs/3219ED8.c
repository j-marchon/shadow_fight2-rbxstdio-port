// KKLFGJCMPDA$$.ctor @ RVA 0x3219ED8

void KKLFGJCMPDA___ctor(KKLFGJCMPDA_o *__this,MCEIBCKPIAD_o *KMIOAIFNJJD,FAIJGJCCKJC_o *NPOAPJKIIOF,
                       MethodInfo *method)

{
  bool bVar1;
  FAIJGJCCKJC_o **ppFVar2;
  PPJGIFEJMHP_o *__this_00;
  int64_t JNJCMIEHOHC;
  System_Action_o *KCPFFLHCCIN;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  
  if ((DAT_04566ef3 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_KKLFGJCMPDA_MHGHLDANJBO__);
    FUN_01bab630(&Method_KKLFGJCMPDA_OPMMMKCAADB__);
    DAT_04566ef3 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppFVar2 = &(__this->fields).EAAEJJKFKEG;
  *ppFVar2 = NPOAPJKIIOF;
  thunk_FUN_01c20e04(ppFVar2,NPOAPJKIIOF);
  (__this->fields).KJJDAKFCJAL = KMIOAIFNJJD;
  thunk_FUN_01c20e04(&__this->fields,KMIOAIFNJJD);
  bVar1 = KKLFGJCMPDA__PLLLOINIKKH(__this,method_00);
  if (bVar1) {
    KKLFGJCMPDA__OPMMMKCAADB(__this,method_01);
    return;
  }
  bVar1 = KKLFGJCMPDA__HLLOKAJEBDE(__this,method_01);
  if (bVar1) {
    __this_00 = KKLJIDJBFEI__DANEKAAFBFI((MethodInfo *)0x0);
    JNJCMIEHOHC = KKLFGJCMPDA__PDIKOGIIOFD(__this,method_03);
    KCPFFLHCCIN = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  }
  else {
    bVar1 = KKLFGJCMPDA__AJDOCKPPMLK(__this,method_02);
    if (bVar1) {
      return;
    }
    __this_00 = KKLJIDJBFEI__DANEKAAFBFI((MethodInfo *)0x0);
    JNJCMIEHOHC = KKLFGJCMPDA__NIBOLFJBPGA(__this,method_04);
    KCPFFLHCCIN = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  }
  System_Action___ctor();
  if (__this_00 != (PPJGIFEJMHP_o *)0x0) {
    PPJGIFEJMHP__LGDEICDAEAF(__this_00,JNJCMIEHOHC,KCPFFLHCCIN,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

