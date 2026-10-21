// CLENFJMNFPJ$$EPBENPDCBFE @ RVA 0x30AB710

bool CLENFJMNFPJ__EPBENPDCBFE
               (CLENFJMNFPJ_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,
               System_Collections_Generic_List_string__o *FPEHEJBLCAO,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  OLKKAIFGGAK_o *pOVar3;
  HEFOANCOHDC_o *pHVar4;
  PJKHAJKEHEL_o *pPVar5;
  PJKHAJKEHEL_c *pPVar6;
  System_String_o *KGLJICLJHEL;
  
  if ((DAT_0456619d & 1) == 0) {
    FUN_01bab630(&ADGIHFGIFHO_TypeInfo);
    FUN_01bab630(&MMDDDDFHOLG_TypeInfo);
    DAT_0456619d = 1;
  }
  pHVar4 = (__this->fields).super.super._MEFGNAIILBJ_k__BackingField;
  if ((pHVar4 != (HEFOANCOHDC_o *)0x0) &&
     (pOVar3 = (pHVar4->fields)._BGCNGEAHHFN_k__BackingField, pOVar3 != (OLKKAIFGGAK_o *)0x0)) {
    bVar2 = OLKKAIFGGAK__HODPOCMNNIN(pOVar3,(MethodInfo *)0x0);
    if (bVar2) {
      pHVar4 = (__this->fields).super.super._MEFGNAIILBJ_k__BackingField;
      if ((pHVar4 == (HEFOANCOHDC_o *)0x0) ||
         (pOVar3 = (pHVar4->fields)._BGCNGEAHHFN_k__BackingField, pOVar3 == (OLKKAIFGGAK_o *)0x0))
      goto LAB_031ab7f0;
      pPVar5 = (pOVar3->fields).FAPMJJBOFEF;
      if (pPVar5 != (PJKHAJKEHEL_o *)0x0) {
        pPVar6 = pPVar5->klass;
        bVar1 = (ADGIHFGIFHO_TypeInfo->_2).naturalAligment;
        if ((bVar1 <= (pPVar6->_2).naturalAligment) &&
           ((pPVar6->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)ADGIHFGIFHO_TypeInfo)) {
          KGLJICLJHEL = (__this->fields).DDNFJENBJFO;
          if ((MMDDDDFHOLG_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar2 = MMDDDDFHOLG__MDMGLEMDCDP(KGLJICLJHEL,(MethodInfo *)0x0);
          return bVar2;
        }
      }
    }
    return true;
  }
LAB_031ab7f0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

