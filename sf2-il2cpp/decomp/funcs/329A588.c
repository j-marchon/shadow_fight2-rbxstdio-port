// OMANDMDCGMF$$JDLAHMOFGOC @ RVA 0x329A588

float OMANDMDCGMF__JDLAHMOFGOC
                (System_Collections_Generic_IList_Bounds__o *PJDGODLGJHG,
                UnityEngine_Vector2_o DDBMAGFPDPO,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  float fVar3;
  int iVar4;
  VirtualInvokeData *pVVar5;
  System_Collections_Generic_IList_Bounds__c *pSVar6;
  ulong uVar7;
  int32_t *piVar8;
  uint uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_58 [12];
  float local_4c;
  
  auVar11._8_8_ = method;
  auVar11._0_8_ = PJDGODLGJHG;
  if ((DAT_04567389 & 1) == 0) {
    FUN_01bab630(DDBMAGFPDPO.fields.x,DDBMAGFPDPO.fields.y,
                 &System_Collections_Generic_ICollection<Bounds>_TypeInfo);
    auVar11 = FUN_01bab630(&System_Collections_Generic_IList<Bounds>_TypeInfo);
    DAT_04567389 = 1;
  }
  if (PJDGODLGJHG == (System_Collections_Generic_IList_Bounds__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar11._0_8_,auVar11._8_8_);
  }
  uVar9 = 0;
  fVar3 = 0.0;
  do {
    fVar10 = fVar3;
    pSVar6 = PJDGODLGJHG->klass;
    uVar1._0_1_ = (pSVar6->_2).rank;
    uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar1;
    if (uVar7 != 0) {
      piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_ICollection<Bounds>_TypeInfo) {
          pVVar5 = pSVar6->vtable + *piVar8;
          goto LAB_0339a638;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar5 = (VirtualInvokeData *)
             FUN_01b81914(PJDGODLGJHG,System_Collections_Generic_ICollection<Bounds>_TypeInfo,0);
LAB_0339a638:
    iVar4 = (*pVVar5->methodPtr)(PJDGODLGJHG,pVVar5->method);
    if (iVar4 <= (int)uVar9) {
      return DDBMAGFPDPO.fields.x / fVar10;
    }
    pSVar6 = PJDGODLGJHG->klass;
    uVar2._0_1_ = (pSVar6->_2).rank;
    uVar2._1_1_ = (pSVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar2;
    if (uVar7 != 0) {
      piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IList<Bounds>_TypeInfo) {
          pVVar5 = pSVar6->vtable + *piVar8;
          goto LAB_0339a698;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar5 = (VirtualInvokeData *)
             FUN_01b81914(PJDGODLGJHG,System_Collections_Generic_IList<Bounds>_TypeInfo,0);
LAB_0339a698:
    (*pVVar5->methodPtr)(auStack_58,PJDGODLGJHG,(ulong)uVar9,pVVar5->method);
    uVar9 = uVar9 + 1;
    fVar3 = local_4c + local_4c;
    if (local_4c + local_4c <= fVar10) {
      fVar3 = fVar10;
    }
  } while( true );
}

