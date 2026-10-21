// TypeDefIndex 3168
// Namespace: 
// public class DJOGJDHNNJC : FDGBFCHBBLM
// Fields:
//   private const string KOEKAIKHEKK = "Default";
//   private const string HKMDNLJFNDK = "Paid";
//   private readonly Dictionary<string, string> HBEMBIJGEJL; // 0x10

// ===== public string JAKINMONMNJ()  [RVA 0x34E16A0]
// DJOGJDHNNJC$$JAKINMONMNJ @ RVA 0x34E16A0

System_String_o * DJOGJDHNNJC__JAKINMONMNJ(DJOGJDHNNJC_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  DBIINAFCKME_o *pDVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject **ppIVar4;
  Il2CppObject *local_18;
  
  if ((DAT_04568736 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_TryGetValue__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_10086/*"Paid"*/);
    FUN_01bab630(&StringLiteral_5245/*"Default"*/);
    DAT_04568736 = 1;
  }
  local_18 = (Il2CppObject *)0x0;
  iVar2 = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0);
  if (iVar2 == 0) {
    ppIVar4 = (Il2CppObject **)&StringLiteral_10086/*"Paid"*/;
  }
  else {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pDVar3 = NLPJLHOEAOE__AHCCELOIBCC((MethodInfo *)0x0);
    if ((pDVar3 == (DBIINAFCKME_o *)0x0) ||
       (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (__this->fields).HBEMBIJGEJL,
       __this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      (__this_00,(Il2CppObject *)(pDVar3->fields).MIGGLEOLMPE,&local_18,
                       Method_System_Collections_Generic_Dictionary<string,_string>_TryGetValue__);
    ppIVar4 = &local_18;
    if (!bVar1) {
      ppIVar4 = (Il2CppObject **)&StringLiteral_5245/*"Default"*/;
    }
  }
  return (System_String_o *)*ppIVar4;
}


// ===== public void .ctor()  [RVA 0x34E177C]
// DJOGJDHNNJC$$.ctor @ RVA 0x34E177C

void DJOGJDHNNJC___ctor(DJOGJDHNNJC_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568737 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_string>_TypeInfo);
    FUN_01bab630(&StringLiteral_8153/*"Japan"*/);
    FUN_01bab630(&StringLiteral_19271/*"jpn"*/);
    FUN_01bab630(&StringLiteral_4337/*"China"*/);
    FUN_01bab630(&StringLiteral_8280/*"Korea"*/);
    FUN_01bab630(&StringLiteral_16995/*"chn"*/);
    FUN_01bab630(&StringLiteral_19324/*"kor"*/);
    FUN_01bab630(&StringLiteral_16996/*"chn_tr"*/);
    DAT_04568737 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_string>_TypeInfo,
                                 method);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_00,Method_System_Collections_Generic_Dictionary<string,_string>__ctor__);
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_00,StringLiteral_16995/*"chn"*/,StringLiteral_4337/*"China"*/,
               Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_00,StringLiteral_16996/*"chn_tr"*/,StringLiteral_4337/*"China"*/,
               Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_00,StringLiteral_19271/*"jpn"*/,StringLiteral_8153/*"Japan"*/,
               Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_00,StringLiteral_19324/*"kor"*/,StringLiteral_8280/*"Korea"*/,
               Method_System_Collections_Generic_Dictionary<string,_string>_Add__);
    (__this->fields).HBEMBIJGEJL =
         (System_Collections_Generic_Dictionary_string__string__o *)__this_00;
    thunk_FUN_01c20e04(&__this->fields,__this_00);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

