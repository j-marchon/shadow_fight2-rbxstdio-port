// NDGHNMIHOMN$$PBOALOOBNEK @ RVA 0x3563F88

KKCEIILPLEC_o *
NDGHNMIHOMN__PBOALOOBNEK(NDGHNMIHOMN_o *__this,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  System_Collections_Generic_List_KKCEIILPLEC__o *__this_00;
  KKCEIILPLEC_o *pKVar1;
  
  if ((DAT_04568be2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KKCEIILPLEC>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KKCEIILPLEC>_get_Item__);
    DAT_04568be2 = 1;
  }
  __this_00 = (__this->fields).PEMHPNLDPHD;
  if (__this_00 != (System_Collections_Generic_List_KKCEIILPLEC__o *)0x0) {
    if (DPJIDNBJIBG < (__this_00->fields)._size) {
      pKVar1 = (KKCEIILPLEC_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,DPJIDNBJIBG,
                          Method_System_Collections_Generic_List<KKCEIILPLEC>_get_Item__);
      return pKVar1;
    }
    return (KKCEIILPLEC_o *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

