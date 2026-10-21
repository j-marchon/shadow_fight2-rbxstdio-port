// LEGDPJHPEOB$$OFKHAGFCLDB @ RVA 0x354390C

void LEGDPJHPEOB__OFKHAGFCLDB
               (LEGDPJHPEOB_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  undefined8 *puVar1;
  bool bVar2;
  System_String_o *pSVar3;
  FEPPOONJCGI_o *__this_00;
  EKGDLIKHEMA_o *pEVar4;
  ACHLOMELAJE_o *pAVar5;
  
                    /* try { // try from 03643928 to 0374394f has its CatchHandler @ 03643b00 */
  if ((DAT_04568b0b & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_5615);
    FUN_01bab630(&StringLiteral_2722);
    FUN_01bab630(&StringLiteral_853);
    FUN_01bab630(&StringLiteral_1606);
    FUN_01bab630(&StringLiteral_1567);
    DAT_04568b0b = 1;
  }
  if (ACCIJLGMHOO != (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) {
                    /* try { // try from 03643984 to 037439af has its CatchHandler @ 03643afc */
    pSVar3 = NILLKLHKLHG_GLEGDBCJEOA__NNOHEDCGPNL(ACCIJLGMHOO,(MethodInfo *)0x0);
    bVar2 = System_String__op_Equality
                      ((ACCIJLGMHOO->fields).KCPPJGKAILM,StringLiteral_5615,(MethodInfo *)0x0);
    if (!bVar2) {
      pSVar3 = System_String__Concat
                         (StringLiteral_2722,(ACCIJLGMHOO->fields).KCPPJGKAILM,StringLiteral_853,
                          (MethodInfo *)0x0);
      KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,pSVar3,(MethodInfo *)0x0);
      return;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
                    /* try { // try from 036439e0 to 037439eb has its CatchHandler @ 03643af4 */
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar5 != (ACHLOMELAJE_o *)0x0) &&
       (__this_00 = (pAVar5->fields).IMJJJJJMMHL, __this_00 != (FEPPOONJCGI_o *)0x0)) {
      pEVar4 = FEPPOONJCGI__CMIEOMMDGLC(__this_00,pSVar3,(MethodInfo *)0x0);
                    /* try { // try from 03643a28 to 03743a43 has its CatchHandler @ 03643af0 */
      puVar1 = &StringLiteral_1567;
      if (pEVar4 != (EKGDLIKHEMA_o *)0x0) {
        puVar1 = &StringLiteral_1606;
      }
      if (JDGILABGBGH != (MMFIDKMDADC_o *)0x0) {
                    /* try { // try from 03643a44 to 03743acf has its CatchHandler @ 036437f0 */
        (JDGILABGBGH->fields).HPACPFLKHPK = (System_String_o *)*puVar1;
        thunk_FUN_01c20e04(&JDGILABGBGH->fields);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

