// AKOMJPINHEN$$NBFGBBFJFNP @ RVA 0x308E5D8

void AKOMJPINHEN__NBFGBBFJFNP(AKOMJPINHEN_o *__this,int32_t OILECKFDMDB,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  ODKDFMHHLIP_o *IHNKCJHDDKD;
  MethodInfo *method_00;
  
  if ((DAT_0456608f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_ADOCEKEFHJN>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_ADOCEKEFHJN>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_ADOCEKEFHJN>_get_Item__);
    FUN_01bab630(&StringLiteral_4286);
    DAT_0456608f = 1;
  }
  pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).CCDJIIOOAML;
  if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<int,_object>__ContainsKey
                      (pSVar2,OILECKFDMDB,
                       Method_System_Collections_Generic_Dictionary<int,_ADOCEKEFHJN>_ContainsKey__)
    ;
    if (!bVar1) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_4286,(MethodInfo *)0x0);
      return;
    }
    pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).CCDJIIOOAML;
    if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      IHNKCJHDDKD = (ODKDFMHHLIP_o *)
                    System_Collections_Generic_Dictionary<int,_object>__get_Item
                              (pSVar2,OILECKFDMDB,
                               Method_System_Collections_Generic_Dictionary<int,_ADOCEKEFHJN>_get_Item__
                              );
      pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).CCDJIIOOAML;
      if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        method_00 = Method_System_Collections_Generic_Dictionary<int,_ADOCEKEFHJN>_Remove__;
        System_Collections_Generic_Dictionary<int,_object>__Remove
                  (pSVar2,OILECKFDMDB,
                   (MethodInfo_22F5FD0 *)
                   Method_System_Collections_Generic_Dictionary<int,_ADOCEKEFHJN>_Remove__);
        AKOMJPINHEN__DGLOODJIEBC(__this,IHNKCJHDDKD,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

