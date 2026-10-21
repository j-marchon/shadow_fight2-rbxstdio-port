// OFFIONDOEPM$$EOFPPCLIMNO @ RVA 0x3136DA0

System_String_o *
OFFIONDOEPM__EOFPPCLIMNO
          (System_String_o *NEJHIEOHMCF,
          System_Collections_Generic_Dictionary_string__string__o *FBEEEALALMJ,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *local_28;
  
  if ((DAT_0456670f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_TryGetValue__);
    DAT_0456670f = 1;
  }
  local_28 = (System_String_o *)0x0;
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(NEJHIEOHMCF,(MethodInfo *)0x0);
  pSVar2 = (System_String_o *)0x0;
  if (!bVar1) {
    if (FBEEEALALMJ == (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      ((System_Collections_Generic_Dictionary_object__object__o *)FBEEEALALMJ,
                       (Il2CppObject *)NEJHIEOHMCF,(Il2CppObject **)&local_28,
                       Method_System_Collections_Generic_Dictionary<string,_string>_TryGetValue__);
    pSVar2 = local_28;
    if (!bVar1) {
      pSVar2 = NEJHIEOHMCF;
    }
  }
  return pSVar2;
}

