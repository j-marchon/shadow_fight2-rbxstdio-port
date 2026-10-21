// DLAFGNMCMFA$$.cctor @ RVA 0x3521B90

void DLAFGNMCMFA___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__int__o *__this;
  System_Collections_Generic_Dictionary_int__int__o **ppSVar1;
  DLAFGNMCMFA_StaticFields *pDVar2;
  
  if ((DAT_045689c7 & 1) == 0) {
    FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_int>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<int,_int>_TypeInfo);
    DAT_045689c7 = 1;
  }
  pDVar2 = DLAFGNMCMFA_TypeInfo->static_fields;
  pDVar2->MMFABIKGCOH = 0;
  pDVar2->CNNNAMKEGBB = 0;
  pDVar2->KODKKHPADDM = 0.0;
  *(undefined8 *)((long)&pDVar2->KODKKHPADDM + 1) = 0;
  __this = (System_Collections_Generic_Dictionary_int__int__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<int,_int>_TypeInfo);
  System_Collections_Generic_Dictionary<int,_int>___ctor
            (__this,Method_System_Collections_Generic_Dictionary<int,_int>__ctor__);
  ppSVar1 = &DLAFGNMCMFA_TypeInfo->static_fields->HGMHAHBNEOA;
  *ppSVar1 = __this;
  thunk_FUN_01c20e04(ppSVar1,__this);
  return;
}

