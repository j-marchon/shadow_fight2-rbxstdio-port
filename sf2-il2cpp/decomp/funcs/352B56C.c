// ALJBCELIEHC.MIGIBEEIIMA$$DCHFKAHELPN @ RVA 0x352B56C

bool ALJBCELIEHC_MIGIBEEIIMA__DCHFKAHELPN
               (ALJBCELIEHC_MIGIBEEIIMA_o *__this,NFEOGKEAFHL_o *x,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_int__o *__this_00;
  
  if ((DAT_04568a28 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Contains__);
    DAT_04568a28 = 1;
  }
  if ((x != (NFEOGKEAFHL_o *)0x0) &&
     (__this_00 = (x->fields).GPNNHMIJLGL,
     __this_00 != (System_Collections_Generic_List_int__o *)0x0)) {
    bVar1 = System_Collections_Generic_List<int>__Contains
                      (__this_00,(__this->fields).level,
                       Method_System_Collections_Generic_List<int>_Contains__);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

