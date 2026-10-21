// OMANDMDCGMF$$NDINDIAHJHG @ RVA 0x329A6E4

void OMANDMDCGMF__NDINDIAHJHG
               (float JKOJPEKLBCI,System_Collections_Generic_IList_IHIFNKAMALG__o *NLKOFFFAFHM,
               UnityEngine_Bounds_o *OPKEIKHKJAC,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  VirtualInvokeData *pVVar6;
  long lVar7;
  System_Collections_Generic_IList_IHIFNKAMALG__c *pSVar8;
  ulong uVar9;
  int32_t *piVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  
  if ((DAT_04567386 & 1) == 0) {
    FUN_01bab630(&System_Collections_Generic_ICollection<IHIFNKAMALG>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<IHIFNKAMALG>_TypeInfo);
    DAT_04567386 = 1;
  }
  if (NLKOFFFAFHM == (System_Collections_Generic_IList_IHIFNKAMALG__o *)0x0) {
LAB_0339a8e0:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar8 = NLKOFFFAFHM->klass;
  uVar1._0_1_ = (pSVar8->_2).rank;
  uVar1._1_1_ = (pSVar8->_2).minimumAlignment;
  uVar9 = (ulong)uVar1;
  if (uVar9 != 0) {
    piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_ICollection<IHIFNKAMALG>_TypeInfo) {
        pVVar6 = pSVar8->vtable + *piVar10;
        goto LAB_0339a78c;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  pVVar6 = (VirtualInvokeData *)
           FUN_01b81914(NLKOFFFAFHM,System_Collections_Generic_ICollection<IHIFNKAMALG>_TypeInfo,0);
LAB_0339a78c:
  iVar4 = (*pVVar6->methodPtr)(NLKOFFFAFHM,pVVar6->method);
  if (iVar4 < 4) {
    return;
  }
  uVar11 = (OPKEIKHKJAC->fields).m_Center.fields.x;
  uVar12 = (OPKEIKHKJAC->fields).m_Center.fields.y;
  fVar13 = (OPKEIKHKJAC->fields).m_Center.fields.z;
  iVar4 = 0;
  do {
    pSVar8 = NLKOFFFAFHM->klass;
    uVar2._0_1_ = (pSVar8->_2).rank;
    uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
    uVar9 = (ulong)uVar2;
    if (uVar9 != 0) {
      piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_ICollection<IHIFNKAMALG>_TypeInfo) {
          pVVar6 = pSVar8->vtable + *piVar10;
          goto LAB_0339a808;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar6 = (VirtualInvokeData *)
             FUN_01b81914(NLKOFFFAFHM,System_Collections_Generic_ICollection<IHIFNKAMALG>_TypeInfo,0
                         );
LAB_0339a808:
    iVar5 = (*pVVar6->methodPtr)(NLKOFFFAFHM,pVVar6->method);
    if (iVar5 + -3 <= iVar4) {
      return;
    }
    iVar5 = 0;
    do {
      pSVar8 = NLKOFFFAFHM->klass;
      uVar3._0_1_ = (pSVar8->_2).rank;
      uVar3._1_1_ = (pSVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar3;
      if (uVar9 != 0) {
        piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IList<IHIFNKAMALG>_TypeInfo) {
            pVVar6 = pSVar8->vtable + *piVar10;
            goto LAB_0339a870;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar6 = (VirtualInvokeData *)
               FUN_01b81914(NLKOFFFAFHM,System_Collections_Generic_IList<IHIFNKAMALG>_TypeInfo,0);
LAB_0339a870:
      lVar7 = (*pVVar6->methodPtr)(NLKOFFFAFHM,(ulong)(uint)(iVar5 + iVar4),pVVar6->method);
      if (lVar7 == 0) goto LAB_0339a8e0;
      iVar5 = iVar5 + 1;
      *(ulong *)(lVar7 + 0x10) =
           CONCAT44((float)uVar12 +
                    ((float)((ulong)*(undefined8 *)(lVar7 + 0x10) >> 0x20) - (float)uVar12) *
                    JKOJPEKLBCI,
                    (float)uVar11 +
                    ((float)*(undefined8 *)(lVar7 + 0x10) - (float)uVar11) * JKOJPEKLBCI);
      *(float *)(lVar7 + 0x18) = fVar13 + (*(float *)(lVar7 + 0x18) - fVar13) * JKOJPEKLBCI;
    } while (iVar5 != 4);
    iVar4 = iVar4 + 4;
  } while( true );
}

