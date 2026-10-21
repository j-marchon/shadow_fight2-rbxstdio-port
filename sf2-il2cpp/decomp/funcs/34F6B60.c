// OLKKAIFGGAK$$AHNAGGGOLBK @ RVA 0x34F6B60

void OLKKAIFGGAK__AHNAGGGOLBK(OLKKAIFGGAK_o *__this,HPNBNJKDGLB_o *CPECAEHDDDB,MethodInfo *method)

{
  OLKKAIFGGAK_o *pOVar1;
  System_Action_HPNBNJKDGLB__o *pSVar2;
  OLKKAIFGGAK_o **ppOVar3;
  
  if (CPECAEHDDDB != (HPNBNJKDGLB_o *)0x0) {
    pOVar1 = OLKKAIFGGAK__GMBBOANEBJJ(__this,(CPECAEHDDDB->fields).super.LOAFPIOGJAF,method);
    ppOVar3 = &(CPECAEHDDDB->fields).super._HKPEJNKNEGG_k__BackingField;
    *ppOVar3 = pOVar1;
                    /* try { // try from 035f6b88 to 036f6b8f has its CatchHandler @ 035f6c70 */
    thunk_FUN_01c20e04(ppOVar3,pOVar1);
    pSVar2 = (__this->fields).NDANNAMFOID;
    if (pSVar2 != (System_Action_HPNBNJKDGLB__o *)0x0) {
                    /* try { // try from 035f6b98 to 036f6b9b has its CatchHandler @ 035f6bcc */
                    /* try { // try from 035f6ba0 to 036f6ba7 has its CatchHandler @ 035f6bc8 */
      (*(code *)(pSVar2->fields).super.super.invoke_impl)
                ((pSVar2->fields).super.super.method_code,CPECAEHDDDB,
                 (pSVar2->fields).super.super.method);
                    /* try { // try from 035f6bac to 036f6baf has its CatchHandler @ 035f6bc0 */
      (CPECAEHDDDB->fields).super._HKPEJNKNEGG_k__BackingField = (OLKKAIFGGAK_o *)0x0;
                    /* try { // try from 035f6bb0 to 036f6beb has its CatchHandler @ 035f6954 */
                    /* catch() { ... } // from try @ 035f6b54 with catch @ 035f6bb4 */
                    /* catch() { ... } // from try @ 035f6b28 with catch @ 035f6bb8 */
                    /* catch() { ... } // from try @ 035f6b00 with catch @ 035f6bbc */
                    /* catch() { ... } // from try @ 035f6bac with catch @ 035f6bc0 */
      thunk_FUN_01c20e04(ppOVar3,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 035f6abc with catch @ 035f6bc4 */
  FUN_01bab8c8();
}

