// JHNJPLCNBHC$$LLCONNGHGKD @ RVA 0x336E250

void JHNJPLCNBHC__LLCONNGHGKD
               (JHNJPLCNBHC_o *__this,MMDDDDFHOLG_DOCBHLNBECF_o *CPECAEHDDDB,MethodInfo *method)

{
  CJCCEHEKBPD_o *pCVar1;
  OLKKAIFGGAK_o *pOVar2;
  
  pCVar1 = (__this->fields).FEGLHAMGOFP;
  if (pCVar1 != (CJCCEHEKBPD_o *)0x0) {
    if ((pCVar1->fields).super._ILHGDFFOGHP_k__BackingField == false) {
      return;
    }
    (*(pCVar1->klass->vtable)._4_LLCONNGHGKD.methodPtr)
              (pCVar1,(pCVar1->klass->vtable)._4_LLCONNGHGKD.method);
    if ((CPECAEHDDDB != (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) &&
       (pCVar1 = (__this->fields).FEGLHAMGOFP, pCVar1 != (CJCCEHEKBPD_o *)0x0)) {
      (*(pCVar1->klass->vtable)._6_CGJIIEOFLGG.methodPtr)
                (pCVar1,(CPECAEHDDDB->fields).HEMGHNOOJPI,
                 (pCVar1->klass->vtable)._6_CGJIIEOFLGG.method);
      pOVar2 = (CPECAEHDDDB->fields).HEMGHNOOJPI;
      if ((pOVar2 != (OLKKAIFGGAK_o *)0x0) &&
         (pCVar1 = (__this->fields).FEGLHAMGOFP, pCVar1 != (CJCCEHEKBPD_o *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0346e2bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pCVar1->klass->vtable)._6_CGJIIEOFLGG.methodPtr)
                  (pCVar1,(pOVar2->fields).BPJMMBGIMNC,(pCVar1->klass->vtable)._6_CGJIIEOFLGG.method
                  );
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

