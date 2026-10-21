// NLPJLHOEAOE$$GMJMEKENPAP @ RVA 0x3204D14

System_Collections_Generic_List_HEFOANCOHDC__o *
NLPJLHOEAOE__GMJMEKENPAP(HOOAAGABMBL_o *CNDPGGAFHEA,bool IGELEPDNBBK,MethodInfo *method)

{
  IGFGDDANEPE_o *pIVar1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this;
  System_String_o *KGLJICLJHEL;
  
  method_00 = (MethodInfo *)(ulong)IGELEPDNBBK;
  if ((DAT_04566e17 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HEFOANCOHDC>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566e17 = 1;
    method_00 = extraout_x1;
  }
  if (CNDPGGAFHEA == (HOOAAGABMBL_o *)0x0) {
    __this = (System_Collections_Generic_List_HEFOANCOHDC__o *)
             thunk_FUN_01bda818(System_Collections_Generic_List<HEFOANCOHDC>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this,
               Method_System_Collections_Generic_List<HEFOANCOHDC>__ctor__);
  }
  else {
    if (IGELEPDNBBK) {
      KGLJICLJHEL = (CNDPGGAFHEA->fields)._COIPKAKHDFP_k__BackingField;
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        method_00 = extraout_x1_00;
      }
      pIVar1 = NLPJLHOEAOE__JNFIBDBHNOA(KGLJICLJHEL,method_00);
      if (pIVar1 != (IGFGDDANEPE_o *)0x0) {
        return (pIVar1->fields).PAPANCDPPIF;
      }
    }
    __this = (CNDPGGAFHEA->fields)._GJPBKHJCFBE_k__BackingField;
  }
  return __this;
}

