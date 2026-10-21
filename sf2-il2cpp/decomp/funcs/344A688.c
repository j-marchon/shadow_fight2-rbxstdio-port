// NDPMLPGANCI$$LDBLBIEOFEO @ RVA 0x344A688

void NDPMLPGANCI__LDBLBIEOFEO(NDPMLPGANCI_o *__this,MethodInfo *method)

{
  GCIFMNHADDF_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  System_Action_DBMPKPJGIPI__o *pSVar1;
  GLINEGMOOBM_o *pGVar2;
  
  pSVar1 = (__this->fields).DPHGELLABKO;
  if (pSVar1 != (System_Action_DBMPKPJGIPI__o *)0x0) {
    pGVar2 = (__this->fields).KLPOKEJLDHG;
    if (pGVar2 == (GLINEGMOOBM_o *)0x0) goto LAB_0354a70c;
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pGVar2->fields).DKMBJLMFPKA,
               (pSVar1->fields).super.super.method);
  }
  __this_00 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (GCIFMNHADDF_o *)0x0) {
    GCIFMNHADDF__IDKIMGGFFNH(__this_00,(MethodInfo *)0x0);
    pGVar2 = (__this->fields).KLPOKEJLDHG;
    if (pGVar2 != (GLINEGMOOBM_o *)0x0) {
      KJFLIAMBKEB__BKCFPHNEONL((pGVar2->fields).DBMPKPJGIPI,(MethodInfo *)0x0);
      pSVar1 = (__this->fields).MNMJGAENNOP;
      method_00 = extraout_x1;
      if (pSVar1 != (System_Action_DBMPKPJGIPI__o *)0x0) {
        pGVar2 = (__this->fields).KLPOKEJLDHG;
        if (pGVar2 == (GLINEGMOOBM_o *)0x0) goto LAB_0354a70c;
        (*(code *)(pSVar1->fields).super.super.invoke_impl)
                  ((pSVar1->fields).super.super.method_code,(pGVar2->fields).DBMPKPJGIPI,
                   (pSVar1->fields).super.super.method);
        method_00 = extraout_x1_00;
      }
      NDPMLPGANCI__JKAFOFMGDOA(__this,method_00);
      return;
    }
  }
LAB_0354a70c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

