// ACHLOMELAJE$$OAKLPHJJELF @ RVA 0x3061F60

void ACHLOMELAJE__OAKLPHJJELF(ACHLOMELAJE_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MEMHEPBAJJA__o *pSVar1;
  Il2CppObject *item;
  long *plVar2;
  System_Xml_XmlNode_o *pSVar3;
  System_Xml_XmlAttributeCollection_o *pSVar4;
  System_Xml_XmlAttribute_o *pSVar5;
  void *pvVar6;
  int index;
  Il2CppClass *pIVar7;
  
  if ((DAT_04565ed2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MEMHEPBAJJA>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEMHEPBAJJA>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEMHEPBAJJA>_get_Item__);
    FUN_01bab630(&StringLiteral_6703);
    FUN_01bab630(&StringLiteral_8331);
    FUN_01bab630(&StringLiteral_6193);
    FUN_01bab630(&StringLiteral_8333);
    DAT_04565ed2 = 1;
  }
  pSVar1 = (__this->fields).ECEOENIJAPJ;
  if (pSVar1 != (System_Collections_Generic_List_MEMHEPBAJJA__o *)0x0) {
    index = (pSVar1->fields)._size + -1;
    if (index < 0) {
LAB_03162074:
      pSVar3 = (__this->fields).super.HJKLIDCAEOE;
      if ((pSVar3 != (System_Xml_XmlNode_o *)0x0) &&
         (pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                   (*(pSVar3->klass->vtable)._16_get_Attributes.methodPtr)
                             (pSVar3,(pSVar3->klass->vtable)._16_get_Attributes.method),
         pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
        pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar4,StringLiteral_8331,(MethodInfo *)0x0);
        if (pSVar5 != (System_Xml_XmlAttribute_o *)0x0) {
          EIABCPKDEBD__GDAEOIJNJMO
                    ((__this->fields).super.HJKLIDCAEOE,StringLiteral_8331,(MethodInfo *)0x0);
        }
        pSVar3 = (__this->fields).super.HJKLIDCAEOE;
        if ((pSVar3 != (System_Xml_XmlNode_o *)0x0) &&
           (pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                     (*(pSVar3->klass->vtable)._16_get_Attributes.methodPtr)
                               (pSVar3,(pSVar3->klass->vtable)._16_get_Attributes.method),
           pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
          pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar4,StringLiteral_6703,(MethodInfo *)0x0);
          if (pSVar5 != (System_Xml_XmlAttribute_o *)0x0) {
            EIABCPKDEBD__GDAEOIJNJMO
                      ((__this->fields).super.HJKLIDCAEOE,StringLiteral_6703,(MethodInfo *)0x0);
          }
          pSVar3 = (__this->fields).super.HJKLIDCAEOE;
          if ((pSVar3 != (System_Xml_XmlNode_o *)0x0) &&
             (pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                       (*(pSVar3->klass->vtable)._16_get_Attributes.methodPtr)
                                 (pSVar3,(pSVar3->klass->vtable)._16_get_Attributes.method),
             pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
            pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar4,StringLiteral_6193,(MethodInfo *)0x0);
            if (pSVar5 != (System_Xml_XmlAttribute_o *)0x0) {
              EIABCPKDEBD__GDAEOIJNJMO
                        ((__this->fields).super.HJKLIDCAEOE,StringLiteral_6193,(MethodInfo *)0x0);
            }
            pSVar3 = (__this->fields).super.HJKLIDCAEOE;
            if ((pSVar3 != (System_Xml_XmlNode_o *)0x0) &&
               (pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                         (*(pSVar3->klass->vtable)._16_get_Attributes.methodPtr)
                                   (pSVar3,(pSVar3->klass->vtable)._16_get_Attributes.method),
               pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
              pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar4,StringLiteral_8333,(MethodInfo *)0x0);
              if (pSVar5 == (System_Xml_XmlAttribute_o *)0x0) {
                return;
              }
              EIABCPKDEBD__GDAEOIJNJMO
                        ((__this->fields).super.HJKLIDCAEOE,StringLiteral_8333,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    else {
      while (item = System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar1,index,
                               Method_System_Collections_Generic_List<MEMHEPBAJJA>_get_Item__),
            item != (Il2CppObject *)0x0) {
        if (item[1].klass == (Il2CppClass *)0x0) {
          pIVar7 = item[3].klass;
          if ((pIVar7 == (Il2CppClass *)0x0) ||
             (pvVar6 = (pIVar7->_1).image,
             plVar2 = (long *)(**(code **)((long)pvVar6 + 0x1f8))
                                        (pIVar7,*(undefined8 *)((long)pvVar6 + 0x200)),
             plVar2 == (long *)0x0)) break;
          (**(code **)(*plVar2 + 0x2c8))(plVar2,pIVar7,*(undefined8 *)(*plVar2 + 0x2d0));
          pSVar1 = (__this->fields).ECEOENIJAPJ;
          if (pSVar1 == (System_Collections_Generic_List_MEMHEPBAJJA__o *)0x0) break;
          System_Collections_Generic_List<object>__Remove
                    ((System_Collections_Generic_List_object__o *)pSVar1,item,
                     Method_System_Collections_Generic_List<MEMHEPBAJJA>_Remove__);
        }
        index = index + -1;
        if (index < 0) goto LAB_03162074;
        pSVar1 = (__this->fields).ECEOENIJAPJ;
        if (pSVar1 == (System_Collections_Generic_List_MEMHEPBAJJA__o *)0x0) break;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

