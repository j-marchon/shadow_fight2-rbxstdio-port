// AJOGJBFNELI$$IJIBBEFBCPJ @ RVA 0x30133F8

bool AJOGJBFNELI__IJIBBEFBCPJ
               (AJOGJBFNELI_o *__this,int64_t MMIOPIPLDJL,int64_t MPMJDINCJNH,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *pSVar5;
  System_String_o *b;
  System_Collections_Generic_List_object__o *__this_00;
  System_Char_array *separator;
  System_String_array *collection;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  int64_t local_40;
  int64_t iStack_38;
  
  local_40 = MPMJDINCJNH;
  iStack_38 = MMIOPIPLDJL;
  if ((DAT_04565bb4 & 1) == 0) {
    FUN_01bab630(&Method_AJOGJBFNELI_MLDEHFFGJDP<string>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_20388);
    FUN_01bab630(&StringLiteral_16713);
    FUN_01bab630(&StringLiteral_1154);
    DAT_04565bb4 = 1;
    MMIOPIPLDJL = (int64_t)extraout_x1;
  }
  AJOGJBFNELI__GIENGNEGHPJ(__this,(MethodInfo *)MMIOPIPLDJL);
  pSVar2 = (__this->fields).LDGGIOJMLLD;
  if ((pSVar2 == (System_Xml_XmlNode_o *)0x0) ||
     (pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                         (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method),
     pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0)) goto LAB_031136b8;
  pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                     (pSVar3,StringLiteral_20388,(MethodInfo *)0x0);
  pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,(System_String_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 031134ec to 032134ef has its CatchHandler @ 031135e8 */
  b = System_Int64__ToString((int64_t)&iStack_38,(MethodInfo *)0x0);
  bVar1 = System_String__op_Inequality(pSVar5,b,(MethodInfo *)0x0);
  if (!bVar1) {
    __this_00 = (System_Collections_Generic_List_object__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
    pSVar2 = (__this->fields).LDGGIOJMLLD;
                    /* try { // try from 0311352c to 0321353f has its CatchHandler @ 03113600 */
    if ((pSVar2 == (System_Xml_XmlNode_o *)0x0) ||
       (pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method),
       pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0)) goto LAB_031136b8;
    pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar3,StringLiteral_16713,(MethodInfo *)0x0);
    if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) {
      pSVar5 = System_Int64__ToString((int64_t)&local_40,(MethodInfo *)0x0);
      if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_031136b8;
    }
    else {
      pSVar2 = (__this->fields).LDGGIOJMLLD;
                    /* try { // try from 03113560 to 0321356b has its CatchHandler @ 031135f4 */
                    /* try { // try from 03113570 to 0321357b has its CatchHandler @ 031135f0 */
      if ((pSVar2 == (System_Xml_XmlNode_o *)0x0) ||
         (pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                   (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                             (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method),
         pSVar3 == (System_Xml_XmlAttributeCollection_o *)0x0)) {
LAB_031136b8:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 0311357c to 032135c7 has its CatchHandler @ 031133a8 */
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_16713,(MethodInfo *)0x0);
      pSVar5 = EIABCPKDEBD__JPKEHIBGOEM
                         (pSVar4,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
                    /* try { // try from 031135c8 to 032135cb has its CatchHandler @ 031135f8 */
                    /* try { // try from 031135cc to 032135d7 has its CatchHandler @ 031135fc */
                    /* try { // try from 031135d8 to 032135db has its CatchHandler @ 031135ec */
      if ((StringLiteral_1154 == (System_String_o *)0x0) ||
         ((separator = System_String__ToCharArray(StringLiteral_1154,(MethodInfo *)0x0),
          pSVar5 == (System_String_o *)0x0 ||
          (collection = System_String__Split(pSVar5,separator,1,(MethodInfo *)0x0),
          __this_00 == (System_Collections_Generic_List_object__o *)0x0)))) goto LAB_031136b8;
                    /* try { // try from 031135dc to 032135df has its CatchHandler @ 031135e4 */
                    /* try { // try from 031135e0 to 03213617 has its CatchHandler @ 031133a8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031135dc with catch @ 031135e4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031134ec with catch @ 031135e8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031135d8 with catch @ 031135ec
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03113570 with catch @ 031135f0
                        */
      System_Collections_Generic_List<object>__AddRange
                (__this_00,(System_Collections_Generic_IEnumerable_T__o *)collection,
                 Method_System_Collections_Generic_List<string>_AddRange__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03113560 with catch @ 031135f4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031135c8 with catch @ 031135f8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031135cc with catch @ 031135fc
                        */
      pSVar5 = System_Int64__ToString((int64_t)&local_40,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0311352c with catch @ 03113600
                        */
    }
                    /* try { // try from 03113618 to 0321361b has its CatchHandler @ 03113648 */
                    /* try { // try from 0311361c to 03213657 has its CatchHandler @ 031133a8 */
    bVar1 = System_Collections_Generic_List<object>__Remove
                      (__this_00,(Il2CppObject *)pSVar5,
                       Method_System_Collections_Generic_List<string>_Remove__);
    if (bVar1) {
      pSVar5 = System_String__Join(StringLiteral_1154,
                                   (System_Collections_Generic_IEnumerable_string__o *)__this_00,
                                   (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03113618 with catch @ 03113648 */
                    /* try { // try from 03113658 to 03213663 has its CatchHandler @ 03113678 */
      AJOGJBFNELI__MLDEHFFGJDP<object>
                (__this,StringLiteral_16713,(Il2CppObject *)pSVar5,
                 Method_AJOGJBFNELI_MLDEHFFGJDP<string>__);
                    /* try { // try from 03113664 to 0321366f has its CatchHandler @ 031133a8 */
      method_00 = extraout_x1_00;
      if ((__this_00->fields)._size == 0) {
                    /* try { // try from 03113670 to 03213677 has its CatchHandler @ 03113678 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03113658 with catch @ 03113678
                       catch(type#2 @ 00000000) { ... } // from try @ 03113670 with catch @ 03113678
                        */
        AJOGJBFNELI__MLDEHFFGJDP<object>
                  (__this,StringLiteral_20388,(Il2CppObject *)string_TypeInfo->static_fields->Empty,
                   Method_AJOGJBFNELI_MLDEHFFGJDP<string>__);
        method_00 = extraout_x1_01;
      }
      AJOGJBFNELI__CHLJMDILNBI(__this,method_00);
      return true;
    }
  }
  return false;
}

