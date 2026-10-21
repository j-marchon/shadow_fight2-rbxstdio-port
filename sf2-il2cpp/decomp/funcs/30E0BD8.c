// BCOICIIDFPD$$.ctor @ RVA 0x30E0BD8

void BCOICIIDFPD___ctor(BCOICIIDFPD_o *__this,MGNPHCAAEIO_OPCJEEFOCFB_o *IMMNELPBGIF,
                       MethodInfo *method)

{
  int32_t iVar1;
  ACHLOMELAJE_o *__this_00;
  System_String_o *JLAFGLDIFOC;
  MCCHIAKPFEL_o *__this_01;
  System_String_o *KGLJICLJHEL;
  System_String_o **ppSVar2;
  int32_t *piVar3;
  
  if ((DAT_0456639d & 1) == 0) {
    FUN_01bab630(&MCCHIAKPFEL_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_0456639d = 1;
  }
  ppSVar2 = &(__this->fields)._COIPKAKHDFP_k__BackingField;
  *ppSVar2 = StringLiteral_1;
  thunk_FUN_01c20e04(ppSVar2);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
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
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (ACHLOMELAJE_o *)0x0) {
    iVar1 = ACHLOMELAJE__EOEAKGGDBFH(__this_00,(MethodInfo *)0x0);
    piVar3 = &(__this->fields).HMHEEKFFCPL;
    *piVar3 = iVar1;
    (__this->fields).EHOFCENCPNF = iVar1 * 100;
    (__this->fields)._HFPMLGFDOKC_k__BackingField = (IMMNELPBGIF->fields).ADCKCMDHIHM;
    (__this->fields)._GDKBFEGNHNP_k__BackingField =
         (bool_conflict)((IMMNELPBGIF->fields).OAPLLNNEONM & 1);
    (__this->fields)._COIPKAKHDFP_k__BackingField = (IMMNELPBGIF->fields).JIJLBFGKNJK;
    thunk_FUN_01c20e04(ppSVar2);
    (__this->fields)._JHGGGMJEENP_k__BackingField = (IMMNELPBGIF->fields).GPOEEHGGIII;
    thunk_FUN_01c20e04();
    (__this->fields)._IANGGJCONIH_k__BackingField = (IMMNELPBGIF->fields).KPDPJONADPJ;
    thunk_FUN_01c20e04();
    KGLJICLJHEL = (IMMNELPBGIF->fields).JIJLBFGKNJK;
    JLAFGLDIFOC = System_Int32__ToString((int32_t)piVar3,(MethodInfo *)0x0);
    __this_01 = (MCCHIAKPFEL_o *)thunk_FUN_01bda818(MCCHIAKPFEL_TypeInfo);
    MCCHIAKPFEL___ctor(__this_01,KGLJICLJHEL,JLAFGLDIFOC,0,0,(MethodInfo *)0x0);
    (__this->fields)._BLIMDANKDIH_k__BackingField = __this_01;
    thunk_FUN_01c20e04(&__this->fields,__this_01);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

