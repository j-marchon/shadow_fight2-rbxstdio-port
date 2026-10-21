// EEGDOGKBLNG$$GNPEGNJDJJO @ RVA 0x3070C44

bool EEGDOGKBLNG__GNPEGNJDJJO
               (EEGDOGKBLNG_o *__this,PIADCKMDDAK_o *OAOLCGAIILM,
               System_Collections_Generic_Dictionary_string__int__o *JKKDLIOMHAJ,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  
  if ((DAT_04565f75 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_ContainsKey__);
    __this = (EEGDOGKBLNG_o *)
             FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_get_Item__);
    DAT_04565f75 = 1;
  }
  if ((OAOLCGAIILM != (PIADCKMDDAK_o *)0x0) &&
     (JKKDLIOMHAJ != (System_Collections_Generic_Dictionary_string__int__o *)0x0)) {
    iVar1 = (OAOLCGAIILM->fields).GDKPGIBMFPA;
    bVar2 = System_Collections_Generic_Dictionary<object,_int>__ContainsKey
                      ((System_Collections_Generic_Dictionary_object__int__o *)JKKDLIOMHAJ,
                       (Il2CppObject *)(OAOLCGAIILM->fields).GJNOEAKNMOG,
                       Method_System_Collections_Generic_Dictionary<string,_int>_ContainsKey__);
    if ((bVar2) &&
       (iVar3 = System_Collections_Generic_Dictionary<object,_int>__get_Item
                          ((System_Collections_Generic_Dictionary_object__int__o *)JKKDLIOMHAJ,
                           (Il2CppObject *)(OAOLCGAIILM->fields).GJNOEAKNMOG,
                           Method_System_Collections_Generic_Dictionary<string,_int>_get_Item__),
       iVar3 != 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = 0 < iVar1;
    }
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

