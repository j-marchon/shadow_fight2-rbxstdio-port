// ICOEHFKOMGO$$LFENGGKOJDO @ RVA 0x329E084

void ICOEHFKOMGO__LFENGGKOJDO
               (System_String_o *KGLJICLJHEL,System_Type_o *DCMHEKHDDIL,System_Type_o *MCEDPEFKJDE,
               MethodInfo *method)

{
  System_Collections_Generic_List_string__o *JHNJBELOCMB;
  System_Collections_Generic_List_string__o *CBHCNFMLLCM;
  MethodInfo *in_x5;
  
  if ((DAT_045673b1 & 1) == 0) {
    FUN_01bab630(&ICOEHFKOMGO_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_045673b1 = 1;
  }
  JHNJBELOCMB = (System_Collections_Generic_List_string__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)JHNJBELOCMB,
             Method_System_Collections_Generic_List<string>__ctor__);
  CBHCNFMLLCM = (System_Collections_Generic_List_string__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)CBHCNFMLLCM,
             Method_System_Collections_Generic_List<string>__ctor__);
  if ((ICOEHFKOMGO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  ICOEHFKOMGO__LFENGGKOJDO(KGLJICLJHEL,DCMHEKHDDIL,MCEDPEFKJDE,JHNJBELOCMB,CBHCNFMLLCM,in_x5);
  return;
}

