// NFFDIPBFJHP$$BDGDMBNAMBI @ RVA 0x32BAC5C

void NFFDIPBFJHP__BDGDMBNAMBI(NFFDIPBFJHP_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  GLPEFEEGCPM_o *pGVar1;
  GLPEFEEGCPM_o **ppGVar2;
  
  if ((DAT_0456748a & 1) == 0) {
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<GLPEFEEGCPM>__);
    DAT_0456748a = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    pGVar1 = (GLPEFEEGCPM_o *)
             KEFHDOHHHML__PFNEPJAFEDF<object>
                       (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<GLPEFEEGCPM>__);
    ppGVar2 = &(__this->fields).NEACDFLBNFO;
    *ppGVar2 = pGVar1;
    thunk_FUN_01c20e04(ppGVar2,pGVar1);
    NFFDIPBFJHP__BOJEECFKPBD(__this,*ppGVar2,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

