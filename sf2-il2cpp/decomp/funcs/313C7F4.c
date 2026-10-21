// POLAJNLKPAK$$PECPNLGPMEO @ RVA 0x313C7F4

uint32_t POLAJNLKPAK__PECPNLGPMEO
                   (POLAJNLKPAK_o *__this,System_String_o *LNIGANCLDGE,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *local_28;
  
  if ((DAT_04566734 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_POLAJNLKPAK_MEEBKGDAIGB>_TryGetValue__
                );
    DAT_04566734 = 1;
  }
  local_28 = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).DBGJIKCFLGB;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      (__this_00,(Il2CppObject *)LNIGANCLDGE,&local_28,
                       Method_System_Collections_Generic_Dictionary<string,_POLAJNLKPAK_MEEBKGDAIGB>_TryGetValue__
                      );
    if (bVar1) {
      if (local_28 == (Il2CppObject *)0x0) goto LAB_0323c874;
      uVar2 = *(uint32_t *)&local_28[1].monitor;
    }
    else {
      uVar2 = 0;
    }
    return uVar2;
  }
LAB_0323c874:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

