// CUDLR.Server.<>c$$ABPNKDIOAHE @ RVA 0x33C189C

System_String_o *
CUDLR_Server_<>c__ABPNKDIOAHE
          (CUDLR_Server___c_o *__this,System_Collections_Generic_KeyValuePair_string__string__o x,
          MethodInfo *method)

{
  if ((DAT_04567dd7 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_string>_get_Key__,
                 x.fields.key,x.fields.value);
    DAT_04567dd7 = 1;
  }
  return x.fields.key;
}

