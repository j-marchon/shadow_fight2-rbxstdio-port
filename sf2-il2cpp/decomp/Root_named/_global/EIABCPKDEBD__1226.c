// TypeDefIndex 1226
// Namespace: 
// [Extension]
// public static class EIABCPKDEBD
// Fields:

// ===== public static XmlNode IJPOFDDHAAF(XmlNode JHMENEKPIBO, string KGLJICLJHEL)  [RVA 0x313385C]
// EIABCPKDEBD$$IJPOFDDHAAF @ RVA 0x313385C

/* WARNING: Removing unreachable block (ram,0x03233ab8) */

System_Xml_XmlNode_o *
EIABCPKDEBD__IJPOFDDHAAF
          (System_Xml_XmlNode_o *JHMENEKPIBO,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *pSVar5;
  System_String_o *__this;
  long lVar6;
  System_Xml_XmlNode_c *pSVar7;
  ulong uVar8;
  int *piVar9;
  
  if ((DAT_045666eb & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_045666eb = 1;
  }
  if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) {
    pSVar5 = (System_Xml_XmlNode_o *)0x0;
  }
  else {
    plVar3 = (long *)(*(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.method);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar6 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_03233940;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_03233940:
      uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if ((uVar8 & 1) == 0) {
                    /* try { // try from 03233a14 to 03333a17 has its CatchHandler @ 03233c98 */
        pSVar5 = (System_Xml_XmlNode_o *)0x0;
        break;
      }
                    /* try { // try from 03233950 to 03333957 has its CatchHandler @ 03233fdc */
      lVar6 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
                    /* try { // try from 0323396c to 0333397f has its CatchHandler @ 03233cbc */
          if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_032339a0;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
                    /* try { // try from 03233984 to 03333993 has its CatchHandler @ 03233ca8 */
      puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_032339a0:
                    /* try { // try from 032339a4 to 033339b3 has its CatchHandler @ 03233ca0 */
      pSVar5 = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
      if (pSVar5 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 032339b4 to 033339bf has its CatchHandler @ 03233c9c */
      pSVar7 = pSVar5->klass;
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                    /* try { // try from 032339d4 to 033339db has its CatchHandler @ 03233c84 */
      if (((pSVar7->_2).naturalAligment < bVar1) ||
         ((pSVar7->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)System_Xml_XmlNode_TypeInfo
         )) {
                    /* try { // try from 03233aa0 to 03333aa3 has its CatchHandler @ 03233c8c */
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03233aa4 to 03333ab3 has its CatchHandler @ 03233c88 */
        FUN_01babc64(pSVar5);
      }
      __this = (System_String_o *)
               (*(pSVar7->vtable)._8_unknown.methodPtr)(pSVar5,(pSVar7->vtable)._8_unknown.method);
      if (__this == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 032339f8 to 033339fb has its CatchHandler @ 03233cb8 */
      bVar2 = System_String__Equals(__this,KGLJICLJHEL,(MethodInfo *)0x0);
    } while (!bVar2);
    plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
    if (plVar3 != (long *)0x0) {
      lVar6 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
                    /* try { // try from 03233a38 to 03333a3b has its CatchHandler @ 03233c94 */
      if (uVar8 != 0) {
                    /* try { // try from 03233a3c to 03333a63 has its CatchHandler @ 03233cb4 */
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_03233a78;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_03233a78:
      (*(code *)*puVar4)(plVar3,puVar4[1]);
    }
  }
  return pSVar5;
}


// ===== public static bool LGKNNMNPKGD(XmlNode JHMENEKPIBO)  [RVA 0x3133B8C]
// EIABCPKDEBD$$LGKNNMNPKGD @ RVA 0x3133B8C

bool EIABCPKDEBD__LGKNNMNPKGD(System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  int iVar1;
  
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    iVar1 = (*(JHMENEKPIBO->klass->vtable)._11_unknown.methodPtr)
                      (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._11_unknown.method);
    return iVar1 == 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static XmlElement BHPIHHJHELJ(XmlDocument EKEMDOEAFHP, string AFKICLAFDKC)  [RVA 0x3133BB4]
// EIABCPKDEBD$$BHPIHHJHELJ @ RVA 0x3133BB4

System_Xml_XmlElement_o *
EIABCPKDEBD__BHPIHHJHELJ
          (System_Xml_XmlDocument_o *EKEMDOEAFHP,System_String_o *AFKICLAFDKC,MethodInfo *method)

{
  System_Xml_XmlElement_o *pSVar1;
  
                    /* try { // try from 03233bbc to 03333bbf has its CatchHandler @ 03233f80 */
  if (EKEMDOEAFHP != (System_Xml_XmlDocument_o *)0x0) {
                    /* try { // try from 03233bc0 to 03333be7 has its CatchHandler @ 03233fc0 */
    pSVar1 = System_Xml_XmlDocument__CreateElement(EKEMDOEAFHP,AFKICLAFDKC,(MethodInfo *)0x0);
    (*(EKEMDOEAFHP->klass->vtable)._27_AppendChild.methodPtr)
              (EKEMDOEAFHP,pSVar1,(EKEMDOEAFHP->klass->vtable)._27_AppendChild.method);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string KGPPJAHDJEH(XmlDocument EPHIMGPGNPK)  [RVA 0x3133BFC]
// EIABCPKDEBD$$KGPPJAHDJEH @ RVA 0x3133BFC

/* WARNING: Removing unreachable block (ram,0x03233d64) */

System_String_o * EIABCPKDEBD__KGPPJAHDJEH(System_Xml_XmlDocument_o *EPHIMGPGNPK,MethodInfo *method)

{
  ushort uVar1;
  System_Text_StringBuilder_o *__this;
  System_Xml_XmlWriterSettings_o *__this_00;
  System_Xml_XmlWriter_o *pSVar2;
  VirtualInvokeData *pVVar3;
  System_String_o *pSVar4;
  MethodInfo *extraout_x1;
  System_Xml_XmlWriter_c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  
                    /* try { // try from 03233c00 to 03333c03 has its CatchHandler @ 03233f7c */
                    /* try { // try from 03233c04 to 03333c13 has its CatchHandler @ 03233f88 */
                    /* try { // try from 03233c18 to 03333c23 has its CatchHandler @ 03233f8c */
  if ((DAT_045666ec & 1) == 0) {
                    /* try { // try from 03233c28 to 03333c2b has its CatchHandler @ 03233cb0 */
                    /* try { // try from 03233c30 to 03333c33 has its CatchHandler @ 03233cac */
    FUN_01bab630(&System_IDisposable_TypeInfo);
                    /* try { // try from 03233c38 to 03333c3b has its CatchHandler @ 03233ca4 */
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
                    /* try { // try from 03233c40 to 03333c4b has its CatchHandler @ 03233cb8 */
    FUN_01bab630(&System_Xml_XmlWriterSettings_TypeInfo);
                    /* try { // try from 03233c50 to 03333c53 has its CatchHandler @ 03233c98 */
    DAT_045666ec = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03233c58 to 03333c5b has its CatchHandler @ 03233c94 */
  __this = (System_Text_StringBuilder_o *)
           thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo,method);
                    /* try { // try from 03233c60 to 03333c63 has its CatchHandler @ 03233cb4 */
  System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
                    /* try { // try from 03233c68 to 03333c6b has its CatchHandler @ 03233c90 */
  __this_00 = (System_Xml_XmlWriterSettings_o *)
              thunk_FUN_01bda818(System_Xml_XmlWriterSettings_TypeInfo);
                    /* try { // try from 03233c70 to 03333c73 has its CatchHandler @ 03233c8c */
                    /* try { // try from 03233c78 to 03333c7b has its CatchHandler @ 03233c88 */
  System_Xml_XmlWriterSettings___ctor(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 03233c7c to 03333cd7 has its CatchHandler @ 032331f0 */
  if (__this_00 != (System_Xml_XmlWriterSettings_o *)0x0) {
                    /* catch() { ... } // from try @ 03233ab8 with catch @ 03233c80 */
                    /* catch() { ... } // from try @ 032339d4 with catch @ 03233c84 */
                    /* catch() { ... } // from try @ 03233aa4 with catch @ 03233c88
                       catch() { ... } // from try @ 03233c78 with catch @ 03233c88 */
                    /* catch() { ... } // from try @ 03233aa0 with catch @ 03233c8c
                       catch() { ... } // from try @ 03233c70 with catch @ 03233c8c */
                    /* catch() { ... } // from try @ 03233a84 with catch @ 03233c90
                       catch() { ... } // from try @ 03233c68 with catch @ 03233c90 */
                    /* catch() { ... } // from try @ 03233a38 with catch @ 03233c94
                       catch() { ... } // from try @ 03233c58 with catch @ 03233c94 */
    System_Xml_XmlWriterSettings__set_OmitXmlDeclaration(__this_00,true,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03233a14 with catch @ 03233c98
                       catch() { ... } // from try @ 03233c50 with catch @ 03233c98 */
                    /* catch() { ... } // from try @ 032339b4 with catch @ 03233c9c */
                    /* catch() { ... } // from try @ 032339a4 with catch @ 03233ca0 */
                    /* catch() { ... } // from try @ 03233c38 with catch @ 03233ca4 */
    System_Xml_XmlWriterSettings__set_Indent(__this_00,true,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03233984 with catch @ 03233ca8 */
                    /* catch() { ... } // from try @ 03233c30 with catch @ 03233cac */
                    /* catch() { ... } // from try @ 03233c28 with catch @ 03233cb0 */
                    /* catch() { ... } // from try @ 03233a3c with catch @ 03233cb4
                       catch() { ... } // from try @ 03233c60 with catch @ 03233cb4 */
    pSVar2 = System_Xml_XmlWriter__Create(__this,__this_00,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032339f8 with catch @ 03233cb8
                       catch() { ... } // from try @ 03233c40 with catch @ 03233cb8 */
                    /* catch() { ... } // from try @ 0323396c with catch @ 03233cbc */
    if (EPHIMGPGNPK == (System_Xml_XmlDocument_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (*(EPHIMGPGNPK->klass->vtable)._90_Save.methodPtr)
              (EPHIMGPGNPK,pSVar2,(EPHIMGPGNPK->klass->vtable)._90_Save.method);
                    /* try { // try from 03233cd8 to 03333cef has its CatchHandler @ 03233f4c */
    if (pSVar2 != (System_Xml_XmlWriter_o *)0x0) {
      pSVar5 = pSVar2->klass;
      uVar1._0_1_ = (pSVar5->_2).rank;
      uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
      uVar6 = (ulong)uVar1;
      if (uVar6 != 0) {
        piVar7 = &((pSVar5->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
              (Il2CppClass *)System_IDisposable_TypeInfo) {
                    /* try { // try from 03233d28 to 03333d2f has its CatchHandler @ 03233f38 */
            pVVar3 = &(pSVar5->vtable)._0_Equals + *piVar7;
            goto LAB_03233d2c;
          }
                    /* try { // try from 03233d04 to 03333d07 has its CatchHandler @ 03233f48 */
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      pVVar3 = (VirtualInvokeData *)FUN_01b81914(pSVar2,System_IDisposable_TypeInfo,0);
LAB_03233d2c:
                    /* try { // try from 03233d34 to 03333d67 has its CatchHandler @ 03233f34 */
      (*pVVar3->methodPtr)(pSVar2,pVVar3->method);
    }
    if (__this != (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03233d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pSVar4 = (System_String_o *)
               (*(__this->klass->vtable)._3_ToString.methodPtr)
                         (__this,(__this->klass->vtable)._3_ToString.method);
      return pSVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void DGPOFACHGMP(XmlNode JHMENEKPIBO, XmlAttribute JOHFLOEABJL)  [RVA 0x3133E0C]
// EIABCPKDEBD$$DGPOFACHGMP @ RVA 0x3133E0C

void EIABCPKDEBD__DGPOFACHGMP
               (System_Xml_XmlNode_o *JHMENEKPIBO,System_Xml_XmlAttribute_o *JOHFLOEABJL,
               MethodInfo *method)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  System_Xml_XmlNode_c *pSVar4;
  
  if ((DAT_045666ed & 1) == 0) {
    FUN_01bab630(&System_Xml_XmlElement_TypeInfo);
    DAT_045666ed = 1;
  }
  if (JOHFLOEABJL != (System_Xml_XmlAttribute_o *)0x0) {
                    /* try { // try from 03233e44 to 03333e47 has its CatchHandler @ 03233fc8 */
    uVar2 = (*(JOHFLOEABJL->klass->vtable)._8_get_Name.methodPtr)
                      (JOHFLOEABJL,(JOHFLOEABJL->klass->vtable)._8_get_Name.method);
                    /* try { // try from 03233e50 to 03333e53 has its CatchHandler @ 03233fc4 */
                    /* try { // try from 03233e5c to 03333e6b has its CatchHandler @ 03233fd0 */
    uVar3 = (*(JOHFLOEABJL->klass->vtable)._9_get_Value.methodPtr)
                      (JOHFLOEABJL,(JOHFLOEABJL->klass->vtable)._9_get_Value.method);
    if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
      pSVar4 = JHMENEKPIBO->klass;
                    /* try { // try from 03233e74 to 03333e77 has its CatchHandler @ 03233fb0 */
      bVar1 = (System_Xml_XmlElement_TypeInfo->_2).naturalAligment;
                    /* try { // try from 03233e80 to 03333e83 has its CatchHandler @ 03233fac */
                    /* try { // try from 03233e8c to 03333e8f has its CatchHandler @ 03233fa8 */
                    /* try { // try from 03233e98 to 03333e9b has its CatchHandler @ 03233fa4 */
      if ((bVar1 <= (pSVar4->_2).naturalAligment) &&
         ((pSVar4->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)System_Xml_XmlElement_TypeInfo)) {
                    /* try { // try from 03233ea4 to 03333ea7 has its CatchHandler @ 03233fa0 */
                    /* try { // try from 03233eb0 to 03333eb3 has its CatchHandler @ 03233f9c */
                    /* WARNING: Could not recover jumptable at 0x03233eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pSVar4[1]._1.byval_arg.data)
                  (JHMENEKPIBO,uVar2,uVar3,*(undefined8 *)&pSVar4[1]._1.byval_arg.bits);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(JHMENEKPIBO);
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03233ebc to 03333ebf has its CatchHandler @ 03233f94 */
  FUN_01bab8c8();
}


// ===== public static void GDAEOIJNJMO(XmlNode JHMENEKPIBO, string PNOCDIDLLLM)  [RVA 0x3133EC8]
// EIABCPKDEBD$$GDAEOIJNJMO @ RVA 0x3133EC8

void EIABCPKDEBD__GDAEOIJNJMO
               (System_Xml_XmlNode_o *JHMENEKPIBO,System_String_o *PNOCDIDLLLM,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *node;
  
                    /* try { // try from 03233ec8 to 03333ecb has its CatchHandler @ 03233f90 */
                    /* try { // try from 03233ed4 to 03333ed7 has its CatchHandler @ 03233f84 */
                    /* try { // try from 03233ed8 to 03333ee3 has its CatchHandler @ 032331f0 */
                    /* try { // try from 03233ee4 to 03333ee7 has its CatchHandler @ 03233f44 */
  if ((JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) ||
     (bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(PNOCDIDLLLM,(MethodInfo *)0x0), bVar1)) {
                    /* catch() { ... } // from try @ 03233ee4 with catch @ 03233f44 */
                    /* catch() { ... } // from try @ 03233d04 with catch @ 03233f48 */
                    /* catch() { ... } // from try @ 03233cd8 with catch @ 03233f4c */
    return;
  }
                    /* try { // try from 03233ef0 to 03333ef3 has its CatchHandler @ 03233f40 */
                    /* try { // try from 03233efc to 03333eff has its CatchHandler @ 03233f3c */
  pSVar2 = (System_Xml_XmlAttributeCollection_o *)
           (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                     (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
                    /* try { // try from 03233f00 to 03333f17 has its CatchHandler @ 032331f0 */
  if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
    node = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar2,PNOCDIDLLLM,(MethodInfo *)0x0);
    if (node == (System_Xml_XmlAttribute_o *)0x0) {
      return;
    }
                    /* try { // try from 03233f18 to 03333f27 has its CatchHandler @ 03233f28 */
                    /* catch() { ... } // from try @ 03233f18 with catch @ 03233f28 */
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* catch() { ... } // from try @ 03233d34 with catch @ 03233f34 */
                    /* catch() { ... } // from try @ 03233d28 with catch @ 03233f38 */
                    /* catch() { ... } // from try @ 03233efc with catch @ 03233f3c */
                    /* catch() { ... } // from try @ 03233ef0 with catch @ 03233f40 */
      System_Xml_XmlAttributeCollection__Remove(pSVar2,node,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static MGNDHCBAPEN<int, int> OIDIMAIELLD(XmlNode JHMENEKPIBO, int KMKCEANBDGG = 0, int IEJIPPALEFB = 0)  [RVA 0x3133F54]
// EIABCPKDEBD$$OIDIMAIELLD @ RVA 0x3133F54

MGNDHCBAPEN_int__int__o *
EIABCPKDEBD__OIDIMAIELLD
          (System_Xml_XmlNode_o *JHMENEKPIBO,int32_t KMKCEANBDGG,int32_t IEJIPPALEFB,
          MethodInfo *method)

{
  MGNDHCBAPEN_int__int__o *pMVar1;
  
  pMVar1 = GIAMPEGMNHE__GGPIBJJKMPK(JHMENEKPIBO,KMKCEANBDGG,IEJIPPALEFB,(MethodInfo *)0x0);
  return pMVar1;
}


// ===== public static Nullable<Vector2> FDCFJOINOPB(XmlAttribute LBJNDMNEJJB)  [RVA 0x3129FC4]
// EIABCPKDEBD$$FDCFJOINOPB @ RVA 0x3129FC4

System_Nullable_Vector2__o
EIABCPKDEBD__FDCFJOINOPB(System_Xml_XmlAttribute_o *LBJNDMNEJJB,MethodInfo *method)

{
  System_Nullable_Vector2__Fields SVar1;
  
  SVar1 = (System_Nullable_Vector2__Fields)GIAMPEGMNHE__JHLNBAHDGPI(LBJNDMNEJJB,(MethodInfo *)0x0);
  return (System_Nullable_Vector2__o)SVar1;
}


// ===== public static string JPKEHIBGOEM(XmlAttribute LBJNDMNEJJB, string HBFDLMOKDGA)  [RVA 0x3129FB4]
// EIABCPKDEBD$$JPKEHIBGOEM @ RVA 0x3129FB4

System_String_o *
EIABCPKDEBD__JPKEHIBGOEM
          (System_Xml_XmlAttribute_o *LBJNDMNEJJB,System_String_o *HBFDLMOKDGA,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = GIAMPEGMNHE__LFCNNAGLPHO(LBJNDMNEJJB,HBFDLMOKDGA,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public static uint FECKAJHFDJM(XmlAttribute LBJNDMNEJJB, uint HBFDLMOKDGA = 0)  [RVA 0x3133F5C]
// EIABCPKDEBD$$FECKAJHFDJM @ RVA 0x3133F5C

uint32_t EIABCPKDEBD__FECKAJHFDJM
                   (System_Xml_XmlAttribute_o *LBJNDMNEJJB,uint32_t HBFDLMOKDGA,MethodInfo *method)

{
  uint32_t uVar1;
  
                    /* try { // try from 03233f5c to 03333f5f has its CatchHandler @ 0323405c */
                    /* try { // try from 03233f60 to 03334003 has its CatchHandler @ 032331f0 */
  uVar1 = GIAMPEGMNHE__JIONICBNBJE(LBJNDMNEJJB,HBFDLMOKDGA,(MethodInfo *)0x0);
  return uVar1;
}


// ===== public static XmlAttribute NHPDFFAIJMF(XmlNode JHMENEKPIBO, string HNAHOFOCGJM)  [RVA 0x3133F64]
// EIABCPKDEBD$$NHPDFFAIJMF @ RVA 0x3133F64

System_Xml_XmlAttribute_o *
EIABCPKDEBD__NHPDFFAIJMF
          (System_Xml_XmlNode_o *JHMENEKPIBO,System_String_o *HNAHOFOCGJM,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *pSVar1;
  
                    /* catch() { ... } // from try @ 03233d6c with catch @ 03233f68 */
  if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) {
                    /* catch() { ... } // from try @ 03233ebc with catch @ 03233f94 */
                    /* catch() { ... } // from try @ 03233b34 with catch @ 03233f98 */
    return (System_Xml_XmlAttribute_o *)0x0;
  }
                    /* catch() { ... } // from try @ 03233c00 with catch @ 03233f7c */
  __this = (System_Xml_XmlAttributeCollection_o *)
           (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                     (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
                    /* catch() { ... } // from try @ 03233bbc with catch @ 03233f80 */
  if (__this != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* catch() { ... } // from try @ 03233ed4 with catch @ 03233f84 */
                    /* catch() { ... } // from try @ 03233c04 with catch @ 03233f88 */
                    /* catch() { ... } // from try @ 03233c18 with catch @ 03233f8c */
                    /* catch() { ... } // from try @ 03233ec8 with catch @ 03233f90 */
    pSVar1 = System_Xml_XmlAttributeCollection__get_ItemOf(__this,HNAHOFOCGJM,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03233eb0 with catch @ 03233f9c */
  FUN_01bab8c8();
}


// ===== public static XmlNode BDMJPODOPEM(XmlNode AHDGNOJPPIB)  [RVA 0x3133FA0]
// EIABCPKDEBD$$BDMJPODOPEM @ RVA 0x3133FA0

System_Xml_XmlNode_o *
EIABCPKDEBD__BDMJPODOPEM(System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  long lVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  
                    /* catch() { ... } // from try @ 03233ea4 with catch @ 03233fa0 */
                    /* catch() { ... } // from try @ 03233e98 with catch @ 03233fa4 */
                    /* catch() { ... } // from try @ 03233e8c with catch @ 03233fa8 */
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
                    /* catch() { ... } // from try @ 03233e80 with catch @ 03233fac */
                    /* catch() { ... } // from try @ 03233e74 with catch @ 03233fb0 */
                    /* catch() { ... } // from try @ 03233b58 with catch @ 03233fb4 */
                    /* catch() { ... } // from try @ 03233b18 with catch @ 03233fb8 */
                    /* catch() { ... } // from try @ 03233aec with catch @ 03233fbc */
    pSVar1 = (System_Xml_XmlNode_o *)
             (*(AHDGNOJPPIB->klass->vtable)._40_Clone.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._40_Clone.method);
                    /* catch() { ... } // from try @ 03233bc0 with catch @ 03233fc0 */
                    /* catch() { ... } // from try @ 03233e50 with catch @ 03233fc4 */
                    /* catch() { ... } // from try @ 03233e44 with catch @ 03233fc8 */
                    /* catch() { ... } // from try @ 03233b74 with catch @ 03233fcc */
                    /* catch() { ... } // from try @ 03233e5c with catch @ 03233fd0 */
    lVar2 = (*(AHDGNOJPPIB->klass->vtable)._12_get_ParentNode.methodPtr)
                      (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._12_get_ParentNode.method);
    if (lVar2 != 0) {
                    /* catch() { ... } // from try @ 03233950 with catch @ 03233fdc */
      auVar4 = (*(AHDGNOJPPIB->klass->vtable)._12_get_ParentNode.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._12_get_ParentNode.method);
      method = auVar4._8_8_;
      plVar3 = auVar4._0_8_;
      if (plVar3 == (long *)0x0) goto LAB_03234010;
      (**(code **)(*plVar3 + 0x2c8))(plVar3,AHDGNOJPPIB,*(undefined8 *)(*plVar3 + 0x2d0));
    }
                    /* try { // try from 03234004 to 03334007 has its CatchHandler @ 03234030 */
                    /* try { // try from 03234008 to 0333403f has its CatchHandler @ 032331f0 */
    return pSVar1;
  }
LAB_03234010:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public static XmlNode KPODFFHOHGK(XmlNode JHMENEKPIBO, string BCPAFBNLBDE)  [RVA 0x3134014]
// EIABCPKDEBD$$KPODFFHOHGK @ RVA 0x3134014

System_Xml_XmlNode_o *
EIABCPKDEBD__KPODFFHOHGK
          (System_Xml_XmlNode_o *JHMENEKPIBO,System_String_o *BCPAFBNLBDE,MethodInfo *method)

{
  long *plVar1;
  System_Xml_XmlNode_o *pSVar2;
  
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
                    /* catch() { ... } // from try @ 03234004 with catch @ 03234030 */
    plVar1 = (long *)(*(JHMENEKPIBO->klass->vtable)._17_get_OwnerDocument.methodPtr)
                               (JHMENEKPIBO,
                                (JHMENEKPIBO->klass->vtable)._17_get_OwnerDocument.method);
    if (plVar1 != (long *)0x0) {
                    /* try { // try from 03234040 to 03334047 has its CatchHandler @ 0323405c */
                    /* try { // try from 03234048 to 03334053 has its CatchHandler @ 032331f0 */
                    /* try { // try from 03234054 to 0333405b has its CatchHandler @ 0323405c */
      pSVar2 = (System_Xml_XmlNode_o *)
               (**(code **)(*plVar1 + 0x678))
                         (plVar1,1,BCPAFBNLBDE,0,*(undefined8 *)(*plVar1 + 0x680));
                    /* catch() { ... } // from try @ 03233f5c with catch @ 0323405c
                       catch() { ... } // from try @ 03234040 with catch @ 0323405c
                       catch() { ... } // from try @ 03234054 with catch @ 0323405c */
      (*(JHMENEKPIBO->klass->vtable)._27_AppendChild.methodPtr)
                (JHMENEKPIBO,pSVar2,(JHMENEKPIBO->klass->vtable)._27_AppendChild.method);
      return pSVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static XmlElement GAODJPOHKON(XmlNode JHMENEKPIBO, XmlNode PFIAGMFJKKJ, string AFKICLAFDKC)  [RVA 0x3134088]
// EIABCPKDEBD$$GAODJPOHKON @ RVA 0x3134088

System_Xml_XmlElement_o *
EIABCPKDEBD__GAODJPOHKON
          (System_Xml_XmlNode_o *JHMENEKPIBO,System_Xml_XmlNode_o *PFIAGMFJKKJ,
          System_String_o *AFKICLAFDKC,MethodInfo *method)

{
  byte bVar1;
  System_Xml_XmlDocument_o *__this;
  System_Xml_XmlElement_o *pSVar2;
  System_Xml_XmlNode_c *pSVar3;
  
  if ((DAT_045666ee & 1) == 0) {
    FUN_01bab630(&System_Xml_XmlDocument_TypeInfo);
    DAT_045666ee = 1;
  }
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = JHMENEKPIBO->klass;
    bVar1 = (System_Xml_XmlDocument_TypeInfo->_2).naturalAligment;
    if (((pSVar3->_2).naturalAligment < bVar1) ||
       (__this = (System_Xml_XmlDocument_o *)JHMENEKPIBO,
       (pSVar3->_2).typeHierarchy[(ulong)bVar1 - 1] !=
       (Il2CppClass *)System_Xml_XmlDocument_TypeInfo)) {
      __this = (System_Xml_XmlDocument_o *)
               (*(pSVar3->vtable)._17_get_OwnerDocument.methodPtr)
                         (JHMENEKPIBO,(pSVar3->vtable)._17_get_OwnerDocument.method);
    }
    if (__this != (System_Xml_XmlDocument_o *)0x0) {
      pSVar2 = System_Xml_XmlDocument__CreateElement(__this,AFKICLAFDKC,(MethodInfo *)0x0);
      (*(JHMENEKPIBO->klass->vtable)._24_InsertAfter.methodPtr)
                (JHMENEKPIBO,pSVar2,PFIAGMFJKKJ,(JHMENEKPIBO->klass->vtable)._24_InsertAfter.method)
      ;
      return pSVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static XmlAttribute OJIPGJBNOKD(XmlNode JHMENEKPIBO)  [RVA 0x3134158]
// EIABCPKDEBD$$OJIPGJBNOKD @ RVA 0x3134158

System_Xml_XmlAttribute_o *
EIABCPKDEBD__OJIPGJBNOKD(System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  int iVar1;
  long *plVar2;
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *pSVar3;
  
  if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) {
    return (System_Xml_XmlAttribute_o *)0x0;
  }
  plVar2 = (long *)(*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                             (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
  if (plVar2 != (long *)0x0) {
    iVar1 = (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
    if (iVar1 < 1) {
      return (System_Xml_XmlAttribute_o *)0x0;
    }
    __this = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    plVar2 = (long *)(*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                               (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if ((plVar2 != (long *)0x0) &&
       (iVar1 = (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0)),
       __this != (System_Xml_XmlAttributeCollection_o *)0x0)) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf(__this,iVar1 + -1,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static int EHJNCGCICMP(XmlAttribute LBJNDMNEJJB, int HBFDLMOKDGA = 0)  [RVA 0x312A544]
// EIABCPKDEBD$$EHJNCGCICMP @ RVA 0x312A544

int32_t EIABCPKDEBD__EHJNCGCICMP
                  (System_Xml_XmlAttribute_o *LBJNDMNEJJB,int32_t HBFDLMOKDGA,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = GIAMPEGMNHE__NANCFCIGNEE(LBJNDMNEJJB,HBFDLMOKDGA,(MethodInfo *)0x0);
  return iVar1;
}


// ===== public static XmlNode MHJPHEMBOLK(XmlNode JHMENEKPIBO, string KGLJICLJHEL, string BMEDCFOKBDH)  [RVA 0x31341FC]
// EIABCPKDEBD$$MHJPHEMBOLK @ RVA 0x31341FC

/* WARNING: Removing unreachable block (ram,0x0323448c) */

System_Xml_XmlNode_o *
EIABCPKDEBD__MHJPHEMBOLK
          (System_Xml_XmlNode_o *JHMENEKPIBO,System_String_o *KGLJICLJHEL,
          System_String_o *BMEDCFOKBDH,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *pSVar5;
  System_String_o *__this;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *pSVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  
  if ((DAT_045666ef & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_045666ef = 1;
  }
  if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) {
    pSVar5 = (System_Xml_XmlNode_o *)0x0;
  }
  else {
    plVar3 = (long *)(*(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.method);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      do {
        lVar7 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_032342e4;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_032342e4:
        uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar8 & 1) == 0) {
          pSVar5 = (System_Xml_XmlNode_o *)0x0;
          goto LAB_032343e0;
        }
        lVar7 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_03234344;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_03234344:
        pSVar5 = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
        if (pSVar5 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((pSVar5->klass->_2).naturalAligment < bVar1) ||
           ((pSVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(pSVar5);
        }
        __this = (System_String_o *)
                 (*(pSVar5->klass->vtable)._8_unknown.methodPtr)
                           (pSVar5,(pSVar5->klass->vtable)._8_unknown.method);
        if (__this == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar2 = System_String__Equals(__this,KGLJICLJHEL,(MethodInfo *)0x0);
      } while (!bVar2);
      __this_00 = (System_Xml_XmlAttributeCollection_o *)
                  (*(pSVar5->klass->vtable)._16_get_Attributes.methodPtr)
                            (pSVar5,(pSVar5->klass->vtable)._16_get_Attributes.method);
      if (__this_00 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (__this_00,BMEDCFOKBDH,(MethodInfo *)0x0);
    } while (pSVar6 == (System_Xml_XmlAttribute_o *)0x0);
LAB_032343e0:
    plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
    if (plVar3 != (long *)0x0) {
      lVar7 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_03234448;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_03234448:
      (*(code *)*puVar4)(plVar3,puVar4[1]);
    }
  }
  return pSVar5;
}


// ===== public static bool OBECCOPBADO(XmlAttribute LBJNDMNEJJB)  [RVA 0x313456C]
// EIABCPKDEBD$$OBECCOPBADO @ RVA 0x313456C

bool EIABCPKDEBD__OBECCOPBADO(System_Xml_XmlAttribute_o *LBJNDMNEJJB,MethodInfo *method)

{
  bool bVar1;
  System_String_o *__this;
  
  if ((DAT_045666f0 & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    DAT_045666f0 = 1;
  }
  if (LBJNDMNEJJB != (System_Xml_XmlAttribute_o *)0x0) {
    __this = (System_String_o *)
             (*(LBJNDMNEJJB->klass->vtable)._9_get_Value.methodPtr)
                       (LBJNDMNEJJB,(LBJNDMNEJJB->klass->vtable)._9_get_Value.method);
    if (__this != (System_String_o *)0x0) {
      bVar1 = System_String__Equals(__this,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
      return bVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return true;
}


// ===== public static XmlComment NEMLLEDDIJC(XmlNode JHMENEKPIBO, string JLNPKGGFFDD)  [RVA 0x31345E8]
// EIABCPKDEBD$$NEMLLEDDIJC @ RVA 0x31345E8

System_Xml_XmlComment_o *
EIABCPKDEBD__NEMLLEDDIJC
          (System_Xml_XmlNode_o *JHMENEKPIBO,System_String_o *JLNPKGGFFDD,MethodInfo *method)

{
  byte bVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlComment_o *pSVar3;
  System_Xml_XmlNode_c *pSVar4;
  
  if ((DAT_045666f1 & 1) == 0) {
    FUN_01bab630(&System_Xml_XmlDocument_TypeInfo);
    DAT_045666f1 = 1;
  }
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    pSVar4 = JHMENEKPIBO->klass;
    bVar1 = (System_Xml_XmlDocument_TypeInfo->_2).naturalAligment;
    if (((pSVar4->_2).naturalAligment < bVar1) ||
       (pSVar2 = JHMENEKPIBO,
       (pSVar4->_2).typeHierarchy[(ulong)bVar1 - 1] !=
       (Il2CppClass *)System_Xml_XmlDocument_TypeInfo)) {
      pSVar2 = (System_Xml_XmlNode_o *)
               (*(pSVar4->vtable)._17_get_OwnerDocument.methodPtr)
                         (JHMENEKPIBO,(pSVar4->vtable)._17_get_OwnerDocument.method);
    }
    if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
      pSVar3 = (System_Xml_XmlComment_o *)
               (*(code *)pSVar2->klass[1]._1.element_class)
                         (pSVar2,JLNPKGGFFDD,pSVar2->klass[1]._1.castClass);
      (*(JHMENEKPIBO->klass->vtable)._26_PrependChild.methodPtr)
                (JHMENEKPIBO,pSVar3,(JHMENEKPIBO->klass->vtable)._26_PrependChild.method);
      return pSVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static float GICIEKCGOHA(XmlAttribute LBJNDMNEJJB, float HBFDLMOKDGA = 0)  [RVA 0x3129FBC]
// EIABCPKDEBD$$GICIEKCGOHA @ RVA 0x3129FBC

float EIABCPKDEBD__GICIEKCGOHA
                (System_Xml_XmlAttribute_o *LBJNDMNEJJB,float HBFDLMOKDGA,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = GIAMPEGMNHE__FOKFAIPDIMB(LBJNDMNEJJB,HBFDLMOKDGA,(MethodInfo *)0x0);
  return fVar1;
}


// ===== public static XmlComment PCHFKJHILDE(XmlNode JHMENEKPIBO, XmlNode PFIAGMFJKKJ, string JLNPKGGFFDD)  [RVA 0x31346B0]
// EIABCPKDEBD$$PCHFKJHILDE @ RVA 0x31346B0

System_Xml_XmlComment_o *
EIABCPKDEBD__PCHFKJHILDE
          (System_Xml_XmlNode_o *JHMENEKPIBO,System_Xml_XmlNode_o *PFIAGMFJKKJ,
          System_String_o *JLNPKGGFFDD,MethodInfo *method)

{
  byte bVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlComment_o *pSVar3;
  System_Xml_XmlNode_c *pSVar4;
  
  if ((DAT_045666f2 & 1) == 0) {
    FUN_01bab630(&System_Xml_XmlDocument_TypeInfo);
    DAT_045666f2 = 1;
  }
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    pSVar4 = JHMENEKPIBO->klass;
    bVar1 = (System_Xml_XmlDocument_TypeInfo->_2).naturalAligment;
    if (((pSVar4->_2).naturalAligment < bVar1) ||
       (pSVar2 = JHMENEKPIBO,
       (pSVar4->_2).typeHierarchy[(ulong)bVar1 - 1] !=
       (Il2CppClass *)System_Xml_XmlDocument_TypeInfo)) {
      pSVar2 = (System_Xml_XmlNode_o *)
               (*(pSVar4->vtable)._17_get_OwnerDocument.methodPtr)
                         (JHMENEKPIBO,(pSVar4->vtable)._17_get_OwnerDocument.method);
    }
    if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
      pSVar3 = (System_Xml_XmlComment_o *)
               (*(code *)pSVar2->klass[1]._1.element_class)
                         (pSVar2,JLNPKGGFFDD,pSVar2->klass[1]._1.castClass);
      (*(JHMENEKPIBO->klass->vtable)._23_InsertBefore.methodPtr)
                (JHMENEKPIBO,pSVar3,PFIAGMFJKKJ,(JHMENEKPIBO->klass->vtable)._23_InsertBefore.method
                );
      return pSVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static XmlAttribute KBMBOMFNMNH(XmlNode JHMENEKPIBO, string BMEDCFOKBDH, string MCAGJECFCOH)  [RVA 0x3134788]
// EIABCPKDEBD$$KBMBOMFNMNH @ RVA 0x3134788

/* WARNING: Removing unreachable block (ram,0x03234a14) */

System_Xml_XmlAttribute_o *
EIABCPKDEBD__KBMBOMFNMNH
          (System_Xml_XmlNode_o *JHMENEKPIBO,System_String_o *BMEDCFOKBDH,
          System_String_o *MCAGJECFCOH,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlAttribute_o *pSVar5;
  System_String_o *pSVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  
  if ((DAT_045666f3 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlAttribute_TypeInfo);
    DAT_045666f3 = 1;
  }
  if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) {
    pSVar5 = (System_Xml_XmlAttribute_o *)0x0;
  }
  else {
    plVar3 = (long *)(*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                               (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    plVar3 = (long *)(**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      do {
        lVar7 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_03234870;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_03234870:
        uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar8 & 1) == 0) {
          pSVar5 = (System_Xml_XmlAttribute_o *)0x0;
          goto LAB_03234968;
        }
        lVar7 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_032348d0;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_032348d0:
        pSVar5 = (System_Xml_XmlAttribute_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
        if (pSVar5 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlAttribute_TypeInfo->_2).naturalAligment;
        if (((pSVar5->klass->_2).naturalAligment < bVar1) ||
           ((pSVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlAttribute_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(pSVar5);
        }
        pSVar6 = (System_String_o *)
                 (*(pSVar5->klass->vtable)._8_get_Name.methodPtr)
                           (pSVar5,(pSVar5->klass->vtable)._8_get_Name.method);
        if (pSVar6 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar2 = System_String__Equals(pSVar6,BMEDCFOKBDH,(MethodInfo *)0x0);
      } while (!bVar2);
      pSVar6 = (System_String_o *)
               (*(pSVar5->klass->vtable)._9_get_Value.methodPtr)
                         (pSVar5,(pSVar5->klass->vtable)._9_get_Value.method);
      if (pSVar6 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = System_String__Equals(pSVar6,MCAGJECFCOH,(MethodInfo *)0x0);
    } while (!bVar2);
LAB_03234968:
    plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
    if (plVar3 != (long *)0x0) {
      lVar7 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_032349d0;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_032349d0:
      (*(code *)*puVar4)(plVar3,puVar4[1]);
    }
  }
  return pSVar5;
}


// ===== public static XmlAttribute DGJFLNGMBKG(XmlNode JHMENEKPIBO, string BMEDCFOKBDH)  [RVA 0x3134AF4]
// EIABCPKDEBD$$DGJFLNGMBKG @ RVA 0x3134AF4

System_Xml_XmlAttribute_o *
EIABCPKDEBD__DGJFLNGMBKG
          (System_Xml_XmlNode_o *JHMENEKPIBO,System_String_o *BMEDCFOKBDH,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *pSVar1;
  MethodInfo *method_00;
  
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    __this = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (__this != (System_Xml_XmlAttributeCollection_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
      pSVar1 = System_Xml_XmlAttributeCollection__get_ItemOf(__this,BMEDCFOKBDH,(MethodInfo *)0x0);
      if (pSVar1 != (System_Xml_XmlAttribute_o *)0x0) {
        return pSVar1;
      }
      pSVar1 = EIABCPKDEBD__HBGAGFJBGKD(JHMENEKPIBO,BMEDCFOKBDH,method_00);
      return pSVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static XmlElement KAHNPKFLHFN(XmlNode JHMENEKPIBO, XmlNode PFIAGMFJKKJ, string AFKICLAFDKC)  [RVA 0x3134BC0]
// EIABCPKDEBD$$KAHNPKFLHFN @ RVA 0x3134BC0

System_Xml_XmlElement_o *
EIABCPKDEBD__KAHNPKFLHFN
          (System_Xml_XmlNode_o *JHMENEKPIBO,System_Xml_XmlNode_o *PFIAGMFJKKJ,
          System_String_o *AFKICLAFDKC,MethodInfo *method)

{
  byte bVar1;
  System_Xml_XmlDocument_o *__this;
  System_Xml_XmlElement_o *pSVar2;
  System_Xml_XmlNode_c *pSVar3;
  
  if ((DAT_045666f4 & 1) == 0) {
    FUN_01bab630(&System_Xml_XmlDocument_TypeInfo);
    DAT_045666f4 = 1;
  }
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = JHMENEKPIBO->klass;
    bVar1 = (System_Xml_XmlDocument_TypeInfo->_2).naturalAligment;
    if (((pSVar3->_2).naturalAligment < bVar1) ||
       (__this = (System_Xml_XmlDocument_o *)JHMENEKPIBO,
       (pSVar3->_2).typeHierarchy[(ulong)bVar1 - 1] !=
       (Il2CppClass *)System_Xml_XmlDocument_TypeInfo)) {
      __this = (System_Xml_XmlDocument_o *)
               (*(pSVar3->vtable)._17_get_OwnerDocument.methodPtr)
                         (JHMENEKPIBO,(pSVar3->vtable)._17_get_OwnerDocument.method);
    }
    if (__this != (System_Xml_XmlDocument_o *)0x0) {
      pSVar2 = System_Xml_XmlDocument__CreateElement(__this,AFKICLAFDKC,(MethodInfo *)0x0);
                    /* try { // try from 03234c64 to 03334f57 has its CatchHandler @ 03234c64
                       catch() { ... } // from try @ 03234c64 with catch @ 03234c64
                       catch() { ... } // from try @ 03234f70 with catch @ 03234c64
                       catch() { ... } // from try @ 03235050 with catch @ 03234c64
                       catch() { ... } // from try @ 032350e0 with catch @ 03234c64
                       catch() { ... } // from try @ 0323511c with catch @ 03234c64
                       catch() { ... } // from try @ 03235138 with catch @ 03234c64
                       catch() { ... } // from try @ 03235178 with catch @ 03234c64 */
      (*(JHMENEKPIBO->klass->vtable)._23_InsertBefore.methodPtr)
                (JHMENEKPIBO,pSVar2,PFIAGMFJKKJ,(JHMENEKPIBO->klass->vtable)._23_InsertBefore.method
                );
      return pSVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static XmlNode KPODFFHOHGK(XmlDocument EKEMDOEAFHP, string BCPAFBNLBDE)  [RVA 0x3134C90]
// EIABCPKDEBD$$KPODFFHOHGK @ RVA 0x3134C90

System_Xml_XmlNode_o *
EIABCPKDEBD__KPODFFHOHGK
          (System_Xml_XmlDocument_o *EKEMDOEAFHP,System_String_o *BCPAFBNLBDE,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  
  if (EKEMDOEAFHP != (System_Xml_XmlDocument_o *)0x0) {
    pSVar1 = (System_Xml_XmlNode_o *)
             (*(EKEMDOEAFHP->klass->vtable)._84_CreateNode.methodPtr)
                       (EKEMDOEAFHP,1,BCPAFBNLBDE,0,
                        (EKEMDOEAFHP->klass->vtable)._84_CreateNode.method);
    (*(EKEMDOEAFHP->klass->vtable)._27_AppendChild.methodPtr)
              (EKEMDOEAFHP,pSVar1,(EKEMDOEAFHP->klass->vtable)._27_AppendChild.method);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static Vector2 IGIFMKEMHJJ(XmlNode JHMENEKPIBO, float KJBOKJNJBEK = 0, float IKNINMHPJEI = 0)  [RVA 0x3134CEC]
// EIABCPKDEBD$$IGIFMKEMHJJ @ RVA 0x3134CEC

UnityEngine_Vector2_o
EIABCPKDEBD__IGIFMKEMHJJ
          (System_Xml_XmlNode_o *JHMENEKPIBO,float KJBOKJNJBEK,float IKNINMHPJEI,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  
  UVar1 = (UnityEngine_Vector2_Fields)
          GIAMPEGMNHE__OKCALGFAMFA(JHMENEKPIBO,KJBOKJNJBEK,IKNINMHPJEI,(MethodInfo *)0x0);
  return (UnityEngine_Vector2_o)UVar1;
}


// ===== public static XmlComment FCEICCGCOHK(XmlNode JHMENEKPIBO, string JLNPKGGFFDD)  [RVA 0x3134CF4]
// EIABCPKDEBD$$FCEICCGCOHK @ RVA 0x3134CF4

System_Xml_XmlComment_o *
EIABCPKDEBD__FCEICCGCOHK
          (System_Xml_XmlNode_o *JHMENEKPIBO,System_String_o *JLNPKGGFFDD,MethodInfo *method)

{
  byte bVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlComment_o *pSVar3;
  System_Xml_XmlNode_c *pSVar4;
  
  if ((DAT_045666f5 & 1) == 0) {
    FUN_01bab630(&System_Xml_XmlDocument_TypeInfo);
    DAT_045666f5 = 1;
  }
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    pSVar4 = JHMENEKPIBO->klass;
    bVar1 = (System_Xml_XmlDocument_TypeInfo->_2).naturalAligment;
    if (((pSVar4->_2).naturalAligment < bVar1) ||
       (pSVar2 = JHMENEKPIBO,
       (pSVar4->_2).typeHierarchy[(ulong)bVar1 - 1] !=
       (Il2CppClass *)System_Xml_XmlDocument_TypeInfo)) {
      pSVar2 = (System_Xml_XmlNode_o *)
               (*(pSVar4->vtable)._17_get_OwnerDocument.methodPtr)
                         (JHMENEKPIBO,(pSVar4->vtable)._17_get_OwnerDocument.method);
    }
    if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
      pSVar3 = (System_Xml_XmlComment_o *)
               (*(code *)pSVar2->klass[1]._1.element_class)
                         (pSVar2,JLNPKGGFFDD,pSVar2->klass[1]._1.castClass);
      (*(JHMENEKPIBO->klass->vtable)._27_AppendChild.methodPtr)
                (JHMENEKPIBO,pSVar3,(JHMENEKPIBO->klass->vtable)._27_AppendChild.method);
      return pSVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static XmlAttribute IBHCCPKMJKI(XmlNode AHDGNOJPPIB, string BMEDCFOKBDH)  [RVA 0x3134DBC]
// EIABCPKDEBD$$IBHCCPKMJKI @ RVA 0x3134DBC

System_Xml_XmlAttribute_o *
EIABCPKDEBD__IBHCCPKMJKI
          (System_Xml_XmlNode_o *AHDGNOJPPIB,System_String_o *BMEDCFOKBDH,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *pSVar1;
  
  if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
    return (System_Xml_XmlAttribute_o *)0x0;
  }
  __this = (System_Xml_XmlAttributeCollection_o *)
           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                     (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
  if (__this != (System_Xml_XmlAttributeCollection_o *)0x0) {
    pSVar1 = System_Xml_XmlAttributeCollection__get_ItemOf(__this,BMEDCFOKBDH,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static long HNIGPBMJJOL(XmlAttribute LBJNDMNEJJB, long HBFDLMOKDGA = 0)  [RVA 0x3134DF8]
// EIABCPKDEBD$$HNIGPBMJJOL @ RVA 0x3134DF8

int64_t EIABCPKDEBD__HNIGPBMJJOL
                  (System_Xml_XmlAttribute_o *LBJNDMNEJJB,int64_t HBFDLMOKDGA,MethodInfo *method)

{
  int64_t iVar1;
  
  iVar1 = GIAMPEGMNHE__KCCCDOBCCNN(LBJNDMNEJJB,HBFDLMOKDGA,(MethodInfo *)0x0);
  return iVar1;
}


// ===== public static XmlAttribute IOBEKBNCOMI(XmlNode JHMENEKPIBO)  [RVA 0x3134E00]
// EIABCPKDEBD$$IOBEKBNCOMI @ RVA 0x3134E00

System_Xml_XmlAttribute_o *
EIABCPKDEBD__IOBEKBNCOMI(System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  int iVar1;
  long *plVar2;
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *pSVar3;
  
  if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) {
    return (System_Xml_XmlAttribute_o *)0x0;
  }
  plVar2 = (long *)(*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                             (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
  if (plVar2 != (long *)0x0) {
    iVar1 = (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
    if (iVar1 < 1) {
      return (System_Xml_XmlAttribute_o *)0x0;
    }
    __this = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (__this != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf(__this,0,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static Vector2 FDCFJOINOPB(XmlAttribute LBJNDMNEJJB, Vector2 HBFDLMOKDGA)  [RVA 0x3134E6C]
// EIABCPKDEBD$$FDCFJOINOPB @ RVA 0x3134E6C

UnityEngine_Vector2_o
EIABCPKDEBD__FDCFJOINOPB
          (System_Xml_XmlAttribute_o *LBJNDMNEJJB,UnityEngine_Vector2_o HBFDLMOKDGA,
          MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  MethodInfo_27FC88C *in_x2;
  float fVar2;
  System_Nullable_Vector2__o __this;
  System_Nullable_Vector2__Fields local_40;
  
  fVar2 = HBFDLMOKDGA.fields.y;
  if ((DAT_045666f6 & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<Vector2>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<Vector2>_get_Value__);
    DAT_045666f6 = 1;
  }
  local_40 = (System_Nullable_Vector2__Fields)
             GIAMPEGMNHE__JHLNBAHDGPI(LBJNDMNEJJB,(MethodInfo *)0x0);
  if ((local_40._0_8_ & 0xff) != 0) {
    __this.fields.value.fields.y = (float)Method_System_Nullable<Vector2>_get_Value__;
    __this.fields._0_8_ = &local_40;
    HBFDLMOKDGA = System_Nullable<Vector2>__get_Value(__this,in_x2);
    fVar2 = HBFDLMOKDGA.fields.y;
  }
  UVar1.y = fVar2;
  UVar1.x = HBFDLMOKDGA.fields.x;
  return (UnityEngine_Vector2_o)UVar1;
}


// ===== public static XmlComment NJPOMGCBPCD(XmlNode JHMENEKPIBO, XmlNode PFIAGMFJKKJ, string JLNPKGGFFDD)  [RVA 0x3134F08]
// EIABCPKDEBD$$NJPOMGCBPCD @ RVA 0x3134F08

System_Xml_XmlComment_o *
EIABCPKDEBD__NJPOMGCBPCD
          (System_Xml_XmlNode_o *JHMENEKPIBO,System_Xml_XmlNode_o *PFIAGMFJKKJ,
          System_String_o *JLNPKGGFFDD,MethodInfo *method)

{
  byte bVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlComment_o *pSVar3;
  System_Xml_XmlNode_c *pSVar4;
  
  if ((DAT_045666f7 & 1) == 0) {
    FUN_01bab630(&System_Xml_XmlDocument_TypeInfo);
    DAT_045666f7 = 1;
  }
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    pSVar4 = JHMENEKPIBO->klass;
                    /* try { // try from 03234f58 to 03334f5f has its CatchHandler @ 0323511c */
    bVar1 = (System_Xml_XmlDocument_TypeInfo->_2).naturalAligment;
                    /* try { // try from 03234f68 to 03334f6f has its CatchHandler @ 032350c0 */
                    /* try { // try from 03234f70 to 03335037 has its CatchHandler @ 03234c64 */
    if (((pSVar4->_2).naturalAligment < bVar1) ||
       (pSVar2 = JHMENEKPIBO,
       (pSVar4->_2).typeHierarchy[(ulong)bVar1 - 1] !=
       (Il2CppClass *)System_Xml_XmlDocument_TypeInfo)) {
      pSVar2 = (System_Xml_XmlNode_o *)
               (*(pSVar4->vtable)._17_get_OwnerDocument.methodPtr)
                         (JHMENEKPIBO,(pSVar4->vtable)._17_get_OwnerDocument.method);
    }
    if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
      pSVar3 = (System_Xml_XmlComment_o *)
               (*(code *)pSVar2->klass[1]._1.element_class)
                         (pSVar2,JLNPKGGFFDD,pSVar2->klass[1]._1.castClass);
      (*(JHMENEKPIBO->klass->vtable)._24_InsertAfter.methodPtr)
                (JHMENEKPIBO,pSVar3,PFIAGMFJKKJ,(JHMENEKPIBO->klass->vtable)._24_InsertAfter.method)
      ;
      return pSVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static XmlAttribute CDDKCDCLNOP(XmlNode JHMENEKPIBO, string BMEDCFOKBDH)  [RVA 0x3134FE0]
// EIABCPKDEBD$$CDDKCDCLNOP @ RVA 0x3134FE0

System_Xml_XmlAttribute_o *
EIABCPKDEBD__CDDKCDCLNOP
          (System_Xml_XmlNode_o *JHMENEKPIBO,System_String_o *BMEDCFOKBDH,MethodInfo *method)

{
  System_Xml_XmlDocument_o *__this;
  System_Xml_XmlAttribute_o *node;
  System_Xml_XmlAttributeCollection_o *__this_00;
  
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    __this = (System_Xml_XmlDocument_o *)
             (*(JHMENEKPIBO->klass->vtable)._17_get_OwnerDocument.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._17_get_OwnerDocument.method);
    if (__this != (System_Xml_XmlDocument_o *)0x0) {
      node = System_Xml_XmlDocument__CreateAttribute(__this,BMEDCFOKBDH,(MethodInfo *)0x0);
      __this_00 = (System_Xml_XmlAttributeCollection_o *)
                  (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                            (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
      if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 03235038 to 0333503f has its CatchHandler @ 032350c4 */
        System_Xml_XmlAttributeCollection__Prepend(__this_00,node,(MethodInfo *)0x0);
                    /* try { // try from 03235048 to 0333504f has its CatchHandler @ 032350bc */
        return node;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static Nullable<DateTime> LDPPNAICGFJ(XmlAttribute LBJNDMNEJJB, string HBCGFJEOADH)  [RVA 0x3135050]
// EIABCPKDEBD$$LDPPNAICGFJ @ RVA 0x3135050

System_Nullable_DateTime__o
EIABCPKDEBD__LDPPNAICGFJ
          (System_Xml_XmlAttribute_o *LBJNDMNEJJB,System_String_o *HBCGFJEOADH,MethodInfo *method)

{
  System_Nullable_DateTime__Fields SVar1;
  
                    /* try { // try from 03235050 to 033350db has its CatchHandler @ 03234c64 */
  SVar1 = (System_Nullable_DateTime__Fields)
          GIAMPEGMNHE__BNNEHBHNIKG(LBJNDMNEJJB,HBCGFJEOADH,(MethodInfo *)0x0);
  return (System_Nullable_DateTime__o)SVar1;
}


// ===== public static XmlNode NGKIMHJCLBJ(XmlNode AHDGNOJPPIB)  [RVA 0x3135058]
// EIABCPKDEBD$$NGKIMHJCLBJ @ RVA 0x3135058

System_Xml_XmlNode_o *
EIABCPKDEBD__NGKIMHJCLBJ(System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  long lVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    lVar1 = (*(AHDGNOJPPIB->klass->vtable)._12_get_ParentNode.methodPtr)
                      (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._12_get_ParentNode.method);
    if (lVar1 != 0) {
      auVar3 = (*(AHDGNOJPPIB->klass->vtable)._12_get_ParentNode.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._12_get_ParentNode.method);
      method = auVar3._8_8_;
      plVar2 = auVar3._0_8_;
      if (plVar2 == (long *)0x0) goto LAB_032350a8;
      (**(code **)(*plVar2 + 0x2c8))(plVar2,AHDGNOJPPIB,*(undefined8 *)(*plVar2 + 0x2d0));
    }
    return AHDGNOJPPIB;
  }
LAB_032350a8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public static void LKPNNANEJKF(XmlNode JHMENEKPIBO, string PNOCDIDLLLM)  [RVA 0x31350AC]
// EIABCPKDEBD$$LKPNNANEJKF @ RVA 0x31350AC

void EIABCPKDEBD__LKPNNANEJKF
               (System_Xml_XmlNode_o *JHMENEKPIBO,System_String_o *PNOCDIDLLLM,MethodInfo *method)

{
  long lVar1;
  
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03235048 with catch @ 032350bc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03234f68 with catch @ 032350c0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03235038 with catch @ 032350c4
                        */
    lVar1 = (*(JHMENEKPIBO->klass->vtable)._51_get_Item.methodPtr)
                      (JHMENEKPIBO,PNOCDIDLLLM,(JHMENEKPIBO->klass->vtable)._51_get_Item.method);
    if (lVar1 != 0) {
                    /* try { // try from 032350dc to 033350df has its CatchHandler @ 03235100 */
                    /* try { // try from 032350e0 to 03335107 has its CatchHandler @ 03234c64 */
                    /* WARNING: Could not recover jumptable at 0x032350e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(JHMENEKPIBO->klass->vtable)._25_RemoveChild.methodPtr)
                (JHMENEKPIBO,lVar1,(JHMENEKPIBO->klass->vtable)._25_RemoveChild.method);
      return;
    }
  }
  return;
}


// ===== public static XmlElement BHPIHHJHELJ(XmlNode JHMENEKPIBO, string AFKICLAFDKC)  [RVA 0x31350F0]
// EIABCPKDEBD$$BHPIHHJHELJ @ RVA 0x31350F0

System_Xml_XmlElement_o *
EIABCPKDEBD__BHPIHHJHELJ
          (System_Xml_XmlNode_o *JHMENEKPIBO,System_String_o *AFKICLAFDKC,MethodInfo *method)

{
  byte bVar1;
  System_Xml_XmlDocument_o *__this;
  System_Xml_XmlElement_o *pSVar2;
  System_Xml_XmlNode_c *pSVar3;
  
                    /* catch() { ... } // from try @ 032350dc with catch @ 03235100 */
                    /* try { // try from 03235108 to 0333511b has its CatchHandler @ 0323518c */
  if ((DAT_045666f8 & 1) == 0) {
    FUN_01bab630(&System_Xml_XmlDocument_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03234f58 with catch @ 0323511c
                       try { // try from 0323511c to 03335133 has its CatchHandler @ 03234c64 */
    DAT_045666f8 = 1;
  }
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = JHMENEKPIBO->klass;
                    /* try { // try from 03235134 to 03335137 has its CatchHandler @ 03235160 */
                    /* try { // try from 03235138 to 0333516f has its CatchHandler @ 03234c64 */
    bVar1 = (System_Xml_XmlDocument_TypeInfo->_2).naturalAligment;
    if (((pSVar3->_2).naturalAligment < bVar1) ||
       (__this = (System_Xml_XmlDocument_o *)JHMENEKPIBO,
       (pSVar3->_2).typeHierarchy[(ulong)bVar1 - 1] !=
       (Il2CppClass *)System_Xml_XmlDocument_TypeInfo)) {
                    /* catch() { ... } // from try @ 03235134 with catch @ 03235160 */
      __this = (System_Xml_XmlDocument_o *)
               (*(pSVar3->vtable)._17_get_OwnerDocument.methodPtr)
                         (JHMENEKPIBO,(pSVar3->vtable)._17_get_OwnerDocument.method);
    }
    if (__this != (System_Xml_XmlDocument_o *)0x0) {
                    /* try { // try from 03235170 to 03335177 has its CatchHandler @ 0323518c */
      pSVar2 = System_Xml_XmlDocument__CreateElement(__this,AFKICLAFDKC,(MethodInfo *)0x0);
                    /* try { // try from 03235178 to 03335183 has its CatchHandler @ 03234c64 */
                    /* try { // try from 03235184 to 0333518b has its CatchHandler @ 0323518c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03235108 with catch @ 0323518c
                       catch(type#2 @ 00000000) { ... } // from try @ 03235170 with catch @ 0323518c
                       catch(type#2 @ 00000000) { ... } // from try @ 03235184 with catch @ 0323518c
                        */
      (*(JHMENEKPIBO->klass->vtable)._27_AppendChild.methodPtr)
                (JHMENEKPIBO,pSVar2,(JHMENEKPIBO->klass->vtable)._27_AppendChild.method);
      return pSVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static XmlNode BICIJJCJNCG(XmlNode AHDGNOJPPIB, string BCPAFBNLBDE)  [RVA 0x31351B0]
// EIABCPKDEBD$$BICIJJCJNCG @ RVA 0x31351B0

System_Xml_XmlNode_o *
EIABCPKDEBD__BICIJJCJNCG
          (System_Xml_XmlNode_o *AHDGNOJPPIB,System_String_o *BCPAFBNLBDE,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032351c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pSVar1 = (System_Xml_XmlNode_o *)
             (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                       (AHDGNOJPPIB,BCPAFBNLBDE,(AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    return pSVar1;
  }
  return (System_Xml_XmlNode_o *)0x0;
}


// ===== public static bool FMBMNDIGLIG(XmlAttribute LBJNDMNEJJB, bool HBFDLMOKDGA = False)  [RVA 0x3129FDC]
// EIABCPKDEBD$$FMBMNDIGLIG @ RVA 0x3129FDC

bool EIABCPKDEBD__FMBMNDIGLIG
               (System_Xml_XmlAttribute_o *LBJNDMNEJJB,bool HBFDLMOKDGA,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = GIAMPEGMNHE__FAEBPLENEGK(LBJNDMNEJJB,HBFDLMOKDGA,(MethodInfo *)0x0);
  return bVar1;
}


// ===== public static MGNDHCBAPEN<float, float> AKEMHLAANAH(XmlNode JHMENEKPIBO, float KMKCEANBDGG = 0, float IEJIPPALEFB = 0)  [RVA 0x31351C8]
// EIABCPKDEBD$$AKEMHLAANAH @ RVA 0x31351C8

MGNDHCBAPEN_float__float__o *
EIABCPKDEBD__AKEMHLAANAH
          (System_Xml_XmlNode_o *JHMENEKPIBO,float KMKCEANBDGG,float IEJIPPALEFB,MethodInfo *method)

{
  MGNDHCBAPEN_float__float__o *pMVar1;
  
  pMVar1 = GIAMPEGMNHE__DOLFIEDIDHN(JHMENEKPIBO,KMKCEANBDGG,IEJIPPALEFB,(MethodInfo *)0x0);
  return pMVar1;
}


// ===== public static XmlNode DJGFHLMINNB(XmlNode JHMENEKPIBO, string BCPAFBNLBDE)  [RVA 0x31351D0]
// EIABCPKDEBD$$DJGFHLMINNB @ RVA 0x31351D0

System_Xml_XmlNode_o *
EIABCPKDEBD__DJGFHLMINNB
          (System_Xml_XmlNode_o *JHMENEKPIBO,System_String_o *BCPAFBNLBDE,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  MethodInfo *method_00;
  
  if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  method_00 = (JHMENEKPIBO->klass->vtable)._51_get_Item.method;
  pSVar1 = (System_Xml_XmlNode_o *)(*(JHMENEKPIBO->klass->vtable)._51_get_Item.methodPtr)();
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    return pSVar1;
  }
  pSVar1 = EIABCPKDEBD__KPODFFHOHGK(JHMENEKPIBO,BCPAFBNLBDE,method_00);
  return pSVar1;
}


// ===== public static XmlAttribute HBGAGFJBGKD(XmlNode JHMENEKPIBO, string BMEDCFOKBDH)  [RVA 0x3134B50]
// EIABCPKDEBD$$HBGAGFJBGKD @ RVA 0x3134B50

System_Xml_XmlAttribute_o *
EIABCPKDEBD__HBGAGFJBGKD
          (System_Xml_XmlNode_o *JHMENEKPIBO,System_String_o *BMEDCFOKBDH,MethodInfo *method)

{
  System_Xml_XmlDocument_o *__this;
  System_Xml_XmlAttribute_o *node;
  System_Xml_XmlAttributeCollection_o *__this_00;
  
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    __this = (System_Xml_XmlDocument_o *)
             (*(JHMENEKPIBO->klass->vtable)._17_get_OwnerDocument.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._17_get_OwnerDocument.method);
    if (__this != (System_Xml_XmlDocument_o *)0x0) {
      node = System_Xml_XmlDocument__CreateAttribute(__this,BMEDCFOKBDH,(MethodInfo *)0x0);
      __this_00 = (System_Xml_XmlAttributeCollection_o *)
                  (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                            (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
      if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        System_Xml_XmlAttributeCollection__Append(__this_00,node,(MethodInfo *)0x0);
        return node;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static XmlNode MHJPHEMBOLK(XmlNode JHMENEKPIBO, string KGLJICLJHEL, string BMEDCFOKBDH, string MCAGJECFCOH)  [RVA 0x313521C]
// EIABCPKDEBD$$MHJPHEMBOLK @ RVA 0x313521C

/* WARNING: Removing unreachable block (ram,0x032354a0) */

System_Xml_XmlNode_o *
EIABCPKDEBD__MHJPHEMBOLK
          (System_Xml_XmlNode_o *JHMENEKPIBO,System_String_o *KGLJICLJHEL,
          System_String_o *BMEDCFOKBDH,System_String_o *MCAGJECFCOH,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *JHMENEKPIBO_00;
  System_String_o *__this;
  System_Xml_XmlAttribute_o *pSVar5;
  MethodInfo *method_00;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  method_00 = (MethodInfo *)MCAGJECFCOH;
  if ((DAT_045666f9 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_045666f9 = 1;
  }
  if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) {
    JHMENEKPIBO_00 = (System_Xml_XmlNode_o *)0x0;
  }
  else {
    plVar3 = (long *)(*(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.method);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar6 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0323530c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_0323530c:
      uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if ((uVar7 & 1) == 0) {
        JHMENEKPIBO_00 = (System_Xml_XmlNode_o *)0x0;
        break;
      }
      lVar6 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_0323536c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_0323536c:
      JHMENEKPIBO_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
      if (JHMENEKPIBO_00 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if (((JHMENEKPIBO_00->klass->_2).naturalAligment < bVar1) ||
         ((JHMENEKPIBO_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(JHMENEKPIBO_00);
      }
      __this = (System_String_o *)
               (*(JHMENEKPIBO_00->klass->vtable)._8_unknown.methodPtr)
                         (JHMENEKPIBO_00,(JHMENEKPIBO_00->klass->vtable)._8_unknown.method);
      if (__this == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = System_String__Equals(__this,KGLJICLJHEL,(MethodInfo *)0x0);
    } while ((!bVar2) ||
            (pSVar5 = EIABCPKDEBD__KBMBOMFNMNH(JHMENEKPIBO_00,BMEDCFOKBDH,MCAGJECFCOH,method_00),
            pSVar5 == (System_Xml_XmlAttribute_o *)0x0));
    plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
    if (plVar3 != (long *)0x0) {
      lVar6 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(System_IDisposable_c **)(piVar8 + -2) == System_IDisposable_TypeInfo) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0323545c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_0323545c:
      (*(code *)*puVar4)(plVar3,puVar4[1]);
    }
  }
  return JHMENEKPIBO_00;
}


// ===== public static XmlElement BAICFPFGAOK(XmlNode JHMENEKPIBO, string AFKICLAFDKC)  [RVA 0x3135578]
// EIABCPKDEBD$$BAICFPFGAOK @ RVA 0x3135578

System_Xml_XmlElement_o *
EIABCPKDEBD__BAICFPFGAOK
          (System_Xml_XmlNode_o *JHMENEKPIBO,System_String_o *AFKICLAFDKC,MethodInfo *method)

{
  byte bVar1;
  System_Xml_XmlDocument_o *__this;
  System_Xml_XmlElement_o *pSVar2;
  System_Xml_XmlNode_c *pSVar3;
  
  if ((DAT_045666fa & 1) == 0) {
    FUN_01bab630(&System_Xml_XmlDocument_TypeInfo);
    DAT_045666fa = 1;
  }
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = JHMENEKPIBO->klass;
    bVar1 = (System_Xml_XmlDocument_TypeInfo->_2).naturalAligment;
    if (((pSVar3->_2).naturalAligment < bVar1) ||
       (__this = (System_Xml_XmlDocument_o *)JHMENEKPIBO,
       (pSVar3->_2).typeHierarchy[(ulong)bVar1 - 1] !=
       (Il2CppClass *)System_Xml_XmlDocument_TypeInfo)) {
      __this = (System_Xml_XmlDocument_o *)
               (*(pSVar3->vtable)._17_get_OwnerDocument.methodPtr)
                         (JHMENEKPIBO,(pSVar3->vtable)._17_get_OwnerDocument.method);
    }
    if (__this != (System_Xml_XmlDocument_o *)0x0) {
      pSVar2 = System_Xml_XmlDocument__CreateElement(__this,AFKICLAFDKC,(MethodInfo *)0x0);
      (*(JHMENEKPIBO->klass->vtable)._26_PrependChild.methodPtr)
                (JHMENEKPIBO,pSVar2,(JHMENEKPIBO->klass->vtable)._26_PrependChild.method);
      return pSVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static XmlNode DGPOFACHGMP(XmlNode JHMENEKPIBO, XmlNode JOHFLOEABJL)  [RVA 0x3135638]
// EIABCPKDEBD$$DGPOFACHGMP @ RVA 0x3135638

System_Xml_XmlNode_o *
EIABCPKDEBD__DGPOFACHGMP
          (System_Xml_XmlNode_o *JHMENEKPIBO,System_Xml_XmlNode_o *JOHFLOEABJL,MethodInfo *method)

{
  byte bVar1;
  System_Xml_XmlNode_o *pSVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  System_Xml_XmlNode_c *pSVar5;
  
  if ((DAT_045666fb & 1) == 0) {
    FUN_01bab630(&System_Xml_XmlDocument_TypeInfo);
    DAT_045666fb = 1;
  }
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlNode_o *)
             (*(JHMENEKPIBO->klass->vtable)._17_get_OwnerDocument.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._17_get_OwnerDocument.method);
    if (pSVar2 == (System_Xml_XmlNode_o *)0x0) {
      bVar1 = (System_Xml_XmlDocument_TypeInfo->_2).naturalAligment;
      if ((JHMENEKPIBO->klass->_2).naturalAligment < bVar1) {
        pSVar2 = (System_Xml_XmlNode_o *)0x0;
      }
      else {
        pSVar2 = JHMENEKPIBO;
        if ((JHMENEKPIBO->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlDocument_TypeInfo) {
          pSVar2 = (System_Xml_XmlNode_o *)0x0;
        }
      }
    }
    if ((JOHFLOEABJL != (System_Xml_XmlNode_o *)0x0) &&
       (uVar3 = (*(JOHFLOEABJL->klass->vtable)._40_Clone.methodPtr)
                          (JOHFLOEABJL,(JOHFLOEABJL->klass->vtable)._40_Clone.method),
       pSVar2 != (System_Xml_XmlNode_o *)0x0)) {
      pSVar5 = pSVar2->klass;
      uVar4._0_4_ = pSVar5[1]._2.instance_size;
      uVar4._4_4_ = pSVar5[1]._2.actualSize;
      pSVar2 = (System_Xml_XmlNode_o *)(*pSVar5[1]._2.genericContainerHandle)(pSVar2,uVar3,1,uVar4);
      (*(JHMENEKPIBO->klass->vtable)._27_AppendChild.methodPtr)
                (JHMENEKPIBO,pSVar2,(JHMENEKPIBO->klass->vtable)._27_AppendChild.method);
      return pSVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

