// OJHODFIGFMA$$LJOAPAKCNLD @ RVA 0x323F664

void OJHODFIGFMA__LJOAPAKCNLD
               (OJHODFIGFMA_o *__this,OJHODFIGFMA_MJOLIJOPBMO_o *MLNEFBDGKEK,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  MethodInfo *in_x3;
  LKPNOBFEAKD_o *pLVar4;
  System_Action_OJHODFIGFMA_MJOLIJOPBMO__o *pSVar5;
  
  if ((MLNEFBDGKEK != (OJHODFIGFMA_MJOLIJOPBMO_o *)0x0) &&
     (pLVar4 = (MLNEFBDGKEK->fields).ADHFHEJFJPK, pLVar4 != (LKPNOBFEAKD_o *)0x0)) {
    bVar1 = OJHODFIGFMA__KJILDIMFOME(__this,(pLVar4->fields).JMCKAHCGMDD,method);
    pLVar4 = (MLNEFBDGKEK->fields).ADHFHEJFJPK;
    if (pLVar4 != (LKPNOBFEAKD_o *)0x0) {
      bVar2 = OJHODFIGFMA__LIMMPMGLOHC
                        (__this,(pLVar4->fields).EAEAFBCHFML,(pLVar4->fields).KMNDDMGAHID,in_x3);
      pLVar4 = (MLNEFBDGKEK->fields).ADHFHEJFJPK;
      if (pLVar4 != (LKPNOBFEAKD_o *)0x0) {
        bVar3 = LKPNOBFEAKD__BNNIDPDMOIL(pLVar4,(__this->fields).APPPNIFKKCH,(MethodInfo *)0x0);
        if (!bVar2 || (!bVar1 || !bVar3)) {
          return;
        }
        pLVar4 = (MLNEFBDGKEK->fields).ADHFHEJFJPK;
        (MLNEFBDGKEK->fields).JAICMIMBIOA = (MLNEFBDGKEK->fields).JAICMIMBIOA + 1;
        if (pLVar4 != (LKPNOBFEAKD_o *)0x0) {
          if ((pLVar4->fields).OADCIDFJCOE == 2) {
            return;
          }
          pSVar5 = (__this->fields).LAFPPPABCJG;
          if (pSVar5 != (System_Action_OJHODFIGFMA_MJOLIJOPBMO__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0333f720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(pSVar5->fields).super.super.invoke_impl)
                      ((pSVar5->fields).super.super.method_code,MLNEFBDGKEK,
                       (pSVar5->fields).super.super.method);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

