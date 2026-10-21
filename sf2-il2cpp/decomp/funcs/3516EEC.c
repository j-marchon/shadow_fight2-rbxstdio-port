// Core.Configs.Models.ServiceZonesConfigExtensions$$GetZonesIds @ RVA 0x3516EEC

System_Int32_array *
Core_Configs_Models_ServiceZonesConfigExtensions__GetZonesIds
          (Core_Configs_Models_ServiceZonesConfig_o *config,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Int32_array *pSVar3;
  System_Collections_Generic_IReadOnlyDictionary_int__ServiceZone__c *pSVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_Generic_IReadOnlyDictionary_int__ServiceZone__o *pSVar7;
  undefined1 auVar8 [16];
  
  auVar8._8_8_ = method;
  auVar8._0_8_ = config;
                    /* try { // try from 03616ef4 to 03716eff has its CatchHandler @ 03617018 */
  if ((DAT_04568937 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_ToArray<int>__);
    auVar8 = FUN_01bab630(&System_Collections_Generic_IReadOnlyDictionary<int,_ServiceZone>_TypeInfo
                         );
    DAT_04568937 = 1;
  }
  if ((config == (Core_Configs_Models_ServiceZonesConfig_o *)0x0) ||
     (pSVar7 = (config->fields)._Zones_k__BackingField,
     pSVar7 == (System_Collections_Generic_IReadOnlyDictionary_int__ServiceZone__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar8._0_8_,auVar8._8_8_);
  }
                    /* try { // try from 03616f34 to 03716f5b has its CatchHandler @ 036170d0 */
  pSVar4 = pSVar7->klass;
  uVar1._0_1_ = (pSVar4->_2).rank;
  uVar1._1_1_ = (pSVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pSVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IReadOnlyDictionary<int,_ServiceZone>_TypeInfo)
      {
        pVVar2 = pSVar4->vtable + (*piVar6 + 3);
        goto LAB_03616f90;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
                    /* try { // try from 03616f6c to 03716f73 has its CatchHandler @ 0361700c */
    } while (uVar5 != 0);
  }
                    /* try { // try from 03616f74 to 03716ff7 has its CatchHandler @ 03616e2c */
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar7,
                        System_Collections_Generic_IReadOnlyDictionary<int,_ServiceZone>_TypeInfo,3)
  ;
LAB_03616f90:
  source = (System_Collections_Generic_IEnumerable_TSource__o *)
           (*pVVar2->methodPtr)(pSVar7,pVVar2->method);
  pSVar3 = System_Linq_Enumerable__ToArray<int>(source,Method_System_Linq_Enumerable_ToArray<int>__)
  ;
  return pSVar3;
}

