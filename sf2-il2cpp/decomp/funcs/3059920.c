// ACHLOMELAJE$$EFJFOCNIOIA @ RVA 0x3059920

/* WARNING: Removing unreachable block (ram,0x03159bb0) */
/* WARNING: Removing unreachable block (ram,0x03159bb4) */
/* WARNING: Removing unreachable block (ram,0x03159c80) */

void ACHLOMELAJE__EFJFOCNIOIA(ACHLOMELAJE_o *__this,MethodInfo *method)

{
  System_String_o *AFKICLAFDKC;
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Xml_XmlNode_o *pSVar3;
  System_Xml_XmlElement_o *JHMENEKPIBO;
  System_Collections_Generic_List_BDGPPPPKHEC__o *__this_00;
  System_Xml_XmlElement_o *JHMENEKPIBO_00;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_c *__this_01;
  System_Xml_XmlElement_o *JHMENEKPIBO_01;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
                    /* try { // try from 03159930 to 0325993b has its CatchHandler @ 031599e4 */
                    /* try { // try from 03159940 to 0325994b has its CatchHandler @ 031599e0 */
  if ((DAT_04565ea9 & 1) == 0) {
                    /* try { // try from 0315994c to 032599c7 has its CatchHandler @ 0315978c */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BDGPPPPKHEC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BDGPPPPKHEC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BDGPPPPKHEC>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BDGPPPPKHEC>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_3315);
                    /* try { // try from 031599c8 to 032599cb has its CatchHandler @ 031599e8 */
                    /* try { // try from 031599cc to 032599cf has its CatchHandler @ 0315978c */
    FUN_01bab630(&StringLiteral_8095);
                    /* try { // try from 031599d0 to 032599d3 has its CatchHandler @ 031599dc */
                    /* try { // try from 031599d4 to 032599ff has its CatchHandler @ 0315978c */
    FUN_01bab630(&StringLiteral_3437);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031599d0 with catch @ 031599dc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03159940 with catch @ 031599e0
                        */
    DAT_04565ea9 = 1;
  }
  AFKICLAFDKC = StringLiteral_3437;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03159930 with catch @ 031599e4
                        */
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031599c8 with catch @ 031599e8
                        */
  local_80.fields._current = (Il2CppObject *)0x0;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031598f8 with catch @ 031599ec
                        */
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0315989c with catch @ 031599f0
                        */
  local_a0.fields._current = (Il2CppObject *)0x0;
  pSVar3 = (__this->fields).super.HJKLIDCAEOE;
  if (pSVar3 != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 03159a00 to 03259a03 has its CatchHandler @ 03159a14 */
                    /* catch() { ... } // from try @ 03159a00 with catch @ 03159a14 */
    JHMENEKPIBO = (System_Xml_XmlElement_o *)
                  (*(pSVar3->klass->vtable)._51_get_Item.methodPtr)
                            (pSVar3,StringLiteral_3437,(pSVar3->klass->vtable)._51_get_Item.method);
    if (JHMENEKPIBO == (System_Xml_XmlElement_o *)0x0) {
      JHMENEKPIBO = EIABCPKDEBD__BHPIHHJHELJ
                              ((__this->fields).super.HJKLIDCAEOE,AFKICLAFDKC,(MethodInfo *)0x0);
    }
    __this_00 = (__this->fields).BCLNBJNEAAF;
    if (__this_00 != (System_Collections_Generic_List_BDGPPPPKHEC__o *)0x0) {
                    /* try { // try from 03159a4c to 03259a73 has its CatchHandler @ 03159a88 */
                    /* try { // try from 03159a74 to 03259a7f has its CatchHandler @ 0315978c */
                    /* try { // try from 03159a80 to 03259a87 has its CatchHandler @ 03159a88 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03159a4c with catch @ 03159a88
                       catch(type#2 @ 00000000) { ... } // from try @ 03159a80 with catch @ 03159a88
                        */
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_b8,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<BDGPPPPKHEC>_GetEnumerator__);
      local_80.fields._index = local_b8.fields._index;
      local_80.fields._version = local_b8.fields._version;
      local_80.fields._list = local_b8.fields._list;
      local_80.fields._current = local_b8.fields._current;
      while( true ) {
        bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_80,
                           Method_System_Collections_Generic_List_Enumerator<BDGPPPPKHEC>_MoveNext__
                          );
        pIVar1 = local_80.fields._current;
        if (!bVar2) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_80,
                     Method_System_Collections_Generic_List_Enumerator<BDGPPPPKHEC>_Dispose__);
          CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this,false,(MethodInfo *)0x0);
          return;
        }
        if ((System_String_o *)local_80.fields._current == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        JHMENEKPIBO_00 =
             (System_Xml_XmlElement_o *)
             EIABCPKDEBD__MHJPHEMBOLK
                       ((System_Xml_XmlNode_o *)JHMENEKPIBO,StringLiteral_3315,StringLiteral_9327,
                        (System_String_o *)
                        *(System_String_Fields *)((long)local_80.fields._current + 0x10),
                        (MethodInfo *)0x0);
        if (JHMENEKPIBO_00 == (System_Xml_XmlElement_o *)0x0) {
          JHMENEKPIBO_00 =
               EIABCPKDEBD__BHPIHHJHELJ
                         ((System_Xml_XmlNode_o *)JHMENEKPIBO,StringLiteral_3315,(MethodInfo *)0x0);
          pSVar4 = EIABCPKDEBD__HBGAGFJBGKD
                             ((System_Xml_XmlNode_o *)JHMENEKPIBO_00,StringLiteral_9327,
                              (MethodInfo *)0x0);
          if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                    (pSVar4,*(System_String_Fields *)((long)pIVar1 + 0x10),
                     (pSVar4->klass->vtable)._10_set_Value.method);
        }
        __this_01 = ((System_String_o *)((long)pIVar1 + 0x18))->klass;
        if (__this_01 == (System_String_c *)0x0) break;
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_b8,(System_Collections_Generic_List_object__o *)__this_01,
                   Method_System_Collections_Generic_List<string>_GetEnumerator__);
        local_a0.fields._index = local_b8.fields._index;
        local_a0.fields._version = local_b8.fields._version;
        local_a0.fields._list = local_b8.fields._list;
        local_a0.fields._current = local_b8.fields._current;
        while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_a0,
                                  Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__
                                 ), pIVar1 = local_a0.fields._current, bVar2) {
          pSVar3 = EIABCPKDEBD__MHJPHEMBOLK
                             ((System_Xml_XmlNode_o *)JHMENEKPIBO_00,StringLiteral_8095,
                              StringLiteral_9327,(System_String_o *)local_a0.fields._current,
                              (MethodInfo *)0x0);
          if (pSVar3 == (System_Xml_XmlNode_o *)0x0) {
            JHMENEKPIBO_01 =
                 EIABCPKDEBD__BHPIHHJHELJ
                           ((System_Xml_XmlNode_o *)JHMENEKPIBO_00,StringLiteral_8095,
                            (MethodInfo *)0x0);
            pSVar4 = EIABCPKDEBD__HBGAGFJBGKD
                               ((System_Xml_XmlNode_o *)JHMENEKPIBO_01,StringLiteral_9327,
                                (MethodInfo *)0x0);
            if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                      (pSVar4,pIVar1,(pSVar4->klass->vtable)._10_set_Value.method);
          }
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_a0,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

