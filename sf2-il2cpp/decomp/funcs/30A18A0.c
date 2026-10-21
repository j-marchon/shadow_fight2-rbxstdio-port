// LAMJOHEKJNJ$$FENHANFAIND @ RVA 0x30A18A0

LPEBBHNDFCG_o *
LAMJOHEKJNJ__FENHANFAIND(LAMJOHEKJNJ_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  LPEBBHNDFCG_o *local_28;
  
  if ((DAT_04566144 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_LPEBBHNDFCG>_TryGetValue__);
    DAT_04566144 = 1;
  }
  local_28 = (LPEBBHNDFCG_o *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).DIKHJEINHID;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__TryGetValue
              (__this_00,(Il2CppObject *)KGLJICLJHEL,(Il2CppObject **)&local_28,
               Method_System_Collections_Generic_Dictionary<string,_LPEBBHNDFCG>_TryGetValue__);
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

