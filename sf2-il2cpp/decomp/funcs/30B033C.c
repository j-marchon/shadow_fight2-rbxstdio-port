// CFEANGJDHEE$$.cctor @ RVA 0x30B033C

void CFEANGJDHEE___cctor(MethodInfo *method)

{
  UnityEngine_Color32_Fields __this;
  UnityEngine_Color32_o *pUVar1;
  CFEANGJDHEE_StaticFields *pCVar2;
  
  if ((DAT_045661d6 & 1) == 0) {
    FUN_01bab630(&CFEANGJDHEE_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<LogType>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<LogType>__ctor__);
    FUN_01bab630(&System_Collections_Generic_HashSet<LogType>_TypeInfo);
    DAT_045661d6 = 1;
  }
  (CFEANGJDHEE_TypeInfo->static_fields->OCPJOMGAAKD).fields.rgba = -0xf0f10;
  pCVar2 = CFEANGJDHEE_TypeInfo->static_fields;
  (pCVar2->OCPJOMGAAKD).fields.r = 0xfe;
  (pCVar2->OCPJOMGAAKD).fields.g = 0xef;
  (pCVar2->OCPJOMGAAKD).fields.b = 0xb3;
  (pCVar2->OCPJOMGAAKD).fields.a = 0xff;
  (CFEANGJDHEE_TypeInfo->static_fields->KFNIDCAJPEM).fields.rgba = -0x454501;
  __this = (UnityEngine_Color32_Fields)
           thunk_FUN_01bda818(System_Collections_Generic_HashSet<LogType>_TypeInfo);
  System_Collections_Generic_HashSet<Int32Enum>___ctor
            ((System_Collections_Generic_HashSet_T__o *)__this,
             Method_System_Collections_Generic_HashSet<LogType>__ctor__);
  if (__this != (UnityEngine_Color32_Fields)0x0) {
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)__this,3,
               Method_System_Collections_Generic_HashSet<LogType>_Add__);
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)__this,2,
               Method_System_Collections_Generic_HashSet<LogType>_Add__);
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)__this,4,
               Method_System_Collections_Generic_HashSet<LogType>_Add__);
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)__this,1,
               Method_System_Collections_Generic_HashSet<LogType>_Add__);
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)__this,0,
               Method_System_Collections_Generic_HashSet<LogType>_Add__);
    pUVar1 = &CFEANGJDHEE_TypeInfo->static_fields->MEIPIGNEPHF;
    pUVar1->fields = __this;
    thunk_FUN_01c20e04(pUVar1,__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

