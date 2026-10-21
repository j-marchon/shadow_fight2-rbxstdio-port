// CEJLHKFNEDB$$JAGMOPPIMKB @ RVA 0x334C870

void CEJLHKFNEDB__JAGMOPPIMKB(System_String_o *GMGGINDHNPI,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_Xml_XmlDocument_o *EKEMDOEAFHP;
  long *plVar3;
  System_String_o *pSVar4;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567a0b & 1) == 0) {
    FUN_01bab630(&EOOEOHKLOFJ_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_21892);
    FUN_01bab630(&StringLiteral_22364);
    FUN_01bab630(&StringLiteral_14694);
    FUN_01bab630(&StringLiteral_11416);
    FUN_01bab630(&StringLiteral_21895);
    FUN_01bab630(&StringLiteral_14765);
    FUN_01bab630(&StringLiteral_14775);
    DAT_04567a0b = 1;
    method = extraout_x1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo,method);
  }
  pSVar2 = MGENAMAJALB__CPIACIDINLI((MethodInfo *)0x0);
  EKEMDOEAFHP = GIAMPEGMNHE__GMNIIJJFIJK(pSVar2,StringLiteral_21892,0,true,(MethodInfo *)0x0);
  if (EKEMDOEAFHP == (System_Xml_XmlDocument_o *)0x0) {
    return;
  }
  plVar3 = (long *)(*(EKEMDOEAFHP->klass->vtable)._51_get_Item.methodPtr)
                             (EKEMDOEAFHP,StringLiteral_11416,
                              (EKEMDOEAFHP->klass->vtable)._51_get_Item.method);
  if (((plVar3 == (long *)0x0) ||
      (plVar3 = (long *)(**(code **)(*plVar3 + 0x468))
                                  (plVar3,StringLiteral_14775,*(undefined8 *)(*plVar3 + 0x470)),
      plVar3 == (long *)0x0)) ||
     (plVar3 = (long *)(**(code **)(*plVar3 + 0x468))
                                 (plVar3,StringLiteral_14765,*(undefined8 *)(*plVar3 + 0x470)),
     plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  (**(code **)(*plVar3 + 0x558))
            (plVar3,StringLiteral_14694,GMGGINDHNPI,*(undefined8 *)(*plVar3 + 0x560));
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = MGENAMAJALB__CPIACIDINLI((MethodInfo *)0x0);
  pSVar2 = System_String__Format
                     (StringLiteral_22364,(Il2CppObject *)pSVar2,(Il2CppObject *)StringLiteral_21892
                      ,(MethodInfo *)0x0);
  pSVar4 = MGENAMAJALB__CPIACIDINLI((MethodInfo *)0x0);
  pSVar4 = System_String__Format
                     (StringLiteral_22364,(Il2CppObject *)pSVar4,StringLiteral_21895,
                      (MethodInfo *)0x0);
  GIAMPEGMNHE__DGLLHFNFGNO(EKEMDOEAFHP,pSVar2,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = NLPJLHOEAOE__LJAKPLJDGBJ((MethodInfo *)0x0);
  if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(EOOEOHKLOFJ_TypeInfo);
  }
  bVar1 = EOOEOHKLOFJ__EGFIEDINDAC(pSVar2,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  GIAMPEGMNHE__DGLLHFNFGNO(EKEMDOEAFHP,pSVar4,(MethodInfo *)0x0);
  return;
}

