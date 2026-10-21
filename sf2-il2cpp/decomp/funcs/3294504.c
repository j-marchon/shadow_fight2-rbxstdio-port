// GLDKIFOLMAO$$LLCONNGHGKD @ RVA 0x3294504

void GLDKIFOLMAO__LLCONNGHGKD
               (GLDKIFOLMAO_o *__this,UnityEngine_Purchasing_Product_o *IPIHMPBGACB,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  UnityEngine_Purchasing_ProductMetadata_o *pUVar3;
  System_String_o *pSVar4;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if ((DAT_04567352 & 1) == 0) {
    FUN_01bab630(&System_Decimal_TypeInfo);
    DAT_04567352 = 1;
  }
  if ((IPIHMPBGACB != (UnityEngine_Purchasing_Product_o *)0x0) &&
     (pUVar3 = (IPIHMPBGACB->fields)._metadata_k__BackingField,
     pUVar3 != (UnityEngine_Purchasing_ProductMetadata_o *)0x0)) {
    uStack_28._0_4_ = (pUVar3->fields)._localizedPrice_k__BackingField.fields.lo;
    uStack_28._4_4_ = (pUVar3->fields)._localizedPrice_k__BackingField.fields.mid;
    local_30._0_4_ = (pUVar3->fields)._localizedPrice_k__BackingField.fields.flags;
    local_30._4_4_ = (pUVar3->fields)._localizedPrice_k__BackingField.fields.hi;
    pSVar4 = (pUVar3->fields)._localizedPriceString_k__BackingField;
    if ((System_Decimal_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar1 = System_Decimal__ToString
                       ((System_Decimal_o *)&stack0xffffffffffffffd0,(MethodInfo *)0x0);
    (__this->fields)._DGKHEMIDIFL_k__BackingField = pSVar1;
    thunk_FUN_01c20e04();
    ppSVar2 = &(__this->fields)._OFGNPIPABAC_k__BackingField;
    *ppSVar2 = pSVar4;
    thunk_FUN_01c20e04(ppSVar2,pSVar4);
    pUVar3 = (IPIHMPBGACB->fields)._metadata_k__BackingField;
    if (pUVar3 != (UnityEngine_Purchasing_ProductMetadata_o *)0x0) {
      ppSVar2 = &(__this->fields)._BDBKOEDNLAO_k__BackingField;
      *ppSVar2 = (pUVar3->fields)._isoCurrencyCode_k__BackingField;
      thunk_FUN_01c20e04(ppSVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

