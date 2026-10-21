// AKOMJPINHEN$$PAKCJFFMNFH @ RVA 0x308DF70

void AKOMJPINHEN__PAKCJFFMNFH(AKOMJPINHEN_o *__this,ODKDFMHHLIP_o *IHNKCJHDDKD,MethodInfo *method)

{
  int32_t CJNHFNHJHPE;
  bool bVar1;
  int32_t iVar2;
  System_Collections_Generic_Dictionary_CKLIGNAPKFO__int__o *__this_00;
  
  if ((DAT_0456607a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_int>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_int>_set_Item__);
    DAT_0456607a = 1;
  }
  if (IHNKCJHDDKD != (ODKDFMHHLIP_o *)0x0) {
    if ((IHNKCJHDDKD->fields).JEFOELMOCEI != false) {
      CJNHFNHJHPE = (IHNKCJHDDKD->fields).MOIGDPBNMNI;
      bVar1 = ODKDFMHHLIP__NOBCLMOONLJ(CJNHFNHJHPE,(MethodInfo *)0x0);
      if (bVar1) {
        __this_00 = (__this->fields).AGJMNCAMEDP;
        if (__this_00 == (System_Collections_Generic_Dictionary_CKLIGNAPKFO__int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        iVar2 = System_Collections_Generic_Dictionary<Int32Enum,_int>__get_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                           CJNHFNHJHPE,
                           Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_int>_get_Item__
                          );
        method = (MethodInfo *)(ulong)(iVar2 + 1U);
        System_Collections_Generic_Dictionary<Int32Enum,_int>__set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,CJNHFNHJHPE,
                   iVar2 + 1U,
                   Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_int>_set_Item__);
      }
    }
    KPBOJBLLKPJ__DLHHBAABHEE((KPBOJBLLKPJ_o *)__this,IHNKCJHDDKD,method);
    return;
  }
  return;
}

