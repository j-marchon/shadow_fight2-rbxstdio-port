// MBDJMJLHFOO$$HBMICHOLLMF @ RVA 0x34B19CC

MBDJMJLHFOO_MJFFMMHJCNB_o *
MBDJMJLHFOO__HBMICHOLLMF(MBDJMJLHFOO_o *__this,int32_t JJMCKHDALCF,MethodInfo *method)

{
  System_Collections_Generic_List_MBDJMJLHFOO_MJFFMMHJCNB__o *__this_00;
  MBDJMJLHFOO_MJFFMMHJCNB_o *pMVar1;
  
  if ((DAT_04568562 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MBDJMJLHFOO_MJFFMMHJCNB>_get_Item__);
    DAT_04568562 = 1;
  }
  if (JJMCKHDALCF < (__this->fields).MONBPDGKCOM) {
    __this_00 = (__this->fields).DGPKPHAHOJP;
    if (__this_00 != (System_Collections_Generic_List_MBDJMJLHFOO_MJFFMMHJCNB__o *)0x0) {
      pMVar1 = (MBDJMJLHFOO_MJFFMMHJCNB_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,JJMCKHDALCF,
                          Method_System_Collections_Generic_List<MBDJMJLHFOO_MJFFMMHJCNB>_get_Item__
                         );
      return pMVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return (MBDJMJLHFOO_MJFFMMHJCNB_o *)0x0;
}

