// LEGDPJHPEOB$$JMBCALDIOHO @ RVA 0x3549A90

System_String_o * LEGDPJHPEOB__JMBCALDIOHO(LEGDPJHPEOB_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Text_StringBuilder_o *__this_00;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  PKHMIGFEJCL_o *pPVar3;
  HOOAAGABMBL_o *pHVar4;
  
  if ((DAT_04568b25 & 1) == 0) {
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_22485);
    DAT_04568b25 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Text_StringBuilder_o *)
              thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo,method);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  pPVar3 = (__this->fields).AAJBIMFNMBB;
  if (pPVar3 != (PKHMIGFEJCL_o *)0x0) {
    pHVar4 = (pPVar3->fields).CJLNOJMBNPN;
    if (pHVar4 == (HOOAAGABMBL_o *)0x0) {
      if (__this_00 != (System_Text_StringBuilder_o *)0x0) goto LAB_03649b58;
    }
    else if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Append
                (__this_00,(pHVar4->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
      pPVar3 = (__this->fields).AAJBIMFNMBB;
      if (pPVar3 != (PKHMIGFEJCL_o *)0x0) {
        bVar1 = System_String__IsNullOrEmpty((pPVar3->fields).LPFMHPBACOJ,(MethodInfo *)0x0);
        if (!bVar1) {
          System_Text_StringBuilder__Append(__this_00,StringLiteral_22485,(MethodInfo *)0x0);
          pPVar3 = (__this->fields).AAJBIMFNMBB;
          if (pPVar3 == (PKHMIGFEJCL_o *)0x0) goto LAB_03649b70;
          System_Text_StringBuilder__Append
                    (__this_00,(pPVar3->fields).LPFMHPBACOJ,(MethodInfo *)0x0);
        }
LAB_03649b58:
                    /* WARNING: Could not recover jumptable at 0x03649b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pSVar2 = (System_String_o *)
                 (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                           (__this_00,(__this_00->klass->vtable)._3_ToString.method);
        return pSVar2;
      }
    }
  }
LAB_03649b70:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

