// NHBBOEHHEKG$$FDCMAMGONDB @ RVA 0x305390C

void NHBBOEHHEKG__FDCMAMGONDB
               (UnityAnimator_PNHHAMAIIAB_o *__return_storage_ptr__,NHBBOEHHEKG_o *__this,
               System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  UnityEngine_AnimationClip_o *pUVar8;
  System_NullReferenceException_o *__this_00;
  undefined8 uVar9;
  System_String_o *local_50;
  UnityEngine_Sprite_o *pUStack_48;
  UnityEngine_AnimationClip_o *local_40;
  undefined8 local_38;
  
  if ((DAT_04565e64 & 1) == 0) {
    FUN_01bab630(&Method_EIABCPKDEBD_CKHGJBKDIID<WrapMode>__);
    FUN_01bab630(&Method_UnityEngine_ResourcesAndBundles_Load<AnimationClip>__);
    FUN_01bab630(&StringLiteral_2985);
    FUN_01bab630(&StringLiteral_4963);
    FUN_01bab630(&StringLiteral_22364);
    FUN_01bab630(&StringLiteral_14989);
    FUN_01bab630(&StringLiteral_2984);
    DAT_04565e64 = 1;
  }
  pUStack_48 = (UnityEngine_Sprite_o *)0x0;
  local_50 = (System_String_o *)0x0;
  local_38 = 0;
  local_40 = (UnityEngine_AnimationClip_o *)0x0;
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_2985,(MethodInfo *)0x0);
      pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,(System_String_o *)0x0,(MethodInfo *)0x0);
      bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar5,(MethodInfo *)0x0);
      if (bVar1) {
        pSVar5 = System_String__Concat
                           (StringLiteral_4963,(__this->fields).ELNOBGPJBKH,(MethodInfo *)0x0);
      }
                    /* try { // try from 03153a10 to 03253a5b has its CatchHandler @ 03153a10
                       catch() { ... } // from try @ 03153a10 with catch @ 03153a10
                       catch() { ... } // from try @ 03153a88 with catch @ 03153a10
                       catch() { ... } // from try @ 03153abc with catch @ 03153a10
                       catch() { ... } // from try @ 03153b1c with catch @ 03153a10
                       catch() { ... } // from try @ 03153b28 with catch @ 03153a10 */
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_2984,(MethodInfo *)0x0);
        pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,(System_String_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 03153a5c to 03253a77 has its CatchHandler @ 03153a8c */
        pSVar7 = System_String__Format
                           (StringLiteral_22364,(Il2CppObject *)pSVar5,(Il2CppObject *)pSVar6,
                            (MethodInfo *)0x0);
        pUVar8 = (UnityEngine_AnimationClip_o *)
                 UnityEngine_ResourcesAndBundles__Load<object>
                           (pSVar7,Method_UnityEngine_ResourcesAndBundles_Load<AnimationClip>__);
        if (pUVar8 == (UnityEngine_AnimationClip_o *)0x0) {
          pSVar7 = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_22364);
                    /* try { // try from 03153b0c to 03253b1b has its CatchHandler @ 03153b20 */
          pSVar5 = System_String__Format
                             (pSVar7,(Il2CppObject *)pSVar5,(Il2CppObject *)pSVar6,(MethodInfo *)0x0
                             );
                    /* try { // try from 03153b1c to 03253b23 has its CatchHandler @ 03153a10 */
                    /* catch() { ... } // from try @ 03153aa4 with catch @ 03153b20
                       catch() { ... } // from try @ 03153b0c with catch @ 03153b20 */
                    /* try { // try from 03153b24 to 03253b27 has its CatchHandler @ 03153b30 */
          pSVar6 = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_4178);
                    /* try { // try from 03153b28 to 03253b33 has its CatchHandler @ 03153a10 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03153b24 with catch @ 03153b30
                        */
          pSVar5 = System_String__Concat(pSVar6,pSVar5,(MethodInfo *)0x0);
          thunk_FUN_01bb9178(&System_NullReferenceException_TypeInfo);
          __this_00 = (System_NullReferenceException_o *)thunk_FUN_01bda818();
          System_NullReferenceException___ctor(__this_00,pSVar5,(MethodInfo *)0x0);
          uVar9 = thunk_FUN_01bb9178(&Method_NHBBOEHHEKG_FDCMAMGONDB__);
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(__this_00,uVar9);
        }
                    /* try { // try from 03153a84 to 03253a87 has its CatchHandler @ 03153a88 */
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03153a84 with catch @ 03153a88
                       try { // try from 03153a88 to 03253aa3 has its CatchHandler @ 03153a10 */
        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03153a5c with catch @ 03153a8c
                        */
                    /* try { // try from 03153aa4 to 03253abb has its CatchHandler @ 03153b20 */
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_14989,(MethodInfo *)0x0);
          iVar2 = EIABCPKDEBD__CKHGJBKDIID<Int32Enum>
                            (pSVar4,0,Method_EIABCPKDEBD_CKHGJBKDIID<WrapMode>__);
          local_38 = CONCAT44(local_38._4_4_,iVar2);
                    /* try { // try from 03153abc to 03253b0b has its CatchHandler @ 03153a10 */
          local_40 = pUVar8;
          thunk_FUN_01c20e04(&local_40,pUVar8);
          local_50 = pSVar6;
          thunk_FUN_01c20e04(&local_50,pSVar6);
          (__return_storage_ptr__->fields).KCLMKBAMNPA = pUStack_48;
          (__return_storage_ptr__->fields).HHADPFIIKIG = local_50;
          *(undefined8 *)&(__return_storage_ptr__->fields).BGDPMAEHOIC = local_38;
          (__return_storage_ptr__->fields).ONPNAGNAPOL = local_40;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

