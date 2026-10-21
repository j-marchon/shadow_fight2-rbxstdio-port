// BBBBKBBFNOG$$.cctor @ RVA 0x34D1FE0

void BBBBKBBFNOG___cctor(MethodInfo *method)

{
  BBBBKBBFNOG_c *pBVar1;
  System_Collections_Generic_List_BBBBKBBFNOG_BENGKNHAMMA__o *__this;
  BBBBKBBFNOG_StaticFields *pBVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_70 [2];
  
  if ((DAT_045686bc & 1) == 0) {
    FUN_01bab630(&BBBBKBBFNOG_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BBBBKBBFNOG_BENGKNHAMMA>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<BBBBKBBFNOG_BENGKNHAMMA>_TypeInfo);
    DAT_045686bc = 1;
  }
  __this = (System_Collections_Generic_List_BBBBKBBFNOG_BENGKNHAMMA__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<BBBBKBBFNOG_BENGKNHAMMA>_TypeInfo);
  System_Collections_Generic_List<BBBBKBBFNOG_BENGKNHAMMA>___ctor
            (__this,Method_System_Collections_Generic_List<BBBBKBBFNOG_BENGKNHAMMA>__ctor__);
  BBBBKBBFNOG_TypeInfo->static_fields->IPLLKLOKOFL = __this;
  thunk_FUN_01c20e04(BBBBKBBFNOG_TypeInfo->static_fields,__this);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(local_70,0,(MethodInfo *)0x0);
  pBVar1 = BBBBKBBFNOG_TypeInfo;
  pBVar2 = BBBBKBBFNOG_TypeInfo->static_fields;
  (pBVar2->HEINPMAGCOD).fields.fakeValueActive = local_70[0].fields.fakeValueActive;
  (pBVar2->HEINPMAGCOD).fields.inited = local_70[0].fields.inited;
  *(undefined6 *)&(pBVar2->HEINPMAGCOD).fields.field_0x1a = local_70[0].fields._26_6_;
  (pBVar2->HEINPMAGCOD).fields.fakeValue = local_70[0].fields.fakeValue;
  (pBVar2->HEINPMAGCOD).fields.hiddenValue = local_70[0].fields.hiddenValue;
  (pBVar2->HEINPMAGCOD).fields.currentCryptoKey = local_70[0].fields.currentCryptoKey;
  pBVar2 = pBVar1->static_fields;
  pBVar2->AHCKJLKAKMN = 0.0;
  pBVar2->CLGHDPOCECK = 0;
  return;
}

