// OLKKAIFGGAK$$HNBKNGICJJG @ RVA 0x34EA5A4

int32_t OLKKAIFGGAK__HNBKNGICJJG(OLKKAIFGGAK_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  PJKHAJKEHEL_o *pPVar3;
  HOOAAGABMBL_o *pHVar4;
  undefined1 auVar5 [16];
  
  auVar5._8_8_ = method;
  auVar5._0_8_ = __this;
  if ((DAT_04568787 & 1) == 0) {
    auVar5 = FUN_01bab630(&StringLiteral_9541);
    DAT_04568787 = 1;
  }
  pPVar3 = (__this->fields).FAPMJJBOFEF;
  if (pPVar3 != (PJKHAJKEHEL_o *)0x0) {
    pHVar4 = (pPVar3->fields).NBHGHLIPCAP;
    if ((pHVar4 == (HOOAAGABMBL_o *)0x0) ||
       (bVar1 = System_String__op_Equality
                          ((pHVar4->fields)._DKODBGOHKGH_k__BackingField,StringLiteral_9541,
                           (MethodInfo *)0x0), !bVar1)) {
      iVar2 = -1;
    }
    else {
      iVar2 = 1;
    }
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar5._0_8_,auVar5._8_8_);
}

