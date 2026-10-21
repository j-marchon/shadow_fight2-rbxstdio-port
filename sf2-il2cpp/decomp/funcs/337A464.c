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
    FUN_01bab630(&StringLiteral_2088);
    DAT_04567b7c = 1;
  }
  pSVar1 = System_String__Concat
                     (kvp.fields.key,StringLiteral_2088,kvp.fields.value,(MethodInfo *)0x0);
  return pSVar1;
}

