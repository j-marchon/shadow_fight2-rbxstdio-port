// OGGBALCBCLL$$JILLNCBMKNL @ RVA 0x318AEC8

bool OGGBALCBCLL__JILLNCBMKNL(OGGBALCBCLL_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_string__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566a0f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Contains__);
    FUN_01bab630(&StringLiteral_19962);
    DAT_04566a0f = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields)._BILAHNNHICB_k__BackingField;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    bVar1 = System_Collections_Generic_List<object>__Contains
                      ((System_Collections_Generic_List_object__o *)__this_00,StringLiteral_19962,
                       Method_System_Collections_Generic_List<string>_Contains__);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

