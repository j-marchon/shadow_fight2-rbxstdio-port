// TypeDefIndex 3298
// Namespace: 
// public class IHIFNKAMALG
// Fields:
//   public Vector3 BLEOKMIDGIK; // 0x10
//   public Vector3 IEPAILIKIEM; // 0x1C
//   public Color32 EFJKPCADGJH; // 0x28
//   public Vector2 EOJKMBCIECH; // 0x2C
//   public Vector2 IPOCGMIGMNO; // 0x34
//   public Vector2 FBGEPDAJILH; // 0x3C
//   public Vector2 AEBBFLGHGJC; // 0x44
//   public Vector4 JLJGJDCMODE; // 0x4C

// ===== public void MGFGGIPGFNJ(UIVertex[] AJLBDPAPMCD, int OGPGLGPMEPD)  [RVA 0x351F0E8]
// IHIFNKAMALG$$MGFGGIPGFNJ @ RVA 0x351F0E8

void IHIFNKAMALG__MGFGGIPGFNJ
               (IHIFNKAMALG_o *__this,UnityEngine_UIVertex_array *AJLBDPAPMCD,int32_t OGPGLGPMEPD,
               MethodInfo *method)

{
  UnityEngine_Vector3_o *pUVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  
                    /* try { // try from 0361f0f0 to 0371f15f has its CatchHandler @ 0361f174 */
  if (AJLBDPAPMCD == (UnityEngine_UIVertex_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  fVar2 = (__this->fields).BLEOKMIDGIK.fields.x;
  fVar3 = (__this->fields).BLEOKMIDGIK.fields.y;
  if ((uint)OGPGLGPMEPD < (uint)AJLBDPAPMCD->max_length) {
    (&AJLBDPAPMCD->m_Items[0].fields.position)[(long)OGPGLGPMEPD * 9].fields.z =
         (__this->fields).BLEOKMIDGIK.fields.z;
    pUVar1 = &AJLBDPAPMCD->m_Items[0].fields.position + (long)OGPGLGPMEPD * 9;
    (pUVar1->fields).x = fVar2;
    (pUVar1->fields).y = fVar3;
    fVar2 = (__this->fields).IEPAILIKIEM.fields.x;
    fVar3 = (__this->fields).IEPAILIKIEM.fields.y;
    (&AJLBDPAPMCD->m_Items[0].fields.normal)[(long)OGPGLGPMEPD * 9].fields.z =
         (__this->fields).IEPAILIKIEM.fields.z;
    pUVar1 = &AJLBDPAPMCD->m_Items[0].fields.normal + (long)OGPGLGPMEPD * 9;
    (pUVar1->fields).x = fVar2;
    (pUVar1->fields).y = fVar3;
    *(int32_t *)((long)&AJLBDPAPMCD->m_Items[0].fields.color + (long)OGPGLGPMEPD * 0x6c) =
         (__this->fields).EFJKPCADGJH.fields.rgba;
    uVar4 = *(undefined8 *)&(__this->fields).EFJKPCADGJH.fields.r;
    *(undefined8 *)((long)&AJLBDPAPMCD->m_Items[0].fields.uv0 + (long)OGPGLGPMEPD * 0x6c + 4) = 0;
    *(undefined8 *)((long)&AJLBDPAPMCD->m_Items[0].fields.color + (long)OGPGLGPMEPD * 0x6c + 4) =
         uVar4;
    uVar4 = *(undefined8 *)&(__this->fields).EOJKMBCIECH.fields.y;
    *(undefined8 *)((long)&AJLBDPAPMCD->m_Items[0].fields.uv1 + (long)OGPGLGPMEPD * 0x6c + 4) = 0;
    *(undefined8 *)((long)&AJLBDPAPMCD->m_Items[0].fields.uv0 + (long)OGPGLGPMEPD * 0x6c + 0xc) =
         uVar4;
    uVar4 = *(undefined8 *)&(__this->fields).IPOCGMIGMNO.fields.y;
                    /* try { // try from 0361f160 to 0371f16b has its CatchHandler @ 0361e3e4 */
    *(undefined8 *)((long)&AJLBDPAPMCD->m_Items[0].fields.uv2 + (long)OGPGLGPMEPD * 0x6c + 4) = 0;
    *(undefined8 *)((long)&AJLBDPAPMCD->m_Items[0].fields.uv1 + (long)OGPGLGPMEPD * 0x6c + 0xc) =
         uVar4;
    uVar4 = *(undefined8 *)&(__this->fields).FBGEPDAJILH.fields.y;
                    /* try { // try from 0361f16c to 0371f173 has its CatchHandler @ 0361f174 */
    *(undefined8 *)((long)&AJLBDPAPMCD->m_Items[0].fields.uv3 + (long)OGPGLGPMEPD * 0x6c + 4) = 0;
    *(undefined8 *)((long)&AJLBDPAPMCD->m_Items[0].fields.uv2 + (long)OGPGLGPMEPD * 0x6c + 0xc) =
         uVar4;
                    /* catch() { ... } // from try @ 0361f038 with catch @ 0361f174
                       catch() { ... } // from try @ 0361f090 with catch @ 0361f174
                       catch() { ... } // from try @ 0361f0f0 with catch @ 0361f174
                       catch() { ... } // from try @ 0361f16c with catch @ 0361f174 */
    uVar4 = *(undefined8 *)&(__this->fields).AEBBFLGHGJC.fields.y;
    if ((uint)OGPGLGPMEPD < (uint)AJLBDPAPMCD->max_length) {
      *(undefined8 *)((long)&AJLBDPAPMCD->m_Items[0].fields.tangent + (long)OGPGLGPMEPD * 0x6c + 8)
           = *(undefined8 *)&(__this->fields).JLJGJDCMODE.fields.y;
      *(undefined8 *)((long)&AJLBDPAPMCD->m_Items[0].fields.tangent + (long)OGPGLGPMEPD * 0x6c) =
           uVar4;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== public void MGFGGIPGFNJ(ref UIVertex AJLBDPAPMCD)  [RVA 0x351F1B0]
// IHIFNKAMALG$$MGFGGIPGFNJ @ RVA 0x351F1B0

void IHIFNKAMALG__MGFGGIPGFNJ
               (IHIFNKAMALG_o *__this,UnityEngine_UIVertex_o *AJLBDPAPMCD,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  
  fVar1 = (__this->fields).BLEOKMIDGIK.fields.x;
  fVar2 = (__this->fields).BLEOKMIDGIK.fields.y;
  (AJLBDPAPMCD->fields).position.fields.z = (__this->fields).BLEOKMIDGIK.fields.z;
  (AJLBDPAPMCD->fields).position.fields.x = fVar1;
  (AJLBDPAPMCD->fields).position.fields.y = fVar2;
  fVar1 = (__this->fields).IEPAILIKIEM.fields.x;
  fVar2 = (__this->fields).IEPAILIKIEM.fields.y;
  (AJLBDPAPMCD->fields).normal.fields.z = (__this->fields).IEPAILIKIEM.fields.z;
  (AJLBDPAPMCD->fields).normal.fields.x = fVar1;
  (AJLBDPAPMCD->fields).normal.fields.y = fVar2;
  (AJLBDPAPMCD->fields).color.fields.rgba = (__this->fields).EFJKPCADGJH.fields.rgba;
  uVar3 = *(undefined8 *)&(__this->fields).EFJKPCADGJH.fields.r;
  (AJLBDPAPMCD->fields).uv0.fields.y = 0.0;
  (AJLBDPAPMCD->fields).uv0.fields.z = 0.0;
  *(undefined8 *)&(AJLBDPAPMCD->fields).color.fields.r = uVar3;
  uVar3 = *(undefined8 *)&(__this->fields).EOJKMBCIECH.fields.y;
  (AJLBDPAPMCD->fields).uv1.fields.y = 0.0;
  (AJLBDPAPMCD->fields).uv1.fields.z = 0.0;
  *(undefined8 *)&(AJLBDPAPMCD->fields).uv0.fields.w = uVar3;
  uVar3 = *(undefined8 *)&(__this->fields).IPOCGMIGMNO.fields.y;
  (AJLBDPAPMCD->fields).uv2.fields.y = 0.0;
  (AJLBDPAPMCD->fields).uv2.fields.z = 0.0;
  *(undefined8 *)&(AJLBDPAPMCD->fields).uv1.fields.w = uVar3;
  uVar3 = *(undefined8 *)&(__this->fields).FBGEPDAJILH.fields.y;
  (AJLBDPAPMCD->fields).uv3.fields.y = 0.0;
  (AJLBDPAPMCD->fields).uv3.fields.z = 0.0;
  *(undefined8 *)&(AJLBDPAPMCD->fields).uv2.fields.w = uVar3;
  fVar1 = (__this->fields).JLJGJDCMODE.fields.z;
  uVar3 = *(undefined8 *)&(__this->fields).AEBBFLGHGJC.fields.y;
  (AJLBDPAPMCD->fields).tangent.fields.z = (__this->fields).JLJGJDCMODE.fields.y;
  (AJLBDPAPMCD->fields).tangent.fields.w = fVar1;
  (AJLBDPAPMCD->fields).tangent.fields.x = (float)(int)uVar3;
  (AJLBDPAPMCD->fields).tangent.fields.y = (float)(int)((ulong)uVar3 >> 0x20);
  return;
}


// ===== public void .ctor(ref UIVertex JGHIJMJNJLE)  [RVA 0x351F218]
// IHIFNKAMALG$$.ctor @ RVA 0x351F218

void IHIFNKAMALG___ctor(IHIFNKAMALG_o *__this,UnityEngine_UIVertex_o *JGHIJMJNJLE,MethodInfo *method
                       )

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  fVar1 = (JGHIJMJNJLE->fields).position.fields.x;
  fVar2 = (JGHIJMJNJLE->fields).position.fields.y;
  (__this->fields).BLEOKMIDGIK.fields.z = (JGHIJMJNJLE->fields).position.fields.z;
  (__this->fields).BLEOKMIDGIK.fields.x = fVar1;
  (__this->fields).BLEOKMIDGIK.fields.y = fVar2;
  fVar1 = (JGHIJMJNJLE->fields).normal.fields.x;
  fVar2 = (JGHIJMJNJLE->fields).normal.fields.y;
  (__this->fields).IEPAILIKIEM.fields.z = (JGHIJMJNJLE->fields).normal.fields.z;
  (__this->fields).IEPAILIKIEM.fields.x = fVar1;
  (__this->fields).IEPAILIKIEM.fields.y = fVar2;
  (__this->fields).EFJKPCADGJH.fields.rgba = (JGHIJMJNJLE->fields).color.fields.rgba;
  *(undefined8 *)&(__this->fields).EFJKPCADGJH.fields.r =
       *(undefined8 *)&(JGHIJMJNJLE->fields).color.fields.r;
  *(undefined8 *)&(__this->fields).EOJKMBCIECH.fields.y =
       *(undefined8 *)&(JGHIJMJNJLE->fields).uv0.fields.w;
  *(undefined8 *)&(__this->fields).IPOCGMIGMNO.fields.y =
       *(undefined8 *)&(JGHIJMJNJLE->fields).uv1.fields.w;
  *(undefined8 *)&(__this->fields).FBGEPDAJILH.fields.y =
       *(undefined8 *)&(JGHIJMJNJLE->fields).uv2.fields.w;
  fVar1 = (JGHIJMJNJLE->fields).tangent.fields.w;
  uVar3 = *(undefined8 *)&(JGHIJMJNJLE->fields).tangent.fields;
  (__this->fields).JLJGJDCMODE.fields.y = (JGHIJMJNJLE->fields).tangent.fields.z;
  (__this->fields).JLJGJDCMODE.fields.z = fVar1;
  *(undefined8 *)&(__this->fields).AEBBFLGHGJC.fields.y = uVar3;
  return;
}


// ===== public void .ctor(IList<UIVertex> JGHIJMJNJLE, int OGPGLGPMEPD)  [RVA 0x351F28C]
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


// ===== public void ODKJAGGEMLG(float BHOOMCEABGH)  [RVA 0x351F684]
// IHIFNKAMALG$$ODKJAGGEMLG @ RVA 0x351F684

void IHIFNKAMALG__ODKJAGGEMLG(IHIFNKAMALG_o *__this,float BHOOMCEABGH,MethodInfo *method)

{
  (__this->fields).BLEOKMIDGIK.fields.y = BHOOMCEABGH;
  return;
}


// ===== public bool EPBENPDCBFE(IHIFNKAMALG JJMOKKDDOEM)  [RVA 0x351F68C]
// IHIFNKAMALG$$EPBENPDCBFE @ RVA 0x351F68C

bool IHIFNKAMALG__EPBENPDCBFE(IHIFNKAMALG_o *__this,IHIFNKAMALG_o *JJMOKKDDOEM,MethodInfo *method)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar4;
  undefined8 uVar3;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar10;
  undefined8 uVar9;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  if (JJMOKKDDOEM != (IHIFNKAMALG_o *)0x0) {
    uVar2 = (__this->fields).BLEOKMIDGIK.fields.y;
    uVar4 = (__this->fields).BLEOKMIDGIK.fields.z;
    uVar12 = (JJMOKKDDOEM->fields).BLEOKMIDGIK.fields.y;
    uVar15 = (JJMOKKDDOEM->fields).BLEOKMIDGIK.fields.z;
                    /* try { // try from 0361f6a8 to 0371f6d3 has its CatchHandler @ 0361faac */
    fVar6 = (__this->fields).BLEOKMIDGIK.fields.x - (JJMOKKDDOEM->fields).BLEOKMIDGIK.fields.x;
                    /* try { // try from 0361f714 to 0371f71b has its CatchHandler @ 0361fa9c */
                    /* try { // try from 0361f728 to 0371f72b has its CatchHandler @ 0361faa0 */
                    /* try { // try from 0361f764 to 0371f78b has its CatchHandler @ 0361f914 */
    if ((((((9.9999994e-11 <=
             ((float)uVar4 - (float)uVar15) * ((float)uVar4 - (float)uVar15) +
             fVar6 * fVar6 + ((float)uVar2 - (float)uVar12) * ((float)uVar2 - (float)uVar12)) ||
           (uVar7 = (__this->fields).IEPAILIKIEM.fields.y,
           uVar10 = (__this->fields).IEPAILIKIEM.fields.z,
           uVar13 = (JJMOKKDDOEM->fields).IEPAILIKIEM.fields.y,
           uVar16 = (JJMOKKDDOEM->fields).IEPAILIKIEM.fields.z,
           fVar6 = (__this->fields).IEPAILIKIEM.fields.x -
                   (JJMOKKDDOEM->fields).IEPAILIKIEM.fields.x,
           9.9999994e-11 <=
           ((float)uVar10 - (float)uVar16) * ((float)uVar10 - (float)uVar16) +
           fVar6 * fVar6 + ((float)uVar7 - (float)uVar13) * ((float)uVar7 - (float)uVar13))) ||
          ((char)(__this->fields).EFJKPCADGJH.fields.rgba !=
           (char)(JJMOKKDDOEM->fields).EFJKPCADGJH.fields.rgba)) ||
         ((*(char *)((long)&(__this->fields).EFJKPCADGJH.fields.rgba + 1) !=
           *(char *)((long)&(JJMOKKDDOEM->fields).EFJKPCADGJH.fields.rgba + 1) ||
          (*(char *)((long)&(__this->fields).EFJKPCADGJH.fields.rgba + 2) !=
           *(char *)((long)&(JJMOKKDDOEM->fields).EFJKPCADGJH.fields.rgba + 2))))) ||
        ((*(char *)((long)&(__this->fields).EFJKPCADGJH.fields.rgba + 3) !=
          *(char *)((long)&(JJMOKKDDOEM->fields).EFJKPCADGJH.fields.rgba + 3) ||
         ((uVar3 = *(undefined8 *)&(__this->fields).EFJKPCADGJH.fields.r,
          uVar9 = *(undefined8 *)&(JJMOKKDDOEM->fields).EFJKPCADGJH.fields.r,
          fVar6 = (float)uVar3 - (float)uVar9,
          fVar5 = (float)((ulong)uVar3 >> 0x20) - (float)((ulong)uVar9 >> 0x20),
          9.9999994e-11 <= fVar6 * fVar6 + fVar5 * fVar5 ||
          (uVar3 = *(undefined8 *)&(__this->fields).EOJKMBCIECH.fields.y,
          uVar9 = *(undefined8 *)&(JJMOKKDDOEM->fields).EOJKMBCIECH.fields.y,
          fVar6 = (float)uVar3 - (float)uVar9,
          fVar5 = (float)((ulong)uVar3 >> 0x20) - (float)((ulong)uVar9 >> 0x20),
          9.9999994e-11 <= fVar6 * fVar6 + fVar5 * fVar5)))))) ||
       ((uVar3 = *(undefined8 *)&(__this->fields).IPOCGMIGMNO.fields.y,
        uVar9 = *(undefined8 *)&(JJMOKKDDOEM->fields).IPOCGMIGMNO.fields.y,
        fVar6 = (float)uVar3 - (float)uVar9,
        fVar5 = (float)((ulong)uVar3 >> 0x20) - (float)((ulong)uVar9 >> 0x20),
        9.9999994e-11 <= fVar6 * fVar6 + fVar5 * fVar5 ||
        (uVar3 = *(undefined8 *)&(__this->fields).FBGEPDAJILH.fields.y,
        uVar9 = *(undefined8 *)&(JJMOKKDDOEM->fields).FBGEPDAJILH.fields.y,
        fVar6 = (float)uVar3 - (float)uVar9,
        fVar5 = (float)((ulong)uVar3 >> 0x20) - (float)((ulong)uVar9 >> 0x20),
        9.9999994e-11 <= fVar6 * fVar6 + fVar5 * fVar5)))) {
      bVar1 = false;
    }
    else {
      uVar3 = *(undefined8 *)&(__this->fields).AEBBFLGHGJC.fields.y;
      uVar9 = *(undefined8 *)&(JJMOKKDDOEM->fields).AEBBFLGHGJC.fields.y;
      uVar8 = (__this->fields).JLJGJDCMODE.fields.y;
      uVar11 = (__this->fields).JLJGJDCMODE.fields.z;
                    /* try { // try from 0361f7c0 to 0371f7eb has its CatchHandler @ 0361f910 */
      uVar14 = (JJMOKKDDOEM->fields).JLJGJDCMODE.fields.y;
      uVar17 = (JJMOKKDDOEM->fields).JLJGJDCMODE.fields.z;
      fVar6 = (float)uVar3 - (float)uVar9;
      fVar5 = (float)((ulong)uVar3 >> 0x20) - (float)((ulong)uVar9 >> 0x20);
      bVar1 = ((float)uVar11 - (float)uVar17) * ((float)uVar11 - (float)uVar17) +
              ((float)uVar8 - (float)uVar14) * ((float)uVar8 - (float)uVar14) +
              fVar6 * fVar6 + fVar5 * fVar5 < 9.9999994e-11;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

