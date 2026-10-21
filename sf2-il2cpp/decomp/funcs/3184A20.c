// CAJHCLGOFMJ$$KPAEAHPADBL @ RVA 0x3184A20

bool CAJHCLGOFMJ__KPAEAHPADBL(CAJHCLGOFMJ_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Collections_Generic_Dictionary_object__int__o *pSVar3;
  
  if ((DAT_045669d2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_get_Item__);
    DAT_045669d2 = 1;
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(KGLJICLJHEL,(MethodInfo *)0x0);
  if (bVar1) {
    return false;
  }
  pSVar3 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).OCFIONIBFOF;
  if (pSVar3 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_int>__ContainsKey
                      (pSVar3,(Il2CppObject *)KGLJICLJHEL,
                       Method_System_Collections_Generic_Dictionary<string,_int>_ContainsKey__);
    if (!bVar1) {
      return false;
    }
    pSVar3 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).OCFIONIBFOF;
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
      iVar2 = System_Collections_Generic_Dictionary<object,_int>__get_Item
                        (pSVar3,(Il2CppObject *)KGLJICLJHEL,
                         Method_System_Collections_Generic_Dictionary<string,_int>_get_Item__);
      return 0 < iVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

