// BANPLPOPIGI$$GFIHKNPILPL @ RVA 0x33C8948

int32_t BANPLPOPIGI__GFIHKNPILPL(BANPLPOPIGI_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567e04 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_List<ICPMLKOEANF>>_get_Count__);
    DAT_04567e04 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).IBEGIIPEOAK;
  if (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    iVar1 = System_Collections_Generic_Dictionary<int,_object>__get_Count
                      (__this_00,
                       Method_System_Collections_Generic_Dictionary<int,_List<ICPMLKOEANF>>_get_Count__
                      );
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

