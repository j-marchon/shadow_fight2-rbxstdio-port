// ACHLOMELAJE.MDHCBOFHAEL$$JDHAHDALAOA @ RVA 0x3059024

System_Collections_Generic_Dictionary_ValueCollection_string__OLKPEJMEBPJ__o *
ACHLOMELAJE_MDHCBOFHAEL__JDHAHDALAOA(ACHLOMELAJE_MDHCBOFHAEL_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_ValueCollection_string__OLKPEJMEBPJ__o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565f0d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_OLKPEJMEBPJ>_get_Values__);
    DAT_04565f0d = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).DEKLKEHGJEB;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pSVar1 = (System_Collections_Generic_Dictionary_ValueCollection_string__OLKPEJMEBPJ__o *)
             System_Collections_Generic_Dictionary<object,_object>__get_Values
                       (__this_00,
                        Method_System_Collections_Generic_Dictionary<string,_OLKPEJMEBPJ>_get_Values__
                       );
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

