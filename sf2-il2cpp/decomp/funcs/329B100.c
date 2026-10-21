// OMANDMDCGMF$$JDLAHMOFGOC @ RVA 0x329B100

float OMANDMDCGMF__JDLAHMOFGOC
                (System_Collections_Generic_IList_Bounds__o *KCLEODDNALH,
                System_Collections_Generic_IList_Bounds__o *GEMLHKNIDPK,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  float fVar5;
  uint uVar6;
  VirtualInvokeData *pVVar7;
  System_Collections_Generic_IList_Bounds__c *pSVar8;
  ulong uVar9;
  int32_t *piVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_68 [12];
  float local_5c;
  
  if ((DAT_0456738d & 1) == 0) {
    FUN_01bab630(&System_Collections_Generic_ICollection<Bounds>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<Bounds>_TypeInfo);
    DAT_0456738d = 1;
  }
  if (KCLEODDNALH != (System_Collections_Generic_IList_Bounds__o *)0x0) {
    pSVar8 = KCLEODDNALH->klass;
    uVar1._0_1_ = (pSVar8->_2).rank;
    uVar1._1_1_ = (pSVar8->_2).minimumAlignment;
    uVar9 = (ulong)uVar1;
    if (uVar9 != 0) {
      piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_ICollection<Bounds>_TypeInfo) {
          pVVar7 = pSVar8->vtable + *piVar10;
          goto LAB_0339b1a4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar7 = (VirtualInvokeData *)
             FUN_01b81914(KCLEODDNALH,System_Collections_Generic_ICollection<Bounds>_TypeInfo,0);
LAB_0339b1a4:
    uVar6 = (*pVVar7->methodPtr)(KCLEODDNALH,pVVar7->method);
    if ((int)uVar6 < 1) {
      fVar12 = 0.0;
    }
    else {
      uVar11 = 0;
      fVar12 = 0.0;
      do {
        pSVar8 = KCLEODDNALH->klass;
        uVar2._0_1_ = (pSVar8->_2).rank;
        uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
        uVar9 = (ulong)uVar2;
        if (uVar9 != 0) {
          piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
                (Il2CppClass *)System_Collections_Generic_IList<Bounds>_TypeInfo) {
              pVVar7 = pSVar8->vtable + *piVar10;
              goto LAB_0339b218;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        pVVar7 = (VirtualInvokeData *)
                 FUN_01b81914(KCLEODDNALH,System_Collections_Generic_IList<Bounds>_TypeInfo,0);
LAB_0339b218:
        (*pVVar7->methodPtr)(auStack_68,KCLEODDNALH,(ulong)uVar11,pVVar7->method);
        uVar11 = uVar11 + 1;
        fVar13 = local_5c + local_5c;
        if (local_5c + local_5c <= fVar12) {
          fVar13 = fVar12;
        }
        fVar12 = fVar13;
      } while (uVar11 != uVar6);
    }
    if (GEMLHKNIDPK != (System_Collections_Generic_IList_Bounds__o *)0x0) {
      pSVar8 = GEMLHKNIDPK->klass;
      uVar3._0_1_ = (pSVar8->_2).rank;
      uVar3._1_1_ = (pSVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar3;
      if (uVar9 != 0) {
        piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_ICollection<Bounds>_TypeInfo) {
            pVVar7 = pSVar8->vtable + *piVar10;
            goto LAB_0339b2a4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar7 = (VirtualInvokeData *)
               FUN_01b81914(GEMLHKNIDPK,System_Collections_Generic_ICollection<Bounds>_TypeInfo,0);
LAB_0339b2a4:
      uVar6 = (*pVVar7->methodPtr)(GEMLHKNIDPK,pVVar7->method);
      if ((int)uVar6 < 1) {
        fVar13 = 0.0;
      }
      else {
        uVar11 = 0;
        fVar13 = 0.0;
        do {
          pSVar8 = GEMLHKNIDPK->klass;
          uVar4._0_1_ = (pSVar8->_2).rank;
          uVar4._1_1_ = (pSVar8->_2).minimumAlignment;
          uVar9 = (ulong)uVar4;
          if (uVar9 != 0) {
            piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
                  (Il2CppClass *)System_Collections_Generic_IList<Bounds>_TypeInfo) {
                pVVar7 = pSVar8->vtable + *piVar10;
                goto LAB_0339b310;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          pVVar7 = (VirtualInvokeData *)
                   FUN_01b81914(GEMLHKNIDPK,System_Collections_Generic_IList<Bounds>_TypeInfo,0);
LAB_0339b310:
          (*pVVar7->methodPtr)(auStack_68,GEMLHKNIDPK,(ulong)uVar11,pVVar7->method);
          uVar11 = uVar11 + 1;
          fVar5 = local_5c + local_5c;
          if (local_5c + local_5c <= fVar13) {
            fVar5 = fVar13;
          }
          fVar13 = fVar5;
        } while (uVar11 != uVar6);
      }
      return fVar12 / fVar13;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

