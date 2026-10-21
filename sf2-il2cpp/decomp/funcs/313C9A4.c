// POLAJNLKPAK$$IOELKHFHKGO @ RVA 0x313C9A4

bool POLAJNLKPAK__IOELKHFHKGO(POLAJNLKPAK_o *__this,System_String_o *LMPMHKIABOM,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *local_28;
  
  if ((DAT_04566737 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_POLAJNLKPAK_ACFKGGIJHBH>_TryGetValue__
                );
    DAT_04566737 = 1;
  }
  local_28 = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).JPGEBIDNGPB;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      (__this_00,(Il2CppObject *)LMPMHKIABOM,&local_28,
                       Method_System_Collections_Generic_Dictionary<string,_POLAJNLKPAK_ACFKGGIJHBH>_TryGetValue__
                      );
    if (bVar1) {
      if (local_28 == (Il2CppObject *)0x0) goto LAB_0323ca2c;
      bVar1 = *(char *)((long)&local_28[1].klass + 1) != '\0';
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
LAB_0323ca2c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

