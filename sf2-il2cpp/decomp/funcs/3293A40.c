// Nekki.SF2.GUI.Fight.StylePanel$$GetStyleIncrease @ RVA 0x3293A40

float Nekki_SF2_GUI_Fight_StylePanel__GetStyleIncrease
                (Nekki_SF2_GUI_Fight_StylePanel_o *__this,ECENNHNBAME_o *CAMAHOAFAPK,
                MethodInfo *method)

{
  bool bVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__int__o *pSVar3;
  NDGHNMIHOMN_o *pNVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_60;
  
                    /* try { // try from 03393a48 to 03493a4b has its CatchHandler @ 03393a6c */
                    /* try { // try from 03393a4c to 03493a87 has its CatchHandler @ 03393790 */
                    /* catch() { ... } // from try @ 03393a10 with catch @ 03393a50 */
                    /* catch() { ... } // from try @ 033939fc with catch @ 03393a54 */
                    /* catch() { ... } // from try @ 033939ec with catch @ 03393a58 */
                    /* catch() { ... } // from try @ 0339398c with catch @ 03393a5c */
                    /* catch() { ... } // from try @ 0339392c with catch @ 03393a60 */
                    /* catch() { ... } // from try @ 03393918 with catch @ 03393a64
                       catch() { ... } // from try @ 03393978 with catch @ 03393a64
                       catch() { ... } // from try @ 033939d8 with catch @ 03393a64 */
                    /* catch() { ... } // from try @ 033938cc with catch @ 03393a68 */
  if ((DAT_0456734a & 1) == 0) {
                    /* catch() { ... } // from try @ 03393a48 with catch @ 03393a6c */
                    /* catch() { ... } // from try @ 033938b8 with catch @ 03393a70 */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<ECENNHNBAME,_int>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<ECENNHNBAME,_int>_get_Item__);
                    /* try { // try from 03393a88 to 03493a8b has its CatchHandler @ 03393aac */
                    /* try { // try from 03393a8c to 03493ab3 has its CatchHandler @ 03393790 */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<ECENNHNBAME,_int>_set_Item__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_0456734a = 1;
  }
  if (CAMAHOAFAPK == (ECENNHNBAME_o *)0x0) {
    return 0.0;
  }
  pSVar3 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).IFAJMBGJEIN;
                    /* catch() { ... } // from try @ 03393a88 with catch @ 03393aac */
  if (pSVar3 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) goto LAB_03393be4;
                    /* try { // try from 03393ab4 to 03493abb has its CatchHandler @ 03393ad0 */
                    /* try { // try from 03393abc to 03493ac7 has its CatchHandler @ 03393790 */
  bVar1 = System_Collections_Generic_Dictionary<object,_int>__ContainsKey
                    (pSVar3,(Il2CppObject *)CAMAHOAFAPK,
                     Method_System_Collections_Generic_Dictionary<ECENNHNBAME,_int>_ContainsKey__);
  if (bVar1) {
                    /* try { // try from 03393ac8 to 03493acf has its CatchHandler @ 03393ad0 */
    pSVar3 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).IFAJMBGJEIN;
    if (pSVar3 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) goto LAB_03393be4;
                    /* catch() { ... } // from try @ 03393ab4 with catch @ 03393ad0
                       catch() { ... } // from try @ 03393ac8 with catch @ 03393ad0 */
    uVar2 = System_Collections_Generic_Dictionary<object,_int>__get_Item
                      (pSVar3,(Il2CppObject *)CAMAHOAFAPK,
                       Method_System_Collections_Generic_Dictionary<ECENNHNBAME,_int>_get_Item__);
                    /* try { // try from 03393af0 to 03493bcf has its CatchHandler @ 03393af0
                       catch() { ... } // from try @ 03393af0 with catch @ 03393af0
                       catch() { ... } // from try @ 03393cbc with catch @ 03393af0
                       catch() { ... } // from try @ 03393d18 with catch @ 03393af0
                       catch() { ... } // from try @ 03393d60 with catch @ 03393af0
                       catch() { ... } // from try @ 03393d98 with catch @ 03393af0 */
    System_Collections_Generic_Dictionary<object,_int>__set_Item
              (pSVar3,(Il2CppObject *)CAMAHOAFAPK,uVar2 + 1,
               Method_System_Collections_Generic_Dictionary<ECENNHNBAME,_int>_set_Item__);
    if (uVar2 == 0xffffffff) goto LAB_03393b10;
    uVar2 = ~uVar2;
  }
  else {
LAB_03393b10:
    pSVar3 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).IFAJMBGJEIN;
    if (pSVar3 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) goto LAB_03393be4;
    System_Collections_Generic_Dictionary<object,_int>__set_Item
              (pSVar3,(Il2CppObject *)CAMAHOAFAPK,0,
               Method_System_Collections_Generic_Dictionary<ECENNHNBAME,_int>_set_Item__);
    uVar2 = 0;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar4 = MGNPHCAAEIO_TypeInfo->static_fields->EMBDCDBPFFE;
  if (pNVar4 != (NDGHNMIHOMN_o *)0x0) {
    fVar8 = (pNVar4->fields).EAOAPACLBID;
    fVar5 = NDGHNMIHOMN__DIIDLOEMDAD(pNVar4,(__this->fields).OOADLOIGCHI,(MethodInfo *)0x0);
    pNVar4 = MGNPHCAAEIO_TypeInfo->static_fields->EMBDCDBPFFE;
    if (pNVar4 != (NDGHNMIHOMN_o *)0x0) {
      fVar6 = powf((pNVar4->fields).HHAJAMHDBKG,(float)(int)uVar2);
      local_60.fakeValueActive = (CAMAHOAFAPK->fields).DDBKJGNJHPP.fields.fakeValueActive;
      local_60.inited = (CAMAHOAFAPK->fields).DDBKJGNJHPP.fields.inited;
      local_60._18_2_ = *(undefined2 *)&(CAMAHOAFAPK->fields).DDBKJGNJHPP.fields.field_0x12;
      local_60.hiddenValueOldByte4.fields =
           (CAMAHOAFAPK->fields).DDBKJGNJHPP.fields.hiddenValueOldByte4.fields;
      local_60.fakeValue = (CAMAHOAFAPK->fields).DDBKJGNJHPP.fields.fakeValue;
      local_60.currentCryptoKey = (CAMAHOAFAPK->fields).DDBKJGNJHPP.fields.currentCryptoKey;
      local_60.hiddenValue = (CAMAHOAFAPK->fields).DDBKJGNJHPP.fields.hiddenValue;
      fVar7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_60,
                         (MethodInfo *)0x0);
                    /* try { // try from 03393bd0 to 03493bd7 has its CatchHandler @ 03393d44 */
      return fVar8 * fVar5 * fVar6 * fVar7;
    }
  }
LAB_03393be4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

