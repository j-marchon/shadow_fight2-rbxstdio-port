// PKHMIGFEJCL$$FCOONLKJDAK @ RVA 0x30C1CD0

void PKHMIGFEJCL__FCOONLKJDAK(PKHMIGFEJCL_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566292 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_PKHMIGFEJCL_PLLEKFKIIME>_Clear__
                );
    DAT_04566292 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields)._NGBDCCBGNKH_k__BackingField;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__Clear
              (__this_00,
               Method_System_Collections_Generic_Dictionary<string,_PKHMIGFEJCL_PLLEKFKIIME>_Clear__
              );
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

