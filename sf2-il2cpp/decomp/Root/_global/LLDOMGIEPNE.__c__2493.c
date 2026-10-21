// TypeDefIndex 2493
// Namespace: 
// [Serializable]
// private sealed class LLDOMGIEPNE.<>c
// Fields:
//   public static readonly LLDOMGIEPNE.<>c <>9; // 0x0
//   public static Func<KeyValuePair<string, string>, string> <>9__21_9; // 0x8

// ===== private static void .cctor()  [RVA 0x337A3F4]
// LLDOMGIEPNE.<>c$$.cctor @ RVA 0x337A3F4

void LLDOMGIEPNE_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04567b7b & 1) == 0) {
    FUN_01bab630(&LLDOMGIEPNE_<>c_TypeInfo);
    DAT_04567b7b = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(LLDOMGIEPNE_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  LLDOMGIEPNE_<>c_TypeInfo->static_fields->__9 = (LLDOMGIEPNE___c_o *)__this;
  thunk_FUN_01c20e04(LLDOMGIEPNE_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== public void .ctor()  [RVA 0x337A45C]
// LLDOMGIEPNE.<>c$$.ctor @ RVA 0x337A45C

void LLDOMGIEPNE_<>c___ctor(LLDOMGIEPNE___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal string IJLAGGGOAKC(KeyValuePair<string, string> kvp)  [RVA 0x337A464]
// LLDOMGIEPNE.<>c$$IJLAGGGOAKC @ RVA 0x337A464

System_String_o *
LLDOMGIEPNE_<>c__IJLAGGGOAKC
          (LLDOMGIEPNE___c_o *__this,System_Collections_Generic_KeyValuePair_string__string__o kvp,
          MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04567b7c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_string>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_string>_get_Value__);
    FUN_01bab630(&StringLiteral_2088/*": "*/);
    DAT_04567b7c = 1;
  }
  pSVar1 = System_String__Concat
                     (kvp.fields.key,StringLiteral_2088/*": "*/,kvp.fields.value,(MethodInfo *)0x0);
  return pSVar1;
}

