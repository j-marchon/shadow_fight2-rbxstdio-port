// HCKCBFOGMMJ$$DNCLOHOEGAK @ RVA 0x31CE320

void HCKCBFOGMMJ__DNCLOHOEGAK(HCKCBFOGMMJ_o *__this,GKLPDMLELJF_o *HEHMPFLAEGE,MethodInfo *method)

{
  GKLPDMLELJF_o *pGVar1;
  System_Collections_Generic_Dictionary_long__GKLPDMLELJF__o *__this_00;
  int64_t OGPGLGPMEPD;
  
  if ((DAT_04566c88 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>_set_Item__);
    DAT_04566c88 = 1;
  }
  if (HEHMPFLAEGE == (GKLPDMLELJF_o *)0x0) {
    return;
  }
  OGPGLGPMEPD = (HEHMPFLAEGE->fields).ANAJGHJEEOC;
  pGVar1 = HCKCBFOGMMJ__LLEJFHJIBHC(__this,OGPGLGPMEPD,method);
  __this_00 = (__this->fields).CMJNDHHGCBI;
  if (__this_00 == (System_Collections_Generic_Dictionary_long__GKLPDMLELJF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (pGVar1 != (GKLPDMLELJF_o *)0x0) {
    System_Collections_Generic_Dictionary<long,_object>__set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,OGPGLGPMEPD,
               (Il2CppObject *)HEHMPFLAEGE,
               Method_System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>_set_Item__);
    return;
  }
  System_Collections_Generic_Dictionary<long,_object>__Add
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,OGPGLGPMEPD,
             (Il2CppObject *)HEHMPFLAEGE,
             Method_System_Collections_Generic_Dictionary<long,_GKLPDMLELJF>_Add__);
  return;
}

