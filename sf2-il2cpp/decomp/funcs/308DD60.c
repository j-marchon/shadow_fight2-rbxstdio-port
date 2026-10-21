// AKOMJPINHEN$$FJIFDGEPKBH @ RVA 0x308DD60

void AKOMJPINHEN__FJIFDGEPKBH(AKOMJPINHEN_o *__this,NLFLMJPNOLF_o *AOMBONOOJFP,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  ODKDFMHHLIP_o *NONPLOOOOAG;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  
  if ((DAT_04566079 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_ADOCEKEFHJN>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_ADOCEKEFHJN>_get_Item__);
    DAT_04566079 = 1;
  }
  if (AOMBONOOJFP == (NLFLMJPNOLF_o *)0x0) {
    return;
  }
  pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).CCDJIIOOAML;
  if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    method_00 = Method_System_Collections_Generic_Dictionary<int,_ADOCEKEFHJN>_ContainsKey__;
    bVar1 = System_Collections_Generic_Dictionary<int,_object>__ContainsKey
                      (pSVar2,(int32_t)(AOMBONOOJFP->fields).OHMDCKEDOGH,
                       (MethodInfo_22F4D3C *)
                       Method_System_Collections_Generic_Dictionary<int,_ADOCEKEFHJN>_ContainsKey__)
    ;
    if (!bVar1) {
      AKOMJPINHEN__HEJHGFDOMMG(__this,AOMBONOOJFP,method_00);
      return;
    }
    pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).CCDJIIOOAML;
    if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      NONPLOOOOAG = (ODKDFMHHLIP_o *)
                    System_Collections_Generic_Dictionary<int,_object>__get_Item
                              (pSVar2,(int32_t)(AOMBONOOJFP->fields).OHMDCKEDOGH,
                               Method_System_Collections_Generic_Dictionary<int,_ADOCEKEFHJN>_get_Item__
                              );
      KPBOJBLLKPJ__DFHKMAIAPBJ
                ((KPBOJBLLKPJ_o *)__this,NONPLOOOOAG,(Il2CppObject *)AOMBONOOJFP,in_x3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

