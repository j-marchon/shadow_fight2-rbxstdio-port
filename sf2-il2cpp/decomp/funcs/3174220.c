// ABCMPMHNMAP$$GAPOKDOKDGD @ RVA 0x3174220

IHDFIJGDCBL_o *
ABCMPMHNMAP__GAPOKDOKDGD(ABCMPMHNMAP_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  IHDFIJGDCBL_o *pIVar3;
  
  if ((DAT_0456694b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_IHDFIJGDCBL>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_IHDFIJGDCBL>_get_Item__);
    DAT_0456694b = 1;
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).DLJKMENIJJF;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar2,(Il2CppObject *)KGLJICLJHEL,
                       Method_System_Collections_Generic_Dictionary<string,_IHDFIJGDCBL>_ContainsKey__
                      );
    if (!bVar1) {
      return (IHDFIJGDCBL_o *)0x0;
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).DLJKMENIJJF
    ;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pIVar3 = (IHDFIJGDCBL_o *)
               System_Collections_Generic_Dictionary<object,_object>__get_Item
                         (pSVar2,(Il2CppObject *)KGLJICLJHEL,
                          Method_System_Collections_Generic_Dictionary<string,_IHDFIJGDCBL>_get_Item__
                         );
      return pIVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

