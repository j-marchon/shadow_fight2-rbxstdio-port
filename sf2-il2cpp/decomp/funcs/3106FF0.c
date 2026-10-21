// OPNFCOGALLI$$DAAPHDMHHAN @ RVA 0x3106FF0

void OPNFCOGALLI__DAAPHDMHHAN(OPNFCOGALLI_o *__this,ECENNHNBAME_o *NLEBDPHNIDI,MethodInfo *method)

{
  System_Collections_Generic_List_IIMNGGHGKOD__o *PLPFOJADDML;
  ECENNHNBAME_HJPFANEPGJF_o *pEVar1;
  
  if ((DAT_04566513 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IIMNGGHGKOD>_get_Count__);
    FUN_01bab630(&Method_OMLLDCIMLBB<object>_CallEvent__);
    DAT_04566513 = 1;
  }
  if (((NLEBDPHNIDI != (ECENNHNBAME_o *)0x0) &&
      (pEVar1 = (NLEBDPHNIDI->fields).DMGLMCBIAGL, pEVar1 != (ECENNHNBAME_HJPFANEPGJF_o *)0x0)) &&
     (PLPFOJADDML = (pEVar1->fields).NEIJJHEFLHP,
     PLPFOJADDML != (System_Collections_Generic_List_IIMNGGHGKOD__o *)0x0)) {
    if (0 < (PLPFOJADDML->fields)._size) {
      OMLLDCIMLBB<object>__CallEvent
                ((OMLLDCIMLBB_object__o *)__this,5,(Il2CppObject *)PLPFOJADDML,
                 Method_OMLLDCIMLBB<object>_CallEvent__);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

