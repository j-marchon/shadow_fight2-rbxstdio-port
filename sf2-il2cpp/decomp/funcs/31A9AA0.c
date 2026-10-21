// OOBBAGLCFPF$$IFFNMNFGOII @ RVA 0x31A9AA0

bool OOBBAGLCFPF__IFFNMNFGOII(AADKBCFCLKK_o *IIPPMAOIKHB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  MethodInfo *method_00;
  KDADMJGPAOM_o *pKVar3;
  float fVar4;
  
  bVar1 = false;
  if (IIPPMAOIKHB != (AADKBCFCLKK_o *)0x0) {
    pKVar3 = (IIPPMAOIKHB->fields).LHFLMBNKPHF;
    if (pKVar3 == (KDADMJGPAOM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((pKVar3->fields).PDGEHKCPGDK < 1) {
      iVar2 = OOBBAGLCFPF__FKFDENOLEKK(IIPPMAOIKHB,method);
      fVar4 = OOBBAGLCFPF__OECPILPMHCA(IIPPMAOIKHB,method_00);
      bVar1 = fVar4 < (float)iVar2;
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}

