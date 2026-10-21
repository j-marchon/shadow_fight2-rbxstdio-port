// ACHLOMELAJE$$LLCIDOLPOOC @ RVA 0x30623E0

void ACHLOMELAJE__LLCIDOLPOOC
               (ACHLOMELAJE_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  MEMHEPBAJJA_HIAEDCDJJDJ_o *pMVar4;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  MethodInfo *in_x3;
  
  if ((DAT_04565edb & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_set_Item__
                );
    FUN_01bab630(&MEMHEPBAJJA_HIAEDCDJJDJ_TypeInfo);
    FUN_01bab630(&StringLiteral_15862);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_14694);
    FUN_01bab630(&StringLiteral_1);
    DAT_04565edb = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_9327,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat(StringLiteral_15862,pSVar3,(MethodInfo *)0x0);
      pMVar4 = ACHLOMELAJE__HKIEGNBOFCD(__this,pSVar3,0,in_x3);
      if (pMVar4 == (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0) {
        pMVar4 = (MEMHEPBAJJA_HIAEDCDJJDJ_o *)thunk_FUN_01bda818(MEMHEPBAJJA_HIAEDCDJJDJ_TypeInfo);
        MEMHEPBAJJA_HIAEDCDJJDJ___ctor(pMVar4,AHDGNOJPPIB,(MethodInfo *)0x0);
        __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (__this->fields).NMJCKHHGODA;
        if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary<object,_object>__set_Item
                    (__this_00,(Il2CppObject *)pSVar3,(Il2CppObject *)pMVar4,
                     Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_set_Item__
                    );
          return;
        }
      }
      else {
        pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar1,StringLiteral_14694,(MethodInfo *)0x0);
          pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1,(MethodInfo *)0x0);
          MEMHEPBAJJA_HIAEDCDJJDJ__KFMNMGGDHFD(pMVar4,pSVar3,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

