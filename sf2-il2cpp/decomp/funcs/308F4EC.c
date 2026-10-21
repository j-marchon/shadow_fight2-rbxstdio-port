// AKOMJPINHEN$$CBEOFBGGGDG @ RVA 0x308F4EC

void AKOMJPINHEN__CBEOFBGGGDG(AKOMJPINHEN_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  OLCBPIHLPEC_o *OMPNCGNDGMI;
  CMOAIOLDOIJ_o *__this_00;
  MethodInfo *method_00;
  
  if ((DAT_04566086 & 1) == 0) {
    FUN_01bab630(&CMOAIOLDOIJ_TypeInfo);
    FUN_01bab630(&IOHDCPBJGFF_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<OLCBPIHLPEC>__);
    DAT_04566086 = 1;
  }
  if ((IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) &&
     (OMPNCGNDGMI = (OLCBPIHLPEC_o *)
                    KEFHDOHHHML__PFNEPJAFEDF<object>
                              (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<OLCBPIHLPEC>__),
     OMPNCGNDGMI != (OLCBPIHLPEC_o *)0x0)) {
    if ((OMPNCGNDGMI->fields).NGODFBDEMLE == 0) {
      __this_00 = (CMOAIOLDOIJ_o *)thunk_FUN_01bda818(IOHDCPBJGFF_TypeInfo);
      method_00 = (MethodInfo *)0x0;
      IOHDCPBJGFF___ctor((IOHDCPBJGFF_o *)__this_00,OMPNCGNDGMI,(MethodInfo *)0x0);
    }
    else {
      __this_00 = (CMOAIOLDOIJ_o *)thunk_FUN_01bda818(CMOAIOLDOIJ_TypeInfo);
      method_00 = (MethodInfo *)0x0;
      CMOAIOLDOIJ___ctor(__this_00,OMPNCGNDGMI,(MethodInfo *)0x0);
    }
    AKOMJPINHEN__PAKCJFFMNFH(__this,(ODKDFMHHLIP_o *)__this_00,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

