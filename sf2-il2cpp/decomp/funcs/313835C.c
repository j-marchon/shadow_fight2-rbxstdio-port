// OFFIONDOEPM$$BNMJCGDECGI @ RVA 0x313835C

System_String_o * OFFIONDOEPM__BNMJCGDECGI(System_String_o *NEJHIEOHMCF,MethodInfo *method)

{
  bool bVar1;
  OFFIONDOEPM_o *pOVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_String_o *pSVar3;
  System_String_o *local_18;
  
  if ((DAT_04566710 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_TryGetValue__);
    DAT_04566710 = 1;
  }
  local_18 = (System_String_o *)0x0;
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(NEJHIEOHMCF,(MethodInfo *)0x0);
  pSVar3 = (System_String_o *)0x0;
  if (!bVar1) {
    pOVar2 = OFFIONDOEPM__AIHNLLGNBLC((MethodInfo *)0x0);
    if ((pOVar2 == (OFFIONDOEPM_o *)0x0) ||
       (__this = (System_Collections_Generic_Dictionary_object__object__o *)
                 (pOVar2->fields).FCKJGGOFGBH,
       __this == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      (__this,(Il2CppObject *)NEJHIEOHMCF,(Il2CppObject **)&local_18,
                       Method_System_Collections_Generic_Dictionary<string,_string>_TryGetValue__);
    pSVar3 = local_18;
    if (!bVar1) {
      pSVar3 = NEJHIEOHMCF;
    }
  }
  return pSVar3;
}

