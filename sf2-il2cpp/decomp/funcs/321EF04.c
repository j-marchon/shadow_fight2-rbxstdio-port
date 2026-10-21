// FPPKHNNABAD$$LGJMJMJJGIM @ RVA 0x321EF04

PKHMIGFEJCL_o *
FPPKHNNABAD__LGJMJMJJGIM(FPPKHNNABAD_o *__this,KCFIOKDFHIB_o *JMCEAKJCJLH,MethodInfo *method)

{
  PKHMIGFEJCL_o *__this_00;
  NLPJLHOEAOE_o *__this_01;
  AFFHKININGD_o *pAVar1;
  DNELIPCHKLK_o *pDVar2;
  System_String_o **ppSVar3;
  undefined8 uVar4;
  
  if ((DAT_04566f34 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&PKHMIGFEJCL_TypeInfo);
    DAT_04566f34 = 1;
  }
  __this_00 = (PKHMIGFEJCL_o *)thunk_FUN_01bda818(PKHMIGFEJCL_TypeInfo);
                    /* try { // try from 0331ef50 to 0341ef7b has its CatchHandler @ 0331f1d8 */
  PKHMIGFEJCL___ctor(__this_00,(MethodInfo *)0x0);
  if (JMCEAKJCJLH == (KCFIOKDFHIB_o *)0x0) {
                    /* try { // try from 0331efd4 to 0341efdb has its CatchHandler @ 0331f1c0 */
                    /* try { // try from 0331efdc to 0341efe7 has its CatchHandler @ 0331f1b8 */
    return __this_00;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_01 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_01 != (NLPJLHOEAOE_o *)0x0) {
    pAVar1 = NLPJLHOEAOE__POGAPHAJGBC(__this_01,(JMCEAKJCJLH->fields).NPFHCGIADBL,(MethodInfo *)0x0)
    ;
    if (pAVar1 == (AFFHKININGD_o *)0x0) {
      pDVar2 = DNELIPCHKLK__OBECCOPBADO((MethodInfo *)0x0);
    }
    else {
      pDVar2 = (pAVar1->fields).KOILJHHCIEE;
    }
    if (__this_00 != (PKHMIGFEJCL_o *)0x0) {
      (__this_00->fields).NMHCLFFOMJH = pDVar2;
      thunk_FUN_01c20e04();
      (__this_00->fields).PNPKEKHEMCD = (JMCEAKJCJLH->fields).CIKGADOJJMG;
      thunk_FUN_01c20e04();
      ppSVar3 = &(__this_00->fields).LOLFFJGLKLD;
      *ppSVar3 = (JMCEAKJCJLH->fields).LCHHKBLIBMM;
                    /* try { // try from 0331efc4 to 0341efcb has its CatchHandler @ 0331f1d0 */
      thunk_FUN_01c20e04(ppSVar3);
      uVar4._0_4_ = (JMCEAKJCJLH->fields).MJJBDELFBOM;
      uVar4._4_4_ = (JMCEAKJCJLH->fields).GMCNKDKMHII;
      uVar4 = NEON_rev64(uVar4,4);
      (__this_00->fields).CJKGLOMEOBO = (int)uVar4;
      (__this_00->fields).KADCKFHODOE = (int)((ulong)uVar4 >> 0x20);
      return __this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

