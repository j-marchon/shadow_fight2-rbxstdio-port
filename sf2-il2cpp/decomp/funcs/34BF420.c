// KAHMAJKJMBK$$CPOOGAMMCEB @ RVA 0x34BF420

void KAHMAJKJMBK__CPOOGAMMCEB
               (KAHMAJKJMBK_o *__this,CNIGOFCKBGI_o *HHDLPCHGBHM,bool GKAFKJNCMFJ,MethodInfo *method
               )

{
  CNIGOFCKBGI_o *GOAHBPBJCKC;
  CNIGOFCKBGI_o *pCVar1;
  AJNNHGGLGIF_o **ppAVar2;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)GKAFKJNCMFJ;
  if (!GKAFKJNCMFJ) {
    if (HHDLPCHGBHM == (CNIGOFCKBGI_o *)0x0) {
LAB_035bf4e0:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((HHDLPCHGBHM->fields).JGJNBILDCHK == 3) {
      GOAHBPBJCKC = (CNIGOFCKBGI_o *)
                    (*(HHDLPCHGBHM->klass->vtable)._15_GOGPCNMIJOB.methodPtr)
                              (HHDLPCHGBHM,(HHDLPCHGBHM->klass->vtable)._15_GOGPCNMIJOB.method);
      pCVar1 = (CNIGOFCKBGI_o *)
               (*(HHDLPCHGBHM->klass->vtable)._15_GOGPCNMIJOB.methodPtr)
                         (HHDLPCHGBHM,(HHDLPCHGBHM->klass->vtable)._15_GOGPCNMIJOB.method);
      if ((GOAHBPBJCKC == (CNIGOFCKBGI_o *)0x0) ||
         ((GOAHBPBJCKC->fields).JGJNBILDCHK = 1, pCVar1 == (CNIGOFCKBGI_o *)0x0)) goto LAB_035bf4e0;
      (pCVar1->fields).JGJNBILDCHK = 2;
      ppAVar2 = &(GOAHBPBJCKC->fields).super.LKKBHIEHNAM;
      *ppAVar2 = (AJNNHGGLGIF_o *)HHDLPCHGBHM;
      thunk_FUN_01c20e04(ppAVar2,HHDLPCHGBHM);
      ppAVar2 = &(pCVar1->fields).super.LKKBHIEHNAM;
      *ppAVar2 = (AJNNHGGLGIF_o *)HHDLPCHGBHM;
      thunk_FUN_01c20e04(ppAVar2,HHDLPCHGBHM);
      KAHMAJKJMBK__JDMMBLAGLKD(__this,GOAHBPBJCKC,method_00);
      HHDLPCHGBHM = pCVar1;
    }
  }
  KAHMAJKJMBK__JDMMBLAGLKD(__this,HHDLPCHGBHM,method_00);
  return;
}

