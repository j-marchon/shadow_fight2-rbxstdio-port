// IBNHAGICAJF$$FNAIOKENLCA @ RVA 0x334C450

void IBNHAGICAJF__FNAIOKENLCA(IBNHAGICAJF_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  ACHLOMELAJE_o *pAVar1;
  MEMHEPBAJJA_o *__this_00;
  System_Action_MEMHEPBAJJA__o *pSVar2;
  System_String_o **ppSVar3;
  
  if ((DAT_04567a05 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567a05 = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar1 == (ACHLOMELAJE_o *)0x0) goto LAB_0344c5f8;
  __this_00 = ACHLOMELAJE__ECALNOBINKI
                        (pAVar1,(__this->fields).super._LLOFHDDBKFD_k__BackingField,
                         (MethodInfo *)0x0);
  if (__this_00 == (MEMHEPBAJJA_o *)0x0) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar1 == (ACHLOMELAJE_o *)0x0) goto LAB_0344c5f8;
    __this_00 = ACHLOMELAJE__BLJJKMIEHFG
                          (pAVar1,(__this->fields).super._LLOFHDDBKFD_k__BackingField,
                           (__this->fields).super.JPCLFPPBNNN,(MethodInfo *)0x0);
    pSVar2 = (__this->fields).super.EKJDIBEOCDF;
    if ((pSVar2 == (System_Action_MEMHEPBAJJA__o *)0x0) ||
       ((*(code *)(pSVar2->fields).super.super.invoke_impl)
                  ((pSVar2->fields).super.super.method_code,__this_00,
                   (pSVar2->fields).super.super.method), __this_00 == (MEMHEPBAJJA_o *)0x0))
    goto LAB_0344c5f8;
  }
  MEMHEPBAJJA__FKKKDIGNEFO
            (__this_00,(Il2CppObject *)AAJBIMFNMBB,(__this->fields).super.EAJHGODFKID,
             (__this->fields).super.HLFBMBHOPMI,(MethodInfo *)0x0);
  ppSVar3 = &(__this_00->fields).KBCOHMPJELJ;
  *ppSVar3 = (__this->fields).super.JPCLFPPBNNN;
  thunk_FUN_01c20e04(ppSVar3);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar1 != (ACHLOMELAJE_o *)0x0) {
    CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar1,false,(MethodInfo *)0x0);
    return;
  }
LAB_0344c5f8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

