// IHIFNKAMALG$$.ctor @ RVA 0x351F28C

void IHIFNKAMALG___ctor(IHIFNKAMALG_o *__this,
                       System_Collections_Generic_IList_UIVertex__o *JGHIJMJNJLE,int32_t OGPGLGPMEPD
                       ,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  VirtualInvokeData *pVVar9;
  ulong uVar10;
  System_Collections_Generic_IList_UIVertex__c *pSVar11;
  ulong uVar12;
  int32_t *piVar13;
  undefined1 auStack_200 [112];
  undefined1 auStack_190 [24];
  undefined8 local_178;
  undefined8 uStack_170;
  int32_t local_168;
  undefined8 local_164;
  undefined8 local_154;
  undefined8 local_144;
  undefined8 local_134;
  undefined1 auStack_120 [12];
  undefined8 local_114;
  float local_10c;
  undefined8 local_b0;
  float local_a8;
  
  uVar10 = (ulong)(uint)OGPGLGPMEPD;
  if ((DAT_045689af & 1) == 0) {
    FUN_01bab630(&System_Collections_Generic_IList<UIVertex>_TypeInfo);
    DAT_045689af = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (JGHIJMJNJLE == (System_Collections_Generic_IList_UIVertex__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar11 = JGHIJMJNJLE->klass;
  uVar1._0_1_ = (pSVar11->_2).rank;
  uVar1._1_1_ = (pSVar11->_2).minimumAlignment;
  uVar12 = (ulong)uVar1;
  if (uVar12 != 0) {
    piVar13 = &((pSVar11->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IList<UIVertex>_TypeInfo) {
        pVVar9 = pSVar11->vtable + *piVar13;
        goto LAB_0361f330;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  pVVar9 = (VirtualInvokeData *)
           FUN_01b81914(JGHIJMJNJLE,System_Collections_Generic_IList<UIVertex>_TypeInfo,0);
LAB_0361f330:
  (*pVVar9->methodPtr)(auStack_120,JGHIJMJNJLE,uVar10,pVVar9->method);
  memcpy(&local_b0,auStack_120,0x6c);
  (__this->fields).BLEOKMIDGIK.fields.z = local_a8;
  (__this->fields).BLEOKMIDGIK.fields.x = (float)(undefined4)local_b0;
  (__this->fields).BLEOKMIDGIK.fields.y = (float)local_b0._4_4_;
  pSVar11 = JGHIJMJNJLE->klass;
  uVar2._0_1_ = (pSVar11->_2).rank;
  uVar2._1_1_ = (pSVar11->_2).minimumAlignment;
  uVar12 = (ulong)uVar2;
  if (uVar12 != 0) {
    piVar13 = &((pSVar11->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IList<UIVertex>_TypeInfo) {
        pVVar9 = pSVar11->vtable + *piVar13;
        goto LAB_0361f3b4;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  pVVar9 = (VirtualInvokeData *)
           FUN_01b81914(JGHIJMJNJLE,System_Collections_Generic_IList<UIVertex>_TypeInfo,0);
LAB_0361f3b4:
  (*pVVar9->methodPtr)(auStack_190,JGHIJMJNJLE,uVar10,pVVar9->method);
  memcpy(auStack_120,auStack_190,0x6c);
  (__this->fields).IEPAILIKIEM.fields.z = local_10c;
  (__this->fields).IEPAILIKIEM.fields.x = (float)(undefined4)local_114;
  (__this->fields).IEPAILIKIEM.fields.y = (float)local_114._4_4_;
  pSVar11 = JGHIJMJNJLE->klass;
  uVar3._0_1_ = (pSVar11->_2).rank;
  uVar3._1_1_ = (pSVar11->_2).minimumAlignment;
  uVar12 = (ulong)uVar3;
  if (uVar12 != 0) {
    piVar13 = &((pSVar11->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IList<UIVertex>_TypeInfo) {
        pVVar9 = pSVar11->vtable + *piVar13;
        goto LAB_0361f434;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  pVVar9 = (VirtualInvokeData *)
           FUN_01b81914(JGHIJMJNJLE,System_Collections_Generic_IList<UIVertex>_TypeInfo,0);
LAB_0361f434:
  (*pVVar9->methodPtr)(auStack_190,JGHIJMJNJLE,uVar10,pVVar9->method);
  (__this->fields).EFJKPCADGJH.fields.rgba = local_168;
  pSVar11 = JGHIJMJNJLE->klass;
  uVar4._0_1_ = (pSVar11->_2).rank;
  uVar4._1_1_ = (pSVar11->_2).minimumAlignment;
  uVar12 = (ulong)uVar4;
  if (uVar12 != 0) {
    piVar13 = &((pSVar11->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IList<UIVertex>_TypeInfo) {
        pVVar9 = pSVar11->vtable + *piVar13;
        goto LAB_0361f49c;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  pVVar9 = (VirtualInvokeData *)
           FUN_01b81914(JGHIJMJNJLE,System_Collections_Generic_IList<UIVertex>_TypeInfo,0);
LAB_0361f49c:
  (*pVVar9->methodPtr)(auStack_190,JGHIJMJNJLE,uVar10,pVVar9->method);
  *(undefined8 *)&(__this->fields).EFJKPCADGJH.fields.r = local_164;
  pSVar11 = JGHIJMJNJLE->klass;
  uVar5._0_1_ = (pSVar11->_2).rank;
  uVar5._1_1_ = (pSVar11->_2).minimumAlignment;
  uVar12 = (ulong)uVar5;
  if (uVar12 != 0) {
    piVar13 = &((pSVar11->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IList<UIVertex>_TypeInfo) {
        pVVar9 = pSVar11->vtable + *piVar13;
        goto LAB_0361f504;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  pVVar9 = (VirtualInvokeData *)
           FUN_01b81914(JGHIJMJNJLE,System_Collections_Generic_IList<UIVertex>_TypeInfo,0);
LAB_0361f504:
  (*pVVar9->methodPtr)(auStack_190,JGHIJMJNJLE,uVar10,pVVar9->method);
  *(undefined8 *)&(__this->fields).EOJKMBCIECH.fields.y = local_154;
  pSVar11 = JGHIJMJNJLE->klass;
  uVar6._0_1_ = (pSVar11->_2).rank;
  uVar6._1_1_ = (pSVar11->_2).minimumAlignment;
  uVar12 = (ulong)uVar6;
  if (uVar12 != 0) {
    piVar13 = &((pSVar11->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IList<UIVertex>_TypeInfo) {
                    /* try { // try from 0361f568 to 0371f64b has its CatchHandler @ 0361f568
                       catch() { ... } // from try @ 0361f568 with catch @ 0361f568
                       catch() { ... } // from try @ 0361f900 with catch @ 0361f568
                       catch() { ... } // from try @ 0361f928 with catch @ 0361f568
                       catch() { ... } // from try @ 0361fa68 with catch @ 0361f568
                       catch() { ... } // from try @ 0361fa70 with catch @ 0361f568
                       catch() { ... } // from try @ 0361fb4c with catch @ 0361f568 */
        pVVar9 = pSVar11->vtable + *piVar13;
        goto LAB_0361f56c;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  pVVar9 = (VirtualInvokeData *)
           FUN_01b81914(JGHIJMJNJLE,System_Collections_Generic_IList<UIVertex>_TypeInfo,0);
LAB_0361f56c:
  (*pVVar9->methodPtr)(auStack_190,JGHIJMJNJLE,uVar10,pVVar9->method);
  *(undefined8 *)&(__this->fields).IPOCGMIGMNO.fields.y = local_144;
  pSVar11 = JGHIJMJNJLE->klass;
  uVar7._0_1_ = (pSVar11->_2).rank;
  uVar7._1_1_ = (pSVar11->_2).minimumAlignment;
  uVar12 = (ulong)uVar7;
  if (uVar12 != 0) {
    piVar13 = &((pSVar11->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IList<UIVertex>_TypeInfo) {
        pVVar9 = pSVar11->vtable + *piVar13;
        goto LAB_0361f5d4;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  pVVar9 = (VirtualInvokeData *)
           FUN_01b81914(JGHIJMJNJLE,System_Collections_Generic_IList<UIVertex>_TypeInfo,0);
LAB_0361f5d4:
  (*pVVar9->methodPtr)(auStack_190,JGHIJMJNJLE,uVar10,pVVar9->method);
  *(undefined8 *)&(__this->fields).FBGEPDAJILH.fields.y = local_134;
  pSVar11 = JGHIJMJNJLE->klass;
  uVar8._0_1_ = (pSVar11->_2).rank;
  uVar8._1_1_ = (pSVar11->_2).minimumAlignment;
  uVar12 = (ulong)uVar8;
  if (uVar12 != 0) {
    piVar13 = &((pSVar11->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IList<UIVertex>_TypeInfo) {
        pVVar9 = pSVar11->vtable + *piVar13;
        goto LAB_0361f63c;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  pVVar9 = (VirtualInvokeData *)
           FUN_01b81914(JGHIJMJNJLE,System_Collections_Generic_IList<UIVertex>_TypeInfo,0);
LAB_0361f63c:
                    /* try { // try from 0361f64c to 0371f673 has its CatchHandler @ 0361fab0 */
  (*pVVar9->methodPtr)(auStack_200,JGHIJMJNJLE,uVar10,pVVar9->method);
  memcpy(auStack_190,auStack_200,0x6c);
  (__this->fields).JLJGJDCMODE.fields.y = (float)(undefined4)uStack_170;
  (__this->fields).JLJGJDCMODE.fields.z = (float)uStack_170._4_4_;
  *(undefined8 *)&(__this->fields).AEBBFLGHGJC.fields.y = local_178;
  return;
}

