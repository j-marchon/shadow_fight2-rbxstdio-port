// LEGDPJHPEOB$$DNPEBFIKPHB @ RVA 0x3547450

System_String_o * LEGDPJHPEOB__DNPEBFIKPHB(LEGDPJHPEOB_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Text_StringBuilder_o *__this_00;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  PKHMIGFEJCL_o *pPVar3;
  PKHMIGFEJCL_ELHOKIPELBO_o *pPVar4;
  ulong uVar5;
  long lVar6;
  
  if ((DAT_04568b1a & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_22485);
    DAT_04568b1a = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Text_StringBuilder_o *)
              thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo,method);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  pPVar3 = (__this->fields).AAJBIMFNMBB;
                    /* try { // try from 036474cc to 03747607 has its CatchHandler @ 036474cc
                       catch() { ... } // from try @ 036474cc with catch @ 036474cc
                       catch() { ... } // from try @ 03647744 with catch @ 036474cc
                       catch() { ... } // from try @ 036477e0 with catch @ 036474cc
                       catch() { ... } // from try @ 036477e8 with catch @ 036474cc
                       catch() { ... } // from try @ 036478a0 with catch @ 036474cc */
  if (((pPVar3 != (PKHMIGFEJCL_o *)0x0) &&
      (pPVar4 = (pPVar3->fields).BJJFDMHOBNB, pPVar4 != (PKHMIGFEJCL_ELHOKIPELBO_o *)0x0)) &&
     (pSVar2 = (pPVar4->fields).BMGMGAAPFGO, pSVar2 != (System_String_o *)0x0)) {
    bVar1 = System_String__Equals(pSVar2,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
    if (bVar1) {
      if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
LAB_03647600:
                    /* try { // try from 03647608 to 0374762f has its CatchHandler @ 0364780c */
                    /* WARNING: Could not recover jumptable at 0x03647618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pSVar2 = (System_String_o *)
                 (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                           (__this_00,(__this_00->klass->vtable)._3_ToString.method);
        return pSVar2;
      }
    }
    else {
      pPVar3 = (__this->fields).AAJBIMFNMBB;
      if ((pPVar3 != (PKHMIGFEJCL_o *)0x0) &&
         (pPVar4 = (pPVar3->fields).BJJFDMHOBNB, pPVar4 != (PKHMIGFEJCL_ELHOKIPELBO_o *)0x0)) {
        lVar6 = (pPVar4->fields).HDGEOJGHEOE;
        if (lVar6 < 1) {
          uVar5 = 0;
        }
        else {
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04565b87 == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b87 = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pPVar3 = (__this->fields).AAJBIMFNMBB;
          if (pPVar3 == (PKHMIGFEJCL_o *)0x0) goto LAB_0364761c;
          uVar5 = lVar6 - NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM;
          uVar5 = uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU);
        }
        pPVar4 = (pPVar3->fields).BJJFDMHOBNB;
        if ((pPVar4 != (PKHMIGFEJCL_ELHOKIPELBO_o *)0x0) &&
           (__this_00 != (System_Text_StringBuilder_o *)0x0)) {
          System_Text_StringBuilder__Append
                    (__this_00,(pPVar4->fields).BMGMGAAPFGO,(MethodInfo *)0x0);
          System_Text_StringBuilder__Append(__this_00,StringLiteral_22485,(MethodInfo *)0x0);
          pPVar3 = (__this->fields).AAJBIMFNMBB;
          if ((pPVar3 != (PKHMIGFEJCL_o *)0x0) &&
             (pPVar4 = (pPVar3->fields).BJJFDMHOBNB, pPVar4 != (PKHMIGFEJCL_ELHOKIPELBO_o *)0x0)) {
            System_Text_StringBuilder__Append
                      (__this_00,(pPVar4->fields).JDKKCDBDNLB,(MethodInfo *)0x0);
            System_Text_StringBuilder__Append(__this_00,StringLiteral_22485,(MethodInfo *)0x0);
            if (uVar5 != 0) {
              System_Text_StringBuilder__Append(__this_00,uVar5,(MethodInfo *)0x0);
            }
            goto LAB_03647600;
          }
        }
      }
    }
  }
LAB_0364761c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

